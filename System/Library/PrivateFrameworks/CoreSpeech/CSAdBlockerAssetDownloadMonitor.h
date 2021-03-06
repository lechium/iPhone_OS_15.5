//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeech/CSTrialAssetDownloadMonitorDelegate-Protocol.h>

@class CSTrialAssetDownloadMonitor, NSString;

@interface CSAdBlockerAssetDownloadMonitor <CSTrialAssetDownloadMonitorDelegate>
{
    int _notifyToken;	// 8 = 0x8
    unsigned long long _lastUpdatedAssetType;	// 16 = 0x10
    CSTrialAssetDownloadMonitor *_monitor;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x000000000001a51b
- (void).cxx_destruct;	// IMP=0x000000000001a9e7
@property(retain, nonatomic) CSTrialAssetDownloadMonitor *monitor; // @synthesize monitor=_monitor;
- (void)trialAssetDownloadMonitorDelegate:(id)arg1 didInstallNewAsset:(_Bool)arg2 assetType:(unsigned long long)arg3;	// IMP=0x000000000001a93e
- (void)_notifyObserver:(id)arg1;	// IMP=0x000000000001a8d9
- (void)_didInstalledNewAdBlockerAsset;	// IMP=0x000000000001a7f9
- (void)_stopMonitoring;	// IMP=0x000000000001a756
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x000000000001a624
- (const char *)_notificationKey;	// IMP=0x000000000001a617
- (id)init;	// IMP=0x000000000001a570

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

