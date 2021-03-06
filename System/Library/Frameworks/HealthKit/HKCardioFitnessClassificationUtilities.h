//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface HKCardioFitnessClassificationUtilities : NSObject
{
}

+ (id)analyticsStringForLevel:(long long)arg1;	// IMP=0x0000000000129a05
+ (id)cardioFitnessLevelDateIntervalsWithDateInterval:(id)arg1 healthStore:(id)arg2;	// IMP=0x0000000000129592
+ (long long)cardioFitnessLevelForVO2MaxSample:(id)arg1 inHealthStore:(id)arg2;	// IMP=0x000000000012941a
+ (long long)cardioFitnessLevelForVO2Max:(double)arg1 biologicalSex:(long long)arg2 age:(long long)arg3;	// IMP=0x00000000001293c9
+ (id)cardioFitnessDataForLevel:(long long)arg1 date:(id)arg2 healthStore:(id)arg3;	// IMP=0x0000000000129329
+ (id)cardioFitnessDataForLevel:(long long)arg1 biologicalSex:(long long)arg2 age:(long long)arg3;	// IMP=0x000000000012929c
+ (id)cardioFitnessDataForVO2Max:(double)arg1 biologicalSex:(long long)arg2 age:(long long)arg3;	// IMP=0x0000000000129113
+ (id)cardioFitnessDataForBiologicalSex:(long long)arg1 age:(long long)arg2;	// IMP=0x0000000000128fc0
+ (id)cardioFitnessPropertiesForDate:(id)arg1 healthStore:(id)arg2;	// IMP=0x0000000000128df5
+ (id)_cardioFitnessLevelTransitionDatesForDateInterval:(id)arg1 biologicalSex:(long long)arg2 dateOfBirth:(id)arg3;	// IMP=0x0000000000128c03
+ (id)cardioFitnessDataForBiologicalSex:(long long)arg1;	// IMP=0x0000000000128970
+ (id)flattenedCardioFitnessDataForBiologicalSex:(long long)arg1;	// IMP=0x00000000001284e3
+ (id)_flattenedThresholdsForLevelData:(id)arg1;	// IMP=0x0000000000128208
+ (id)_queryCoreMotionClassificationsForBiologicalSex:(long long)arg1 age:(long long)arg2;	// IMP=0x0000000000127f81
+ (id)_queryCoreMotionClassifications;	// IMP=0x0000000000127ced
+ (id)_parseCoreMotionClassificationData:(id)arg1;	// IMP=0x0000000000127452
+ (id)_stubbedCardioFitnessLevelData;	// IMP=0x0000000000125875
+ (id)_cardioFitnessLevels;	// IMP=0x00000000001257ad

@end

