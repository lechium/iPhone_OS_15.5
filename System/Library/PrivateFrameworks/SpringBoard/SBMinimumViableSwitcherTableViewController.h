//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

#import <SpringBoard/SBSwitcherContentViewControlling-Protocol.h>

@class BSAnimationSettings, NSString, SBApplicationSceneView, SBBestAppSuggestion;
@protocol SBSwitcherContentViewControllerDataSource, SBSwitcherContentViewControllerDelegate;

@interface SBMinimumViableSwitcherTableViewController : UITableViewController <SBSwitcherContentViewControlling>
{
    id <SBSwitcherContentViewControllerDelegate> _delegate;	// 8 = 0x8
    SBApplicationSceneView *_temporaryAppView;	// 16 = 0x10
    SBApplicationSceneView *_temporarySideAppView;	// 24 = 0x18
    SBBestAppSuggestion *_bestAppSuggestion;	// 32 = 0x20
    _Bool _asyncRenderingDisabled;	// 40 = 0x28
    id <SBSwitcherContentViewControllerDataSource> _dataSource;	// 48 = 0x30
    long long _contentOrientation;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000028db86
@property(nonatomic, getter=isAsyncRenderingDisabled) _Bool asyncRenderingDisabled; // @synthesize asyncRenderingDisabled=_asyncRenderingDisabled;
@property(nonatomic) long long contentOrientation; // @synthesize contentOrientation=_contentOrientation;
@property(retain, nonatomic) SBBestAppSuggestion *bestAppSuggestion; // @synthesize bestAppSuggestion=_bestAppSuggestion;
@property(nonatomic) __weak id <SBSwitcherContentViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <SBSwitcherContentViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_statusBarStyleRequestForDefaultStyle;	// IMP=0x000000000028da80
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;	// IMP=0x000000000028da73
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x000000000028d94b
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;	// IMP=0x000000000028d865
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000028d5d1
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000028d298
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000028d22c
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000000028d211
- (void)viewDidLoad;	// IMP=0x000000000028d146
- (id)trailingStatusBarStyleRequest;	// IMP=0x000000000028d134
- (id)leadingStatusBarStyleRequest;	// IMP=0x000000000028d122
- (void)tapReceivedForGrabberTongueAtEdge:(unsigned long long)arg1;	// IMP=0x000000000028d11c
- (void)clickReceivedForHomeGrabberView:(id)arg1;	// IMP=0x000000000028d112
- (void)noteAppLayoutsDidChange;	// IMP=0x000000000028d0d5
- (void)removeLayoutRole:(long long)arg1 inSpace:(id)arg2 mutationBlock:(CDUnknownBlockType)arg3 reason:(long long)arg4;	// IMP=0x000000000028cfa6
- (_Bool)handleHeadsetButtonPress:(_Bool)arg1;	// IMP=0x000000000028cf9e
- (_Bool)handleVolumeDownButtonPress;	// IMP=0x000000000028cf96
- (_Bool)handleVolumeUpButtonPress;	// IMP=0x000000000028cf8e
- (_Bool)handleVoiceCommandButtonPress;	// IMP=0x000000000028cf86
- (_Bool)handleLockButtonPress;	// IMP=0x000000000028cf7e
- (_Bool)handleHomeButtonLongPress;	// IMP=0x000000000028cf76
- (_Bool)handleHomeButtonDoublePress;	// IMP=0x000000000028cf6e
- (_Bool)handleHomeButtonPress;	// IMP=0x000000000028cf66
- (void)performAnimatedInsertionOfAppLayouts:(id)arg1 atIndexes:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000028cf4b
- (void)noteModelDidMutateForInsertionOfAppLayouts:(id)arg1 atIndexes:(id)arg2 willAnimate:(_Bool)arg3;	// IMP=0x000000000028ce0e
- (void)prepareAnimatedInsertionOfAppLayouts:(id)arg1 atIndexes:(id)arg2;	// IMP=0x000000000028ce08
- (_Bool)shouldAnimateInsertionOfAppLayouts:(id)arg1 atIndexes:(id)arg2;	// IMP=0x000000000028ce00
- (id)iconForAppLayout:(id)arg1;	// IMP=0x000000000028cdf8
- (void)performKeyboardShortcutAction:(long long)arg1;	// IMP=0x000000000028cdf2
- (_Bool)canPerformKeyboardShortcutAction:(long long)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x000000000028cdea
- (void)noteKeyboardFocusDidChangeToSceneID:(id)arg1;	// IMP=0x000000000028cde4
@property(nonatomic, getter=isShowingModifierTimeline) _Bool showModifierTimeline;
- (void)handleGestureDidEnd:(id)arg1;	// IMP=0x000000000028cdd0
- (void)handleGestureDidUpdate:(id)arg1;	// IMP=0x000000000028cdca
- (void)handleGestureDidBegin:(id)arg1;	// IMP=0x000000000028cdc4
- (id)animationControllerForTransitionRequest:(id)arg1;	// IMP=0x000000000028cdbc
@property(readonly, copy, nonatomic) BSAnimationSettings *defaultTransitionAnimationSettings;
@property(readonly, nonatomic) _Bool canInterruptActiveTransition;
- (void)performTransitionWithContext:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000028cc26
- (id)_appLayouts;	// IMP=0x000000000028cbc7
- (void)respondToInAppStatusBarRequestedHiddenUpdateAnimated:(_Bool)arg1;	// IMP=0x000000000028cbc1
- (_Bool)isStatusBarHiddenForAppLayout:(id)arg1;	// IMP=0x000000000028cbb9
- (_Bool)shouldRubberbandFullScreenHomeGrabberView;	// IMP=0x000000000028cbb1
- (_Bool)shouldAcceleratedHomeButtonPressBegin;	// IMP=0x000000000028cba9
- (_Bool)isUserInteractionEnabled;	// IMP=0x000000000028cb97
- (_Bool)isWindowVisible;	// IMP=0x000000000028cb1d
- (_Bool)shouldAddAppLayoutToFront:(id)arg1 forTransitionWithContext:(id)arg2 transitionCompleted:(_Bool)arg3;	// IMP=0x000000000028cb15
- (void)relinquishTransientOverlayViewController:(id)arg1;	// IMP=0x000000000028cb0f
- (void)failMultitaskingGesturesForReason:(id)arg1;	// IMP=0x000000000028cb09
- (double)minimumHomeScreenScale;	// IMP=0x000000000028cafb
- (double)switcherCardScale;	// IMP=0x000000000028caed
- (double)snapshotScaleForSceneHandle:(id)arg1;	// IMP=0x000000000028cadf
- (struct CGRect)applicationSceneSettingsFrameForInterfaceOrientation:(long long)arg1 centerConfiguration:(long long)arg2;	// IMP=0x000000000028cac1
- (void)acquiredViewController:(id)arg1 forTransientOverlayAppLayout:(id)arg2;	// IMP=0x000000000028cabb
- (long long)switcherPreferredInterfaceOrientation;	// IMP=0x000000000028cab3
- (unsigned long long)_debugSwitcherPostModernRotationSupportedSupportedInterfaceOrientations;	// IMP=0x000000000028caa8
- (unsigned long long)switcherSupportedInterfaceOrientations;	// IMP=0x000000000028ca9d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
