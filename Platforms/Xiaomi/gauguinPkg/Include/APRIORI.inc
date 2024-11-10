APRIORI DXE {
    INF MdeModulePkg/Core/Dxe/DxeMain.inf
    INF MdeModulePkg/Universal/PCD/Dxe/Pcd.inf

    INF Binaries/gauguin/QcomPkg/Drivers/EnvDxe/EnvDxe.inf

    INF MdeModulePkg/Universal/ReportStatusCodeRouter/RuntimeDxe/ReportStatusCodeRouterRuntimeDxe.inf
    INF MdeModulePkg/Universal/StatusCodeHandler/RuntimeDxe/StatusCodeHandlerRuntimeDxe.inf
    INF MdeModulePkg/Core/RuntimeDxe/RuntimeDxe.inf

    INF ArmPkg/Drivers/CpuDxe/CpuDxe.inf
    INF ArmPkg/Drivers/ArmGic/ArmGicDxe.inf

    INF EmbeddedPkg/MetronomeDxe/MetronomeDxe.inf
    INF ArmPkg/Drivers/TimerDxe/TimerDxe.inf

    INF Binaries/gauguin/QcomPkg/Drivers/SmemDxe/SmemDxe.inf

    INF QcomPkg/Drivers/DynamicRamDxe/DynamicRamDxe.inf

    INF Binaries/gauguin/QcomPkg/Drivers/DALSYSDxe/DALSYSDxe.inf
    INF Binaries/gauguin/QcomPkg/Drivers/TzDxe/ScmDxeLA.inf
    INF Binaries/gauguin/QcomPkg/Drivers/TzDxe/TzDxeLA.inf
    INF Binaries/gauguin/QcomPkg/Drivers/ChipInfoDxe/ChipInfoDxe.inf
    INF Binaries/gauguin/QcomPkg/Drivers/CmdDbDxe/CmdDbDxe.inf
    INF Binaries/gauguin/MdeModulePkg/Universal/WatchdogTimerDxe/WatchdogTimer.inf
    INF Binaries/gauguin/QcomPkg/Drivers/VariableDxe/VariableDxe.inf
    INF Binaries/gauguin/QcomPkg/Drivers/HALIOMMUDxe/HALIOMMUDxe.inf
    INF Binaries/gauguin/QcomPkg/Drivers/ULogDxe/ULogDxe.inf
    INF Binaries/gauguin/QcomPkg/Drivers/NpaDxe/NpaDxe.inf
    INF Binaries/gauguin/QcomPkg/Drivers/RpmhDxe/RpmhDxe.inf
    INF Binaries/gauguin/QcomPkg/Drivers/VcsDxe/VcsDxe.inf
    INF Binaries/gauguin/QcomPkg/Drivers/PdcDxe/PdcDxe.inf
    INF Binaries/gauguin/QcomPkg/Drivers/ClockDxe/ClockDxe.inf

    INF QcomPkg/Drivers/ClockSpeedUpDxe/ClockSpeedUpDxe.inf 
    INF EmbeddedPkg/SimpleTextInOutSerial/SimpleTextInOutSerial.inf
    INF MdeModulePkg/Universal/HiiDatabaseDxe/HiiDatabaseDxe.inf
    INF MdeModulePkg/Universal/Console/ConPlatformDxe/ConPlatformDxe.inf
    INF MdeModulePkg/Universal/Console/ConSplitterDxe/ConSplitterDxe.inf
    INF MdeModulePkg/Universal/Console/GraphicsConsoleDxe/GraphicsConsoleDxe.inf

    INF Binaries/gauguin/QcomPkg/Drivers/FontDxe/FontDxe.inf
    INF Binaries/gauguin/QcomPkg/Drivers/QcomWDogDxe/QcomWDogDxe.inf

    INF MdeModulePkg/Universal/Variable/RuntimeDxe/VariableRuntimeDxe.inf
    INF EmbeddedPkg/EmbeddedMonotonicCounter/EmbeddedMonotonicCounter.inf
    INF MdeModulePkg/Universal/ResetSystemRuntimeDxe/ResetSystemRuntimeDxe.inf
    INF EmbeddedPkg/RealTimeClockRuntimeDxe/RealTimeClockRuntimeDxe.inf
    INF MdeModulePkg/Universal/PrintDxe/PrintDxe.inf
    INF MdeModulePkg/Universal/DevicePathDxe/DevicePathDxe.inf
    INF MdeModulePkg/Universal/CapsuleRuntimeDxe/CapsuleRuntimeDxe.inf
    INF MdeModulePkg/Universal/BdsDxe/BdsDxe.inf

    INF Binaries/gauguin/QcomPkg/Drivers/PwrUtilsDxe/PwrUtilsDxe.inf
    #INF Binaries/gauguin/QcomPkg/Drivers/CPRDxe/CPRDxe.inf
    INF MdeModulePkg/Universal/Disk/DiskIoDxe/DiskIoDxe.inf
    INF MdeModulePkg/Universal/Disk/PartitionDxe/PartitionDxe.inf
    INF FatPkg/EnhancedFatDxe/Fat.inf
    INF MdeModulePkg/Universal/Disk/UnicodeCollation/EnglishDxe/EnglishDxe.inf

    INF Binaries/gauguin/QcomPkg/Drivers/HWIODxe/HWIODxe.inf
    INF Binaries/gauguin/QcomPkg/Drivers/GpiDxe/GpiDxe.inf
    INF Binaries/gauguin/QcomPkg/Drivers/I2CDxe/I2CDxe.inf
    INF Binaries/gauguin/QcomPkg/Drivers/SPMIDxe/SPMIDxe.inf
    INF Binaries/gauguin/QcomPkg/Drivers/SdccDxe/SdccDxe.inf
    INF Binaries/gauguin/QcomPkg/Drivers/UFSDxe/UFSDxe.inf
    INF Binaries/gauguin/QcomPkg/Drivers/TLMMDxe/TLMMDxe.inf
    INF Binaries/gauguin/QcomPkg/Drivers/FeatureEnablerDxe/FeatureEnablerDxe.inf
 
!if $(USE_CUSTOM_DISPLAY_DRIVER) == 1
    INF Binaries/lavender/QcomPkg/Drivers/DisplayDxe/DisplayDxe.inf
!else
    INF SiliciumPkg/Drivers/SimpleFbDxe/SimpleFbDxe.inf
!endif

    INF Binaries/gauguin/QcomPkg/Drivers/PlatformInfoDxe/PlatformInfoDxe.inf
    INF Binaries/gauguin/QcomPkg/Drivers/ButtonsDxe/ButtonsDxe.inf
    INF Binaries/gauguin/QcomPkg/Drivers/PmicDxe/PmicDxeLa.inf
    INF Binaries/gauguin/QcomPkg/Drivers/ChargerExDxe/ChargerExDxe.inf
    INF Binaries/gauguin/QcomPkg/Drivers/QcomChargerDxe/QcomChargerDxeLA.inf
    INF Binaries/gauguin/QcomPkg/Drivers/UsbPwrCtrlDxe/UsbPwrCtrlDxe.inf
    INF Binaries/gauguin/QcomPkg/Drivers/AdcDxe/AdcDxe.inf
    INF Binaries/gauguin/QcomPkg/Drivers/TsensDxe/TsensDxe.inf
    INF Binaries/gauguin/QcomPkg/Drivers/LimitsDxe/LimitsDxe.inf
    INF Binaries/gauguin/QcomPkg/Drivers/DDRInfoDxe/DDRInfoDxe.inf
    INF Binaries/gauguin/QcomPkg/Drivers/UsbfnDwc3Dxe/UsbfnDwc3Dxe.inf
    INF Binaries/gauguin/QcomPkg/Drivers/UsbConfigDxe/UsbConfigDxe.inf
    INF Binaries/gauguin/QcomPkg/Drivers/PILDxe/PILDxe.inf
    INF Binaries/gauguin/QcomPkg/Drivers/PILProxyDxe/PILProxyDxe.inf
    INF Binaries/gauguin/QcomPkg/Drivers/ADSPDxe/ADSPDxe.inf
    INF Binaries/gauguin/QcomPkg/Drivers/FvUtilsDxe/FvUtilsDxe.inf
    INF Binaries/gauguin/QcomPkg/Drivers/ShmBridgeDxe/ShmBridgeDxeLA.inf
}
