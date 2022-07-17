//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CompactMonthWeekDayNumber, EKCalendarDate, EKUITodayCirclePulseView, NSArray, NSCalendar, NSString, UIFont, UILabel;

@interface CompactMonthWeekView : UIView
{
    EKCalendarDate *_startCalendarDate;	// 8 = 0x8
    EKCalendarDate *_endCalendarDate;	// 16 = 0x10
    NSCalendar *_calendar;	// 24 = 0x18
    long long _cellToStartDrawingIn;	// 32 = 0x20
    _Bool _containsFirstDayOfMonth;	// 40 = 0x28
    UIView *_grayLine;	// 48 = 0x30
    UILabel *_monthNameLabel;	// 56 = 0x38
    struct CGSize _monthNameLabelFittingSize;	// 64 = 0x40
    EKUITodayCirclePulseView *_todayPulse;	// 80 = 0x50
    _Bool _containsToday;	// 88 = 0x58
    UILabel *_weekNumberLabel;	// 96 = 0x60
    NSArray *_days;	// 104 = 0x68
    CompactMonthWeekDayNumber *_today;	// 112 = 0x70
    CompactMonthWeekDayNumber *_selected;	// 120 = 0x78
    _Bool _needToForceLayout;	// 128 = 0x80
    _Bool _darkBackgroundMode;	// 129 = 0x81
    _Bool _compressedVerticalMode;	// 130 = 0x82
    _Bool _compressedHorizontalMode;	// 131 = 0x83
    _Bool _enableLayerAnimationsDuringLayout;	// 132 = 0x84
    _Bool _disableTodayPulse;	// 133 = 0x85
    _Bool _showWeekNumber;	// 134 = 0x86
    _Bool _temporarilyHideWeekNumber;	// 135 = 0x87
    _Bool _useLayoutMargins;	// 136 = 0x88
    NSArray *_eventCounts;	// 144 = 0x90
    UIFont *_monthNameFont;	// 152 = 0x98
}

