# Sets up the local toolchain for the Kaido Racer decomp on Windows.
#   powershell -ExecutionPolicy Bypass -File scripts\setup_tools.ps1 -Iso "C:\path\Kaido Racer (Europe) (En,Fr,De,Es,It).iso"
#
# Installs into tools\ (git-ignored): Ghidra 12.2, Temurin JDK 25, ghidra-emotionengine-reloaded,
# GhidraMCP (built from source for 12.2), the MCP bridge, and a PyGhidra venv. Extracts the
# game executable from your own ISO into iso_extract\.
#
# Ghidra's launcher scripts and Gradle break on paths that contain spaces. If your checkout path
# has spaces, make a junction first and run everything from it:
#   New-Item -ItemType Junction -Path E:\kaido -Target "E:\path with spaces\Kaido-Decomp-Racer"
param(
    [Parameter(Mandatory = $true)][string]$Iso,
    [string]$GhidraUrl = "https://github.com/NationalSecurityAgency/ghidra/releases/download/Ghidra_12.2_build/ghidra_12.2_PUBLIC_20261016.zip",
    [string]$EeUrl = "https://github.com/chaoticgd/ghidra-emotionengine-reloaded/releases/download/v2.1.39/ghidra_12.2_PUBLIC_20261029_ghidra-emotionengine-reloaded.zip",
    [string]$JdkUrl = "https://api.adoptium.net/v3/binary/latest/25/ga/windows/x64/jdk/hotspot/normal/eclipse",
    [string]$McpRepo = "https://github.com/bethington/ghidra-mcp"
)
$ErrorActionPreference = "Stop"
$Root = Split-Path -Parent $PSScriptRoot
if ($Root -match " ") { throw "Path '$Root' contains spaces; use a junction (see header)." }
$Tools = Join-Path $Root "tools"; $Dl = Join-Path $Tools "dl"
New-Item -ItemType Directory -Force $Dl | Out-Null

function Get-File($url, $out) { if (-not (Test-Path $out)) { Write-Host "download $url"; curl.exe -sL -o $out $url } }
Get-File $GhidraUrl "$Dl\ghidra.zip"
Get-File $JdkUrl    "$Dl\jdk25.zip"
Get-File $EeUrl     "$Dl\ee.zip"

if (-not (Test-Path "$Tools\ghidra_12.2_PUBLIC")) { Expand-Archive "$Dl\ghidra.zip" $Tools }
if (-not (Get-ChildItem $Tools -Filter "jdk-25*" -Directory)) { Expand-Archive "$Dl\jdk25.zip" $Tools }
$Ghidra = "$Tools\ghidra_12.2_PUBLIC"
$Jdk = (Get-ChildItem $Tools -Filter "jdk-25*" -Directory | Select-Object -First 1).FullName
Expand-Archive -Force "$Dl\ee.zip" "$Ghidra\Ghidra\Extensions"

# Ghidra: use JDK 25, keep settings next to the project (works around an OSGi/Felix cache issue).
$lp = "$Ghidra\support\launch.properties"
$settings = ("$Tools\ghidra_settings" -replace '\\', '/')
(Get-Content $lp) `
    -replace '^JAVA_HOME_OVERRIDE=.*', ("JAVA_HOME_OVERRIDE=" + ($Jdk -replace '\\', '/')) `
    -replace '^#VMARGS=-Dapplication.settingsdir=.*', "VMARGS=-Dapplication.settingsdir=$settings" |
    Set-Content -Encoding ascii $lp

# GhidraMCP: build the plugin for Ghidra 12.2 and install the bridge.
if (-not (Test-Path "$Tools\ghidra-mcp-src")) { git clone --depth 1 $McpRepo "$Tools\ghidra-mcp-src" }
$env:JAVA_HOME = $Jdk
Push-Location "$Tools\ghidra-mcp-src"
& .\gradlew.bat buildExtension "-PGHIDRA_INSTALL_DIR=$Ghidra" --no-daemon -q
Pop-Location
Expand-Archive -Force (Get-ChildItem "$Tools\ghidra-mcp-src\build\distributions\GhidraMCP-*.zip")[0].FullName "$Ghidra\Ghidra\Extensions"
python -m venv "$Tools\mcp-venv"
& "$Tools\mcp-venv\Scripts\python.exe" -m pip install -q "$Tools\ghidra-mcp-src"

# PyGhidra (headless analysis/export).
python -m venv "$Tools\venv"
& "$Tools\venv\Scripts\python.exe" -m pip install -q --no-index --find-links "$Ghidra\Ghidra\Features\PyGhidra\pypkg\dist" pyghidra

# Game executable from your ISO.
$img = Mount-DiskImage -ImagePath $Iso -PassThru
try {
    $d = ($img | Get-Volume).DriveLetter
    New-Item -ItemType Directory -Force "$Root\iso_extract" | Out-Null
    Copy-Item "${d}:\SLES_531.91", "${d}:\SYSTEM.CNF", "${d}:\BUILD.TOC" "$Root\iso_extract\" -Force
    Copy-Item "${d}:\IRX" "$Root\iso_extract\" -Recurse -Force
} finally { Dismount-DiskImage -ImagePath $Iso | Out-Null }

$hash = (Get-FileHash "$Root\iso_extract\SLES_531.91" -Algorithm SHA1).Hash.ToLower()
$want = (Get-Content "$Root\config\elf.sha1").Trim()
if ($hash -ne $want) { Write-Warning "SLES_531.91 sha1 $hash does not match expected $want (different release?)" }
Write-Host "Done. Next: tools\venv\Scripts\python -I scripts\ghidra_export.py"
