//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <QuickLook/QLItemPresenterViewControllerDelegate-Protocol.h>
#import <QuickLook/QLPageViewControllerDataSource-Protocol.h>
#import <QuickLook/QLPageViewControllerDelegate-Protocol.h>
#import <QuickLook/QLPreviewCollectionProtocol-Protocol.h>
#import <QuickLook/QLPreviewItemViewControllerDelegate-Protocol.h>
#import <QuickLook/QLTransitionControllerProtocol-Protocol.h>
#import <QuickLook/UIGestureRecognizerDelegatePrivate-Protocol.h>

@class NSString, QLAppearance, QLItemViewController, QLPageViewController, QLPinchRotationTracker, QLPreviewItemStore, QLSwipeDownTracker, QLTransitionContext, QLTransitionDriver, UIPanGestureRecognizer, UIPinchGestureRecognizer, UIRotationGestureRecognizer, UISwipeGestureRecognizer, UITapGestureRecognizer, UIView;
@protocol QLPreviewControllerStateProtocol, QLTransitionControllerProtocol;

__attribute__((visibility("hidden")))
@interface QLPreviewCollection : UIViewController <QLTransitionControllerProtocol, QLPageViewControllerDataSource, QLPageViewControllerDelegate, QLPreviewItemViewControllerDelegate, QLItemPresenterViewControllerDelegate, UIGestureRecognizerDelegatePrivate, QLPreviewCollectionProtocol>
{
    struct _NSRange _previewItemRange;	// 8 = 0x8
    long long _currentItemIndex;	// 24 = 0x18
    QLPreviewItemStore *_itemStore;	// 32 = 0x20
    UIView *_localAccessoryViewContainer;	// 40 = 0x28
    UIView *_remoteAccessoryViewContainer;	// 48 = 0x30
    UITapGestureRecognizer *_tapGesture;	// 56 = 0x38
    UIPanGestureRecognizer *_verticalPanGesture;	// 64 = 0x40
    UISwipeGestureRecognizer *_pageSwipeGesture;	// 72 = 0x48
    UIPanGestureRecognizer *_pagePanGesture;	// 80 = 0x50
    QLAppearance *_appearance;	// 88 = 0x58
    NSString *_loadingString;	// 96 = 0x60
    unsigned long long _visibilityState;	// 104 = 0x68
    _Bool _previewCollectionIsPartOfViewHierarchy;	// 112 = 0x70
    unsigned long long _appearanceActions;	// 120 = 0x78
    _Bool _isAvailable;	// 128 = 0x80
    _Bool _allowInteractiveTransitions;	// 129 = 0x81
    _Bool _fullScreen;	// 130 = 0x82
    _Bool _isEditing;	// 131 = 0x83
    _Bool _currentItemViewControllerIsPerformingFocusedAction;	// 132 = 0x84
    _Bool _isTransitioningPage;	// 133 = 0x85
    _Bool _hasTriggeredInteractiveTransitionAnimation;	// 134 = 0x86
    QLPageViewController *_pageViewController;	// 136 = 0x88
    id <QLPreviewControllerStateProtocol> _stateManager;	// 144 = 0x90
    CDUnknownBlockType _prepareForInvalidationCompletionHandler;	// 152 = 0x98
    NSString *_overrideParentApplicationDisplayIdentifier;	// 160 = 0xa0
    UIPanGestureRecognizer *_slideGesture;	// 168 = 0xa8
    UIPinchGestureRecognizer *_pinchGesture;	// 176 = 0xb0
    UIRotationGestureRecognizer *_rotationGesture;	// 184 = 0xb8
    QLSwipeDownTracker *_swipeDownTracker;	// 192 = 0xc0
    QLPinchRotationTracker *_pinchRotationTracker;	// 200 = 0xc8
    QLTransitionContext *_transitionContext;	// 208 = 0xd0
    id <QLTransitionControllerProtocol> _transitionController;	// 216 = 0xd8
    QLTransitionDriver *_transitionDriver;	// 224 = 0xe0
    NSString *_hostApplicationBundleIdentifier;	// 232 = 0xe8
}

