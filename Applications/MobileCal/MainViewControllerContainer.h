//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CalendarModel, MainViewController, NSString, UITraitCollection;

@interface MainViewControllerContainer
{
    MainViewController *_currentChildViewController;	// 8 = 0x8
    MainViewController *_emptyChildViewController;	// 16 = 0x10
    _Bool _animatingViewTransition;	// 24 = 0x18
    CalendarModel *_model;	// 32 = 0x20
}

+ (_Bool)_shouldForwardViewWillTransitionToSize;	// IMP=0x0020000000033f55
- (void).cxx_destruct;	// IMP=0x0020000000036777
@property(retain, nonatomic) CalendarModel *model; // @synthesize model=_model;
@property(nonatomic) _Bool animatingViewTransition; // @synthesize animatingViewTransition=_animatingViewTransition;
- (void)viewSwitcherSwitchedToViewWithDate:(id)arg1;	// IMP=0x001000000003672c
@property(nonatomic) _Bool isWaitingForBackgroundLoadingOfSelectedEventOccurrenceView;
- (id)updateBackButtonWhileTopViewControllerToDate:(id)arg1;	// IMP=0x00100000000365da
- (_Bool)shouldUpdateOwnBackButtonWhenTopViewController;	// IMP=0x0010000000036544
- (void)updateBackButtonToDate:(id)arg1;	// IMP=0x001000000003649d
- (void)invalidateBackButtonDate;	// IMP=0x0010000000036403
- (void)updateNavigationBarDisplayedDateString;	// IMP=0x0010000000036369
- (id)navigationBarDisplayedDateString;	// IMP=0x00100000000362c9
- (int)supportedToggleMode;	// IMP=0x0010000000036233
- (id)toolBarTintColor;	// IMP=0x0010000000036193
- (id)navigationBarTintColor;	// IMP=0x00100000000360f3
@property(readonly, nonatomic) _Bool shouldAdaptEventViewControllers;
- (_Bool)showEventDetailsWhenNewEventAdded;	// IMP=0x0010000000035fc7
- (id)bestDateForNewEvent;	// IMP=0x0010000000035f27
- (void)updatePalette:(id)arg1;	// IMP=0x0010000000035e80
- (double)leftBarButtonBlankFixedSpaceWidth;	// IMP=0x0010000000035de5
- (void)disableGestureRecognizers;	// IMP=0x0010000000035d4b
- (void)enableGestureRecognizers;	// IMP=0x0010000000035cb1
- (void)showNowAnimated:(_Bool)arg1;	// IMP=0x0010000000035c0f
- (id)_todaysDate;	// IMP=0x0010000000035b42
- (_Bool)isTodayVisible;	// IMP=0x0010000000035aac
- (_Bool)shouldPushNextLevelViewControllerWhenTodayIsVisible;	// IMP=0x00100000000359db
- (void)setShouldRespondToApplicationDidBecomeActiveStateChange:(_Bool)arg1;	// IMP=0x0010000000035939
- (_Bool)shouldRespondToApplicationDidBecomeActiveStateChange;	// IMP=0x00100000000358a3
- (void)navigateToPreviousDateComponentUnitAnimated:(_Bool)arg1;	// IMP=0x0010000000035801
- (void)navigateToNextDateComponentUnitAnimated:(_Bool)arg1;	// IMP=0x001000000003575f
- (void)navigateToPreviousSelectableItem;	// IMP=0x00100000000356c5
- (void)navigateToNextSelectableItem;	// IMP=0x001000000003562b
- (_Bool)mainViewControllerCanChangeSelectedDate;	// IMP=0x0010000000035595
- (_Bool)mainViewControllerCanChangeSelectedEvent;	// IMP=0x00100000000354ff
- (id)preferredPreSizeClassTransitionSelectedDate;	// IMP=0x00100000000354af
- (id)sceneTitle;	// IMP=0x000000000003545f
- (long long)intendedSizeClass;	// IMP=0x0010000000035457
- (void)showTodayAnimated:(_Bool)arg1;	// IMP=0x001000000003534f
- (_Bool)isDateVisible:(id)arg1;	// IMP=0x00100000000352d8
- (void)selectDate:(id)arg1 animated:(_Bool)arg2;	// IMP=0x001000000003522a
- (void)showEvent:(id)arg1 animated:(_Bool)arg2 showDetails:(_Bool)arg3 showComments:(_Bool)arg4 context:(id)arg5;	// IMP=0x001000000003513e
- (void)showEvent:(id)arg1 animated:(_Bool)arg2 showDetails:(_Bool)arg3 context:(id)arg4;	// IMP=0x0010000000035068
- (void)showEvent:(id)arg1 animated:(_Bool)arg2 context:(id)arg3;	// IMP=0x0010000000034f9b
- (_Bool)allowsOverriddenToolbarItems;	// IMP=0x0010000000034f05
- (_Bool)allowsOverriddenRightNavigationBarItems;	// IMP=0x0010000000034e6f
- (_Bool)shouldModallyPresentFirstShownViewController;	// IMP=0x0010000000034e2b
- (_Bool)shouldInvalidateManagedNavigationControllerOnPresentationDismissal;	// IMP=0x0010000000034de7
- (void)invalidateManagedNavigationController;	// IMP=0x0010000000034daa
- (id)managedNavigationController;	// IMP=0x0010000000034d5a
- (_Bool)hidesBackButton;	// IMP=0x0010000000034d52
- (Class)childViewControllerClassForTraits:(id)arg1;	// IMP=0x0010000000034d4a
- (id)childViewControllerForRegularWidthRegularHeight;	// IMP=0x0010000000034d42
- (id)childViewControllerForRegularWidthCompactHeight;	// IMP=0x0010000000034d3a
- (id)childViewControllerForCompactWidthRegularHeight;	// IMP=0x0010000000034d32
- (id)childViewControllerForCompactWidthCompactHeight;	// IMP=0x0010000000034d2a
- (id)childViewControllerForUnknownTraits;	// IMP=0x0010000000034d22
- (id)emptyChildViewController;	// IMP=0x0010000000034c94
- (id)pushedNextLevelMainViewControllerContainerAnimated:(_Bool)arg1;	// IMP=0x0010000000034c8c
- (_Bool)shouldRemoveSelfFromNavigationStackIfTraitCollectionIsUnsupported;	// IMP=0x0010000000034c84
- (void)_removeChildViewControllerForCurrentTraits;	// IMP=0x0010000000034c03
- (void)_addChildViewControllerForCurrentTraits;	// IMP=0x0010000000034b73
- (id)_childViewControllerForTraitCollection:(id)arg1;	// IMP=0x0010000000034a54
- (id)currentChildViewController;	// IMP=0x00100000000348ec
- (_Bool)currentChildViewControllerIsLoaded;	// IMP=0x00100000000347f4
- (void)childViewControllerChangedForCurrentTraits;	// IMP=0x00100000000347ee
- (void)_updateForCurrentTraits;	// IMP=0x00100000000343e4
- (void)setupForViewAppearance;	// IMP=0x0010000000033f5d
- (id)viewControllerToShowFrom;	// IMP=0x0010000000033f05
- (long long)presentationStyleOverrideForChildViewControllers;	// IMP=0x0010000000033ec1
- (void)showViewController:(id)arg1 sender:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000033e1c
- (void)viewWillLayoutSubviews;	// IMP=0x0010000000033e0a
- (void)setupUIForTraitCollection:(id)arg1;	// IMP=0x0010000000033d7f
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0010000000033cf3
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000033cb2
- (void)viewDidLoad;	// IMP=0x0010000000033c3c
- (_Bool)performModalDialogsIfNeededWithContinue:(CDUnknownBlockType)arg1;	// IMP=0x0010000000033bda
@property(readonly, copy) NSString *description;
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x00100000000339f8
- (id)initWithModel:(id)arg1 window:(id)arg2;	// IMP=0x0010000000033980

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(retain, nonatomic) UITraitCollection *futureTraitCollection;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isTransitioningTraitCollection;
@property(readonly) Class superclass;
@property(readonly, nonatomic) UITraitCollection *traitCollection;

@end

