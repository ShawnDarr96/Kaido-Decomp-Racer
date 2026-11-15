# IOP modules on the disc (board row F7)

Made with `python -I scripts/survey_irx.py iso_extract/IRX` (module name/version from `.iopmod`,
export/import library tables, ROMDIR listing for the IOPRP image). The EE side loads them from
`Xvi_LoadIop`, `Snd_Init`, `Wheel_Init` and the SDK start-up code.

| File | Module (version) | Exports | Origin | Decompile? |
|---|---|---|---|---|
| IRX/IOPRP280.IMG | ROMDIR: SYSMEM, LOADCORE, SIFCMD, SIFMAN, THREADMAN, IOMAN, MODLOAD, FILEIO, CDVDMAN, CDVDFSV, LOADFILE, TIMEMANI, ROMDRV, EESYNC, SYSCLIB, STDIO | - | Sony SDK 2.8.0 IOP replacement image | no |
| IRX/CDVDSTM.IRX | cdvd_st_driver 2.2 | cdvdstm | Sony SDK (CD/DVD streaming) | no |
| IRX/DBCMAN.IRX | Dbc_Manager 3.1 | dbcman | Sony SDK (libdbc) | no |
| IRX/LIBSD.IRX | Sound_Device_Library 3.3 | libsd | Sony SDK | no |
| IRX/MCMAN.IRX | mcman 2.34 | mcman | Sony SDK (memory card) | no |
| IRX/MCSERV.IRX | mcserv 2.16 | mcserv | Sony SDK (memory card) | no |
| IRX/MODHSYN.IRX | SPU2_Synthesizer_Module 1.5 | modhsyn | Sony SDK (hardware synth, "SCEI") | no |
| IRX/MODMIDI.IRX | Midi_Sequencer_Module 2.2 | modmidi | Sony SDK (MIDI sequencer, "SCEI") | no |
| IRX/SIO2MAN.IRX | sio2man 3.0 | sio2man | Sony SDK | no |
| IRX/SIO2D.IRX | sio2d 3.2 | sio2d | Sony SDK (libpad2 stack) | no |
| IRX/PAD2/DS2O.IRX | ds2o 3.3 | - | Sony SDK (libpad2 DualShock2 driver) | no |
| IRX/USBD.IRX | USB_driver 2.4 | usbd | Sony SDK (USB) | no |
| IRX/LGD/LGDEV.IRX | LgDev_tb_rb_Driver 1.8 ("Version 1.08 (Wheel Joystick), built on Sep 24 2002") | lgdev | Logitech wheel SDK (third-party library; EE side is lgDev* in symbols.csv) | no |
| IRX/XVI/XVI_IOP.IRX | XVI_Memory_Resident_Lib 1.1 | xvi_iop | XVI middleware: RPC server and memory manager | yes, if the goal includes IOP code |
| IRX/XVI/XVI_SND.IRX | xvi_isound 1.0 (built Jan 4 2004) | - | XVI middleware sound driver on top of libsd/modhsyn/modmidi ("SBasic>", "Synthe>" debug strings) | yes, if the goal includes IOP code |

## Conclusions

- 12 of the 14 files are stock Sony SDK modules, or the Logitech wheel driver. They are shipped
  unchanged, so there is nothing to decompile; the EE code talks to them through the SDK's RPC
  libraries, which are already named.
- Only `XVI_IOP.IRX` (4.9 KB) and `XVI_SND.IRX` (35.6 KB) are not Sony's. They belong to the XVI
  middleware the EE game code uses (`Xvi_*`, `Snd_*`). They are separate IOP (R3000) binaries: they
  would need their own project (IOP GCC, not MWCC). That is recorded as a new board row.
