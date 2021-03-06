//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HKCalendarCache, NSMutableArray, NSMutableDictionary;

@interface HDMCDaySummaryBuilder : NSObject
{
    HKCalendarCache *_calendarCache;	// 8 = 0x8
    NSMutableArray *_menstrualFlowSamples;	// 16 = 0x10
    NSMutableArray *_intermenstrualBleedingSamples;	// 24 = 0x18
    NSMutableArray *_symptomsSamples;	// 32 = 0x20
    NSMutableArray *_sexualActivitySamples;	// 40 = 0x28
    NSMutableArray *_ovulationTestResultSamples;	// 48 = 0x30
    NSMutableArray *_pregnancyTestResultSamples;	// 56 = 0x38
    NSMutableArray *_progesteroneTestResultSamples;	// 64 = 0x40
    NSMutableArray *_cervicalMucusQualitySamples;	// 72 = 0x48
    NSMutableArray *_basalBodyTemperatureSamples;	// 80 = 0x50
    NSMutableArray *_startedCycleFactors;	// 88 = 0x58
    NSMutableArray *_endedCycleFactors;	// 96 = 0x60
    NSMutableDictionary *_sampleCountByType;	// 104 = 0x68
    long long _dayIndex;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x0000000000021bb6
@property(readonly, nonatomic) long long dayIndex; // @synthesize dayIndex=_dayIndex;
- (id)createDaySummaryWithDevice:(id)arg1;	// IMP=0x00000000000219a2
- (id)_endedCycleFactors;	// IMP=0x0000000000021950
- (id)_startedCycleFactors;	// IMP=0x00000000000218fe
- (id)_basalBodyTemperature;	// IMP=0x0000000000021801
- (long long)_cervicalMucusQuality;	// IMP=0x00000000000216d4
- (long long)_progesteroneTestResult;	// IMP=0x00000000000215a7
- (long long)_pregnancyTestResult;	// IMP=0x000000000002147a
- (long long)_ovulationTestResult;	// IMP=0x000000000002134d
- (long long)_sexualActivity;	// IMP=0x0000000000021220
- (unsigned long long)_symptoms;	// IMP=0x00000000000210ec
- (_Bool)_intermenstrualBleeding;	// IMP=0x00000000000210cf
- (long long)_menstrualFlowWithModificationDay:(long long *)arg1 startOfCycleFromCycleTracking:(id *)arg2;	// IMP=0x0000000000020e54
- (void)addCycleTrackingSample:(id)arg1;	// IMP=0x0000000000020822
- (id)initWithDayIndex:(long long)arg1 calendarCache:(id)arg2;	// IMP=0x00000000000207ac

@end

