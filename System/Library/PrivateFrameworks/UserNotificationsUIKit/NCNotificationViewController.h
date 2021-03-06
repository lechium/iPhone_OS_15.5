//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <UserNotificationsUIKit/NCNotificationCustomContentDelegate-Protocol.h>
#import <UserNotificationsUIKit/NCNotificationRequestInlineActionsProviderDelegate-Protocol.h>
#import <UserNotificationsUIKit/PLContentSizeCategoryAdjusting-Protocol.h>
#import <UserNotificationsUIKit/PLExpandedPlatterPresentationControllerDelegate-Protocol.h>

@class NCNotificationRequest, NCNotificationViewControllerView, NSHashTable, NSString, UIPanGestureRecognizer, UIView;
@protocol NCAuxiliaryOptionsProviding, NCNotificationCustomContent, NCNotificationCustomContentProviding, NCNotificationStaticContentProviding, NCNotificationViewControllerDelegate, PLContentSizeManaging, PLPlatter><NCNotificationStaticContentAccepting><PLContentSizeCategoryAdjusting, UIViewControllerTransitionCoordinator;

@interface NCNotificationViewController : UIViewController <NCNotificationRequestInlineActionsProviderDelegate, NCNotificationCustomContentDelegate, PLExpandedPlatterPresentationControllerDelegate, PLContentSizeCategoryAdjusting>
{
    _Bool _didQueryCanPan;	// 8 = 0x8
    _Bool _canPan;	// 9 = 0x9
    long long _ncTransitionAnimationState;	// 16 = 0x10
    NSHashTable *_observers;	// 24 = 0x18
    UIView<PLContentSizeManaging> *_contentSizeManagingView;	// 32 = 0x20
    UIView<PLPlatter><NCNotificationStaticContentAccepting><PLContentSizeCategoryAdjusting> *_lookView;	// 40 = 0x28
    _Bool _revealAdditionalContentOnPresentation;	// 48 = 0x30
    _Bool _customContentHomeAffordanceVisible;	// 49 = 0x31
    _Bool _notificationContentViewHidden;	// 50 = 0x32
    _Bool _hasShadow;	// 51 = 0x33
    _Bool _contentReplacedWithSnapshot;	// 52 = 0x34
    _Bool _interactionEnabled;	// 53 = 0x35
    _Bool _shouldRestorePresentingShortLookOnDismiss;	// 54 = 0x36
    id <NCNotificationViewControllerDelegate> _delegate;	// 56 = 0x38
    NCNotificationRequest *_notificationRequest;	// 64 = 0x40
    NSString *_materialGroupNameBase;	// 72 = 0x48
    UIPanGestureRecognizer *_customContentHomeAffordanceGestureRecognizer;	// 80 = 0x50
    id <NCNotificationStaticContentProviding> _staticContentProvider;	// 88 = 0x58
    id <NCNotificationCustomContentProviding> _customContentProvider;	// 96 = 0x60
    id <NCAuxiliaryOptionsProviding> _auxiliaryOptionsContentProvider;	// 104 = 0x68
    id <UIViewControllerTransitionCoordinator> _activeTransitionCoordinator;	// 112 = 0x70
    UIView *_associatedView;	// 120 = 0x78
    CDUnknownBlockType _pendingPresentationTransitionDidEndBlock;	// 128 = 0x80
    UIViewController<NCNotificationCustomContent> *_customContentProvidingViewController;	// 136 = 0x88
}

