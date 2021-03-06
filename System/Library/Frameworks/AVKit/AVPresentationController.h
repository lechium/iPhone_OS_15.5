//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIPresentationController.h>

@class AVObservationController, AVPresentationContext, UIWindow;

__attribute__((visibility("hidden")))
@interface AVPresentationController : UIPresentationController
{
    AVPresentationContext *_context;	// 8 = 0x8
    AVObservationController *_observationController;	// 16 = 0x10
    UIWindow *_presentationWindowForDisablingAutorotation;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000005d5b6
@property(nonatomic) __weak UIWindow *presentationWindowForDisablingAutorotation; // @synthesize presentationWindowForDisablingAutorotation=_presentationWindowForDisablingAutorotation;
@property(readonly, nonatomic) AVObservationController *observationController; // @synthesize observationController=_observationController;
@property(readonly, nonatomic) AVPresentationContext *context; // @synthesize context=_context;
- (void)_observeSceneDidBecomeActiveForRestoringRotatability;	// IMP=0x000000000005d514
- (void)dismissalTransitionDidEnd:(_Bool)arg1;	// IMP=0x000000000005d07e
- (void)_prepareDismissingTransitionContext;	// IMP=0x000000000005c708
- (void)dismissalTransitionWillBegin;	// IMP=0x000000000005c39e
- (void)_ensureOrientation:(long long)arg1 enablingMixedOrientations:(_Bool)arg2;	// IMP=0x000000000005b809
- (void)presentationTransitionDidEnd:(_Bool)arg1;	// IMP=0x000000000005b688
- (void)presentationTransitionWillBegin;	// IMP=0x000000000005a9bc
- (void)containerViewWillLayoutSubviews;	// IMP=0x000000000005a780
- (_Bool)shouldPresentInFullscreen;	// IMP=0x000000000005a778
- (_Bool)shouldRemovePresentersView;	// IMP=0x000000000005a730
- (void)dealloc;	// IMP=0x000000000005a581
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 withConfiguration:(id)arg3;	// IMP=0x000000000005a413

@end

