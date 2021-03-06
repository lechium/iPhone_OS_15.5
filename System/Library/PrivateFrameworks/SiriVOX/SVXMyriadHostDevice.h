//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriVOX/AFMyriadDelegate-Protocol.h>
#import <SiriVOX/SVXMyriadRequestDelegate-Protocol.h>

@class AFMyriadCoordinator, NSString, SVXMyriadWiFiAssertion;
@protocol OS_dispatch_queue, OS_dispatch_source, SVXMyriadResponseDelegate;

@interface SVXMyriadHostDevice : NSObject <AFMyriadDelegate, SVXMyriadRequestDelegate>
{
    AFMyriadCoordinator *_myriadCoordinator;	// 8 = 0x8
    id <SVXMyriadResponseDelegate> _delegate;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    struct {
        CDUnknownBlockType completion;
        NSObject<OS_dispatch_source> *timer;
    } _emergencyContext;	// 32 = 0x20
    SVXMyriadWiFiAssertion *_wifiAssertion;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000801a4
- (void)willEndSession:(id)arg1;	// IMP=0x0000000000080192
- (void)willStartWithSession:(id)arg1;	// IMP=0x000000000008018c
- (void)shouldUnduck:(id)arg1;	// IMP=0x000000000008010c
- (void)shouldAbortAnotherDeviceBetter:(id)arg1;	// IMP=0x0000000000080078
- (void)shouldContinue:(id)arg1;	// IMP=0x000000000007ffe4
- (void)_releaseWiFiAssertion;	// IMP=0x000000000007ffce
- (void)_acquireWiFiAssertion;	// IMP=0x000000000007ffb0
- (void)myriadCoordinatorDidHandleEmergency:(id)arg1;	// IMP=0x000000000007ff0f
- (void)_signalEmergencyCallHandledStatus:(_Bool)arg1;	// IMP=0x000000000007fd80
- (void)_startAdvertisingEmergency:(CDUnknownBlockType)arg1;	// IMP=0x000000000007fc48
- (void)_disarmMyriadEmergencyTimer;	// IMP=0x000000000007fb81
- (void)_armEmergencyDispatchTimerFor:(double)arg1 toExecute:(CDUnknownBlockType)arg2;	// IMP=0x000000000007fa9a
- (void)_initializeMyriadEmergencyTimer;	// IMP=0x000000000007fa4a
- (void)startAdvertising:(unsigned long long)arg1 withMyriadGoodnessScoreContext:(id)arg2 withMyriadAudioContext:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000007f75f
- (void)setupEnabled:(_Bool)arg1;	// IMP=0x000000000007f6f0
- (void)resetMyriad;	// IMP=0x000000000007f68b
- (void)preheatMyriad;	// IMP=0x000000000007f614
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x000000000007f50c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

