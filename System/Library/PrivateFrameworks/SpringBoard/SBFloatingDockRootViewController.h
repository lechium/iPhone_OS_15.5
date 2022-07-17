//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardFoundation/SBFTouchPassThroughViewController.h>

#import <SpringBoard/SBFloatingDockViewControllerDelegate-Protocol.h>
#import <SpringBoard/SBIconLocationPresenting-Protocol.h>
#import <SpringBoard/SBIconViewQuerying-Protocol.h>
#import <SpringBoard/UIGestureRecognizerDelegate-Protocol.h>

@class FBDisplayLayoutElement, NSSet, NSString, SBAppSuggestionManager, SBApplication, SBApplicationController, SBFAnalyticsClient, SBFloatingDockSuggestionsModel, SBFloatingDockViewController, SBFolderController, SBIconController, SBIconListView, SBLayoutStateTransitionCoordinator, SBRecentDisplayItemsController, SBRecentDisplayItemsDataStore, SBWorkspaceApplicationSceneTransitionContext, _UILegibilitySettings;
@protocol SBFloatingDockRootViewControllerDelegate, SBIconViewProviding;

@interface SBFloatingDockRootViewController : SBFTouchPassThroughViewController <SBFloatingDockViewControllerDelegate, UIGestureRecognizerDelegate, SBIconViewQuerying, SBIconLocationPresenting>
{
    struct {
        unsigned int floatingDockRootViewControllerShouldHandlePanGestureRecognizer:1;
    } _delegateRespondsTo;	// 8 = 0x8
    double _presentedProgress;	// 16 = 0x10
    _Bool _hasInitializedDockVisibility;	// 24 = 0x18
    _UILegibilitySettings *_legibilitySettings;	// 32 = 0x20
    _Bool _transitioningPresentation;	// 40 = 0x28
    _Bool _contentEligibleForAsynchronousRendering;	// 41 = 0x29
    _Bool _useDismissHitTestPadding;	// 42 = 0x2a
    SBFloatingDockSuggestionsModel *_suggestionsModel;	// 48 = 0x30
    id <SBFloatingDockRootViewControllerDelegate> _delegate;	// 56 = 0x38
    SBApplication *_requestedSuggestedApplication;	// 64 = 0x40
    FBDisplayLayoutElement *_displayLayoutElement;	// 72 = 0x48
    SBFloatingDockViewController *_floatingDockViewController;	// 80 = 0x50
    SBIconController *_iconController;	// 88 = 0x58
    SBApplicationController *_applicationController;	// 96 = 0x60
    SBAppSuggestionManager *_appSuggestionManager;	// 104 = 0x68
    SBLayoutStateTransitionCoordinator *_layoutStateTransitionCoordinator;	// 112 = 0x70
    SBRecentDisplayItemsController *_recentsController;	// 120 = 0x78
    SBRecentDisplayItemsDataStore *_recentsDataStore;	// 128 = 0x80
    SBFAnalyticsClient *_analyticsClient;	// 136 = 0x88
    SBWorkspaceApplicationSceneTransitionContext *_currentTransitionContext;	// 144 = 0x90
    id <SBIconViewProviding> _iconViewProvider;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x0000000000541219
@property(readonly, nonatomic) __weak id <SBIconViewProviding> iconViewProvider; // @synthesize iconViewProvider=_iconViewProvider;
@property(retain, nonatomic) SBWorkspaceApplicationSceneTransitionContext *currentTransitionContext; // @synthesize currentTransitionContext=_currentTransitionContext;
@property(retain, nonatomic) SBFAnalyticsClient *analyticsClient; // @synthesize analyticsClient=_analyticsClient;
@property(nonatomic) _Bool useDismissHitTestPadding; // @synthesize useDismissHitTestPadding=_useDismissHitTestPadding;
@property(retain, nonatomic) SBRecentDisplayItemsDataStore *recentsDataStore; // @synthesize recentsDataStore=_recentsDataStore;
@property(retain, nonatomic) SBRecentDisplayItemsController *recentsController; // @synthesize recentsController=_recentsController;
@property(retain, nonatomic) SBLayoutStateTransitionCoordinator *layoutStateTransitionCoordinator; // @synthesize layoutStateTransitionCoordinator=_layoutStateTransitionCoordinator;
@property(readonly, nonatomic) SBAppSuggestionManager *appSuggestionManager; // @synthesize appSuggestionManager=_appSuggestionManager;
@property(readonly, nonatomic) SBApplicationController *applicationController; // @synthesize applicationController=_applicationController;
@property(readonly, nonatomic) SBIconController *iconController; // @synthesize iconController=_iconController;
@property(retain, nonatomic) SBFloatingDockViewController *floatingDockViewController; // @synthesize floatingDockViewController=_floatingDockViewController;
@property(readonly, nonatomic) FBDisplayLayoutElement *displayLayoutElement; // @synthesize displayLayoutElement=_displayLayoutElement;
@property(readonly, nonatomic, getter=isContentEligibleForAsynchronousRendering) _Bool contentEligibleForAsynchronousRendering; // @synthesize contentEligibleForAsynchronousRendering=_contentEligibleForAsynchronousRendering;
@property(nonatomic, getter=isTransitioningPresentation) _Bool transitioningPresentation; // @synthesize transitioningPresentation=_transitioningPresentation;
@property(retain, nonatomic) SBApplication *requestedSuggestedApplication; // @synthesize requestedSuggestedApplication=_requestedSuggestedApplication;
@property(nonatomic) __weak id <SBFloatingDockRootViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SBFloatingDockSuggestionsModel *suggestionsModel; // @synthesize suggestionsModel=_suggestionsModel;
- (id)floatingDockViewController:(id)arg1 acquireOrderFloatingDockContainerBeforeLibraryAssertionForReason:(id)arg2;	// IMP=0x0000000000541037
- (id)foregroundLibraryContainerViewControllerForFloatingDockViewController:(id)arg1;	// IMP=0x0000000000540fc2
- (_Bool)isDefaultLibraryContainerViewControllerForegroundForFloatingDockViewController:(id)arg1;	// IMP=0x0000000000540f5c
- (id)libraryContainerViewControllerForFloatingDockViewController:(id)arg1;	// IMP=0x0000000000540ee7
- (_Bool)isFloatingDockViewControllerPresentedOverTransitioningSwitcherContent:(id)arg1;	// IMP=0x0000000000540e2a
- (_Bool)isFloatingDockViewControllerPresentedOverApplication:(id)arg1;	// IMP=0x0000000000540e20
- (_Bool)isFloatingDockViewControllerPresentedOverTransitioningAppToAppContent:(id)arg1;	// IMP=0x0000000000540d50
- (double)minimumHomeScreenScaleForFloatingDockViewController:(id)arg1;	// IMP=0x0000000000540ce5
- (void)floatingDockViewController:(id)arg1 willUseAnimator:(id)arg2 forTransitioningWithFolder:(id)arg3 presenting:(_Bool)arg4;	// IMP=0x0000000000540baf
- (void)floatingDockViewController:(id)arg1 willPerformTransitionWithFolder:(id)arg2 presenting:(_Bool)arg3 withTransitionCoordinator:(id)arg4;	// IMP=0x0000000000540b0a
- (void)floatingDockViewController:(id)arg1 didCompleteTransitionWithLibraryToPresented:(_Bool)arg2;	// IMP=0x0000000000540aa7
- (void)floatingDockViewController:(id)arg1 willPerformTransitionWithLibraryToPresented:(_Bool)arg2;	// IMP=0x0000000000540a44
- (void)floatingDockViewController:(id)arg1 didChangeContentFrame:(struct CGRect)arg2;	// IMP=0x00000000005409e4
- (void)floatingDockViewController:(id)arg1 didChangeContentHeight:(double)arg2;	// IMP=0x000000000054096d
- (void)floatingDockViewController:(id)arg1 wantsToBePresented:(_Bool)arg2;	// IMP=0x000000000054091c
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x00000000005408d1
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x000000000054087f
- (double)_floatingDockViewTranslation;	// IMP=0x0000000000540851
- (double)_floatingDockViewTranslationForHeight:(double)arg1;	// IMP=0x000000000002fdb0
- (void)_handlePanGestureRecognizer:(id)arg1;	// IMP=0x00000000005404de
- (struct CGRect)_calculateStandardDockFrame;	// IMP=0x000000000002fcb6
- (void)_endPresentationTransition;	// IMP=0x0000000000062e51
- (void)_beginPresentationTransition;	// IMP=0x0000000000061b1c
- (void)_setPresentedProgress:(double)arg1 animated:(_Bool)arg2 interactive:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000006140d
- (void)_layoutFloatingDockViewWithProgress:(double)arg1;	// IMP=0x000000000002fb66
@property(readonly, copy, nonatomic) NSSet *presentedIconLocations;
- (_Bool)isPresentingIconLocation:(id)arg1;	// IMP=0x0000000000540157
- (void)enumerateDisplayedIconViewsForIcon:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000005400d1
- (void)enumerateDisplayedIconViewsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000054005f
- (_Bool)isDisplayingIconView:(id)arg1 inLocation:(id)arg2;	// IMP=0x000000000053ffd4
- (_Bool)isDisplayingIconView:(id)arg1;	// IMP=0x000000000053ff5d
- (_Bool)isDisplayingIcon:(id)arg1 inLocations:(id)arg2;	// IMP=0x000000000053fde1
- (_Bool)isDisplayingIcon:(id)arg1 inLocation:(id)arg2;	// IMP=0x0000000000065c1a
- (id)firstIconViewForIcon:(id)arg1 excludingLocations:(id)arg2;	// IMP=0x000000000053fd47
- (id)firstIconViewForIcon:(id)arg1;	// IMP=0x000000000053fcc4
- (id)firstIconViewForIcon:(id)arg1 inLocations:(id)arg2;	// IMP=0x000000000053fc2d
- (id)iconViewForIcon:(id)arg1 location:(id)arg2;	// IMP=0x0000000000065b6a
- (void)registerAsSharedInstance;	// IMP=0x000000000053fbc1
- (void)cleanupAfterTransitionToEnvironmentMode:(long long)arg1;	// IMP=0x00000000000488f8
- (void)prepareForTransitionToEnvironmentMode:(long long)arg1 fromDockVisible:(_Bool)arg2 toDockVisible:(_Bool)arg3;	// IMP=0x00000000000289d9
- (_Bool)isDisplayingIcon:(id)arg1;	// IMP=0x000000000053fb4a
- (void)dismissPresentedLibraryAnimated:(_Bool)arg1 withTransitionContext:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000053f9fd
- (void)dismissPresentedFolderAnimated:(_Bool)arg1 withTransitionContext:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000053f8ec
- (void)presentFolderForIcon:(id)arg1 location:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000053f847
- (void)setPresentationProgress:(double)arg1 animated:(_Bool)arg2 interactive:(_Bool)arg3;	// IMP=0x000000000053f832
- (void)setPresentationProgress:(double)arg1 interactive:(_Bool)arg2;	// IMP=0x000000000053f81e
- (void)setPresentationProgressInteractively:(double)arg1;	// IMP=0x000000000053f807
- (void)setPresentationProgress:(double)arg1 animated:(_Bool)arg2 interactive:(_Bool)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000064f68
- (void)setPresentationProgress:(double)arg1 interactive:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000061365
- (void)setPresentationProgressInteractively:(double)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000053f7b3
@property(readonly, nonatomic) struct CGRect floatingDockScreenPresentationFrame;
@property(readonly, nonatomic) struct CGRect floatingDockScreenFrame;
@property(readonly, nonatomic) SBIconListView *suggestionsIconListView;
@property(readonly, nonatomic) SBIconListView *userIconListView;
@property(readonly, nonatomic) double presentedProgress;
- (void)layoutUserControlledIconListsWithAnimationType:(long long)arg1 forceRelayout:(_Bool)arg2;	// IMP=0x000000000053f5cb
@property(readonly, nonatomic) SBFolderController *presentedFolderController;
@property(readonly, nonatomic, getter=isPresentingFolder) _Bool presentingFolder;
@property(readonly, nonatomic, getter=isPresentingLibrary) _Bool presentingLibrary;
@property(readonly, nonatomic, getter=isPresentingLibraryInForeground) _Bool presentingLibraryInForeground;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property(readonly, nonatomic) double translationFromFullyPresentedFrame;
@property(readonly, nonatomic) double floatingDockViewTopMargin;
@property(readonly, nonatomic) double preferredVerticalMargin;
@property(readonly, nonatomic) double effectiveFloatingDockHeight;
@property(readonly, nonatomic) double floatingDockHeight;
@property(readonly, nonatomic) double maximumDockContinuousCornerRadius;
@property(readonly, nonatomic) double maximumFloatingDockHeight;
- (void)setLibraryPodIconEnabled:(_Bool)arg1;	// IMP=0x000000000053f35e
@property(readonly, nonatomic, getter=isLibraryPodIconEnabled) _Bool libraryPodIconEnabled;
@property(readonly, nonatomic, getter=isFloatingDockFullyPresented) _Bool floatingDockFullyPresented;
@property(readonly, nonatomic, getter=isFloatingDockPresented) _Bool floatingDockPresented;
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x000000000053f18a
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x000000000002f920
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000053f0b4
- (void)viewDidLayoutSubviews;	// IMP=0x000000000002fa5e
- (void)viewDidLoad;	// IMP=0x000000000053eb24
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000053ea70
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000053e891
- (id)initWithIconController:(id)arg1 applicationController:(id)arg2 recentsController:(id)arg3 recentsDataStore:(id)arg4 appSuggestionManager:(id)arg5 layoutStateTransitionCoordinator:(id)arg6 iconViewProvider:(id)arg7 analyticsClient:(id)arg8;	// IMP=0x000000000053e6e1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
