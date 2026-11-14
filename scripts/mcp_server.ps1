# Serves the analyzed Ghidra project over GhidraMCP without the Ghidra GUI.
#   powershell -ExecutionPolicy Bypass -File scripts\mcp_server.ps1
# Then MCP clients (see .mcp.json) reach it through tools\mcp-venv\Scripts\bridge-mcp-ghidra.exe.
# The headless server and scripts\ghidra_export.py both lock the project: run one at a time.
param([int]$Port = 8089)
$ErrorActionPreference = "Stop"
$Root = Split-Path -Parent $PSScriptRoot
$G = "$Root\tools\ghidra_12.2_PUBLIC"
$Jdk = (Get-ChildItem "$Root\tools" -Filter "jdk-25*" -Directory | Select-Object -First 1).FullName
$jars = @("$G\Ghidra\Extensions\GhidraMCP\lib\GhidraMCP-7.0.0.jar")
foreach ($glob in "Framework", "Features", "Processors", "Extensions") {
    $jars += (Get-ChildItem "$G\Ghidra\$glob\*\lib\*.jar").FullName
}
& "$Jdk\bin\java.exe" -Xmx8g "-Dghidra.home=$G" "-Dapplication.settingsdir=$Root\tools\ghidra_settings" `
    "-Dapplication.name=GhidraMCP" -classpath ($jars -join ";") com.xebyte.headless.GhidraMCPHeadlessServer `
    --bind 127.0.0.1 --port $Port --project "$Root\tools\ghidra_proj\KaidoRacer\KaidoRacer.gpr" --program SLES_531.91
