//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthUI/HKCurrentValueViewDataSourceDelegate-Protocol.h>
#import <HealthUI/HKOverlayRoomTrendModelProviding-Protocol.h>
#import <HealthUI/_HKContextChangeDelegate-Protocol.h>

@class HKChartCache, HKChartSummaryTrendModel, HKDisplayType, HKInteractiveChartDataFormatter, HKOverlayContextLocation, NSString;
@protocol HKSleepDataSourceProvider;

@interface HKOverlayRoomSleepViewController <HKCurrentValueViewDataSourceDelegate, _HKContextChangeDelegate, HKOverlayRoomTrendModelProviding>
{
    _Bool durationContextSelected;	// 8 = 0x8
    _Bool scheduleContextSelected;	// 9 = 0x9
    _Bool baseDisplayIsSchedule;	// 10 = 0xa
    _Bool shouldHighlightBaseDisplayContext;	// 11 = 0xb
    id <HKSleepDataSourceProvider> _sleepDataSourceProvider;	// 16 = 0x10
    HKInteractiveChartDataFormatter *_sleepChartFormatter;	// 24 = 0x18
    HKDisplayType *_sleepDisplayType;	// 32 = 0x20
    HKChartCache *_sharedSleepCache;	// 40 = 0x28
    HKChartSummaryTrendModel *_trendModel;	// 48 = 0x30
    HKOverlayContextLocation *_trendContextLocation;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000024a99a
@property(retain, nonatomic) HKOverlayContextLocation *trendContextLocation; // @synthesize trendContextLocation=_trendContextLocation;
@property(readonly, nonatomic) HKChartSummaryTrendModel *trendModel; // @synthesize trendModel=_trendModel;
@property(retain, nonatomic) HKChartCache *sharedSleepCache; // @synthesize sharedSleepCache=_sharedSleepCache;
@property(retain, nonatomic) HKDisplayType *sleepDisplayType; // @synthesize sleepDisplayType=_sleepDisplayType;
@property(retain, nonatomic) HKInteractiveChartDataFormatter *sleepChartFormatter; // @synthesize sleepChartFormatter=_sleepChartFormatter;
@property(nonatomic) __weak id <HKSleepDataSourceProvider> sleepDataSourceProvider; // @synthesize sleepDataSourceProvider=_sleepDataSourceProvider;
@property(nonatomic) _Bool shouldHighlightBaseDisplayContext; // @synthesize shouldHighlightBaseDisplayContext;
@property(nonatomic) _Bool baseDisplayIsSchedule; // @synthesize baseDisplayIsSchedule;
@property(nonatomic) _Bool scheduleContextSelected; // @synthesize scheduleContextSelected;
@property(nonatomic) _Bool durationContextSelected; // @synthesize durationContextSelected;
- (void)saveRestorationState;	// IMP=0x000000000024a7dd
- (id)restorationStateDictionary;	// IMP=0x000000000024a6c1
- (id)_sleepColorForSelectedRangeData:(id)arg1;	// IMP=0x000000000024a55e
- (id)titleForSelectedRangeData:(id)arg1 displayType:(id)arg2;	// IMP=0x000000000024a475
- (id)stringForValueRange:(id)arg1 timeScope:(long long)arg2;	// IMP=0x000000000024a3ec
- (id)createViewControllerForMode:(long long)arg1 displayDate:(id)arg2 applicationItems:(id)arg3;	// IMP=0x000000000024a2e4
- (id)initialSelectedContextForMode:(long long)arg1;	// IMP=0x000000000024a26c
- (id)_durationAmountContextForApplicationItems:(id)arg1 durationDisplayType:(id)arg2;	// IMP=0x000000000024a1dc
- (id)_durationAverageContextForApplicationItems:(id)arg1 durationDisplayType:(id)arg2 useInBedAverage:(_Bool)arg3;	// IMP=0x000000000024a0a2
- (id)_consistencyContextForApplicationItems:(id)arg1 overlayMode:(long long)arg2 isPrimaryContext:(_Bool)arg3;	// IMP=0x0000000000249fb0
- (id)_durationGoalContextForApplicationItems:(id)arg1 durationDisplayType:(id)arg2 overlayMode:(long long)arg3 isPrimaryContext:(_Bool)arg4;	// IMP=0x0000000000249ee2
- (id)_fullContextsForApplicationItems:(id)arg1 overlayChartController:(id)arg2;	// IMP=0x0000000000249ae4
- (id)_buildSleepTrendContext:(id)arg1 overlayChartController:(id)arg2;	// IMP=0x00000000002499f8
- (id)_primaryContextForApplicationItems:(id)arg1 overlayChartController:(id)arg2;	// IMP=0x00000000002497f9
- (id)contextSectionsForMode:(long long)arg1 applicationItems:(id)arg2 overlayChartController:(id)arg3;	// IMP=0x0000000000249760
- (id)primaryDisplayTypeWithApplicationItems:(id)arg1;	// IMP=0x0000000000249573
- (id)controllerTitleWithApplicationItems:(id)arg1;	// IMP=0x0000000000249517
- (id)_buildDurationAverageFormatter;	// IMP=0x0000000000249412
- (id)_buildDurationAverageSeries;	// IMP=0x0000000000249333
- (id)_buildDurationAverageDisplayTypeWithApplicationItems:(id)arg1 customSleepSeries:(id)arg2 customSleepChartFormatter:(id)arg3;	// IMP=0x0000000000249319
- (id)_buildDurationGoalDisplayTypeWithApplicationItems:(id)arg1;	// IMP=0x00000000002492fc
- (id)_buildDurationDisplayTypeWithApplicationItems:(id)arg1;	// IMP=0x00000000002492e2
- (id)_buildScheduleDisplayTypeWithApplicationItems:(id)arg1;	// IMP=0x00000000002492c5
- (id)_buildConsistencyDisplayTypeWithApplicationItems:(id)arg1;	// IMP=0x00000000002492a8
- (id)_buildSleepDisplayTypeWithApplicationItems:(id)arg1 sleepSeriesType:(long long)arg2 customSleepSeries:(id)arg3 customSleepChartFormatter:(id)arg4;	// IMP=0x00000000002490c1
- (id)createChartOverlayViewController;	// IMP=0x0000000000248dc2
- (void)setShouldHighlightBaseDisplayContext;	// IMP=0x0000000000248d9d
- (void)setBaseDisplayIsSchedule;	// IMP=0x0000000000248d78
- (void)setBaseDisplayIsDuration;	// IMP=0x0000000000248d53
- (id)getChartSummaryTrendModelToModify;	// IMP=0x0000000000248cfd
- (void)viewDidLoad;	// IMP=0x0000000000248cce
- (void)_setDefaultChartFormatterFonts;	// IMP=0x0000000000248b5f
- (void)_installUpdateObserversForGoalsAndSchedulesWithApplicationItems:(id)arg1;	// IMP=0x0000000000248a02
- (_Bool)_initialTrendSelectedForMode:(long long)arg1 trendModel:(id)arg2;	// IMP=0x00000000002489e3
- (id)initWithDisplayDate:(id)arg1 applicationItems:(id)arg2 sleepDataSourceProvider:(id)arg3 sleepChartFormatter:(id)arg4 mode:(long long)arg5 trendModel:(id)arg6;	// IMP=0x0000000000248735

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

