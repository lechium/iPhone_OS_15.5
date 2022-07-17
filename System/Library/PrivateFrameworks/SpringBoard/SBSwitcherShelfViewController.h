//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardFoundation/SBFTouchPassThroughViewController.h>

#import <SpringBoard/SBAssistantObserver-Protocol.h>
#import <SpringBoard/SBAttentionAwarenessClientDelegate-Protocol.h>
#import <SpringBoard/SBLayoutStateTransitionObserver-Protocol.h>
#import <SpringBoard/SBShelfLiveContentOverlayCoordinatorDelegate-Protocol.h>
#import <SpringBoard/SBSwitcherContentViewControllerDataSource-Protocol.h>
#import <SpringBoard/SBSwitcherContentViewControllerDelegate-Protocol.h>
#import <SpringBoard/SBTransientUIIndirectPanToDismissParticipant-Protocol.h>
#import <SpringBoard/SBTransientUITapToDismissParticipant-Protocol.h>

@class NSArray, NSSet, NSString, SBAttentionAwarenessClient, SBFluidSwitcherViewController, SBMainDisplaySceneManager, SBMainSwitcherViewController, SBPortalView, SBShelfLiveContentOverlayCoordinator, SBShelfRootSwitcherModifier, SBSwitcherShelf, SBSwitcherShelfView;
@protocol SBSwitcherShelfViewControllerDelegate;

