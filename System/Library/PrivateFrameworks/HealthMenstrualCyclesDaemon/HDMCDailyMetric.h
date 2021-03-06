//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber;

__attribute__((visibility("hidden")))
@interface HDMCDailyMetric : NSObject
{
    _Bool _improveHealthAndActivityAllowed;	// 8 = 0x8
    NSDictionary *_eventPayload;	// 16 = 0x10
    NSNumber *_onboardingCompleted;	// 24 = 0x18
    NSNumber *_onboardedVersion;	// 32 = 0x20
    NSNumber *_weeksSinceOnboarded;	// 40 = 0x28
    NSNumber *_hasCompatiblePairedAppleWatch;	// 48 = 0x30
    NSNumber *_hasSameAlgorithmVersionOnPairedWatch;	// 56 = 0x38
    NSNumber *_wasHeartRateInputDelivered;	// 64 = 0x40
    NSNumber *_age;	// 72 = 0x48
    NSNumber *_biologicalSex;	// 80 = 0x50
    NSNumber *_numberOfCyclesSinceLastDayOfLogging;	// 88 = 0x58
    NSNumber *_numberOfCyclesSinceLastDayOfLoggingInCycleTracking;	// 96 = 0x60
    NSNumber *_ongoingContraception;	// 104 = 0x68
    NSNumber *_ongoingLactation;	// 112 = 0x70
    NSNumber *_ongoingPregnancy;	// 120 = 0x78
    NSNumber *_cycleLengthVariationLowerPercentile;	// 128 = 0x80
    NSNumber *_cycleLengthVariationUpperPercentile;	// 136 = 0x88
    NSNumber *_numberOfDaysSinceLastFiredUpdateFertileWindowNotification;	// 144 = 0x90
    NSNumber *_numberOfDailySleepHeartRateStatisticsForPast100Days;	// 152 = 0x98
    NSNumber *_numberOfDailyAwakeHeartRateStatisticsForPast100Days;	// 160 = 0xa0
    NSNumber *_periodPredictionEnabled;	// 168 = 0xa8
    NSNumber *_periodNotificationEnabled;	// 176 = 0xb0
    NSNumber *_fertilityPredictionEnabled;	// 184 = 0xb8
    NSNumber *_fertilityNotificationEnabled;	// 192 = 0xc0
    NSNumber *_sensorBasedPredictionEnabled;	// 200 = 0xc8
    NSNumber *_logFactorsEnabled;	// 208 = 0xd0
    NSNumber *_logSymptomsEnabled;	// 216 = 0xd8
    NSNumber *_logSpottingEnabled;	// 224 = 0xe0
    NSNumber *_logSexualActivityEnabled;	// 232 = 0xe8
    NSNumber *_logCervicalMucusQualityEnabled;	// 240 = 0xf0
    NSNumber *_logBasalBodyTemperatureEnabled;	// 248 = 0xf8
    NSNumber *_logOvulationTestResultEnabled;	// 256 = 0x100
    NSNumber *_logPregnancyTestResultEnabled;	// 264 = 0x108
    NSNumber *_logProgesteroneTestResultEnabled;	// 272 = 0x110
    NSNumber *_hasFirstPartySleepSamplesPast48Hours;	// 280 = 0x118
    NSNumber *_hasSleepSamplesPast48Hours;	// 288 = 0x120
}

