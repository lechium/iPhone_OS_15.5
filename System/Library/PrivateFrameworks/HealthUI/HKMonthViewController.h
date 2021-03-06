//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthUI/HKCalendarScrollViewControllerDelegate-Protocol.h>

@class HKCalendarScrollViewController, HKDateCache, NSDate, NSDateComponents, NSString, UILabel;
@protocol HKMonthViewControllerDelegate;

@interface HKMonthViewController <HKCalendarScrollViewControllerDelegate>
{
    NSDateComponents *_cachedDateComponents;	// 8 = 0x8
    _Bool _wantsShortTitleDate;	// 16 = 0x10
    id <HKMonthViewControllerDelegate> _delegate;	// 24 = 0x18
    NSDate *_currentDate;	// 32 = 0x20
    long long _titleAlignment;	// 40 = 0x28
    HKCalendarScrollViewController *_calendarScrollViewController;	// 48 = 0x30
    UILabel *_titleLabel;	// 56 = 0x38
    HKDateCache *_dateCache;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000291781
@property(readonly, nonatomic) HKDateCache *dateCache; // @synthesize dateCache=_dateCache;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) HKCalendarScrollViewController *calendarScrollViewController; // @synthesize calendarScrollViewController=_calendarScrollViewController;
@property(nonatomic) long long titleAlignment; // @synthesize titleAlignment=_titleAlignment;
@property(nonatomic) _Bool wantsShortTitleDate; // @synthesize wantsShortTitleDate=_wantsShortTitleDate;
@property(readonly, nonatomic) NSDate *currentDate; // @synthesize currentDate=_currentDate;
@property(nonatomic) __weak id <HKMonthViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_didTapBackButton;	// IMP=0x000000000029165a
- (id)_titleStringForDate:(id)arg1;	// IMP=0x0000000000291111
- (void)_updateCurrentMonthBarButtonItemWithDate:(id)arg1;	// IMP=0x0000000000290f24
- (void)_updateBackButton;	// IMP=0x0000000000290e3c
- (void)calendarScrollViewController:(id)arg1 didUpdateCenteredMonth:(id)arg2;	// IMP=0x0000000000290e27
- (void)calendarScrollViewController:(id)arg1 didSelectDate:(id)arg2;	// IMP=0x0000000000290dac
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000290c85
- (void)_setCurrentDate:(id)arg1;	// IMP=0x0000000000290c3d
- (void)setCurrentDate:(id)arg1 animateIfPossible:(_Bool)arg2;	// IMP=0x0000000000290bb5
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000290b86
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000290b0c
- (void)createTitleLabel;	// IMP=0x00000000002908f1
- (void)viewWillLayoutSubviews;	// IMP=0x0000000000290803
- (void)viewDidLoad;	// IMP=0x0000000000290709
- (void)createCalendarScrollViewController;	// IMP=0x0000000000290642
- (id)initWithDateCache:(id)arg1 date:(id)arg2;	// IMP=0x0000000000290569

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

