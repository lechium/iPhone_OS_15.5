//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UINavigationController.h>

@interface UINavigationController (PXDiagnosticsEnvironment)
+ (id)px_defaultDelegateForNavigationController:(id)arg1;	// IMP=0x000000000042b6f0
+ (id)px_navigationControllerShouldUseBuiltinInteractionController:(id)arg1;	// IMP=0x000000000042b669
+ (id)px_navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;	// IMP=0x000000000042b5ce
+ (id)px_navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;	// IMP=0x000000000042b50a
- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;	// IMP=0x0000000000376c7c
- (double)px_imageModulationIntensity;	// IMP=0x000000000051b58d
- (double)px_HDRFocus;	// IMP=0x000000000051b53d
- (_Bool)px_isImageModulationEnabled;	// IMP=0x000000000051b4f9
- (id)px_topViewController;	// IMP=0x000000000051b4e7
- (id)px_navigationDestination;	// IMP=0x0000000000799ffc
- (void)navigateToDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000799dbc
- (void)_px_prepareNavigationFromViewController:(id)arg1 routingOptions:(unsigned long long)arg2 options:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000799cb7
- (id)nextExistingParticipantOnRouteToDestination:(id)arg1;	// IMP=0x0000000000799c10
- (unsigned long long)routingOptionsForDestination:(id)arg1;	// IMP=0x0000000000799b73
- (void)px_navigateToStateAllowingTabSwitchingWithOptions:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000799ad1
- (_Bool)px_allowsTabSwitching;	// IMP=0x0000000000799a5e
- (void)px_pushViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000008644ff
- (id)px_popToViewControllerPrecedingViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000864425
- (_Bool)px_preparePopToViewController:(id)arg1 forced:(_Bool)arg2;	// IMP=0x00000000008641d8
- (void)_ppt_setTransitionAnimationCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000864171
- (CDUnknownBlockType)_ppt_transitionAnimationCompletionHandler;	// IMP=0x0000000000864133
- (void)ppt_notifyTransitionAnimationDidComplete;	// IMP=0x00000000008640e7
- (void)ppt_installTransitionAnimationCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000863ff4
- (id)px_endPointForTransition:(id)arg1;	// IMP=0x00000000009496f7
@end

