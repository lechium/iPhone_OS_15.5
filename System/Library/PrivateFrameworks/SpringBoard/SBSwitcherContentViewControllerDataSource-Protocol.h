//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class NSArray, NSOrderedSet, NSString, NSUUID, SBAppLayout, SBDisplayItem, SBIconView, SBMainDisplayLayoutState, SBTransientOverlayViewController, SBTransitionSwitcherModifierEvent, SBWindow, SBWorkspaceApplicationSceneTransitionContext, SBWorkspaceTransientOverlay;
@protocol SBSwitcherContentViewControlling;

@protocol SBSwitcherContentViewControllerDataSource <NSObject>
- (SBTransitionSwitcherModifierEvent *)switcherContentController:(id <SBSwitcherContentViewControlling>)arg1 transitionEventForContext:(SBWorkspaceApplicationSceneTransitionContext *)arg2 identifier:(NSUUID *)arg3 phase:(unsigned long long)arg4 animated:(_Bool)arg5;
- (SBTransitionSwitcherModifierEvent *)switcherContentController:(id <SBSwitcherContentViewControlling>)arg1 transitionEventForLayoutState:(SBMainDisplayLayoutState *)arg2 identifier:(NSUUID *)arg3 phase:(unsigned long long)arg4 animated:(_Bool)arg5;
- (long long)sbActiveInterfaceOrientation;
- (long long)switcherInterfaceOrientationForContentController:(id <SBSwitcherContentViewControlling>)arg1;
- (NSArray *)appLayoutsForSwitcherContentController:(id <SBSwitcherContentViewControlling>)arg1;

@optional
- (_Bool)switcherContentControllerIsKeyboardHomeAffordanceAssertionCurrentlyBeingTaken:(id <SBSwitcherContentViewControlling>)arg1;
- (_Bool)switcherContentController:(id <SBSwitcherContentViewControlling>)arg1 displayItemSupportsCenterRole:(SBDisplayItem *)arg2;
- (_Bool)switcherContentController:(id <SBSwitcherContentViewControlling>)arg1 supportsKillingOfAppLayout:(SBAppLayout *)arg2;
- (_Bool)switcherContentController:(id <SBSwitcherContentViewControlling>)arg1 supportsTitleItemsForAppLayout:(SBAppLayout *)arg2;
- (_Bool)switcherContentControllerReloadsSnapshotsForActiveInterfaceOrientationChange:(id <SBSwitcherContentViewControlling>)arg1;
- (NSArray *)switcherContentController:(id <SBSwitcherContentViewControlling>)arg1 hiddenAppLayoutsForBundleIdentifier:(NSString *)arg2;
- (NSOrderedSet *)switcherContentController:(id <SBSwitcherContentViewControlling>)arg1 visibleDisplayItemsForBundleIdentifier:(NSString *)arg2;
- (NSArray *)switcherContentController:(id <SBSwitcherContentViewControlling>)arg1 visibleAppLayoutsForBundleIdentifier:(NSString *)arg2;
- (_Bool)isInAppStatusBarRequestedHiddenForSwitcherContentController:(id <SBSwitcherContentViewControlling>)arg1;
- (_Bool)switcherContentController:(id <SBSwitcherContentViewControlling>)arg1 shouldMorphFromPIPForTransitionContext:(SBWorkspaceApplicationSceneTransitionContext *)arg2;
- (_Bool)switcherContentController:(id <SBSwitcherContentViewControlling>)arg1 shouldMorphToPIPForTransitionContext:(SBWorkspaceApplicationSceneTransitionContext *)arg2;
- (long long)backdropInterfaceStyleForContentController:(id <SBSwitcherContentViewControlling>)arg1;
- (long long)homeScreenInterfaceOrientation;
- (SBWindow *)mainSwitcherWindow;
- (struct CGRect)frameForCenterItemWithConfiguration:(long long)arg1 interfaceOrientation:(long long)arg2;
- (struct CGRect)frameForFloatingAppLayoutInInterfaceOrientation:(long long)arg1 floatingConfiguration:(long long)arg2;
- (struct CGRect)frameForItemWithRole:(long long)arg1 inMainAppLayout:(SBAppLayout *)arg2 interfaceOrientation:(long long)arg3;
- (SBIconView *)matchingIconViewForIconView:(SBIconView *)arg1;
- (SBWorkspaceTransientOverlay *)createWorkspaceTransientOverlayForAppLayout:(SBAppLayout *)arg1;
- (SBTransientOverlayViewController *)viewControllerForTransientOverlayAppLayout:(SBAppLayout *)arg1;
- (SBAppLayout *)appLayoutForWorkspaceTransientOverlay:(SBWorkspaceTransientOverlay *)arg1;
- (SBAppLayout *)activeTransientOverlayPresentedAppLayoutForSwitcherContentController:(id <SBSwitcherContentViewControlling>)arg1;
@end
