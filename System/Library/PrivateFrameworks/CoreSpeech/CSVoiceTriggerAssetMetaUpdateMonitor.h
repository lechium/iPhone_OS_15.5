//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CSVoiceTriggerAssetMetaUpdateMonitor
{
    int _notifyToken;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00000000000ad12d
- (void)_notifyObserver:(id)arg1;	// IMP=0x00000000000ad4e1
- (void)_didReceiveNewVoiceTriggerAssetMetaData;	// IMP=0x00000000000ad401
- (void)_stopMonitoring;	// IMP=0x00000000000ad35e
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x00000000000ad23f
- (const char *)_asssetMetaUpdatedKey;	// IMP=0x00000000000ad1d6
- (void)notifyNewVoiceTriggerAssetMetaDataUpdated;	// IMP=0x00000000000ad1c4
- (id)init;	// IMP=0x00000000000ad182

@end

