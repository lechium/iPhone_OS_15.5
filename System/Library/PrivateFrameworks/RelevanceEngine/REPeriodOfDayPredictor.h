//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RelevanceEngine/REPeriodOfDayPredictorProperties-Protocol.h>

@class NSArray, NSDateInterval, NSLock, REDuetKnowledgeStore, REUpNextTimer;

@interface REPeriodOfDayPredictor <REPeriodOfDayPredictorProperties>
{
    NSArray *_storedPeriods;	// 8 = 0x8
    NSLock *_storedPeriodsLock;	// 16 = 0x10
    REUpNextTimer *_periodOfDayUpdateTimer;	// 24 = 0x18
    REDuetKnowledgeStore *_knowledgeStore;	// 32 = 0x20
}

+ (double)updateInterval;	// IMP=0x0000000000029b13
- (void).cxx_destruct;	// IMP=0x000000000002cd0e
@property(readonly, nonatomic) NSArray *storedPeriods;
- (id)_nextDayPeriodUpdateDate;	// IMP=0x000000000002cc77
- (void)_queue_updateNextDateUpdateTimer;	// IMP=0x000000000002ca27
- (void)_getHistoricSleepIntervalsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000002c2f8
- (void)_getPredictedSleepIntervalsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000002bb80
- (id)_periodsOfDayForSleepIntervals:(id)arg1;	// IMP=0x000000000002b7d5
- (void)_getAllSleepIntervalsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000002b656
- (void)update;	// IMP=0x000000000002ad73
- (id)dateIntervalForPreviousPeriodOfDay:(unsigned long long)arg1 beforeDate:(id)arg2;	// IMP=0x000000000002aa66
- (id)dateIntervalForPreviousPeriodOfDay:(unsigned long long)arg1;	// IMP=0x000000000002a955
- (id)dateIntervalForNextPeriodOfDay:(unsigned long long)arg1 afterDate:(id)arg2;	// IMP=0x000000000002a623
- (id)dateIntervalForNextPeriodOfDay:(unsigned long long)arg1;	// IMP=0x000000000002a512
@property(readonly, nonatomic) NSDateInterval *intervalForCurrentPeriodOfDay;
@property(readonly, nonatomic) unsigned long long currentPeriodOfDay;
- (void)_handleSignificantTimeChange;	// IMP=0x000000000002a0ea
- (id)_defaultDayPeriodsOfDayForDate:(id)arg1;	// IMP=0x0000000000029d69
- (void)dealloc;	// IMP=0x0000000000029cd0
- (id)_init;	// IMP=0x0000000000029b21

@end

