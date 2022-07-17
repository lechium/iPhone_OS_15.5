//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EKCalendarDate, NSString;

@interface LargeYearViewController
{
    _Bool _viewIsVisible;	// 8 = 0x8
    _Bool _viewHasAppearedBefore;	// 9 = 0x9
    long long _orientationForCurrentViewLayout;	// 16 = 0x10
    EKCalendarDate *_activeDateDuringRotation;	// 24 = 0x18
    EKCalendarDate *_currentYearNumber;	// 32 = 0x20
    struct CGSize _previousViewSize;	// 40 = 0x28
    struct CGSize _targetSizeAfterTransition;	// 56 = 0x38
    _Bool _isRotating;	// 72 = 0x48
}

+ (unsigned long long)defaultMonthsPerRowForWindowSize:(struct CGSize)arg1;	// IMP=0x0020000000114a06
+ (unsigned long long)_monthsPerRowForWindowSize:(struct CGSize)arg1;	// IMP=0x00100000001149b1
+ (_Bool)_shouldForwardViewWillTransitionToSize;	// IMP=0x0010000000113f71
- (void).cxx_destruct;	// IMP=0x0020000000115895
- (void)_updateYearNumbersAnimated:(_Bool)arg1 withForce:(_Bool)arg2;	// IMP=0x0010000000115658
- (id)_currentlyViewingCalendarDate;	// IMP=0x0010000000115585
- (void)_queueForcedUpdateToYearNumbers;	// IMP=0x00100000001154e2
- (void)localeDidChange;	// IMP=0x00100000001154d0
- (void)timeZoneDidChange;	// IMP=0x00100000001154be
- (void)_showNextDateComponentUnitInForwardDirection:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000115412
- (void)navigateToPreviousDateComponentUnitAnimated:(_Bool)arg1;	// IMP=0x00100000001153fc
- (void)navigateToNextDateComponentUnitAnimated:(_Bool)arg1;	// IMP=0x00100000001153e3
- (_Bool)allowsOverriddenToolbarItems;	// IMP=0x00100000001153db
- (_Bool)allowsOverriddenRightNavigationBarItems;	// IMP=0x00100000001153d3
- (id)sceneTitle;	// IMP=0x00100000001152e0
- (long long)intendedSizeClass;	// IMP=0x00100000001152d5
- (void)updatePalette:(id)arg1;	// IMP=0x0010000000115242
- (void)updateNavigationBarDisplayedDateString;	// IMP=0x0010000000115229
- (double)leftBarButtonBlankFixedSpaceWidth;	// IMP=0x0010000000115006
- (void)receivedTapAtLocation:(struct CGPoint)arg1 usingDate:(id)arg2 precise:(_Bool)arg3;	// IMP=0x0010000000114d65
- (void)showEvent:(id)arg1 animated:(_Bool)arg2 showDetails:(_Bool)arg3 showComments:(_Bool)arg4 context:(id)arg5;	// IMP=0x0010000000114bb9
- (void)showEvent:(id)arg1 animated:(_Bool)arg2 showDetails:(_Bool)arg3 context:(id)arg4;	// IMP=0x0010000000114b97
- (_Bool)shouldAnimateTransitionsToMonthView;	// IMP=0x0010000000114b8f
- (unsigned long long)monthsPerRow;	// IMP=0x00100000001148e4
- (Class)multipleMonthViewClass;	// IMP=0x0010000000114880
- (void)didEndScrolling;	// IMP=0x00100000001147c2
- (void)didScroll;	// IMP=0x001000000011479a
- (double)showDateVerticalOffsetForDate:(id)arg1;	// IMP=0x001000000011461c
- (_Bool)shouldAnimateScrollToDate:(id)arg1 fromClosestDate:(id)arg2;	// IMP=0x00100000001145db
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x00100000001145d0
- (void)viewWillLayoutSubviews;	// IMP=0x00100000001142ee
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0010000000113f79
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0010000000113f1c
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000113ea3
- (void)reinitializeAllViewsWithCalendarDate:(id)arg1;	// IMP=0x0010000000113e57
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000113d00
- (long long)_currentOrientation;	// IMP=0x0010000000113c70
- (long long)_orientationForSize:(struct CGSize)arg1;	// IMP=0x0010000000113c51
- (_Bool)_usePortraitLayoutForSize:(struct CGSize)arg1;	// IMP=0x0010000000113c44

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
