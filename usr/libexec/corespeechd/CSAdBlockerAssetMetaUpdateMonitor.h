//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CSAdBlockerAssetMetaUpdateMonitor
{
    int _notifyToken;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00400000000d47f1
- (void)_notifyObserver:(id)arg1;	// IMP=0x00200000000d4b37
- (void)_didReceiveNewAdBlockerAssetMetaData;	// IMP=0x00100000000d4a57
- (void)_stopMonitoring;	// IMP=0x00100000000d49b4
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x00100000000d4895
- (const char *)_asssetMetaUpdatedKey;	// IMP=0x00100000000d4888
- (id)init;	// IMP=0x00100000000d4846

@end

