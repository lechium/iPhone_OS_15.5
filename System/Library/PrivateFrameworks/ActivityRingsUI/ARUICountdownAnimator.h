//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ARUICountdownTimeline, ARUICountdownView;
@protocol ARUICountdownAnimation, ARUICountdownAnimatorDelegate;

@interface ARUICountdownAnimator : NSObject
{
    struct {
        _Bool willBeginAnimating;
        _Bool willBeginAnimation;
        _Bool performingAnimation;
        _Bool completedAnimation;
        _Bool didFinishAnimating;
    } _delegateFlags;	// 8 = 0x8
    _Bool _animating;	// 13 = 0xd
    _Bool _canceled;	// 14 = 0xe
    id <ARUICountdownAnimation> _currentAnimation;	// 16 = 0x10
    ARUICountdownTimeline *_timeline;	// 24 = 0x18
    ARUICountdownView *_countdownView;	// 32 = 0x20
    id <ARUICountdownAnimatorDelegate> _delegate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000000c464
@property(nonatomic) __weak id <ARUICountdownAnimatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak ARUICountdownView *countdownView; // @synthesize countdownView=_countdownView;
@property(retain, nonatomic) ARUICountdownTimeline *timeline; // @synthesize timeline=_timeline;
- (void)_delegate_didFinishAnimating;	// IMP=0x000000000000c30f
- (void)_delegate_completedAnimation:(id)arg1;	// IMP=0x000000000000c2a2
- (void)_delegate_performingAnimation:(id)arg1 withDuration:(double)arg2;	// IMP=0x000000000000c22b
- (void)_delegate_willBeginAnimation:(id)arg1 afterDelay:(double)arg2;	// IMP=0x000000000000c1b4
- (void)_delegate_willBeginAnimating;	// IMP=0x000000000000c173
- (void)_applyCancelAnimationAtIndex:(unsigned long long)arg1;	// IMP=0x000000000000befb
- (void)cancelAnimations;	// IMP=0x000000000000bd66
- (void)_applyAnimationAtIndex:(unsigned long long)arg1;	// IMP=0x000000000000b73d
- (_Bool)isAnimating;	// IMP=0x000000000000b734
- (_Bool)canceled;	// IMP=0x000000000000b72b
- (void)beginAnimations;	// IMP=0x000000000000b5be
- (void)prepareToAnimate;	// IMP=0x000000000000b551
- (id)initWithTimeline:(id)arg1;	// IMP=0x000000000000b4e0

@end