+ (double)prominentIconDimension;	// IMP=0x000000000000219c
- (void).cxx_destruct;	// IMP=0x0000000000005fb3
@property(nonatomic, getter=_shouldRestorePresentingShortLookOnDismiss, setter=_setShouldRestorePresentingShortLookOnDismiss:) _Bool shouldRestorePresentingShortLookOnDismiss; // @synthesize shouldRestorePresentingShortLookOnDismiss=_shouldRestorePresentingShortLookOnDismiss;
@property(retain, nonatomic, getter=_customContentProvidingViewController, setter=_setCustomContentProvidingViewController:) UIViewController<NCNotificationCustomContent> *customContentProvidingViewController; // @synthesize customContentProvidingViewController=_customContentProvidingViewController;
@property(copy, nonatomic, getter=_pendingPresentationTransitionDidEndBlock, setter=_setPendingPresentationTransitionDidEndBlock:) CDUnknownBlockType pendingPresentationTransitionDidEndBlock; // @synthesize pendingPresentationTransitionDidEndBlock=_pendingPresentationTransitionDidEndBlock;
@property(nonatomic) __weak UIView *associatedView; // @synthesize associatedView=_associatedView;
@property(nonatomic, getter=isInteractionEnabled) _Bool interactionEnabled; // @synthesize interactionEnabled=_interactionEnabled;
@property(retain, nonatomic, getter=_activeTransitionCoordinator, setter=_setActiveTransitionCoordinator:) id <UIViewControllerTransitionCoordinator> activeTransitionCoordinator; // @synthesize activeTransitionCoordinator=_activeTransitionCoordinator;
@property(retain, nonatomic) id <NCAuxiliaryOptionsProviding> auxiliaryOptionsContentProvider; // @synthesize auxiliaryOptionsContentProvider=_auxiliaryOptionsContentProvider;
@property(retain, nonatomic) id <NCNotificationCustomContentProviding> customContentProvider; // @synthesize customContentProvider=_customContentProvider;
@property(retain, nonatomic) id <NCNotificationStaticContentProviding> staticContentProvider; // @synthesize staticContentProvider=_staticContentProvider;
@property(nonatomic, getter=isContentReplacedWithSnapshot) _Bool contentReplacedWithSnapshot; // @synthesize contentReplacedWithSnapshot=_contentReplacedWithSnapshot;
@property(nonatomic) _Bool hasShadow; // @synthesize hasShadow=_hasShadow;
@property(nonatomic, getter=isNotificationContentViewHidden) _Bool notificationContentViewHidden; // @synthesize notificationContentViewHidden=_notificationContentViewHidden;
@property(nonatomic) __weak UIPanGestureRecognizer *customContentHomeAffordanceGestureRecognizer; // @synthesize customContentHomeAffordanceGestureRecognizer=_customContentHomeAffordanceGestureRecognizer;
@property(nonatomic, getter=isCustomContentHomeAffordanceVisible) _Bool customContentHomeAffordanceVisible; // @synthesize customContentHomeAffordanceVisible=_customContentHomeAffordanceVisible;
@property(retain, nonatomic) NSString *materialGroupNameBase; // @synthesize materialGroupNameBase=_materialGroupNameBase;
@property(nonatomic) _Bool revealAdditionalContentOnPresentation; // @synthesize revealAdditionalContentOnPresentation=_revealAdditionalContentOnPresentation;
@property(retain, nonatomic) NCNotificationRequest *notificationRequest; // @synthesize notificationRequest=_notificationRequest;
@property(nonatomic) __weak id <NCNotificationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)succinctDescriptionBuilder;	// IMP=0x0000000000005c5e
- (id)succinctDescription;	// IMP=0x0000000000005c0e
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000005899
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000005849
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (_Bool)adjustForContentSizeCategoryChange;	// IMP=0x0000000000005794
@property(nonatomic) _Bool adjustsFontForContentSizeCategory;
- (id)settleHomeAffordanceAnimationBehaviorDescriptionForExpandedPlatterPresentationController:(id)arg1;	// IMP=0x000000000000568f
- (id)unhideHomeAffordanceAnimationSettingsForExpandedPlatterPresentationController:(id)arg1;	// IMP=0x0000000000005616
- (id)hideHomeAffordanceAnimationSettingsForExpandedPlatterPresentationController:(id)arg1;	// IMP=0x000000000000559d
- (id)expandedPlatterPresentationController:(id)arg1 keyboardAssertionForGestureWindow:(id)arg2;	// IMP=0x000000000000550d
- (void)customContentRequestsDismiss:(id)arg1;	// IMP=0x00000000000054f6
- (void)customContentRequestsDefaultAction:(id)arg1;	// IMP=0x00000000000054df
- (void)customContent:(id)arg1 forwardAction:(id)arg2 forNotification:(id)arg3 withUserInfo:(id)arg4;	// IMP=0x00000000000054c1
- (void)customContent:(id)arg1 requestPermissionToExecuteAction:(id)arg2 forNotification:(id)arg3 withUserInfo:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000005420
- (void)contentProvider:(id)arg1 performAction:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00000000000052ec
- (void)_askDelegateToExecuteAction:(id)arg1 withParameters:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000004dcd
- (void)_executeNilAction:(_Bool)arg1;	// IMP=0x0000000000004d48
- (void)_executeCancelAction:(_Bool)arg1;	// IMP=0x0000000000004cc3
- (void)_executeCloseAction:(_Bool)arg1;	// IMP=0x0000000000004c3e
- (void)_executeClearAction:(_Bool)arg1;	// IMP=0x0000000000004bd4
- (void)_executeDefaultAction:(_Bool)arg1;	// IMP=0x0000000000004b6a
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;	// IMP=0x00000000000048c1
- (struct CGSize)preferredContentSizeWithPresentationSize:(struct CGSize)arg1 containerSize:(struct CGSize)arg2;	// IMP=0x0000000000004808
- (void)setNCTransitionAnimationState:(long long)arg1;	// IMP=0x00000000000047f7
- (long long)ncTransitionAnimationState;	// IMP=0x00000000000047e6
- (void)dismissViewControllerWithTransition:(int)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000469c
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000044e6
- (_Bool)prefersStatusBarHidden;	// IMP=0x00000000000044de
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x00000000000044d3
- (_Bool)shouldAutorotate;	// IMP=0x0000000000004457
- (void)viewWillLayoutSubviews;	// IMP=0x00000000000043dc
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000000000436d
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000000416b
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000000040fc
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000003ee6
- (void)viewDidLoad;	// IMP=0x0000000000003e90
- (void)loadView;	// IMP=0x0000000000003e57
- (id)notificationUsageTrackingState;	// IMP=0x0000000000003de8
- (void)_updatePreferredContentSize;	// IMP=0x0000000000003c55
- (void)_setPreferredCustomContentSize:(struct CGSize)arg1;	// IMP=0x0000000000003b8a
- (struct CGSize)_preferredCustomContentSizeForSize:(struct CGSize)arg1 parentContentContainerBounds:(struct CGRect)arg2;	// IMP=0x0000000000003b1c
- (void)_notificationViewControllerViewDidLoad;	// IMP=0x0000000000003a6b
- (void)_updateLookView:(id)arg1 withTitleFromProvidedStaticContent:(id)arg2;	// IMP=0x0000000000003a65
- (void)_loadLookView;	// IMP=0x0000000000003a5f
- (id)_contentSizeManagingView;	// IMP=0x00000000000039c1
@property(readonly, nonatomic, getter=_notificationViewControllerView) NCNotificationViewControllerView *notificationViewControllerView;
- (void)_updateWithProvidedAuxiliaryOptionsContent;	// IMP=0x0000000000003906
- (void)_updateWithProvidedCustomContent;	// IMP=0x0000000000003900
- (long long)_dateFormatStyle;	// IMP=0x000000000000389d
- (unsigned long long)_maximumNumberOfSecondaryTextLinesForProvidedStaticContent;	// IMP=0x0000000000003836
- (unsigned long long)_maximumNumberOfPrimaryTextLinesForProvidedStaticContent;	// IMP=0x00000000000037cc
- (void)_updateWithProvidedStaticContent;	// IMP=0x00000000000031fb
- (id)_lookView;	// IMP=0x00000000000031e4
- (id)_lookViewIfLoaded;	// IMP=0x00000000000031d0
- (id)_lookViewLoadingIfNecessary:(_Bool)arg1;	// IMP=0x000000000000317c
- (_Bool)shouldCommitToExpandedPlatterPresentationWithFeedback;	// IMP=0x0000000000003174
- (id)presentedExpandedPlatterViewController;	// IMP=0x000000000000316c
- (id)containerViewForExpandedContent;	// IMP=0x00000000000030f2
@property(readonly, nonatomic, getter=isCoalescedNotificationBundle) _Bool coalescedNotificationBundle;
- (long long)materialRecipe;	// IMP=0x00000000000030df
- (_Bool)shouldRestorePresentingShortLookOnDismiss;	// IMP=0x0000000000003042
- (void)expandAndPlayMedia;	// IMP=0x000000000000303c
- (_Bool)_canPan;	// IMP=0x0000000000002fb7
- (_Bool)restoreInputViews;	// IMP=0x0000000000002f73
- (void)preserveInputViews;	// IMP=0x0000000000002f36
- (_Bool)isContentExtensionVisible:(id)arg1;	// IMP=0x0000000000002f2e
- (void)_dismissPresentedViewControllerAnimated:(_Bool)arg1;	// IMP=0x0000000000002f28
- (_Bool)dismissPresentedViewControllerAnimated:(_Bool)arg1;	// IMP=0x0000000000002f20
- (void)updateContent;	// IMP=0x0000000000002ee3
- (void)setHasUpdatedContent;	// IMP=0x0000000000002e9b
- (_Bool)didReceiveNotificationRequest:(id)arg1;	// IMP=0x0000000000002e89
- (_Bool)didForwardNotificationRequestToCustomContent:(id)arg1;	// IMP=0x0000000000002dea
- (void)_notifyObserversWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000002c0e
- (void)removeObserver:(id)arg1;	// IMP=0x0000000000002be5
- (void)addObserver:(id)arg1;	// IMP=0x0000000000002b61
- (id)_customContentProvidingViewControllerCreateIfNecessary;	// IMP=0x00000000000029fe
- (void)_setupAuxiliaryOptionsContentProvider;	// IMP=0x000000000000280e
- (void)_setupCustomContentProvider;	// IMP=0x0000000000002754
- (void)_setupStaticContentProvider;	// IMP=0x000000000000263a
- (void)invalidateContentProviders;	// IMP=0x0000000000002559
@property(readonly, nonatomic, getter=isNotPresentingOrHasCommittedToDismissingCustomContentProvidingViewController) _Bool notPresentingOrHasCommittedToDismissingCustomContentProvidingViewController;
@property(readonly, nonatomic, getter=hasCommittedToPresentingCustomContentProvidingViewController) _Bool committedToPresentingCustomContentProvidingViewController;
@property(readonly, nonatomic, getter=_isPresentingCustomContentProvidingViewController) _Bool presentingCustomContentProvidingViewController;
@property(readonly, nonatomic, getter=isShortLook) _Bool shortLook;
- (_Bool)_setNotificationRequest:(id)arg1;	// IMP=0x0000000000002419
- (_Bool)_setDelegate:(id)arg1;	// IMP=0x0000000000002349
- (id)initWithNotificationRequest:(id)arg1;	// IMP=0x0000000000002323
- (id)initWithNotificationRequest:(id)arg1 revealingAdditionalContentOnPresentation:(_Bool)arg2;	// IMP=0x0000000000002262
- (id)_initWithNotificationRequest:(id)arg1 revealingAdditionalContentOnPresentation:(_Bool)arg2;	// IMP=0x00000000000021aa
- (void)presentLongLookAnimated:(_Bool)arg1 trigger:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000060b0
@property(readonly, nonatomic, getter=_presentedLongLookViewController) NCNotificationViewController *presentedLongLookViewController;
@property(readonly, nonatomic, getter=isLookStyleLongLook) _Bool lookStyleLongLook;
- (void)reloadContentProviders;	// IMP=0x00000000000060c6

// Remaining properties
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *preferredContentSizeCategory;
@property(readonly) Class superclass;

@end

