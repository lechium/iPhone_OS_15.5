//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeUI/HFItemManagerDelegate-Protocol.h>
#import <HomeUI/HUCardViewControllerDelegate-Protocol.h>
#import <HomeUI/HUHomeStatusDetailsViewControllerDelegate-Protocol.h>
#import <HomeUI/HUPresentationDelegate-Protocol.h>
#import <HomeUI/HUQuickControlContainerViewControllerDelegate-Protocol.h>
#import <HomeUI/UIGestureRecognizerDelegate-Protocol.h>
#import <HomeUI/UINavigationControllerDelegate-Protocol.h>
#import <HomeUI/UIPresentationControllerDelegatePrivate-Protocol.h>
#import <HomeUI/UITraitEnvironment-Protocol.h>
#import <HomeUI/UIViewControllerTransitioningDelegate-Protocol.h>
#import <HomeUI/_UIClickPresentationInteractionDelegate-Protocol.h>
#import <HomeUI/_UISheetPresentationControllerDelegate-Protocol.h>

@class HUCardViewController, HUForceInterpolatedPressGestureRecognizer, HUGridActionSetTitleAndDescriptionView, HUGridServiceCell, HUGridServiceCellTextView, HUHomeStatusDetailsViewController, HUIconView, HUPressedItemContext, HUQuickControlContainerViewController, HUQuickControlNavigationController, HUQuickControlPresentationContext, NSMapTable, NSMutableSet, NSString, UIImpactFeedbackGenerator, UILabel, UINavigationController, UITapGestureRecognizer, UITraitCollection, UIView, UIViewController, UIVisualEffectView, _UIClickPresentationInteraction;
@protocol HUQuickControlPresentationCoordinatorDelegate, NACancelable;

@interface HUQuickControlPresentationCoordinator : NSObject <HUQuickControlContainerViewControllerDelegate, HUPresentationDelegate, UIGestureRecognizerDelegate, HUCardViewControllerDelegate, UIPresentationControllerDelegatePrivate, _UIClickPresentationInteractionDelegate, UIViewControllerTransitioningDelegate, _UISheetPresentationControllerDelegate, UINavigationControllerDelegate, HUHomeStatusDetailsViewControllerDelegate, HFItemManagerDelegate, UITraitEnvironment>
{
    _Bool _isEditing;	// 8 = 0x8
    HUCardViewController *_cardViewController;	// 16 = 0x10
    HUQuickControlPresentationContext *_presentationContext;	// 24 = 0x18
    HUQuickControlContainerViewController *_quickControlViewController;	// 32 = 0x20
    HUGridServiceCell *_pressedTile;	// 40 = 0x28
    UIView *_targetView;	// 48 = 0x30
    id <HUQuickControlPresentationCoordinatorDelegate> _delegate;	// 56 = 0x38
    HUQuickControlNavigationController *_cardNavigationController;	// 64 = 0x40
    UIViewController *_settingsViewController;	// 72 = 0x48
    UINavigationController *_statusDetailsNavigationController;	// 80 = 0x50
    HUHomeStatusDetailsViewController *_statusDetailsViewController;	// 88 = 0x58
    UITapGestureRecognizer *_singleTapGestureRecognizer;	// 96 = 0x60
    UITapGestureRecognizer *_doubleTapGestureRecognizer;	// 104 = 0x68
    HUForceInterpolatedPressGestureRecognizer *_pressGestureRecognizer;	// 112 = 0x70
    NSMutableSet *_mutuallyExclusiveGestureRecognizers;	// 120 = 0x78
    id <NACancelable> _pressGestureActiveTimerCancellationToken;	// 128 = 0x80
    NSMapTable *_pressedItemContexts;	// 136 = 0x88
    _UIClickPresentationInteraction *_presentationInteraction;	// 144 = 0x90
    UIView *_pressedTileBlurEffectView;	// 152 = 0x98
    UIView *_pressedTilePrerenderedView;	// 160 = 0xa0
    HUIconView *_transitionIconView;	// 168 = 0xa8
    HUIconView *_transitionIconViewVibrant;	// 176 = 0xb0
    UILabel *_transitionPrimaryLabel;	// 184 = 0xb8
    HUGridServiceCellTextView *_transitionTextView;	// 192 = 0xc0
    HUGridServiceCellTextView *_transitionTextViewVibrant;	// 200 = 0xc8
    UIVisualEffectView *_transitionTextViewVibrantEffectView;	// 208 = 0xd0
    HUGridActionSetTitleAndDescriptionView *_transitionTitleAndDescriptionView;	// 216 = 0xd8
    UIVisualEffectView *_transitionTitleAndDescriptionVibrantEffectView;	// 224 = 0xe0
    UILabel *_transitionSecondaryLabel;	// 232 = 0xe8
    UIVisualEffectView *_transitionSecondaryLabelVibrantEffectView;	// 240 = 0xf0
    UIVisualEffectView *_transitionBlurView;	// 248 = 0xf8
    UIImpactFeedbackGenerator *_feedbackGenerator;	// 256 = 0x100
}

