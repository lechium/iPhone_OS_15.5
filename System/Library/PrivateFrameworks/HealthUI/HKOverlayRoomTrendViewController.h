//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthUI/HKOverlayRoomTrendModelProviding-Protocol.h>

@class HKChartSummaryTrendModel, HKDisplayType, HKOverlayRoomViewController, NSDictionary, NSString;

@interface HKOverlayRoomTrendViewController <HKOverlayRoomTrendModelProviding>
{
    HKDisplayType *_baseChartDisplayType;	// 8 = 0x8
    HKChartSummaryTrendModel *_trendModel;	// 16 = 0x10
    HKOverlayRoomViewController *_wrappedOverlayViewController;	// 24 = 0x18
    NSDictionary *_timeScopeRanges;	// 32 = 0x20
    long long _startingTimeScope;	// 40 = 0x28
    long long _overrideFirstWeekday;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000011aed1
@property(readonly, nonatomic) long long overrideFirstWeekday; // @synthesize overrideFirstWeekday=_overrideFirstWeekday;
@property(readonly, nonatomic) long long startingTimeScope; // @synthesize startingTimeScope=_startingTimeScope;
@property(retain, nonatomic) NSDictionary *timeScopeRanges; // @synthesize timeScopeRanges=_timeScopeRanges;
@property(retain, nonatomic) HKOverlayRoomViewController *wrappedOverlayViewController; // @synthesize wrappedOverlayViewController=_wrappedOverlayViewController;
@property(retain, nonatomic) HKChartSummaryTrendModel *trendModel; // @synthesize trendModel=_trendModel;
@property(retain, nonatomic) HKDisplayType *baseChartDisplayType; // @synthesize baseChartDisplayType=_baseChartDisplayType;
- (id)_primaryContextForApplicationItems:(id)arg1 overlayChartController:(id)arg2;	// IMP=0x000000000011ad41
- (id)_primarySectionForApplicationItems:(id)arg1 overlayChartController:(id)arg2;	// IMP=0x000000000011ac4e
- (id)createChartOverlayViewController;	// IMP=0x000000000011a7e2
- (id)getChartSummaryTrendModelToModify;	// IMP=0x000000000011a7d0
- (_Bool)supportsShowAllFilters;	// IMP=0x000000000011a7bb
- (id)createViewControllerForMode:(long long)arg1 displayDate:(id)arg2 applicationItems:(id)arg3;	// IMP=0x000000000011a785
- (id)initialSelectedContextForMode:(long long)arg1;	// IMP=0x000000000011a758
- (id)contextSectionsForMode:(long long)arg1 applicationItems:(id)arg2 overlayChartController:(id)arg3;	// IMP=0x000000000011a721
- (id)primaryDisplayTypeWithApplicationItems:(id)arg1;	// IMP=0x000000000011a70f
- (id)controllerTitleWithApplicationItems:(id)arg1;	// IMP=0x000000000011a6bf
- (id)initWithBaseChartDisplayType:(id)arg1 trendModel:(id)arg2 displayDate:(id)arg3 applicationItems:(id)arg4 timeScopeRanges:(id)arg5 initialTimeScope:(long long)arg6 wrappedOverlay:(id)arg7 overrideFirstWeekday:(long long)arg8;	// IMP=0x000000000011a4df

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

