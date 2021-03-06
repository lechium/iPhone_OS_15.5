//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CalendarOccurrencesCollection, EKDayViewContent, NSArray, NSCalendar, NSDate, NSDateComponents, NSObject, NSString, NSTimeZone, UIImage, UIImageView, UIScrollView, UIWindow, WeekAllDayView;
@protocol OS_dispatch_queue, WeekViewDataSource, WeekViewDelegate;

@interface WeekView : UIView
{
    UIWindow *_targetWindow;	// 8 = 0x8
    WeekAllDayView *_allDayView;	// 16 = 0x10
    EKDayViewContent *_content;	// 24 = 0x18
    UIScrollView *_scrollView;	// 32 = 0x20
    UIImageView *_gridExtensionView;	// 40 = 0x28
    long long _daysToDisplay;	// 48 = 0x30
    UIImage *_verticalGridExtensionImage;	// 56 = 0x38
    CalendarOccurrencesCollection *_events;	// 64 = 0x40
    NSDateComponents *_highlightedDateComponents;	// 72 = 0x48
    long long _selectedSecond;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_reloadQueue;	// 88 = 0x58
    struct CGRect _visibleRectToSet;	// 96 = 0x60
    id <WeekViewDataSource> _dataSource;	// 128 = 0x80
    id <WeekViewDelegate> _delegate;	// 136 = 0x88
    NSDateComponents *_weekStartDate;	// 144 = 0x90
    NSCalendar *_calendar;	// 152 = 0x98
    long long _orientation;	// 160 = 0xa0
    double _hourHeightScale;	// 168 = 0xa8
}

+ (id)weekSeparatorColor;	// IMP=0x0020000000054164
+ (double)dayWidthForOrientation:(long long)arg1 withViewInViewHierarchy:(id)arg2;	// IMP=0x0010000000054030
+ (unsigned long long)displayedDaysForOrientation:(long long)arg1 withViewInViewHierarchy:(id)arg2;	// IMP=0x0010000000053e6f
+ (double)_windowSpaceForOrientation:(long long)arg1 withViewInViewHierarchy:(id)arg2;	// IMP=0x0010000000053bf2
+ (double)standardWidthForOrientation:(long long)arg1 withViewInViewHierarchy:(id)arg2;	// IMP=0x0010000000053bd7
- (void).cxx_destruct;	// IMP=0x0020000000058b5b
@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(readonly, nonatomic) EKDayViewContent *content; // @synthesize content=_content;
@property(readonly, nonatomic) WeekAllDayView *allDayView; // @synthesize allDayView=_allDayView;
@property(nonatomic) double hourHeightScale; // @synthesize hourHeightScale=_hourHeightScale;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(copy, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property(copy, nonatomic) NSDateComponents *weekStartDate; // @synthesize weekStartDate=_weekStartDate;
@property(nonatomic) __weak id <WeekViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <WeekViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)dayViewContent:(id)arg1 didTapPinnedOccurrence:(id)arg2;	// IMP=0x0010000000058991
- (void)dayViewContent:(id)arg1 didTapInEmptySpaceOnDay:(double)arg2;	// IMP=0x00100000000588a0
- (double)yPositionPerhapsMatchingAllDayOccurrence:(id)arg1 atPoint:(struct CGPoint)arg2;	// IMP=0x0010000000058736
- (id)viewForEvent:(id)arg1;	// IMP=0x00100000000586b3
- (void)setScrollerContentOffset:(struct CGPoint)arg1;	// IMP=0x0010000000058687
- (_Bool)scrollerIsParentOfView:(id)arg1 isAllDay:(_Bool)arg2;	// IMP=0x0010000000058624
- (void)addViewToScroller:(id)arg1 isAllDay:(_Bool)arg2;	// IMP=0x00100000000584c3
- (_Bool)isAnimatingScroll;	// IMP=0x00100000000584ae
- (struct CGPoint)pointAtDate:(id)arg1 isAllDay:(_Bool)arg2;	// IMP=0x00100000000581f3
- (_Bool)containsDate:(id)arg1;	// IMP=0x0010000000058108
- (void)showOverlayMonthInCellAtOffset:(double)arg1 animated:(_Bool)arg2;	// IMP=0x001000000005807e
- (id)weekAllDayViewForTimeframeAfter:(id)arg1;	// IMP=0x0010000000057f9f
- (id)weekAllDayViewForTimeframeBefore:(id)arg1;	// IMP=0x0010000000057ec0
- (void)weekAllDayViewDidScroll:(id)arg1;	// IMP=0x0010000000057e36
- (void)weekAllDayViewEmptySpaceClick:(id)arg1 onDay:(double)arg2;	// IMP=0x0010000000057d26
- (void)weekAllDayView:(id)arg1 didSelectEvent:(id)arg2;	// IMP=0x0010000000057c92
- (void)dayViewContentDidLayout:(id)arg1;	// IMP=0x0010000000057c08
- (void)dayViewContent:(id)arg1 didSelectEvent:(id)arg2;	// IMP=0x0010000000057b74
- (void)updateMarkerPosition;	// IMP=0x0010000000057b2c
- (id)_verticalGridExtensionImage;	// IMP=0x0010000000057879
- (void)firstVisibleSecondChanged;	// IMP=0x00100000000577c4
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;	// IMP=0x00100000000577b2
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x001000000005771b
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x001000000005767d
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x001000000005734e
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x00100000000572b5
@property(readonly, nonatomic) NSArray *occurrenceViews;
- (void)scrollToEvent:(id)arg1 animateWithDuration:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000056e2d
- (void)scrollToEvent:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000056e10
- (_Bool)scrollTowardPoint:(struct CGPoint)arg1;	// IMP=0x0010000000056a98
- (void)scrollToSecond:(long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000056771
@property(nonatomic) long long firstVisibleSecond;
- (int)_secondAtPosition:(double)arg1;	// IMP=0x0010000000056649
- (double)_positionOfSecond:(long long)arg1;	// IMP=0x00100000000565c8
- (double)_verticalOffset;	// IMP=0x00100000000565bf
- (id)_createOccurrenceView:(id)arg1;	// IMP=0x0010000000056389
- (void)reloadData;	// IMP=0x00100000000561d0
- (void)loadDataAsyncWithCompletion:(CDUnknownBlockType)arg1 reverse:(_Bool)arg2;	// IMP=0x0010000000055e37
@property(readonly, nonatomic) _Bool hasAllDayEvents;
@property(nonatomic) _Bool showsTimeMarker;
- (void)_updateHighlightedDay;	// IMP=0x0010000000055ac8
- (void)_updateTimeMarkerDotDay;	// IMP=0x00100000000557d9
- (void)updateTimeMarkerForDayChange;	// IMP=0x00100000000557c7
- (id)dateForXOffset:(double)arg1;	// IMP=0x0010000000055633
- (void)adjustForVisibleRect:(struct CGRect)arg1;	// IMP=0x001000000005540a
@property(readonly, nonatomic) NSDate *lastSecondOfWeek;
@property(readonly, nonatomic) NSDateComponents *lastDateOfWeek;
@property(retain, nonatomic) NSDateComponents *highlightedDateComponents;
@property(copy, nonatomic) NSTimeZone *timeZone;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0010000000054db8
- (void)updateDayWidth;	// IMP=0x0010000000054c86
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0010000000054c30
- (void)layoutSubviews;	// IMP=0x0010000000054971
- (id)initWithFrame:(struct CGRect)arg1 sizeClass:(long long)arg2 targetWindow:(id)arg3;	// IMP=0x001000000005417d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