- (void).cxx_destruct;	// IMP=0x000000000045102e
@property(retain, nonatomic) UIImpactFeedbackGenerator *feedbackGenerator; // @synthesize feedbackGenerator=_feedbackGenerator;
@property(retain, nonatomic) UIVisualEffectView *transitionBlurView; // @synthesize transitionBlurView=_transitionBlurView;
@property(retain, nonatomic) UIVisualEffectView *transitionSecondaryLabelVibrantEffectView; // @synthesize transitionSecondaryLabelVibrantEffectView=_transitionSecondaryLabelVibrantEffectView;
@property(retain, nonatomic) UILabel *transitionSecondaryLabel; // @synthesize transitionSecondaryLabel=_transitionSecondaryLabel;
@property(retain, nonatomic) UIVisualEffectView *transitionTitleAndDescriptionVibrantEffectView; // @synthesize transitionTitleAndDescriptionVibrantEffectView=_transitionTitleAndDescriptionVibrantEffectView;
@property(retain, nonatomic) HUGridActionSetTitleAndDescriptionView *transitionTitleAndDescriptionView; // @synthesize transitionTitleAndDescriptionView=_transitionTitleAndDescriptionView;
@property(retain, nonatomic) UIVisualEffectView *transitionTextViewVibrantEffectView; // @synthesize transitionTextViewVibrantEffectView=_transitionTextViewVibrantEffectView;
@property(retain, nonatomic) HUGridServiceCellTextView *transitionTextViewVibrant; // @synthesize transitionTextViewVibrant=_transitionTextViewVibrant;
@property(retain, nonatomic) HUGridServiceCellTextView *transitionTextView; // @synthesize transitionTextView=_transitionTextView;
@property(retain, nonatomic) UILabel *transitionPrimaryLabel; // @synthesize transitionPrimaryLabel=_transitionPrimaryLabel;
@property(retain, nonatomic) HUIconView *transitionIconViewVibrant; // @synthesize transitionIconViewVibrant=_transitionIconViewVibrant;
@property(retain, nonatomic) HUIconView *transitionIconView; // @synthesize transitionIconView=_transitionIconView;
@property(retain, nonatomic) UIView *pressedTilePrerenderedView; // @synthesize pressedTilePrerenderedView=_pressedTilePrerenderedView;
@property(retain, nonatomic) UIView *pressedTileBlurEffectView; // @synthesize pressedTileBlurEffectView=_pressedTileBlurEffectView;
@property(retain, nonatomic) _UIClickPresentationInteraction *presentationInteraction; // @synthesize presentationInteraction=_presentationInteraction;
@property(readonly, nonatomic) NSMapTable *pressedItemContexts; // @synthesize pressedItemContexts=_pressedItemContexts;
@property(retain, nonatomic) id <NACancelable> pressGestureActiveTimerCancellationToken; // @synthesize pressGestureActiveTimerCancellationToken=_pressGestureActiveTimerCancellationToken;
@property(readonly, nonatomic) NSMutableSet *mutuallyExclusiveGestureRecognizers; // @synthesize mutuallyExclusiveGestureRecognizers=_mutuallyExclusiveGestureRecognizers;
@property(retain, nonatomic) HUForceInterpolatedPressGestureRecognizer *pressGestureRecognizer; // @synthesize pressGestureRecognizer=_pressGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *doubleTapGestureRecognizer; // @synthesize doubleTapGestureRecognizer=_doubleTapGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *singleTapGestureRecognizer; // @synthesize singleTapGestureRecognizer=_singleTapGestureRecognizer;
@property(retain, nonatomic) HUHomeStatusDetailsViewController *statusDetailsViewController; // @synthesize statusDetailsViewController=_statusDetailsViewController;
@property(retain, nonatomic) UINavigationController *statusDetailsNavigationController; // @synthesize statusDetailsNavigationController=_statusDetailsNavigationController;
@property(retain, nonatomic) UIViewController *settingsViewController; // @synthesize settingsViewController=_settingsViewController;
@property(retain, nonatomic) HUQuickControlNavigationController *cardNavigationController; // @synthesize cardNavigationController=_cardNavigationController;
@property(nonatomic) _Bool isEditing; // @synthesize isEditing=_isEditing;
@property(nonatomic) __weak id <HUQuickControlPresentationCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak UIView *targetView; // @synthesize targetView=_targetView;
@property(retain, nonatomic) HUGridServiceCell *pressedTile; // @synthesize pressedTile=_pressedTile;
@property(retain, nonatomic) HUQuickControlContainerViewController *quickControlViewController; // @synthesize quickControlViewController=_quickControlViewController;
@property(retain, nonatomic) HUQuickControlPresentationContext *presentationContext; // @synthesize presentationContext=_presentationContext;
@property(retain, nonatomic) HUCardViewController *cardViewController; // @synthesize cardViewController=_cardViewController;
- (void)_logInteractionEventOfType:(unsigned long long)arg1 withPresentationContext:(id)arg2;	// IMP=0x000000000045081f
- (struct CGRect)sourceFrameForAnimationController;	// IMP=0x000000000045048c
- (_Bool)_isRTL;	// IMP=0x0000000000450419
- (id)_dismissServiceDetailsViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000045015a
- (id)_dismissCardViewController;	// IMP=0x000000000044ff5a
- (id)_dismissChildViewController;	// IMP=0x000000000044fcce
- (void)itemManager:(id)arg1 didChangeSourceItem:(id)arg2;	// IMP=0x000000000044fb7b
- (id)finishPresentation:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000044f7f1
- (void)statusDetailViewControllerDidFinish:(id)arg1;	// IMP=0x000000000044f7ad
- (void)quickControlViewControllerDidTapDetailsButton:(id)arg1;	// IMP=0x000000000044f76b
- (void)quickControlViewControllerWillDismissDetailsViewController:(id)arg1 shouldDismissQuickControl:(_Bool)arg2;	// IMP=0x000000000044f6f6
- (id)detailsViewControllerForQuickControlViewController:(id)arg1 item:(id)arg2;	// IMP=0x000000000044f670
- (_Bool)hasDetailsActionForQuickControlViewController:(id)arg1 item:(id)arg2;	// IMP=0x000000000044f5f6
- (id)quickControlViewController:(id)arg1 applierForSourceViewTransitionWithAnimationSettings:(id)arg2 presenting:(_Bool)arg3;	// IMP=0x000000000044f46c
- (double)quickControlViewController:(id)arg1 sourceViewInitialScaleForPresentation:(_Bool)arg2;	// IMP=0x000000000044f40e
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x000000000044f335
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;	// IMP=0x000000000044f28c
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x000000000044f1cd
- (id)cardViewControllerRequestingDismissal:(id)arg1;	// IMP=0x000000000044f1bb
- (void)presentationControllerWillDismiss:(id)arg1;	// IMP=0x000000000044ef42
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000000044ee94
- (id)_prepareSettingsViewController;	// IMP=0x000000000044e8ec
@property(readonly, nonatomic, getter=isQuickControlPresented) _Bool quickControlIsPresented;
- (void)_cleanupForQuickControlDismissal;	// IMP=0x000000000044e820
- (void)_restoreOriginalTile;	// IMP=0x000000000044e6be
- (id)_dismissQuickControlViewControllerAnimated:(_Bool)arg1;	// IMP=0x000000000044e29c
- (id)dismissQuickControlAnimated:(_Bool)arg1;	// IMP=0x000000000044e111
- (id)dismissQuickControlAnimated:(_Bool)arg1 wasDismissed:(_Bool *)arg2;	// IMP=0x000000000044e0c9
- (void)_validatePresentationContext:(id)arg1;	// IMP=0x000000000044df2a
- (id)_buildSoftwareUpdateNavigationController;	// IMP=0x000000000044de4e
- (id)_buildStatusDetailsNavigationController;	// IMP=0x000000000044dcc4
- (id)_buildCardNavigationController;	// IMP=0x000000000044d18b
- (void)_updateCardController;	// IMP=0x000000000044cb73
- (id)_buildQuickControlViewController;	// IMP=0x000000000044c931
- (id)_viewControllerToPresent;	// IMP=0x000000000044c810
- (id)_beginControlPresentationAnimated:(_Bool)arg1;	// IMP=0x000000000044c500
- (_Bool)_shouldCancelPresentation;	// IMP=0x000000000044c444
- (id)presentQuickControlWithContext:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000044c377
- (void)_actuateTapticFeedback;	// IMP=0x000000000044c2f6
- (void)_prepareForTapticFeedback;	// IMP=0x000000000044c26e
- (void)_pressedStateDidEndForItem:(id)arg1 clearPresentationContext:(_Bool)arg2;	// IMP=0x000000000044c058
- (void)_updateOverrideAttributesWithTransform:(struct CGAffineTransform)arg1 alpha:(double)arg2 forItem:(id)arg3;	// IMP=0x000000000044bf11
- (void)_updateOverrideAttributesWithScale:(double)arg1 forItem:(id)arg2;	// IMP=0x000000000044be94
- (id)_createPressedContextForItem:(id)arg1 userInitiated:(_Bool)arg2;	// IMP=0x000000000044b6b6
- (void)_initiateProgrammaticBounceForItem:(id)arg1;	// IMP=0x000000000044b543
- (void)_configureInitialStateForPressedItemContext:(id)arg1 userInitiated:(_Bool)arg2;	// IMP=0x000000000044b42c
- (void)_preparePressedItemContextForItem:(id)arg1 startApplier:(_Bool)arg2;	// IMP=0x000000000044b304
- (struct CGRect)titleAndDescriptionViewFrameInActionSetTile;	// IMP=0x000000000044b27a
- (struct CGRect)secondaryLabelFrameInNavigationBar;	// IMP=0x000000000044af42
- (struct CGRect)secondaryLabelFrameInActionSetTile;	// IMP=0x000000000044ae92
- (struct CGRect)secondaryLabelFrameInTile;	// IMP=0x000000000044aa7d
- (struct CGRect)primaryLabelFrameInNavigationBar;	// IMP=0x000000000044a7df
- (struct CGRect)primaryLabelFrameInActionSetTile;	// IMP=0x000000000044a72f
- (struct CGRect)primaryLabelFrameInTile;	// IMP=0x000000000044a378
- (struct CGRect)iconFrameInNavigationBar;	// IMP=0x000000000044a1fc
- (unsigned long long)iconSizeInNavigationBar;	// IMP=0x000000000044a147
- (struct CGRect)iconFrameInActionSetTile;	// IMP=0x000000000044a022
- (struct CGRect)iconFrameInTile;	// IMP=0x0000000000449f98
- (unsigned long long)iconSizeInActionSetTile;	// IMP=0x0000000000449f2a
- (unsigned long long)iconSizeInTile;	// IMP=0x0000000000449ebc
- (_Bool)isCameraTile;	// IMP=0x0000000000449e71
- (_Bool)isActionSetTile;	// IMP=0x0000000000449e26
- (_Bool)isTileOff;	// IMP=0x0000000000449d97
- (void)removeAllTransitionSubviews;	// IMP=0x0000000000449bb7
- (id)_animationControllerForDismissedController:(id)arg1;	// IMP=0x000000000044871a
- (void)__createLegacyTransitionViewsForDismissal;	// IMP=0x0000000000445fa4
- (id)_animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;	// IMP=0x0000000000444ec3
- (void)__createLegacyTransitionViewsForPresentation;	// IMP=0x0000000000442d50
- (id)animationControllerForDismissedController:(id)arg1;	// IMP=0x0000000000442d3e
- (void)_createTransitionViewsForDismissal;	// IMP=0x0000000000442d2c
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;	// IMP=0x0000000000442d1a
- (void)_createTransitionViewsForPresentation;	// IMP=0x0000000000442d08
- (_Bool)shouldDismissWholePresentationHierarchy;	// IMP=0x0000000000442d00
- (unsigned long long)activationStyleForClickPresentationInteraction:(id)arg1;	// IMP=0x0000000000442ce0
- (id)clickPresentationInteraction:(id)arg1 presentationForPresentingViewController:(id)arg2;	// IMP=0x0000000000442cd8
- (void)clickPresentationInteractionEnded:(id)arg1 wasCancelled:(_Bool)arg2;	// IMP=0x0000000000442c02
- (_Bool)clickPresentationInteractionShouldPresent:(id)arg1;	// IMP=0x0000000000442ae3
- (id)clickPresentationInteraction:(id)arg1 previewForHighlightingAtLocation:(struct CGPoint)arg2;	// IMP=0x0000000000442a52
- (_Bool)clickPresentationInteractionShouldBegin:(id)arg1;	// IMP=0x00000000004426fb
- (id)_sheetPresentationControllerViewForTouchContinuation:(id)arg1;	// IMP=0x00000000004426ab
- (void)_pressGestureDidEnd:(_Bool)arg1;	// IMP=0x0000000000442478
- (void)_pressGestureDidBecomeActive;	// IMP=0x00000000004422f9
- (void)_pressGestureDidBeginWithLocation:(struct CGPoint)arg1;	// IMP=0x00000000004420fa
- (void)_handlePressGesture:(id)arg1;	// IMP=0x0000000000442001
- (void)_handleDoubleTapGesture:(id)arg1;	// IMP=0x0000000000441e15
- (void)_handleSingleTapGesture:(id)arg1;	// IMP=0x0000000000441a9a
- (void)_installGestureRecognizer;	// IMP=0x0000000000441741
- (id)_gestureInstallationView;	// IMP=0x000000000044172f
- (void)_handleMutuallyExclusiveGesture:(id)arg1;	// IMP=0x000000000044163e
- (void)playBounceForItem:(id)arg1;	// IMP=0x00000000004414e5
- (id)createNavigationControllerForPresentationContext:(id)arg1;	// IMP=0x00000000004414b7
- (void)removeMutuallyExclusiveGestureRecognizer:(id)arg1;	// IMP=0x0000000000441301
- (void)addMutuallyExclusiveGestureRecognizer:(id)arg1;	// IMP=0x0000000000441245
@property(readonly, nonatomic) HUPressedItemContext *activePressedItemContext;
@property(readonly, nonatomic) UIViewController *presentingViewController;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000441087
@property(readonly, nonatomic) UITraitCollection *traitCollection;
- (id)initWithTargetView:(id)arg1 delegate:(id)arg2;	// IMP=0x0000000000440ef1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

