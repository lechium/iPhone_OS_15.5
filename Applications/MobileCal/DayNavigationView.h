//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class DayNavigationWeekScrollView, DayTwoPartLabel, MISSING_TYPE, NSCalendar, NSDate, NSString, NSTimeZone, ScrollSpringFactory, UILabel;
@protocol DayNavigationViewDelegate;

@interface DayNavigationView : UIView
{
    NSCalendar *_calendar;	// 8 = 0x8
    NSTimeZone *_timeZone;	// 16 = 0x10
    NSDate *_selectedDate;	// 24 = 0x18
    NSDate *_currentWeekDayLabelDate;	// 32 = 0x20
    ScrollSpringFactory *_springFactory;	// 40 = 0x28
    DayNavigationWeekScrollView *_weekScrollView;	// 48 = 0x30
    DayTwoPartLabel *_weekDayLabel;	// 56 = 0x38
    DayTwoPartLabel *_fadingWeekDayLabel;	// 64 = 0x40
    UILabel *_weekNumberLabel;	// 72 = 0x48
    UILabel *_fadingWeekNumberLabel;	// 80 = 0x50
    UIView *_weekNumberLabelBackgroundView;	// 88 = 0x58
    MISSING_TYPE *_showWeekNumber;	// 96 = 0x60
    _Bool _showOverlayCalendar;	// 97 = 0x61
    id <DayNavigationViewDelegate> _delegate;	// 104 = 0x68
    double _sideMargin;	// 112 = 0x70
    struct UIEdgeInsets _paletteSafeAreaInsets;	// 120 = 0x78
}

+ (id)_weekNumberFont;	// IMP=0x00200000000fdc49
+ (id)_weekdayFont;	// IMP=0x00100000000fdba2
+ (id)_normalWeekdayFont;	// IMP=0x00100000000fdb5b
+ (id)_smallWeekdayFont;	// IMP=0x00100000000fdb14
+ (id)_weekdayFontOfSize:(double)arg1;	// IMP=0x00100000000fdafb
- (void).cxx_destruct;	// IMP=0x00200000000fe7b2
@property(nonatomic) struct UIEdgeInsets paletteSafeAreaInsets; // @synthesize paletteSafeAreaInsets=_paletteSafeAreaInsets;
@property(nonatomic) double sideMargin; // @synthesize sideMargin=_sideMargin;
@property(nonatomic) _Bool showOverlayCalendar; // @synthesize showOverlayCalendar=_showOverlayCalendar;
@property(nonatomic) _Bool showWeekNumber; // @synthesize showWeekNumber=_showWeekNumber;
@property(nonatomic) __weak id <DayNavigationViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_animateView:(id)arg1 toAlpha:(double)arg2;	// IMP=0x00100000000fe6e9
- (id)_animateView:(id)arg1 toPosition:(struct CGPoint)arg2 setDelegate:(_Bool)arg3;	// IMP=0x00100000000fe6cc
- (void)_updateLabelsWithDate:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00100000000fe61b
- (void)_updateLabels:(long long)arg1;	// IMP=0x00100000000fdd2f
- (void)_stopPulsingToday;	// IMP=0x00100000000fdade
- (void)pulseToday;	// IMP=0x00100000000fdac1
- (_Bool)canAnimateToDate:(id)arg1;	// IMP=0x00100000000fdaa4
- (void)contentSizeCategoryChanged;	// IMP=0x00100000000fda6b
- (void)significantTimeChangeOccurred;	// IMP=0x00100000000fda4e
- (void)setCalendar:(id)arg1;	// IMP=0x00100000000fd956
- (void)setSelectedDate:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00100000000fd7ef
@property(readonly, nonatomic) UILabel *weekNumberLabel;
- (void)_updateFontSizes;	// IMP=0x00100000000fd6d1
@property(readonly, nonatomic) DayTwoPartLabel *weekDayLabel;
@property(readonly, nonatomic) DayNavigationWeekScrollView *weekScrollView;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;	// IMP=0x00100000000fd26b
- (void)animationDidStart:(id)arg1;	// IMP=0x00100000000fd265
- (void)dayNavigationWeekScrollView:(id)arg1 didChangeCellWidth:(double)arg2;	// IMP=0x00100000000fd1d3
- (void)dayNavigationWeekScrollView:(id)arg1 selectedDateChanged:(id)arg2;	// IMP=0x00100000000fd12a
- (void)dayNavigationWeekScrollViewFailedToSelectDate:(CDUnknownBlockType)arg1;	// IMP=0x00100000000fd096
- (_Bool)dayNavigationWeekScrollViewAllowedToChangeSelectedDate;	// IMP=0x00100000000fd01b
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x00100000000fcffa
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x00100000000fcfb7
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00100000000fcf81
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;	// IMP=0x00100000000fcf30
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x00100000000fcedf
- (void)scrollViewWillBeginDecelerating:(id)arg1;	// IMP=0x00100000000fcbe2
- (void)willTransitionToSize;	// IMP=0x00100000000fcbc5
- (void)setBackgroundColor:(id)arg1;	// IMP=0x00100000000fcaea
- (void)layoutSubviews;	// IMP=0x00100000000fbea5
- (void)layoutMarginsDidChange;	// IMP=0x00100000000fbe64
- (void)_updateWeekDayLabelLayout;	// IMP=0x00100000000fbbfc
- (struct CGRect)_frameForWeekDayLabel:(id)arg1;	// IMP=0x00100000000fb8ee
- (_Bool)_shouldLeftAlignWeekNumber;	// IMP=0x00100000000fb8a5
- (_Bool)_shouldCenterWeekNumberTogetherWithWeekday;	// IMP=0x00100000000fb86a
- (double)_weekNumberRightEdge;	// IMP=0x00100000000fb7f1
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00100000000fb633
- (void)_dayTimeViewHourWidthChanged;	// IMP=0x00100000000fb621
- (void)dealloc;	// IMP=0x00100000000fb59f
- (id)initWithCalendar:(id)arg1 selectedDate:(id)arg2 cellFactory:(id)arg3 showWeekdayLabel:(_Bool)arg4 eventSpringLoadingEnabled:(_Bool)arg5;	// IMP=0x00100000000fb21c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

