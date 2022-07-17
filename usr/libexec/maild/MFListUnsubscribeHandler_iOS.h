//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EmailDaemon/EDListUnsubscribeHandler.h>

@class EDOutgoingMessageRepository, EMListUnsubscribeDetector;
@protocol EFScheduler;

@interface MFListUnsubscribeHandler_iOS : EDListUnsubscribeHandler
{
    EDOutgoingMessageRepository *_outgoingMessageRepository;	// 8 = 0x8
    EMListUnsubscribeDetector *_detector;	// 16 = 0x10
    id <EFScheduler> _scheduler;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000828c4
@property(readonly, nonatomic) id <EFScheduler> scheduler; // @synthesize scheduler=_scheduler;
@property(readonly, nonatomic) EMListUnsubscribeDetector *detector; // @synthesize detector=_detector;
@property(readonly, nonatomic) EDOutgoingMessageRepository *outgoingMessageRepository; // @synthesize outgoingMessageRepository=_outgoingMessageRepository;
- (void)unsubscribeHTMLWithCommand:(id)arg1 timeout:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000825db
- (void)unsubscribeMailtoWithCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000082324
- (void)ignoreWithCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000082193
- (id)initWithOutgoingMessageRepository:(id)arg1;	// IMP=0x001000000008209c

@end
