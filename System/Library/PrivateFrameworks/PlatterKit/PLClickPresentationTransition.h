//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PlatterKit/_UIClickPresentationTransition-Protocol.h>

@class MTMaterialView, NSString, PLViewControllerAnimator, UITargetedPreview, UIViewPropertyAnimator, _PLViewControllerOneToOneTransitionContext;
@protocol UIViewControllerTransitioningDelegate;

@interface PLClickPresentationTransition : NSObject <_UIClickPresentationTransition>
{
    id <UIViewControllerTransitioningDelegate> _transitionDelegate;	// 8 = 0x8
    _PLViewControllerOneToOneTransitionContext *_transitionContext;	// 16 = 0x10
    PLViewControllerAnimator *_animator;	// 24 = 0x18
    CDUnknownBlockType _completion;	// 32 = 0x20
    _Bool _propagatesPresentingViewTransform;	// 40 = 0x28
    MTMaterialView *_backgroundView;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000001b9dd
@property(nonatomic) _Bool propagatesPresentingViewTransform; // @synthesize propagatesPresentingViewTransform=_propagatesPresentingViewTransform;
@property(nonatomic) __weak MTMaterialView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void)_configureTransitionContextWithFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;	// IMP=0x000000000001b888
- (id)_animator;	// IMP=0x000000000001b849
- (id)_newAnimator;	// IMP=0x000000000001b7cc
@property(readonly, nonatomic) UIViewPropertyAnimator *customAnimator;
- (void)transitionDidEnd:(_Bool)arg1;	// IMP=0x000000000001b6dc
- (void)performTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;	// IMP=0x000000000001b534
- (void)prepareTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;	// IMP=0x000000000001b411
- (void)updateBackgroundViewForTransition;	// IMP=0x000000000001b397
- (id)initWithTransitionDelegate:(id)arg1 presentingViewController:(id)arg2 presentedViewController:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000001b2d1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) UITargetedPreview *sourcePreview;
@property(readonly) Class superclass;

@end
