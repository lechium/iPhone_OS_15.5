//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CSSoftwareUpdateCheckingMonitor
{
    int _notifyToken;	// 8 = 0x8
    _Bool _isSoftwareUpdateCheckingRunning;	// 12 = 0xc
}

+ (id)sharedInstance;	// IMP=0x00400000000d6f74
- (void)_notifyObserver:(id)arg1 withSoftwareUpdateCheckingRunning:(_Bool)arg2;	// IMP=0x00200000000d7452
- (void)_didReceiveSoftwareUpdateCheckingStateChanged:(_Bool)arg1;	// IMP=0x00100000000d73e0
- (void)_didReceiveSoftwareUpdateCheckingStateChangedInQueue:(_Bool)arg1;	// IMP=0x00100000000d736e
- (_Bool)isSoftwareUpdateCheckingRunning;	// IMP=0x00100000000d735e
- (unsigned char)_softwareUpdateCheckingState;	// IMP=0x00100000000d7304
- (_Bool)_checkSoftwareUpdateCheckingState;	// IMP=0x00100000000d7249
- (void)_stopMonitoring;	// IMP=0x00100000000d71a6
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x00100000000d7016
- (id)init;	// IMP=0x00100000000d6fc9

@end
