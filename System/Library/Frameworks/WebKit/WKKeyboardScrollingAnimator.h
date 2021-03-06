//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol WKKeyboardScrollableInternal;

__attribute__((visibility("hidden")))
@interface WKKeyboardScrollingAnimator : NSObject
{
    id <WKKeyboardScrollableInternal> _scrollable;	// 8 = 0x8
    struct RetainPtr<CADisplayLink> _displayLink;	// 16 = 0x10
    optional_105a5b27 _currentScroll;	// 24 = 0x18
    _Bool _scrollTriggeringKeyIsPressed;	// 68 = 0x44
    struct FloatSize _velocity;	// 72 = 0x48
    struct FloatPoint _idealPosition;	// 84 = 0x54
    struct FloatPoint _currentPosition;	// 92 = 0x5c
    struct FloatPoint _idealPositionForMinimumTravel;	// 100 = 0x64
}

- (id).cxx_construct;	// IMP=0x00000000003eb673
- (void).cxx_destruct;	// IMP=0x00000000003eb653
- (void)displayLinkFired:(id)arg1;	// IMP=0x00000000003eb353
- (void)stopDisplayLink;	// IMP=0x00000000003eb31a
- (void)startDisplayLinkIfNeeded;	// IMP=0x00000000003eb289
- (void)willStartInteractiveScroll;	// IMP=0x00000000003eb24d
- (_Bool)scrollTriggeringKeyIsPressed;	// IMP=0x00000000003eb244
- (void)stopAnimatedScroll;	// IMP=0x00000000003eb104
- (void)handleKeyEvent:(id)arg1;	// IMP=0x00000000003eb080
- (_Bool)beginWithEvent:(id)arg1;	// IMP=0x00000000003eaea8
- (optional_105a5b27)keyboardScrollForEvent:(id)arg1;	// IMP=0x00000000003eab03
- (void)invalidate;	// IMP=0x00000000003eaace
- (const struct KeyboardScrollParameters *)parameters;	// IMP=0x00000000003eaac1
- (id)initWithScrollable:(id)arg1;	// IMP=0x00000000003eaa84
- (id)init;	// IMP=0x00000000003eaa7c

@end

