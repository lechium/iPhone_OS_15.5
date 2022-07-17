//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardUI/NCContainerViewProviding-Protocol.h>

@class NSString, UIView;

@interface SBUIExpandedNotificationContainerViewProvider : NSObject <NCContainerViewProviding>
{
    CDUnknownBlockType _invalidationBlock;	// 8 = 0x8
    _Bool _invalidated;	// 16 = 0x10
    UIView *_containerView;	// 24 = 0x18
    id _requester;	// 32 = 0x20
    NSString *_reason;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000004661
@property(readonly, copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) __weak id requester; // @synthesize requester=_requester;
@property(readonly, nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
- (void)invalidate;	// IMP=0x00000000000044cb
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x0000000000004319
@property(readonly, nonatomic, getter=isValid) _Bool valid;
- (id)initWithRequester:(id)arg1 containerView:(id)arg2 reason:(id)arg3 invalidationBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000000003fb4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
