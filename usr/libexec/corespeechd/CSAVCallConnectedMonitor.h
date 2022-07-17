//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CSAVCallConnectedMonitor
{
    _Bool _hasConnectedAVCall;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00400000000d28ea
- (void)_startObservingSystemControllerLifecycle;	// IMP=0x00200000000d2abf
- (void)_systemControllerDied:(id)arg1;	// IMP=0x00100000000d29e8
- (void)_startObservingAVCallActiveChange;	// IMP=0x00100000000d29e2
- (_Bool)hasConnectedAVCall;	// IMP=0x00100000000d29d2
- (void)_stopMonitoring;	// IMP=0x00100000000d29cc
- (void)_handleCallActiveDidChangeNotification:(id)arg1;	// IMP=0x00100000000d29bb
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x00100000000d297e
- (id)init;	// IMP=0x00100000000d293f

@end
