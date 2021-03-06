//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HKSPSleepEventTimelineResults, HKSPSleepScheduleModel, NSCalendar, NSDate;

@interface HKSPSleepEventTimelineBuilder : NSObject
{
    HKSPSleepEventTimelineResults *_results;	// 8 = 0x8
    HKSPSleepScheduleModel *_sleepScheduleModel;	// 16 = 0x10
    NSDate *_date;	// 24 = 0x18
    NSCalendar *_calendar;	// 32 = 0x20
    unsigned long long _options;	// 40 = 0x28
}

+ (id)builderWithSleepScheduleModel:(id)arg1 date:(id)arg2;	// IMP=0x000000000004e863
- (void).cxx_destruct;	// IMP=0x0000000000050b13
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) HKSPSleepScheduleModel *sleepScheduleModel; // @synthesize sleepScheduleModel=_sleepScheduleModel;
@property(readonly, nonatomic) HKSPSleepEventTimelineResults *results; // @synthesize results=_results;
- (void)_validateSessionAdjustmentForSnoozedWakeUpAlarm;	// IMP=0x0000000000050914
- (void)_validateSessionAdjustments;	// IMP=0x0000000000050902
- (void)_adjustSessionForConfirmedWakeUp;	// IMP=0x00000000000502f6
- (void)_adjustSessionForSnoozedWakeUpAlarm;	// IMP=0x00000000000500b7
- (void)_adjustSessions;	// IMP=0x0000000000050089
- (id)_windDownDateForBedtimeDate:(id)arg1;	// IMP=0x000000000004ffe7
- (void)_addSessionToTimelineWithWakeUpDate:(id)arg1 bedtimeDate:(id)arg2 windDownDate:(id)arg3 occurrence:(id)arg4;	// IMP=0x000000000004fe2d
- (void)_gatherSessionsForOccurrence:(id)arg1 overrideOccurrence:(id)arg2;	// IMP=0x000000000004f9b7
- (void)_gatherSessionsForValidationForOccurrence:(id)arg1 overrideOccurrence:(id)arg2;	// IMP=0x000000000004ee17
- (void)_gatherSessions;	// IMP=0x000000000004eb60
- (id)buildTimelineWithOptions:(unsigned long long)arg1;	// IMP=0x000000000004e9a1
- (id)initWithSleepScheduleModel:(id)arg1 date:(id)arg2;	// IMP=0x000000000004e8cf

@end

