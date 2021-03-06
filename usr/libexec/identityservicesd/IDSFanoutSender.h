//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTMessageDelivery, IDSAckStateMachine, NSArray, NSString;
@protocol OS_os_activity;

@interface IDSFanoutSender : NSObject
{
    CDUnknownBlockType _deliveryAcknowledgementBlock;	// 8 = 0x8
    CDUnknownBlockType _sendCompletionBlock;	// 16 = 0x10
    FTMessageDelivery *_messageDelivery;	// 24 = 0x18
    NSArray *_uris;	// 32 = 0x20
    NSString *_guid;	// 40 = 0x28
    NSString *_service;	// 48 = 0x30
    NSObject<OS_os_activity> *_completionActivity;	// 56 = 0x38
    IDSAckStateMachine *_ackStateMachine;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x002000000011b3f0
@property(readonly, nonatomic) IDSAckStateMachine *ackStateMachine; // @synthesize ackStateMachine=_ackStateMachine;
- (void)finishedTrackingMadridAcksWithContext:(id)arg1;	// IMP=0x001000000011ae20
- (void)receivedErrorWithContext:(id)arg1;	// IMP=0x001000000011ace0
- (void)receivedFanoutAPNSAckWithRemainingFanoutCount:(unsigned long long)arg1;	// IMP=0x001000000011ab50
- (void)finishedTrackingAPNSAcks;	// IMP=0x001000000011a880
- (void)receivedAPNSAckForMessage:(id)arg1;	// IMP=0x001000000011a820
- (void)sendFanouts:(id)arg1 forURIs:(id)arg2 messageQueue:(id)arg3;	// IMP=0x000000000011a270
- (id)initWithGUID:(id)arg1 service:(id)arg2 messageDelivery:(id)arg3 deliveryAcknowledgementBlock:(CDUnknownBlockType)arg4 sendCompletionBlock:(CDUnknownBlockType)arg5 completionActivity:(id)arg6;	// IMP=0x001000000011a040

@end