@interface SBSwitcherShelfViewController : SBFTouchPassThroughViewController <SBSwitcherContentViewControllerDelegate, SBSwitcherContentViewControllerDataSource, SBShelfLiveContentOverlayCoordinatorDelegate, SBAssistantObserver, SBTransientUIIndirectPanToDismissParticipant, SBTransientUITapToDismissParticipant, SBAttentionAwarenessClientDelegate, SBLayoutStateTransitionObserver>
{
    SBMainSwitcherViewController *_mainSwitcherViewController;	// 8 = 0x8
    SBMainDisplaySceneManager *_sceneManager;	// 16 = 0x10
    SBFluidSwitcherViewController *_contentViewController;	// 24 = 0x18
    SBShelfLiveContentOverlayCoordinator *_liveContentOverlayCoordinator;	// 32 = 0x20
    SBShelfRootSwitcherModifier *_rootModifier;	// 40 = 0x28
    SBAttentionAwarenessClient *_idleTouchAwarenessClient;	// 48 = 0x30
    NSArray *_appLayouts;	// 56 = 0x38
    struct CGSize _halfHalfSize;	// 64 = 0x40
    long long _activePresentationAndDismissalAnimations;	// 80 = 0x50
    _Bool _presented;	// 88 = 0x58
    id <SBSwitcherShelfViewControllerDelegate> _delegate;	// 96 = 0x60
    SBSwitcherShelf *_shelf;	// 104 = 0x68
    unsigned long long _contentOptions;	// 112 = 0x70
    NSSet *_ignoredDisplayItems;	// 120 = 0x78
    long long _contentOrientation;	// 128 = 0x80
    SBPortalView *_homeAffordancePortalView;	// 136 = 0x88
    unsigned long long _animationStyle;	// 144 = 0x90
    struct CGRect _presentationTargetFrame;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x00000000006c4a03
@property(readonly, nonatomic) unsigned long long animationStyle; // @synthesize animationStyle=_animationStyle;
@property(readonly, nonatomic) struct CGRect presentationTargetFrame; // @synthesize presentationTargetFrame=_presentationTargetFrame;
@property(readonly, nonatomic) _Bool presented; // @synthesize presented=_presented;
@property(retain, nonatomic) SBPortalView *homeAffordancePortalView; // @synthesize homeAffordancePortalView=_homeAffordancePortalView;
@property(nonatomic) long long contentOrientation; // @synthesize contentOrientation=_contentOrientation;
@property(copy, nonatomic) NSSet *ignoredDisplayItems; // @synthesize ignoredDisplayItems=_ignoredDisplayItems;
@property(nonatomic) unsigned long long contentOptions; // @synthesize contentOptions=_contentOptions;
@property(readonly, copy, nonatomic) NSArray *appLayouts; // @synthesize appLayouts=_appLayouts;
@property(readonly, nonatomic) SBSwitcherShelf *shelf; // @synthesize shelf=_shelf;
@property(readonly, nonatomic) __weak id <SBSwitcherShelfViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_dockHeightWillChange:(id)arg1;	// IMP=0x00000000006c47c7
- (void)dismissShelfWithTransitionSource:(long long)arg1;	// IMP=0x00000000006c4621
- (void)dismissShelfForAccessibilityTransition;	// IMP=0x00000000006c460a
- (void)dismissShelfForShelfTransition;	// IMP=0x00000000006c45f3
- (void)clientDidResetForUserAttention:(id)arg1;	// IMP=0x00000000006c4514
- (void)client:(id)arg1 attentionLostTimeoutDidExpire:(double)arg2 forConfigurationGeneration:(unsigned long long)arg3 withAssociatedObject:(id)arg4;	// IMP=0x00000000006c450e
- (void)assistantWillAppear:(id)arg1;	// IMP=0x00000000006c44ed
- (id)shelfLiveContentOverlayCoordinator:(id)arg1 liveViewForAppLayout:(id)arg2;	// IMP=0x00000000006c4467
- (id)shelfLiveContentOverlayCoordinatorSnapshotCache:(id)arg1;	// IMP=0x00000000006c444a
- (id)shelfLiveContentOverlayCoordinatorAppLayouts:(id)arg1;	// IMP=0x00000000006c4435
- (void)transientUI:(id)arg1 wasIndirectPannedToDismissFromGestureRecognizer:(id)arg2;	// IMP=0x00000000006c42ff
- (_Bool)transientUIHandledTouch:(id)arg1 withSystemGestureRecognizer:(id)arg2;	// IMP=0x00000000006c41e2
- (_Bool)_dismissShelfIfNeededWithLocation:(struct CGPoint)arg1 window:(id)arg2;	// IMP=0x00000000006c3fd2
- (_Bool)switcherContentController:(id)arg1 shouldSkipNonAnimatedLayoutPassAfterTransition:(id)arg2;	// IMP=0x00000000006c3fca
- (void)switcherContentController:(id)arg1 requestNewWindowForBundleIdentifier:(id)arg2;	// IMP=0x00000000006c3b92
- (void)switcherContentController:(id)arg1 setContentOrientation:(long long)arg2;	// IMP=0x00000000006c3b7d
- (void)switcherContentController:(id)arg1 deletedDisplayItem:(id)arg2 inAppLayout:(id)arg3 forReason:(long long)arg4;	// IMP=0x00000000006c3a4f
- (void)switcherContentController:(id)arg1 performTransitionWithRequest:(id)arg2 gestureInitiated:(_Bool)arg3;	// IMP=0x00000000006c3409
- (_Bool)switcherContentController:(id)arg1 supportsTitleItemsForAppLayout:(id)arg2;	// IMP=0x00000000006c33b4
- (struct CGRect)frameForCenterItemWithConfiguration:(long long)arg1 interfaceOrientation:(long long)arg2;	// IMP=0x00000000006c3376
- (struct CGRect)frameForFloatingAppLayoutInInterfaceOrientation:(long long)arg1 floatingConfiguration:(long long)arg2;	// IMP=0x00000000006c32df
- (struct CGRect)frameForItemWithRole:(long long)arg1 inMainAppLayout:(id)arg2 interfaceOrientation:(long long)arg3;	// IMP=0x00000000006c3228
- (id)switcherContentController:(id)arg1 transitionEventForContext:(id)arg2 identifier:(id)arg3 phase:(unsigned long long)arg4 animated:(_Bool)arg5;	// IMP=0x00000000006c31fa
- (id)switcherContentController:(id)arg1 transitionEventForLayoutState:(id)arg2 identifier:(id)arg3 phase:(unsigned long long)arg4 animated:(_Bool)arg5;	// IMP=0x00000000006c31ce
- (long long)sbActiveInterfaceOrientation;	// IMP=0x00000000006c31b2
- (long long)switcherInterfaceOrientationForContentController:(id)arg1;	// IMP=0x00000000006c31a1
- (id)appLayoutsForSwitcherContentController:(id)arg1;	// IMP=0x00000000006c318c
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidEndWithTransitionContext:(id)arg2;	// IMP=0x00000000006c310c
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionWillEndWithTransitionContext:(id)arg2;	// IMP=0x00000000006c308c
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2;	// IMP=0x00000000006c300c
- (double)itemCornerRadiusForAppLayout:(id)arg1;	// IMP=0x00000000006c2ef4
- (double)itemScaleForAppLayout:(id)arg1;	// IMP=0x00000000006c2ed7
- (struct CGRect)itemFrameForAppLayout:(id)arg1;	// IMP=0x00000000006c2e99
- (id)beginHidingAppLayout:(id)arg1 forReason:(id)arg2;	// IMP=0x00000000006c2e7c
- (void)performKeyboardShortcutAction:(long long)arg1;	// IMP=0x00000000006c2e62
- (void)performTransitionWithContext:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000006c2887
- (void)setPresented:(_Bool)arg1 withTargetFrame:(struct CGRect)arg2 style:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000006c2436
- (void)_rebuildCachedAppLayouts;	// IMP=0x00000000006c1457
@property(retain, nonatomic) NSSet *focusedDisplayItems;
@property(readonly, nonatomic, getter=isPresentingOrDismissing) _Bool presentingOrDismissing;
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000006c1119
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000006c1005
- (void)viewDidLayoutSubviews;	// IMP=0x00000000006c0e9f
- (void)viewWillLayoutSubviews;	// IMP=0x00000000006c0c21
- (void)viewDidLoad;	// IMP=0x00000000006c0b7b
- (void)loadView;	// IMP=0x00000000006c0b0e
- (void)dealloc;	// IMP=0x00000000006c0a22
- (id)initWithShelf:(id)arg1 mainSwitcherViewController:(id)arg2 sceneManager:(id)arg3 delegate:(id)arg4;	// IMP=0x00000000006c05ce

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) SBSwitcherShelfView *view; // @dynamic view;

@end
