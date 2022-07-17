//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SIMToolkitUI/CoreTelephonyClientSMSDelegate-Protocol.h>
#import <SIMToolkitUI/SBSRemoteAlertHandleObserver-Protocol.h>
#import <SIMToolkitUI/STKIncomingCallUIStateObserver-Protocol.h>

@class CoreTelephonyClient, NSMutableArray, NSObject, NSString, STKCarrierSubscriptionMonitor, STKClass0SMSAlertSession, STKIncomingCallUIStateMonitor;
@protocol OS_dispatch_queue;

@interface STKClass0SMSAlertSessionManager <CoreTelephonyClientSMSDelegate, SBSRemoteAlertHandleObserver, STKIncomingCallUIStateObserver>
{
    CoreTelephonyClient *_telephonyClient;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSMutableArray *_queue_pendingAlertSessionsDueToInCallUI;	// 24 = 0x18
    STKIncomingCallUIStateMonitor *_queue_incomingCallStateMonitor;	// 32 = 0x20
    STKCarrierSubscriptionMonitor *_subscriptionMonitor;	// 40 = 0x28
    STKClass0SMSAlertSession *_currentSession;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000077df
@property(retain, nonatomic, setter=_queue_setCurrentSession:) STKClass0SMSAlertSession *currentSession; // @synthesize currentSession=_currentSession;
@property(readonly, nonatomic) STKCarrierSubscriptionMonitor *subscriptionMonitor; // @synthesize subscriptionMonitor=_subscriptionMonitor;
- (void)_queue_enqueueSession:(id)arg1;	// IMP=0x0000000000007542
- (void)_queue_handleClass0SMSBody:(id)arg1 address:(id)arg2 responder:(id)arg3 forSlot:(long long)arg4;	// IMP=0x0000000000007345
- (void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2;	// IMP=0x000000000000713e
- (void)remoteAlertHandleDidDeactivate:(id)arg1;	// IMP=0x000000000000703e
- (void)incomingCallUIStateDidChange:(_Bool)arg1;	// IMP=0x0000000000006dd7
- (void)smsMessageClass0Received:(id)arg1 body:(id)arg2 address:(id)arg3;	// IMP=0x0000000000006cd8
- (void)handleClass0SMSBody:(id)arg1 address:(id)arg2 responder:(id)arg3 forSlot:(long long)arg4;	// IMP=0x0000000000006bb7
- (id)remoteAlertDescriptorForSession:(id)arg1;	// IMP=0x00000000000069b1
- (id)initWithSubscriptionMonitor:(id)arg1;	// IMP=0x0000000000006853

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