+ (void)previewCollectionUsingRemoteViewController:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000009e5f8
+ (void)remotePreviewCollectionWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000041ca4
+ (id)quickLookExtension;	// IMP=0x0000000000041b81
- (void).cxx_destruct;	// IMP=0x00000000000a580d
@property _Bool hasTriggeredInteractiveTransitionAnimation; // @synthesize hasTriggeredInteractiveTransitionAnimation=_hasTriggeredInteractiveTransitionAnimation;
@property(copy, nonatomic) NSString *hostApplicationBundleIdentifier; // @synthesize hostApplicationBundleIdentifier=_hostApplicationBundleIdentifier;
@property(retain) QLTransitionDriver *transitionDriver; // @synthesize transitionDriver=_transitionDriver;
@property(retain) id <QLTransitionControllerProtocol> transitionController; // @synthesize transitionController=_transitionController;
@property(retain) QLTransitionContext *transitionContext; // @synthesize transitionContext=_transitionContext;
@property(retain) QLPinchRotationTracker *pinchRotationTracker; // @synthesize pinchRotationTracker=_pinchRotationTracker;
@property(retain) QLSwipeDownTracker *swipeDownTracker; // @synthesize swipeDownTracker=_swipeDownTracker;
@property(retain) UIRotationGestureRecognizer *rotationGesture; // @synthesize rotationGesture=_rotationGesture;
@property(retain) UIPinchGestureRecognizer *pinchGesture; // @synthesize pinchGesture=_pinchGesture;
@property(retain) UIPanGestureRecognizer *slideGesture; // @synthesize slideGesture=_slideGesture;
@property(copy, nonatomic) NSString *overrideParentApplicationDisplayIdentifier; // @synthesize overrideParentApplicationDisplayIdentifier=_overrideParentApplicationDisplayIdentifier;
@property(copy, nonatomic) CDUnknownBlockType prepareForInvalidationCompletionHandler; // @synthesize prepareForInvalidationCompletionHandler=_prepareForInvalidationCompletionHandler;
@property(nonatomic) _Bool isTransitioningPage; // @synthesize isTransitioningPage=_isTransitioningPage;
@property(nonatomic) _Bool currentItemViewControllerIsPerformingFocusedAction; // @synthesize currentItemViewControllerIsPerformingFocusedAction=_currentItemViewControllerIsPerformingFocusedAction;
@property(nonatomic) _Bool isEditing; // @synthesize isEditing=_isEditing;
@property(nonatomic) _Bool fullScreen; // @synthesize fullScreen=_fullScreen;
@property(nonatomic) _Bool allowInteractiveTransitions; // @synthesize allowInteractiveTransitions=_allowInteractiveTransitions;
@property(nonatomic) _Bool isAvailable; // @synthesize isAvailable=_isAvailable;
@property(retain) id <QLPreviewControllerStateProtocol> stateManager; // @synthesize stateManager=_stateManager;
@property(retain) QLPageViewController *pageViewController; // @synthesize pageViewController=_pageViewController;
- (_Bool)_itemViewControllerIsCurrentlyPresentedItemViewController:(id)arg1;	// IMP=0x00000000000a551a
- (id)_sandboxExtensionForEditedFileAtURL:(id)arg1;	// IMP=0x00000000000a53ae
- (void)_updateEnableChangingPageUsingGestures;	// IMP=0x00000000000a5306
- (void)_updateCanChangeCurrentPage;	// IMP=0x00000000000a52c4
- (_Bool)itemPresenterViewControllerShouldForceAutodownloadFile:(id)arg1;	// IMP=0x00000000000a5170
- (void)previewItemViewController:(id)arg1 wantsToForwardMessageToHost:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000a4e52
- (void)previewItemViewControllerDidChangeCurrentPreviewController:(id)arg1;	// IMP=0x00000000000a4e1b
- (void)previewItemViewControllerWantsToDismissQuickLook:(id)arg1;	// IMP=0x00000000000a4dfe
- (long long)dragDataOwnerForPreviewItemViewController:(id)arg1;	// IMP=0x00000000000a4dec
- (void)previewItemViewController:(id)arg1 wantsToUpdateStateRestorationWithUserInfo:(id)arg2;	// IMP=0x00000000000a4dcc
- (void)previewItemViewControllerDidHandOverLock:(id)arg1;	// IMP=0x00000000000a4d9c
- (void)previewItemViewControllerDidAcquireLock:(id)arg1;	// IMP=0x00000000000a4cc6
- (void)previewItemViewController:(id)arg1 didEnableEditMode:(_Bool)arg2;	// IMP=0x00000000000a4c96
- (void)previewItemViewController:(id)arg1 hasUnsavedEdits:(_Bool)arg2;	// IMP=0x00000000000a4bc6
- (void)previewItemViewControllerDidEditCopyOfPreviewItem:(id)arg1 editedCopy:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000a4ac2
- (id)loadingTextForPreviewItemViewController:(id)arg1;	// IMP=0x00000000000a4aad
- (void)expandContentOfPreviewItemViewController:(id)arg1 unarchivedItemsURL:(id)arg2;	// IMP=0x00000000000a4807
- (void)previewItemViewControllerWantsUpdatePrinter:(id)arg1;	// IMP=0x00000000000a47f5
- (void)previewItemViewControllerDidUpdatePreferredContentSize:(id)arg1;	// IMP=0x00000000000a47e3
- (void)previewItemViewControllerDidUpdateTitle:(id)arg1;	// IMP=0x00000000000a47d1
- (void)previewItemViewControllerWantsToShowNoInternetConnectivityAlert:(id)arg1;	// IMP=0x00000000000a47b2
- (void)previewItemViewControllerWantsUpdateKeyCommands:(id)arg1;	// IMP=0x00000000000a4795
- (void)previewItemViewControllerWantsUpdateOverlay:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000a46e6
- (void)previewItemViewController:(id)arg1 wantsToShowShareSheetWithPopoverTracker:(id)arg2 customSharedURL:(id)arg3 dismissCompletion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000a46c0
- (void)previewItemViewControllerWantsToShowShareSheet:(id)arg1;	// IMP=0x00000000000a46a3
- (void)previewItemViewController:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00000000000a4504
- (void)previewItemViewController:(id)arg1 wantsToOpenURL:(id)arg2;	// IMP=0x00000000000a44e4
- (void)previewItemViewController:(id)arg1 wantsToSetRemoteEdgePanGestureWidth:(double)arg2;	// IMP=0x00000000000a446f
- (void)previewItemViewController:(id)arg1 wantsFullScreen:(_Bool)arg2;	// IMP=0x00000000000a4408
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;	// IMP=0x00000000000a4345
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x00000000000a3f93
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x00000000000a3b79
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x00000000000a3a52
- (_Bool)_toggleFullscreenIfPossible;	// IMP=0x00000000000a39df
- (void)_tapGestureRecognized;	// IMP=0x00000000000a39cd
- (void)_installGestures;	// IMP=0x00000000000a3438
- (id)pageViewController:(id)arg1 parallaxViewInPage:(id)arg2 withIndex:(unsigned long long)arg3;	// IMP=0x00000000000a3423
- (void)pageViewController:(id)arg1 didCancelTransitionFromPage:(id)arg2 withIndex:(unsigned long long)arg3 toPage:(id)arg4 withIndex:(unsigned long long)arg5 animated:(_Bool)arg6;	// IMP=0x00000000000a337a
- (void)pageViewController:(id)arg1 willCancelTransitionFromPage:(id)arg2 withIndex:(unsigned long long)arg3 toPage:(id)arg4 withIndex:(unsigned long long)arg5 animated:(_Bool)arg6;	// IMP=0x00000000000a3300
- (void)pageViewController:(id)arg1 didTransitionFromPage:(id)arg2 withIndex:(unsigned long long)arg3 toPage:(id)arg4 withIndex:(unsigned long long)arg5 animated:(_Bool)arg6;	// IMP=0x00000000000a3179
- (void)pageViewController:(id)arg1 isTransitioningFromPage:(id)arg2 withIndex:(unsigned long long)arg3 toPage:(id)arg4 withIndex:(unsigned long long)arg5 withProgress:(double)arg6;	// IMP=0x00000000000a3106
- (void)pageViewController:(id)arg1 willTransitionFromPage:(id)arg2 withIndex:(unsigned long long)arg3 toPage:(id)arg4 withIndex:(unsigned long long)arg5 animated:(_Bool)arg6;	// IMP=0x00000000000a3078
- (void)pageViewController:(id)arg1 willBeginInteractiveTransitionFromPage:(id)arg2 withIndex:(unsigned long long)arg3 toPage:(id)arg4 withIndex:(unsigned long long)arg5;	// IMP=0x00000000000a2fb5
- (id)pageViewController:(id)arg1 viewControllerAtIndex:(unsigned long long)arg2;	// IMP=0x00000000000a27b6
- (void)_updateWhitePointAdaptivityStyle;	// IMP=0x00000000000a2755
- (void)_updateAccessoryViewWithPreviewItemViewController:(id)arg1;	// IMP=0x00000000000a22a0
- (void)_cleanAccessoryViewContainer;	// IMP=0x00000000000a2210
- (void)_updatePrinter;	// IMP=0x00000000000a2129
- (void)_updateTitleFromController;	// IMP=0x00000000000a2096
- (void)_updateOverlayVisibility;	// IMP=0x00000000000a1ffe
- (void)_updateOverlay:(_Bool)arg1;	// IMP=0x00000000000a1fb9
- (void)_updateFullscreen;	// IMP=0x00000000000a1f09
- (void)_updateFullscreenBackgroundColor;	// IMP=0x00000000000a1e62
- (void)_updatePreferredContentSize;	// IMP=0x00000000000a1de5
- (_Bool)_isVisible;	// IMP=0x00000000000a1dd0
- (void)setIsContentManaged:(_Bool)arg1;	// IMP=0x00000000000a1d8e
@property(readonly, nonatomic) NSString *parentApplicationDisplayIdentifier;
- (void)overrideParentApplicationDisplayIdentifierWithIdentifier:(id)arg1;	// IMP=0x00000000000a1ced
- (void)setLoadingString:(id)arg1;	// IMP=0x00000000000a1cd9
- (_Bool)_isBeingPresented;	// IMP=0x00000000000a1c5d
- (_Bool)_isBeingDismissed;	// IMP=0x00000000000a1be1
- (_Bool)pinchDismissGestureInProgress;	// IMP=0x00000000000a1bae
- (_Bool)transitionInProgress;	// IMP=0x00000000000a1b7b
- (void)tearDownTransition:(_Bool)arg1;	// IMP=0x00000000000a19ad
- (void)startTransitionWithSourceViewProvider:(id)arg1 transitionController:(id)arg2 presenting:(_Bool)arg3 useInteractiveTransition:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000000a0fcf
- (void)triggerInteractiveTransitionAnimationIfNeeded;	// IMP=0x00000000000a0bcc
- (void)keyCommandWasPerformed:(id)arg1;	// IMP=0x00000000000a0a9e
- (id)_defaultKeyCommands;	// IMP=0x00000000000a090d
- (void)keyCommandsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000a07c4
- (void)requestLockForCurrentItem;	// IMP=0x00000000000a073c
- (void)shouldDisplayLockActivityWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000a06cd
- (void)hostApplicationDidBecomeActive;	// IMP=0x00000000000a05d0
- (void)hostApplicationDidEnterBackground:(_Bool)arg1;	// IMP=0x00000000000a049e
- (void)actionSheetDidDismiss;	// IMP=0x00000000000a03a1
- (void)prepareForActionSheetPresentationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000a0259
- (void)saveCurrentPreviewEditsSynchronously:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000a0061
- (void)toolbarButtonPressedWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000009fe22
- (void)toolbarButtonsForTraitCollection:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000009fc7b
- (void)getCurrentPreviewActivityUserInfoWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000009fb8f
- (void)notifyStateRestorationUserInfo:(id)arg1;	// IMP=0x000000000009faaa
- (void)notifyFirstTimeAppearanceWithActions:(unsigned long long)arg1;	// IMP=0x000000000009f9e9
- (void)setAppearance:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000009f8d1
- (void)_setCurrentPreviewItemIndex:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x000000000009f7da
- (void)setCurrentPreviewItemIndex:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x000000000009f73c
- (void)configureWithNumberOfItems:(long long)arg1 currentPreviewItemIndex:(unsigned long long)arg2 itemProvider:(id)arg3 stateManager:(id)arg4;	// IMP=0x000000000009f52b
- (void)_notifyHostPreviewCollectionIsReadyForInvalidationIfNeeded;	// IMP=0x000000000009f470
- (void)invalidateService;	// IMP=0x000000000009f46a
- (void)preparePreviewCollectionForInvalidationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000009f293
@property(readonly) QLItemViewController *currentPreviewItemViewController;
- (void)setScreenEdgePanWidth:(double)arg1;	// IMP=0x000000000009f1a2
- (_Bool)isRemote;	// IMP=0x000000000009f058
- (id)accessoryView;	// IMP=0x000000000009ef8f
- (void)setRemoteAccessoryContainer:(id)arg1;	// IMP=0x000000000009ef7b
- (void)updateCurrentPreviewConfiguration;	// IMP=0x000000000009ede4
- (void)_updatePreviewVisibility:(_Bool)arg1;	// IMP=0x000000000009ecb8
- (void)hostViewControlerTransitionToState:(unsigned long long)arg1 animated:(_Bool)arg2;	// IMP=0x000000000009ec37
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000000009ebfb
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000009ebba
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000009eb5b
- (void)loadView;	// IMP=0x000000000009eac6
- (id)init;	// IMP=0x000000000009e6d0
- (void)slideToDismissGestureRecognized:(id)arg1;	// IMP=0x0000000000010e5c
- (void)rotationOrPinchGestureRecognized:(id)arg1;	// IMP=0x00000000000107a9
- (id)gestureTracker;	// IMP=0x0000000000010760
- (void)_tearDownTransition:(_Bool)arg1;	// IMP=0x000000000001033b
- (void)_setUpTransitionDriverForPresenting:(_Bool)arg1 duration:(double)arg2;	// IMP=0x000000000000fa89
- (void)startNonInteractiveTransitionPresenting:(_Bool)arg1;	// IMP=0x000000000000f7d7
- (void)completeTransition:(_Bool)arg1 withDuration:(double)arg2;	// IMP=0x000000000000f36c
- (void)updateTransitionWithProgress:(double)arg1;	// IMP=0x000000000000f1fb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

