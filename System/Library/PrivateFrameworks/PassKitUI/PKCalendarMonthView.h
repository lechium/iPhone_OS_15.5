//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <PassKitUI/PKCalendarDayViewDelegate-Protocol.h>

@class NSArray, NSString, PKCalendarDayView;

@interface PKCalendarMonthView : UIView <PKCalendarDayViewDelegate>
{
    NSArray *_dayViews;	// 8 = 0x8
    NSArray *_weekdayHeaders;	// 16 = 0x10
    PKCalendarDayView *_selectedDayView;	// 24 = 0x18
    UIView *_headerView;	// 32 = 0x20
    UIView *_headerSeparatorView;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000076da6
- (void)_formViewsWithDataSource:(id)arg1 appearance:(id)arg2 headerView:(id)arg3;	// IMP=0x00000000000763f1
- (void)calendarDayViewTapped:(id)arg1 withDate:(id)arg2;	// IMP=0x000000000007636c
- (struct CGSize)_layoutWithBounds:(struct CGRect)arg1 isTemplateLayout:(_Bool)arg2;	// IMP=0x00000000000759e7
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000007599e
- (void)layoutSubviews;	// IMP=0x000000000007592f
- (void)configureWithDataSource:(id)arg1 appearance:(id)arg2 headerView:(id)arg3;	// IMP=0x000000000007591d
- (id)init;	// IMP=0x000000000007581f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

