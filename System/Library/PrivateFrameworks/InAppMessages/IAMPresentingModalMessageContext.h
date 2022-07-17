//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IAMMessage, IAMMessageGroup, NSTimer, UIViewController;

@interface IAMPresentingModalMessageContext : NSObject
{
    IAMMessage *_message;	// 8 = 0x8
    IAMMessageGroup *_messageGroup;	// 16 = 0x10
    UIViewController *_presentingViewController;	// 24 = 0x18
    NSTimer *_presentationExpirationTimer;	// 32 = 0x20
    CDUnknownBlockType _presentationHandler;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000019d9a
@property(copy, nonatomic) CDUnknownBlockType presentationHandler; // @synthesize presentationHandler=_presentationHandler;
@property(retain, nonatomic) NSTimer *presentationExpirationTimer; // @synthesize presentationExpirationTimer=_presentationExpirationTimer;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(retain, nonatomic) IAMMessageGroup *messageGroup; // @synthesize messageGroup=_messageGroup;
@property(retain, nonatomic) IAMMessage *message; // @synthesize message=_message;
- (id)initWithMessage:(id)arg1 messageGroup:(id)arg2 presentingViewController:(id)arg3 presentationExpirationTimer:(id)arg4 presentationHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000019bfb

@end
