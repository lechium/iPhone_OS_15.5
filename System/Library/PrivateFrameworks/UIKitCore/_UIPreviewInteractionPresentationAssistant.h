//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIViewControllerAnimatedTransitioning-Protocol.h>
#import <UIKitCore/UIViewControllerTransitioningDelegate-Protocol.h>

@class NSString, UITargetedPreview, UIView, UIViewController, UIViewPropertyAnimator, _UIPortalView, _UIPreviewInteractionHighlighter, _UIPreviewInteractionViewControllerPresentation;
@protocol UIViewControllerContextTransitioning;

__attribute__((visibility("hidden")))
@interface _UIPreviewInteractionPresentationAssistant : NSObject <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning>
{
    id <UIViewControllerContextTransitioning> _currentContext;	// 8 = 0x8
    _Bool _isAppearing;	// 16 = 0x10
    UIViewPropertyAnimator *_presentationAnimator;	// 24 = 0x18
    _UIPreviewInteractionHighlighter *_highlighter;	// 32 = 0x20
    _UIPreviewInteractionViewControllerPresentation *_presentation;	// 40 = 0x28
    _UIPortalView *_presentationSourcePortalView;	// 48 = 0x30
    UITargetedPreview *_sourcePreview;	// 56 = 0x38
    UIViewController *_stashedParentViewController;	// 64 = 0x40
    UIView *_stashedSuperView;	// 72 = 0x48
    CDUnknownBlockType _dismissalCompletion;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000011b5973
@property(nonatomic) _Bool isAppearing; // @synthesize isAppearing=_isAppearing;
@property(copy, nonatomic) CDUnknownBlockType dismissalCompletion; // @synthesize dismissalCompletion=_dismissalCompletion;
@property(retain, nonatomic) UIView *stashedSuperView; // @synthesize stashedSuperView=_stashedSuperView;
@property(retain, nonatomic) UIViewController *stashedParentViewController; // @synthesize stashedParentViewController=_stashedParentViewController;
@property(retain, nonatomic) UITargetedPreview *sourcePreview; // @synthesize sourcePreview=_sourcePreview;
@property(retain, nonatomic) _UIPortalView *presentationSourcePortalView; // @synthesize presentationSourcePortalView=_presentationSourcePortalView;
@property(retain, nonatomic) _UIPreviewInteractionViewControllerPresentation *presentation; // @synthesize presentation=_presentation;
@property(retain, nonatomic) _UIPreviewInteractionHighlighter *highlighter; // @synthesize highlighter=_highlighter;
@property(readonly, nonatomic) UIViewPropertyAnimator *presentationAnimator; // @synthesize presentationAnimator=_presentationAnimator;
- (void)_createpresentationAnimatorIfNecessary:(id)arg1;	// IMP=0x00000000011b57ea
- (void)_postInteractionCleanup;	// IMP=0x00000000011b563e
- (void)animateTransition:(id)arg1;	// IMP=0x00000000011b48f8
- (double)transitionDuration:(id)arg1;	// IMP=0x00000000011b48cf
- (id)animationControllerForDismissedController:(id)arg1;	// IMP=0x00000000011b48ad
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;	// IMP=0x00000000011b4888
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;	// IMP=0x00000000011b4221
- (id)_sourcePreviewPortal;	// IMP=0x00000000011b4082
- (void)_applyStashedParentViewControllerIfNecessary;	// IMP=0x00000000011b3d72
- (void)_stashParentViewControllerIfNecessary;	// IMP=0x00000000011b3c41
- (void)dismissViewController;	// IMP=0x00000000011b391e
- (void)presentFromViewController:(id)arg1 sourcePreview:(id)arg2 dismissalCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000000011b37fc
- (id)initWithViewControllerPresentation:(id)arg1;	// IMP=0x00000000011b3794

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