+ (_Bool)_useTallCompressedHeight;	// IMP=0x00200000000c4ed6
+ (double)heightForViewThatContainsFirstDayOfMonth:(_Bool)arg1 compressed:(_Bool)arg2 windowSize:(struct CGSize)arg3;	// IMP=0x00100000000c4e0e
+ (_Bool)_viewForCalendarDateContainsFirstDayOfMonth:(id)arg1;	// IMP=0x00100000000c4d69
+ (double)_topInsetForViewThatContainsFirstDayOfMonth:(_Bool)arg1 cellToStartDrawingIn:(long long)arg2;	// IMP=0x00100000000c4d60
+ (long long)_cellToStartDrawingInForViewWithCalendarDate:(id)arg1 calendar:(id)arg2;	// IMP=0x00100000000c4c8a
+ (double)grayLineHeight;	// IMP=0x00100000000c2c90
+ (_Bool)usesRoundedRectInsteadOfCircle;	// IMP=0x00100000000c2c84
+ (double)spaceBelowGrayLineHeight:(_Bool)arg1;	// IMP=0x00100000000c2bae
+ (double)dayNumberBaselineToGrayLineDistance:(_Bool)arg1;	// IMP=0x00100000000c2a0a
+ (double)dayNumberOverlayFontSize:(_Bool)arg1;	// IMP=0x00100000000c29d1
+ (double)dayNumberFontSize:(_Bool)arg1;	// IMP=0x00100000000c2937
+ (_Bool)canShowEventMarkersCompressed:(_Bool)arg1;	// IMP=0x00100000000bff26
+ (double)eventMarkerDiameter:(_Bool)arg1;	// IMP=0x00100000000bfef5
+ (id)eventMarkerColor;	// IMP=0x00100000000bfe6d
+ (struct CGPoint)eventMarkerPositionForColumnWidth:(double)arg1 rowHeight:(double)arg2 compressed:(_Bool)arg3 showingOverlay:(_Bool)arg4;	// IMP=0x00100000000bfdd2
+ (double)_eventMarkerYPositionCompressed:(_Bool)arg1 showingOverlay:(_Bool)arg2;	// IMP=0x00100000000bfd1a
+ (double)headerHeightForWindowSize:(struct CGSize)arg1;	// IMP=0x00100000000bfd01
+ (double)cellHeightWithVerticalCompression:(_Bool)arg1;	// IMP=0x00100000000bfcbb
+ (double)circleDiameterWithOverlayLarge;	// IMP=0x00100000000bf4cd
+ (double)circleDiameterWithOverlay;	// IMP=0x00100000000bf4b4
+ (double)circleDiameterCompressed;	// IMP=0x00100000000bf49b
+ (double)circleDiameter;	// IMP=0x00100000000bf482
+ (double)heightForViewWithCalendarDate:(id)arg1 compressed:(_Bool)arg2 windowSize:(struct CGSize)arg3;	// IMP=0x00100000000bf3f4
+ (double)topInsetForViewWithCalendarDate:(id)arg1 calendar:(id)arg2;	// IMP=0x00100000000bf345
+ (double)dayNumberLayerYOffsetCompressed:(_Bool)arg1;	// IMP=0x00100000000bd815
+ (double)roundedRectYOffset;	// IMP=0x00100000000bd72d
+ (double)weekNumberDistanceFromGrayLine;	// IMP=0x00100000000bd71f
+ (double)twoDigitWeekNumberWidth;	// IMP=0x00100000000bd5be
+ (struct UIEdgeInsets)layoutMarginsForBounds:(struct CGRect)arg1;	// IMP=0x00100000000bd0ef
+ (id)weekNumberColorForThisWeek:(_Bool)arg1;	// IMP=0x00100000000bc76a
+ (id)weekNumberFont;	// IMP=0x00100000000bc71f
- (void).cxx_destruct;	// IMP=0x00200000000c54d6
@property(nonatomic) _Bool useLayoutMargins; // @synthesize useLayoutMargins=_useLayoutMargins;
@property(retain, nonatomic) UIFont *monthNameFont; // @synthesize monthNameFont=_monthNameFont;
@property(nonatomic) _Bool temporarilyHideWeekNumber; // @synthesize temporarilyHideWeekNumber=_temporarilyHideWeekNumber;
@property(nonatomic) _Bool showWeekNumber; // @synthesize showWeekNumber=_showWeekNumber;
@property(nonatomic) _Bool disableTodayPulse; // @synthesize disableTodayPulse=_disableTodayPulse;
@property(nonatomic) _Bool enableLayerAnimationsDuringLayout; // @synthesize enableLayerAnimationsDuringLayout=_enableLayerAnimationsDuringLayout;
@property(nonatomic) _Bool compressedHorizontalMode; // @synthesize compressedHorizontalMode=_compressedHorizontalMode;
@property(nonatomic) _Bool compressedVerticalMode; // @synthesize compressedVerticalMode=_compressedVerticalMode;
@property(nonatomic) _Bool darkBackgroundMode; // @synthesize darkBackgroundMode=_darkBackgroundMode;
@property(retain, nonatomic) NSArray *eventCounts; // @synthesize eventCounts=_eventCounts;
- (unsigned long long)_monthLabelColumnIndex;	// IMP=0x00100000000c52c1
- (id)monthNameLabel;	// IMP=0x00100000000c528a
- (unsigned long long)_daysInAWeek;	// IMP=0x00100000000c527f
- (void)_reloadMonthNameLabel;	// IMP=0x00100000000c4ee2
- (void)cursorInteraction:(id)arg1 willExitRegion:(id)arg2 withAnimator:(id)arg3;	// IMP=0x00100000000c47e2
- (void)cursorInteraction:(id)arg1 willEnterRegion:(id)arg2 withAnimator:(id)arg3;	// IMP=0x00100000000c4476
- (id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 modifiers:(long long)arg3;	// IMP=0x00100000000c395c
- (id)cursorInteraction:(id)arg1 regionForLocation:(struct CGPoint)arg2 defaultRegion:(id)arg3;	// IMP=0x00100000000c35b4
- (void)_setUpInteraction;	// IMP=0x00100000000c355e
- (struct CGRect)frameForHighlightWithDayFrame:(struct CGRect)arg1 dayLayerFrame:(struct CGRect)arg2 numberString:(id)arg3 overlayString:(id)arg4;	// IMP=0x00100000000c3482
- (struct CGPoint)_roundedRectOriginForDayLayerFrame:(struct CGRect)arg1 roundedRectSize:(struct CGSize)arg2 withOverlay:(_Bool)arg3;	// IMP=0x00100000000c334c
- (struct CGRect)_roundedRectFrameForHighlightWithDayFrame:(struct CGRect)arg1 dayLayerFrame:(struct CGRect)arg2 numberString:(id)arg3 overlayString:(id)arg4;	// IMP=0x00100000000c3207
- (struct CGRect)_circleFrameForHighlightWithDayFrame:(struct CGRect)arg1 dayLayerFrame:(struct CGRect)arg2 numberString:(id)arg3 overlayString:(id)arg4;	// IMP=0x00100000000c30b1
- (void)updateEventMarkerVisibilityForDayNumber:(id)arg1 withEventCount:(unsigned long long)arg2;	// IMP=0x00100000000c2ef2
- (void)updateEventMarkerLayoutForDayNumber:(id)arg1 yOffset:(double)arg2;	// IMP=0x00100000000c2cc0
- (void)setGrayLineAlpha:(double)arg1;	// IMP=0x00100000000c291a
- (void)setSelectedDay:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00100000000c1f36
- (void)_updateEventMarkerVisibility;	// IMP=0x00100000000c1c86
- (void)setEventCounts:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00100000000c1bee
- (void)_clearTodayHighlight;	// IMP=0x00100000000c1af3
- (void)resetTodayBits;	// IMP=0x00100000000c1545
- (void)resetTimeZone:(id)arg1;	// IMP=0x00100000000c131b
- (void)_updateWeekNumberAnimated:(_Bool)arg1;	// IMP=0x00100000000c1111
- (void)setCalendarDate:(id)arg1;	// IMP=0x00100000000c0d04
- (double)_circleYOffsetFromTopForDiameter:(double)arg1;	// IMP=0x00100000000c0bda
- (struct CGPoint)positionOfCircleInCellWithWidth:(double)arg1 circleSize:(struct CGSize)arg2;	// IMP=0x00100000000c0b87
- (void)adjustHighlight:(id)arg1 forDay:(id)arg2;	// IMP=0x00100000000c0504
- (long long)indexForPoint:(struct CGPoint)arg1;	// IMP=0x00100000000c0398
- (id)dayForPoint:(struct CGPoint)arg1;	// IMP=0x00100000000c01c7
- (id)days;	// IMP=0x00100000000c01b2
- (id)dayNumberCellFrames;	// IMP=0x00100000000c0091
- (struct CGRect)frameForTodayHighlight;	// IMP=0x00100000000bfffd
- (_Bool)isTodayHighlightVisible;	// IMP=0x00100000000bffae
- (struct CGRect)rectForCells;	// IMP=0x00100000000bff2e
- (long long)daysInMonth;	// IMP=0x00100000000bfc9e
@property(readonly, nonatomic) _Bool containsFirstDayOfMonth;
- (void)prepareForReuse;	// IMP=0x00100000000bf310
- (void)haltTodayPulse;	// IMP=0x00100000000bf2d8
- (void)pulseTodayCircle;	// IMP=0x00100000000beec9
- (double)topInset;	// IMP=0x00100000000bee8f
- (id)endCalendarDate;	// IMP=0x00100000000bee7a
- (id)calendarDate;	// IMP=0x00000000000bee65
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00100000000beaf7
- (void)safeAreaInsetsDidChange;	// IMP=0x00100000000beae6
- (struct CGRect)frameForDayCircleWithSize:(struct CGSize)arg1 dayNumberLayerFrame:(struct CGRect)arg2 dayNumberFrame:(struct CGRect)arg3 withOverlay:(_Bool)arg4;	// IMP=0x00100000000bea0c
- (void)layoutSubviews;	// IMP=0x00100000000bd955
- (void)layoutIfNeeded;	// IMP=0x00100000000bd570
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x00100000000bd4d1
- (double)columnWidthForViewWithBounds:(struct CGRect)arg1 onWeekend:(_Bool)arg2 weekNumbersInset:(double)arg3;	// IMP=0x00100000000bd458
- (double)weekNumbersInset;	// IMP=0x00100000000bd43a
- (struct CGRect)_boundsInsetWithMarginsForBounds:(struct CGRect)arg1;	// IMP=0x00100000000bd321
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00100000000bd07b
- (void)_initializeMonthNameLabel;	// IMP=0x00100000000bcf33
- (void)_updateDayFrames;	// IMP=0x00100000000bcbf1
- (void)_initializeDays;	// IMP=0x00100000000bca5e
- (void)_initializeGrayLine;	// IMP=0x00100000000bc9b6
@property(readonly, copy) NSString *description;
- (id)initWithCalendarDate:(id)arg1 calendar:(id)arg2 compressed:(_Bool)arg3 darkBackgroundMode:(_Bool)arg4;	// IMP=0x00100000000bc5f4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
