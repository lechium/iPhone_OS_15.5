//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ChatKit/UIViewControllerAnimatedTransitioning-Protocol.h>

@class NSString, UIViewPropertyAnimator;

__attribute__((visibility("hidden")))
@interface CKBrowserFullscreenRevealAnimationController : NSObject <UIViewControllerAnimatedTransitioning>
{
    _Bool _presenting;	// 8 = 0x8
    UIViewPropertyAnimator *_ascentDescentAnimator;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002f8a8f
@property(nonatomic, getter=isPresenting) _Bool presenting; // @synthesize presenting=_presenting;
@property(retain, nonatomic) UIViewPropertyAnimator *ascentDescentAnimator; // @synthesize ascentDescentAnimator=_ascentDescentAnimator;
- (void)animateTransition:(id)arg1;	// IMP=0x00000000002f84c1
- (double)transitionDuration:(id)arg1;	// IMP=0x00000000002f8471
- (id)initWithDirection:(_Bool)arg1;	// IMP=0x00000000002f8331

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
