//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIScrollEventRespondable-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIPassthroughGateGestureRecognizer <_UIScrollEventRespondable>
{
}

+ (_Bool)_supportsTouchContinuation;	// IMP=0x00000000009058b4
- (void)_scrollingChangedWithEvent:(id)arg1;	// IMP=0x0000000000905992
- (_Bool)shouldReceiveEvent:(id)arg1;	// IMP=0x00000000009058fc
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000009058ea
- (void)endClosed;	// IMP=0x00000000009058d3
- (void)open;	// IMP=0x00000000009058bc
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x000000000090583a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

