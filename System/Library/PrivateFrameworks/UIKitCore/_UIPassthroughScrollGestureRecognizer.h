//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIScrollEventRespondable-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIPassthroughScrollGestureRecognizer <_UIScrollEventRespondable>
{
    struct CGPoint _startPoint;	// 16 = 0x10
    double _startTime;	// 32 = 0x20
    _Bool _endForPrimaryButtonDown;	// 40 = 0x28
    _Bool _endForSecondaryButtonDown;	// 41 = 0x29
    unsigned long long _endReason;	// 48 = 0x30
}

+ (_Bool)_supportsTouchContinuation;	// IMP=0x00000000000cd676
@property(nonatomic) _Bool endForSecondaryButtonDown; // @synthesize endForSecondaryButtonDown=_endForSecondaryButtonDown;
@property(nonatomic) _Bool endForPrimaryButtonDown; // @synthesize endForPrimaryButtonDown=_endForPrimaryButtonDown;
@property(readonly, nonatomic) unsigned long long endReason; // @synthesize endReason=_endReason;
- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;	// IMP=0x00000000000cdfd2
- (_Bool)shouldRequireFailureOfGestureRecognizer:(id)arg1;	// IMP=0x00000000000cdcd7
- (void)_scrollingChangedWithEvent:(id)arg1;	// IMP=0x00000000000cdbdf
- (_Bool)shouldReceiveEvent:(id)arg1;	// IMP=0x00000000000cdb49
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000000cdb32
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000000cda57
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000000cd913
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000000cd7e1
- (void)_endWithReason:(unsigned long long)arg1;	// IMP=0x00000000000cd7bf
- (void)reset;	// IMP=0x00000000000cd795
- (id)_window;	// IMP=0x00000000000cd783
- (void)setView:(id)arg1;	// IMP=0x00000000000cd67e
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x00000000000cd5fc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

