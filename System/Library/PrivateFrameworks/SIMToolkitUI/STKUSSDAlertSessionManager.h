//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SIMToolkitUI/CoreTelephonyClientSuppServicesDelegate-Protocol.h>
#import <SIMToolkitUI/SBSRemoteAlertHandleObserver-Protocol.h>

@class CoreTelephonyClient, NSMutableArray, NSObject, NSString, STKCarrierSubscriptionMonitor, STKUSSDAlertSession;
@protocol OS_dispatch_queue;

@interface STKUSSDAlertSessionManager <SBSRemoteAlertHandleObserver, CoreTelephonyClientSuppServicesDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    struct __CTServerConnection *_serverConnection;	// 16 = 0x10
    CoreTelephonyClient *_telephonyClient;	// 24 = 0x18
    NSMutableArray *_activeUSSDSessions;	// 32 = 0x20
    NSMutableArray *_finishedUSSDSessions;	// 40 = 0x28
    STKUSSDAlertSession *_coalescingUSSDSession;	// 48 = 0x30
    NSMutableArray *_activeSupplementaryServicesSessions;	// 56 = 0x38
    NSMutableArray *_finishedSupplementaryServicesSessions;	// 64 = 0x40
    STKCarrierSubscriptionMonitor *_subscriptionMonitor;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000000671f
@property(readonly, nonatomic) STKCarrierSubscriptionMonitor *subscriptionMonitor; // @synthesize subscriptionMonitor=_subscriptionMonitor;
- (void)_queue_startListening;	// IMP=0x0000000000006319
- (id)_supplementaryServicesResponder;	// IMP=0x0000000000006285
- (void)_queue_handleUSSDEvent:(long long)arg1 responder:(id)arg2 userInfo:(id)arg3;	// IMP=0x000000000000514b
- (void)_executeOnQueue:(CDUnknownBlockType)arg1;	// IMP=0x0000000000005023
- (void)suppServicesError:(id)arg1 error:(id)arg2;	// IMP=0x0000000000004e9c
- (void)suppServicesCompleted:(id)arg1;	// IMP=0x0000000000004e44
- (void)suppServicesEvent:(id)arg1 event:(int)arg2 settingsType:(int)arg3 data:(id)arg4;	// IMP=0x0000000000004b98
- (void)suppServicesStarted:(id)arg1;	// IMP=0x0000000000004b40
- (void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2;	// IMP=0x000000000000415a
- (void)remoteAlertHandleDidDeactivate:(id)arg1;	// IMP=0x0000000000003844
- (void)handleUSSDEvent:(long long)arg1 responder:(id)arg2 userInfo:(id)arg3;	// IMP=0x00000000000036fc
- (id)remoteAlertDescriptorForSession:(id)arg1;	// IMP=0x00000000000032ba
- (void)_willPresentAlertHandle:(id)arg1;	// IMP=0x000000000000329f
- (id)initWithSubscriptionMonitor:(id)arg1;	// IMP=0x000000000000309c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

