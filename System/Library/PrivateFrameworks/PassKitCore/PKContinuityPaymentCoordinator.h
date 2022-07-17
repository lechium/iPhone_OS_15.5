//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/PKContinuityPaymentServiceDelegate-Protocol.h>

@class NSString, PKContinuityPaymentService, PKRemotePaymentRequest;
@protocol OS_dispatch_queue, OS_dispatch_source, PKContinuityPaymentCoordinatorDelegate;

@interface PKContinuityPaymentCoordinator : NSObject <PKContinuityPaymentServiceDelegate>
{
    PKContinuityPaymentService *_continuityPaymentService;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_internalQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_deviceUpdateTimeoutTimer;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_deviceTotalUpdateTimeoutTimer;	// 40 = 0x28
    _Bool _isUpdatingDevices;	// 48 = 0x30
    PKRemotePaymentRequest *_currentRemotePaymentRequest;	// 56 = 0x38
    long long _messageSendCount;	// 64 = 0x40
    long long _messageSendCompleteCount;	// 72 = 0x48
    id <PKContinuityPaymentCoordinatorDelegate> _delegate;	// 80 = 0x50
    double _updatePaymentDeviceTimeout;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000398d56
- (void)_send_didReceiveCancellation;	// IMP=0x0000000000398cb3
- (void)_send_didReceivePayment:(id)arg1;	// IMP=0x0000000000398bd5
- (void)_send_didReceiveUpdatedPaymentDevice:(id)arg1;	// IMP=0x0000000000398af7
- (void)_send_didTimeoutTotalUpdatePaymentDevices;	// IMP=0x0000000000398a1a
- (void)_send_didTimeoutUpdatePaymentDevices;	// IMP=0x0000000000398977
- (void)_deviceUpdateTotalTimerDidTimeout;	// IMP=0x00000000003988fc
- (void)_deviceUpdateTimerDidTimeout;	// IMP=0x0000000000398881
- (void)_resetRequest;	// IMP=0x0000000000398858
- (void)_queue_sendPaymentResult:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000003982a9
- (void)didReceiveCancellationForRemotePaymentRequest:(id)arg1;	// IMP=0x00000000003980ab
- (void)didReceivePayment:(id)arg1 forRemotePaymentRequest:(id)arg2;	// IMP=0x0000000000397d5e
- (void)didReceiveUpdatedPaymentDevices:(id)arg1;	// IMP=0x0000000000397bec
- (void)cancelRemotePaymentRequestWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000397804
- (void)sendPaymentResult:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000039772a
- (void)sendPaymentClientUpdate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000397123
- (void)sendRemotePaymentRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000396a6c
- (void)updatePaymentDevices;	// IMP=0x00000000003968ea
@property(readonly, nonatomic, getter=isAwaitingReply) _Bool awaitingReply;
@property(readonly, nonatomic) PKRemotePaymentRequest *currentRemotePaymentRequest;
@property(nonatomic) double updatePaymentDeviceTimeout; // @synthesize updatePaymentDeviceTimeout=_updatePaymentDeviceTimeout;
@property(nonatomic) __weak id <PKContinuityPaymentCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;	// IMP=0x000000000039644b
- (id)initWithContinuityPaymentService:(id)arg1;	// IMP=0x00000000003961d6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
