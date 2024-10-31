OPAL-1.0 Object
DataLogger::Configuration {
  m01_recordMode=Automatic
  m05_useRTCore=0
  m06_verbose=0
  m09_noDataLoss=0
  m13_usageMode=Basic
  m14_logLevel=Minimal
  m15_toolPriority=NORMAL
  m17_showDLTConsole=0
  name=5D52AA81-C13B-48C2-83F2-7548BC3D7093_ConfigC06017D2-9191-4C89-9CB2-81B9095ECB25
  m10_signalGroupConfigList=5D52AA81-C13B-48C2-83F2-7548BC3D7093_ConfigC06017D2-9191-4C89-9CB2-81B9095ECB25/SignalGroupConfigList
  parent=/
}
IOConfigListMap<DataLogger::SignalGroupConfig> {
  resizable=1
  uiName=SIGNAL_GROUP_
  name=5D52AA81-C13B-48C2-83F2-7548BC3D7093_ConfigC06017D2-9191-4C89-9CB2-81B9095ECB25/SignalGroupConfigList
  items {
    item {
      IOConfigItem_id=SIGNAL_GROUP_1
      isDeletable=1
      listParent=EA673A54-AADA-44D7-BB92-55FA8D7796B1-default/SyncExchangerRegistry/BF440A9B-87E6-436F-A07A-44AEF1CF4773/5D52AA81-C13B-48C2-83F2-7548BC3D7093_ConfigC06017D2-9191-4C89-9CB2-81B9095ECB25/SignalGroupConfigList
      instance {
        guid=A3195048-C288-4347-8CA9-2949F616266B
        m003_recordMode=Inherit
        m006_exportFormat=OPREC
        m007_fileAutoNaming=1
        m010_fileName=data
        m011_decimationFactor=1
        m015_frameLength=1
        m016_frameLengthUnits=Seconds
        m020_nbRecordedFrames=10
        m021_fileLength=10
        m022_fileLengthUnits=Seconds
        m11_showTriggerConfiguration=1
        m12_triggerReferenceValue=0
        m13_triggerMode=Normal
        m14_triggerFunction=Edge
        m15_triggerPolarity=Positive
        m18_preTriggerPercent=0
        m19_triggerHoldoff=0
        m20_triggerSignalPath=
        m35_enableSubFraming=1
        m36_subFrameSizeMillis=10
      }
    }
  }
  parent=5D52AA81-C13B-48C2-83F2-7548BC3D7093_ConfigC06017D2-9191-4C89-9CB2-81B9095ECB25
}