+ (id)eventName;	// IMP=0x0000000000015c95
- (void).cxx_destruct;	// IMP=0x00000000000169c9
@property(retain, nonatomic) NSNumber *hasSleepSamplesPast48Hours; // @synthesize hasSleepSamplesPast48Hours=_hasSleepSamplesPast48Hours;
@property(retain, nonatomic) NSNumber *hasFirstPartySleepSamplesPast48Hours; // @synthesize hasFirstPartySleepSamplesPast48Hours=_hasFirstPartySleepSamplesPast48Hours;
@property(retain, nonatomic) NSNumber *logProgesteroneTestResultEnabled; // @synthesize logProgesteroneTestResultEnabled=_logProgesteroneTestResultEnabled;
@property(retain, nonatomic) NSNumber *logPregnancyTestResultEnabled; // @synthesize logPregnancyTestResultEnabled=_logPregnancyTestResultEnabled;
@property(retain, nonatomic) NSNumber *logOvulationTestResultEnabled; // @synthesize logOvulationTestResultEnabled=_logOvulationTestResultEnabled;
@property(retain, nonatomic) NSNumber *logBasalBodyTemperatureEnabled; // @synthesize logBasalBodyTemperatureEnabled=_logBasalBodyTemperatureEnabled;
@property(retain, nonatomic) NSNumber *logCervicalMucusQualityEnabled; // @synthesize logCervicalMucusQualityEnabled=_logCervicalMucusQualityEnabled;
@property(retain, nonatomic) NSNumber *logSexualActivityEnabled; // @synthesize logSexualActivityEnabled=_logSexualActivityEnabled;
@property(retain, nonatomic) NSNumber *logSpottingEnabled; // @synthesize logSpottingEnabled=_logSpottingEnabled;
@property(retain, nonatomic) NSNumber *logSymptomsEnabled; // @synthesize logSymptomsEnabled=_logSymptomsEnabled;
@property(retain, nonatomic) NSNumber *logFactorsEnabled; // @synthesize logFactorsEnabled=_logFactorsEnabled;
@property(retain, nonatomic) NSNumber *sensorBasedPredictionEnabled; // @synthesize sensorBasedPredictionEnabled=_sensorBasedPredictionEnabled;
@property(retain, nonatomic) NSNumber *fertilityNotificationEnabled; // @synthesize fertilityNotificationEnabled=_fertilityNotificationEnabled;
@property(retain, nonatomic) NSNumber *fertilityPredictionEnabled; // @synthesize fertilityPredictionEnabled=_fertilityPredictionEnabled;
@property(retain, nonatomic) NSNumber *periodNotificationEnabled; // @synthesize periodNotificationEnabled=_periodNotificationEnabled;
@property(retain, nonatomic) NSNumber *periodPredictionEnabled; // @synthesize periodPredictionEnabled=_periodPredictionEnabled;
@property(retain, nonatomic) NSNumber *numberOfDailyAwakeHeartRateStatisticsForPast100Days; // @synthesize numberOfDailyAwakeHeartRateStatisticsForPast100Days=_numberOfDailyAwakeHeartRateStatisticsForPast100Days;
@property(retain, nonatomic) NSNumber *numberOfDailySleepHeartRateStatisticsForPast100Days; // @synthesize numberOfDailySleepHeartRateStatisticsForPast100Days=_numberOfDailySleepHeartRateStatisticsForPast100Days;
@property(retain, nonatomic) NSNumber *numberOfDaysSinceLastFiredUpdateFertileWindowNotification; // @synthesize numberOfDaysSinceLastFiredUpdateFertileWindowNotification=_numberOfDaysSinceLastFiredUpdateFertileWindowNotification;
@property(retain, nonatomic) NSNumber *cycleLengthVariationUpperPercentile; // @synthesize cycleLengthVariationUpperPercentile=_cycleLengthVariationUpperPercentile;
@property(retain, nonatomic) NSNumber *cycleLengthVariationLowerPercentile; // @synthesize cycleLengthVariationLowerPercentile=_cycleLengthVariationLowerPercentile;
@property(retain, nonatomic, getter=isOngoingPregnancy) NSNumber *ongoingPregnancy; // @synthesize ongoingPregnancy=_ongoingPregnancy;
@property(retain, nonatomic, getter=isOngoingLactation) NSNumber *ongoingLactation; // @synthesize ongoingLactation=_ongoingLactation;
@property(retain, nonatomic, getter=isOngoingContraception) NSNumber *ongoingContraception; // @synthesize ongoingContraception=_ongoingContraception;
@property(retain, nonatomic) NSNumber *numberOfCyclesSinceLastDayOfLoggingInCycleTracking; // @synthesize numberOfCyclesSinceLastDayOfLoggingInCycleTracking=_numberOfCyclesSinceLastDayOfLoggingInCycleTracking;
@property(retain, nonatomic) NSNumber *numberOfCyclesSinceLastDayOfLogging; // @synthesize numberOfCyclesSinceLastDayOfLogging=_numberOfCyclesSinceLastDayOfLogging;
@property(retain, nonatomic) NSNumber *biologicalSex; // @synthesize biologicalSex=_biologicalSex;
@property(retain, nonatomic) NSNumber *age; // @synthesize age=_age;
@property(retain, nonatomic) NSNumber *wasHeartRateInputDelivered; // @synthesize wasHeartRateInputDelivered=_wasHeartRateInputDelivered;
@property(retain, nonatomic) NSNumber *hasSameAlgorithmVersionOnPairedWatch; // @synthesize hasSameAlgorithmVersionOnPairedWatch=_hasSameAlgorithmVersionOnPairedWatch;
@property(retain, nonatomic) NSNumber *hasCompatiblePairedAppleWatch; // @synthesize hasCompatiblePairedAppleWatch=_hasCompatiblePairedAppleWatch;
@property(retain, nonatomic) NSNumber *weeksSinceOnboarded; // @synthesize weeksSinceOnboarded=_weeksSinceOnboarded;
@property(retain, nonatomic) NSNumber *onboardedVersion; // @synthesize onboardedVersion=_onboardedVersion;
@property(retain, nonatomic, getter=isOnboardingCompleted) NSNumber *onboardingCompleted; // @synthesize onboardingCompleted=_onboardingCompleted;
@property(nonatomic, getter=isImproveHealthAndActivityAllowed) _Bool improveHealthAndActivityAllowed; // @synthesize improveHealthAndActivityAllowed=_improveHealthAndActivityAllowed;
@property(copy, nonatomic) NSDictionary *eventPayload; // @synthesize eventPayload=_eventPayload;
- (id)_biologicalSexString;	// IMP=0x00000000000164f1
- (id)initWithImproveHealthAndActivityAllowed:(_Bool)arg1;	// IMP=0x0000000000015ca2

@end

