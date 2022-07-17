//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDDemoDataSleepParameters, NSArray, NSDate, NSDateComponents, NSDictionary, NSString, _HKMedicalIDData;

@interface HDDemoDataPerson : NSObject
{
    _Bool _createHighFidelityData;	// 8 = 0x8
    _Bool _sexualActivityIsTryingToConceive;	// 9 = 0x9
    _Bool _useContinuousGlucoseMonitoring;	// 10 = 0xa
    NSString *_firstName;	// 16 = 0x10
    NSString *_lastName;	// 24 = 0x18
    NSString *_personDescription;	// 32 = 0x20
    NSDateComponents *_birthDateComponents;	// 40 = 0x28
    NSDate *_birthDate;	// 48 = 0x30
    long long _biologicalSex;	// 56 = 0x38
    long long _bloodType;	// 64 = 0x40
    long long _fitzpatrickSkinType;	// 72 = 0x48
    double _timeIncrement;	// 80 = 0x50
    double _timeIncrementDuringExercise;	// 88 = 0x58
    double _dawnTime;	// 96 = 0x60
    double _sunsetTime;	// 104 = 0x68
    double _genericSampleTimeNoiseStdDev;	// 112 = 0x70
    long long _profileType;	// 120 = 0x78
    double _uvIndexSampleFrequency;	// 128 = 0x80
    double _waistCircumferenceInInches;	// 136 = 0x88
    double _wristCircumferenceInInches;	// 144 = 0x90
    double _forearmCircumferenceInInches;	// 152 = 0x98
    double _hipCircumferenceInInches;	// 160 = 0xa0
    double _heightSampleTime;	// 168 = 0xa8
    double _heightTargetInCm;	// 176 = 0xb0
    double _heightSampleTimeFrequency;	// 184 = 0xb8
    double _heightSampleNoiseStdDev;	// 192 = 0xc0
    double _weightSampleTime;	// 200 = 0xc8
    double _weightTargetInKg;	// 208 = 0xd0
    double _weightSampleTimeFrequency;	// 216 = 0xd8
    double _weightSampleNoiseStdDev;	// 224 = 0xe0
    double _weightLossStartDay;	// 232 = 0xe8
    double _weightDailyChangeStdDev;	// 240 = 0xf0
    double _weightDailyMaxLoss;	// 248 = 0xf8
    double _weightChangePercentageMax;	// 256 = 0x100
    NSArray *_weightGainHolidayDaysInYear;	// 264 = 0x108
    long long _restingHeartRate;	// 272 = 0x110
    long long _restingHeartRateMaxDailyDifference;	// 280 = 0x118
    long long _restingHeartRateMaxTotalDifference;	// 288 = 0x120
    long long _walkingHeartRateAverage;	// 296 = 0x128
    long long _walkingHeartRateAverageMaxDailyDifference;	// 304 = 0x130
    long long _walkingHeartRateAverageMaxTotalDifference;	// 312 = 0x138
    double _heartRateSampleFrequency;	// 320 = 0x140
    double _heartRateSampleFrequencyStdDev;	// 328 = 0x148
    double _heartRateSampleNoiseStdDev;	// 336 = 0x150
    double _vo2MaxValueStdDev;	// 344 = 0x158
    double _vo2MaxValueMaxConsecutiveDifference;	// 352 = 0x160
    double _vo2MaxValueMaxTotalDifference;	// 360 = 0x168
    double _vo2MaxSampleTimeNoiseStdDev;	// 368 = 0x170
    long long _restingRespirationRate;	// 376 = 0x178
    double _restingRespirationRateSampleFrequency;	// 384 = 0x180
    double _restingRespirationRateSampleFrequencyDuringSleep;	// 392 = 0x188
    double _restingRespirationRateSampleNoiseStdDev;	// 400 = 0x190
    double _bloodPressureSampleFrequency;	// 408 = 0x198
    long long _restingSystolicBloodPressure;	// 416 = 0x1a0
    long long _restingDiastolicBloodPressure;	// 424 = 0x1a8
    double _restingSystolicBloodPressureSampleNoiseStdDev;	// 432 = 0x1b0
    double _restingDiastolicBloodPressureSampleNoiseStdDev;	// 440 = 0x1b8
    double _bodyTempFeverMultiplier;	// 448 = 0x1c0
    double _bodyTempExerciseMultiplier;	// 456 = 0x1c8
    double _bodyTempSampleFrequency;	// 464 = 0x1d0
    double _bodyTempSampleNoiseStdDev;	// 472 = 0x1d8
    double _oxygenSaturationMean;	// 480 = 0x1e0
    double _oxygenSaturationStdDev;	// 488 = 0x1e8
    double _oxygenSaturationMeanAtElevation;	// 496 = 0x1f0
    double _oxygenSaturationStdDevAtElevation;	// 504 = 0x1f8
    double _oxygenSaturationMeasuringSuccessRate;	// 512 = 0x200
    double _oxygenSaturationMeasuringSuccessRateDuringSleep;	// 520 = 0x208
    double _oxygenSaturationSampleFrequency;	// 528 = 0x210
    double _peripheralPerfusionIndexMean;	// 536 = 0x218
    double _peripheralPerfusionIndexSampleFrequency;	// 544 = 0x220
    double _peripheralPerfusionIndexStdDev;	// 552 = 0x228
    double _sexualActivityProbabilityPercentage;	// 560 = 0x230
    double _sexualActivityProtectionProbabilityPercentage;	// 568 = 0x238
    double _sexualActivityProtectionDocumentationProbabilityPercentage;	// 576 = 0x240
    double _menstrualPeriodFrequency;	// 584 = 0x248
    double _ovulationIndeterminateProbabilityPercentage;	// 592 = 0x250
    double _fitzpatrickSkinTypeSampleTime;	// 600 = 0x258
    long long _fitzpatrickSkinTypeScore;	// 608 = 0x260
    double _toothbrushingDurationMean;	// 616 = 0x268
    double _toothbrushingDurationMeanStdDev;	// 624 = 0x270
    double _handwashingDurationMean;	// 632 = 0x278
    double _handwashingDurationMeanStdDev;	// 640 = 0x280
    double _handwashingSampleFrequency;	// 648 = 0x288
    double _handwashingSampleFrequencyStdDev;	// 656 = 0x290
    double _activeCaloriesSampleFrequency;	// 664 = 0x298
    double _restingCaloriesSampleFrequency;	// 672 = 0x2a0
    double _stepsSampleFrequency;	// 680 = 0x2a8
    double _stepsSampleFrequencyDuringExercise;	// 688 = 0x2b0
    double _sedentarySampleFrequency;	// 696 = 0x2b8
    double _exerciseTimeSampleFrequency;	// 704 = 0x2c0
    double _moveGoal;	// 712 = 0x2c8
    double _swimmingStrokesPerYard;	// 720 = 0x2d0
    double _exerciseStartTime;	// 728 = 0x2d8
    double _exerciseStopTime;	// 736 = 0x2e0
    double _exerciseCooldownTime;	// 744 = 0x2e8
    double _exerciseStartTimeStdDev;	// 752 = 0x2f0
    double _exerciseStopTimeStdDev;	// 760 = 0x2f8
    double _exerciseIntensityPercentage;	// 768 = 0x300
    NSDictionary *_workoutPrototypesByCalendarDay;	// 776 = 0x308
    double _exerciseWeeklyWorkoutsMean;	// 784 = 0x310
    double _exerciseWeeklyWorkoutsStdDev;	// 792 = 0x318
    double _exercisePostDietWeeklyWorkoutsMean;	// 800 = 0x320
    double _exercisePostDietWeeklyWorkoutsStdDev;	// 808 = 0x328
    double _flightsClimbedDailyMean;	// 816 = 0x330
    double _flightsClimbedStdDev;	// 824 = 0x338
    double _flightsClimbedSampleTime;	// 832 = 0x340
    double _flightsClimbedSampleFrequency;	// 840 = 0x348
    double _flightsClimbedSampleFrequencyStdDev;	// 848 = 0x350
    double _rehabLogarithmicConstant;	// 856 = 0x358
    double _walkingSpeedMean;	// 864 = 0x360
    double _walkingSpeedStdDev;	// 872 = 0x368
    double _walkingSpeedSampleFrequency;	// 880 = 0x370
    double _walkingSpeedSampleFrequencyStdDev;	// 888 = 0x378
    double _stepLengthMean;	// 896 = 0x380
    double _stepLengthStdDev;	// 904 = 0x388
    double _stepLengthSampleFrequency;	// 912 = 0x390
    double _stepLengthSampleFrequencyStdDev;	// 920 = 0x398
    double _asymmetryPercentageMean;	// 928 = 0x3a0
    double _asymmetryPercentageStdDev;	// 936 = 0x3a8
    double _asymmetryPercentageSampleFrequency;	// 944 = 0x3b0
    double _asymmetryPercentageSampleFrequencyStdDev;	// 952 = 0x3b8
    double _doubleSupportPercentageMean;	// 960 = 0x3c0
    double _doubleSupportPercentageStdDev;	// 968 = 0x3c8
    double _doubleSupportPercentageSampleFrequency;	// 976 = 0x3d0
    double _doubleSupportPercentageSampleFrequencyStdDev;	// 984 = 0x3d8
    double _sixMinuteWalkTestDistanceMean;	// 992 = 0x3e0
    double _sixMinuteWalkTestDistanceStdDev;	// 1000 = 0x3e8
    double _sixMinuteWalkTestDistanceSampleFrequency;	// 1008 = 0x3f0
    double _sixMinuteWalkTestDistanceSampleFrequencyStdDev;	// 1016 = 0x3f8
    double _stairAscentSpeedMean;	// 1024 = 0x400
    double _stairAscentSpeedStdDev;	// 1032 = 0x408
    double _stairAscentSpeedSampleFrequency;	// 1040 = 0x410
    double _stairAscentSpeedSampleFrequencyStdDev;	// 1048 = 0x418
    double _stairDescentSpeedMean;	// 1056 = 0x420
    double _stairDescentSpeedStdDev;	// 1064 = 0x428
    double _stairDescentSpeedSampleFrequency;	// 1072 = 0x430
    double _stairDescentSpeedSampleFrequencyStdDev;	// 1080 = 0x438
    double _walkingSteadinessMean;	// 1088 = 0x440
    double _walkingSteadinessStdDev;	// 1096 = 0x448
    double _walkingSteadinessSampleFrequency;	// 1104 = 0x450
    double _walkingSteadinessSampleFrequencyStdDev;	// 1112 = 0x458
    double _breakfastTime;	// 1120 = 0x460
    double _lunchTime;	// 1128 = 0x468
    double _snackTime;	// 1136 = 0x470
    double _dinnerTime;	// 1144 = 0x478
    double _mealTimeSampleNoiseStdDev;	// 1152 = 0x480
    double _breakfastTimeSampleNoiseStdDev;	// 1160 = 0x488
    double _preDietIntakeMultiplier;	// 1168 = 0x490
    double _numCupsOfCoffeeDailyMean;	// 1176 = 0x498
    double _numCupsOfCoffeeStdDev;	// 1184 = 0x4a0
    double _waterConsumedSampleTime;	// 1192 = 0x4a8
    double _waterConsumedSampleFrequency;	// 1200 = 0x4b0
    double _waterConsumedDailyMean;	// 1208 = 0x4b8
    double _waterConsumedStdDev;	// 1216 = 0x4c0
    double _waterConsumedIntervalMean;	// 1224 = 0x4c8
    double _waterConsumedIntervalStdDev;	// 1232 = 0x4d0
    HDDemoDataSleepParameters *_weekdaySleepParameters;	// 1240 = 0x4d8
    HDDemoDataSleepParameters *_weekendSleepParameters;	// 1248 = 0x4e0
    double _wakeUpTimeNoiseStdDev;	// 1256 = 0x4e8
    double _bedtimeNoiseStdDev;	// 1264 = 0x4f0
    double _inBedTimeStdDev;	// 1272 = 0x4f8
    unsigned long long _numSleepInterruptions;	// 1280 = 0x500
    double _fallSampleFrequency;	// 1288 = 0x508
    double _fallsDailyMean;	// 1296 = 0x510
    double _fallsDailyStdDev;	// 1304 = 0x518
    double _spirometrySampleFrequency;	// 1312 = 0x520
    double _spirometrySampleTime;	// 1320 = 0x528
    long long _asthmaSeverity;	// 1328 = 0x530
    double _continuousGlucoseMonitoringSampleFrequency;	// 1336 = 0x538
    double _numDailyFingerSticksAdherence;	// 1344 = 0x540
    double _insulinSensitivity;	// 1352 = 0x548
    double _insulinProduction;	// 1360 = 0x550
    double _insulinAdherence;	// 1368 = 0x558
    unsigned long long _insulinTherapy;	// 1376 = 0x560
    double _mindfulSessionFrequency;	// 1384 = 0x568
    long long _mindfulSessionMean;	// 1392 = 0x570
    long long _mindfulSessionStdDev;	// 1400 = 0x578
    long long _nutritionTrackingType;	// 1408 = 0x580
    long long _resultsTrackingType;	// 1416 = 0x588
    _HKMedicalIDData *_medicalIDData;	// 1424 = 0x590
}

+ (id)defaultPersonWithBiologicalSex:(long long)arg1;	// IMP=0x0000000000267ad1
- (void).cxx_destruct;	// IMP=0x000000000026ab75
@property(retain, nonatomic) _HKMedicalIDData *medicalIDData; // @synthesize medicalIDData=_medicalIDData;
@property(nonatomic) long long resultsTrackingType; // @synthesize resultsTrackingType=_resultsTrackingType;
@property(nonatomic) long long nutritionTrackingType; // @synthesize nutritionTrackingType=_nutritionTrackingType;
@property(nonatomic) long long mindfulSessionStdDev; // @synthesize mindfulSessionStdDev=_mindfulSessionStdDev;
@property(nonatomic) long long mindfulSessionMean; // @synthesize mindfulSessionMean=_mindfulSessionMean;
@property(nonatomic) double mindfulSessionFrequency; // @synthesize mindfulSessionFrequency=_mindfulSessionFrequency;
@property(nonatomic) unsigned long long insulinTherapy; // @synthesize insulinTherapy=_insulinTherapy;
@property(nonatomic) double insulinAdherence; // @synthesize insulinAdherence=_insulinAdherence;
@property(nonatomic) double insulinProduction; // @synthesize insulinProduction=_insulinProduction;
@property(nonatomic) double insulinSensitivity; // @synthesize insulinSensitivity=_insulinSensitivity;
@property(nonatomic) double numDailyFingerSticksAdherence; // @synthesize numDailyFingerSticksAdherence=_numDailyFingerSticksAdherence;
@property(nonatomic) double continuousGlucoseMonitoringSampleFrequency; // @synthesize continuousGlucoseMonitoringSampleFrequency=_continuousGlucoseMonitoringSampleFrequency;
@property(nonatomic) _Bool useContinuousGlucoseMonitoring; // @synthesize useContinuousGlucoseMonitoring=_useContinuousGlucoseMonitoring;
@property(nonatomic) long long asthmaSeverity; // @synthesize asthmaSeverity=_asthmaSeverity;
@property(nonatomic) double spirometrySampleTime; // @synthesize spirometrySampleTime=_spirometrySampleTime;
@property(nonatomic) double spirometrySampleFrequency; // @synthesize spirometrySampleFrequency=_spirometrySampleFrequency;
@property(nonatomic) double fallsDailyStdDev; // @synthesize fallsDailyStdDev=_fallsDailyStdDev;
@property(nonatomic) double fallsDailyMean; // @synthesize fallsDailyMean=_fallsDailyMean;
@property(nonatomic) double fallSampleFrequency; // @synthesize fallSampleFrequency=_fallSampleFrequency;
@property(nonatomic) unsigned long long numSleepInterruptions; // @synthesize numSleepInterruptions=_numSleepInterruptions;
@property(nonatomic) double inBedTimeStdDev; // @synthesize inBedTimeStdDev=_inBedTimeStdDev;
@property(nonatomic) double bedtimeNoiseStdDev; // @synthesize bedtimeNoiseStdDev=_bedtimeNoiseStdDev;
@property(nonatomic) double wakeUpTimeNoiseStdDev; // @synthesize wakeUpTimeNoiseStdDev=_wakeUpTimeNoiseStdDev;
@property(retain, nonatomic) HDDemoDataSleepParameters *weekendSleepParameters; // @synthesize weekendSleepParameters=_weekendSleepParameters;
@property(retain, nonatomic) HDDemoDataSleepParameters *weekdaySleepParameters; // @synthesize weekdaySleepParameters=_weekdaySleepParameters;
@property(nonatomic) double waterConsumedIntervalStdDev; // @synthesize waterConsumedIntervalStdDev=_waterConsumedIntervalStdDev;
@property(nonatomic) double waterConsumedIntervalMean; // @synthesize waterConsumedIntervalMean=_waterConsumedIntervalMean;
@property(nonatomic) double waterConsumedStdDev; // @synthesize waterConsumedStdDev=_waterConsumedStdDev;
@property(nonatomic) double waterConsumedDailyMean; // @synthesize waterConsumedDailyMean=_waterConsumedDailyMean;
@property(nonatomic) double waterConsumedSampleFrequency; // @synthesize waterConsumedSampleFrequency=_waterConsumedSampleFrequency;
@property(nonatomic) double waterConsumedSampleTime; // @synthesize waterConsumedSampleTime=_waterConsumedSampleTime;
@property(nonatomic) double numCupsOfCoffeeStdDev; // @synthesize numCupsOfCoffeeStdDev=_numCupsOfCoffeeStdDev;
@property(nonatomic) double numCupsOfCoffeeDailyMean; // @synthesize numCupsOfCoffeeDailyMean=_numCupsOfCoffeeDailyMean;
@property(nonatomic) double preDietIntakeMultiplier; // @synthesize preDietIntakeMultiplier=_preDietIntakeMultiplier;
@property(nonatomic) double breakfastTimeSampleNoiseStdDev; // @synthesize breakfastTimeSampleNoiseStdDev=_breakfastTimeSampleNoiseStdDev;
@property(nonatomic) double mealTimeSampleNoiseStdDev; // @synthesize mealTimeSampleNoiseStdDev=_mealTimeSampleNoiseStdDev;
@property(nonatomic) double dinnerTime; // @synthesize dinnerTime=_dinnerTime;
@property(nonatomic) double snackTime; // @synthesize snackTime=_snackTime;
@property(nonatomic) double lunchTime; // @synthesize lunchTime=_lunchTime;
@property(nonatomic) double breakfastTime; // @synthesize breakfastTime=_breakfastTime;
@property(nonatomic) double walkingSteadinessSampleFrequencyStdDev; // @synthesize walkingSteadinessSampleFrequencyStdDev=_walkingSteadinessSampleFrequencyStdDev;
@property(nonatomic) double walkingSteadinessSampleFrequency; // @synthesize walkingSteadinessSampleFrequency=_walkingSteadinessSampleFrequency;
@property(nonatomic) double walkingSteadinessStdDev; // @synthesize walkingSteadinessStdDev=_walkingSteadinessStdDev;
@property(nonatomic) double walkingSteadinessMean; // @synthesize walkingSteadinessMean=_walkingSteadinessMean;
@property(nonatomic) double stairDescentSpeedSampleFrequencyStdDev; // @synthesize stairDescentSpeedSampleFrequencyStdDev=_stairDescentSpeedSampleFrequencyStdDev;
@property(nonatomic) double stairDescentSpeedSampleFrequency; // @synthesize stairDescentSpeedSampleFrequency=_stairDescentSpeedSampleFrequency;
@property(nonatomic) double stairDescentSpeedStdDev; // @synthesize stairDescentSpeedStdDev=_stairDescentSpeedStdDev;
@property(nonatomic) double stairDescentSpeedMean; // @synthesize stairDescentSpeedMean=_stairDescentSpeedMean;
@property(nonatomic) double stairAscentSpeedSampleFrequencyStdDev; // @synthesize stairAscentSpeedSampleFrequencyStdDev=_stairAscentSpeedSampleFrequencyStdDev;
@property(nonatomic) double stairAscentSpeedSampleFrequency; // @synthesize stairAscentSpeedSampleFrequency=_stairAscentSpeedSampleFrequency;
@property(nonatomic) double stairAscentSpeedStdDev; // @synthesize stairAscentSpeedStdDev=_stairAscentSpeedStdDev;
@property(nonatomic) double stairAscentSpeedMean; // @synthesize stairAscentSpeedMean=_stairAscentSpeedMean;
@property(nonatomic) double sixMinuteWalkTestDistanceSampleFrequencyStdDev; // @synthesize sixMinuteWalkTestDistanceSampleFrequencyStdDev=_sixMinuteWalkTestDistanceSampleFrequencyStdDev;
@property(nonatomic) double sixMinuteWalkTestDistanceSampleFrequency; // @synthesize sixMinuteWalkTestDistanceSampleFrequency=_sixMinuteWalkTestDistanceSampleFrequency;
@property(nonatomic) double sixMinuteWalkTestDistanceStdDev; // @synthesize sixMinuteWalkTestDistanceStdDev=_sixMinuteWalkTestDistanceStdDev;
@property(nonatomic) double sixMinuteWalkTestDistanceMean; // @synthesize sixMinuteWalkTestDistanceMean=_sixMinuteWalkTestDistanceMean;
@property(nonatomic) double doubleSupportPercentageSampleFrequencyStdDev; // @synthesize doubleSupportPercentageSampleFrequencyStdDev=_doubleSupportPercentageSampleFrequencyStdDev;
@property(nonatomic) double doubleSupportPercentageSampleFrequency; // @synthesize doubleSupportPercentageSampleFrequency=_doubleSupportPercentageSampleFrequency;
@property(nonatomic) double doubleSupportPercentageStdDev; // @synthesize doubleSupportPercentageStdDev=_doubleSupportPercentageStdDev;
@property(nonatomic) double doubleSupportPercentageMean; // @synthesize doubleSupportPercentageMean=_doubleSupportPercentageMean;
@property(nonatomic) double asymmetryPercentageSampleFrequencyStdDev; // @synthesize asymmetryPercentageSampleFrequencyStdDev=_asymmetryPercentageSampleFrequencyStdDev;
@property(nonatomic) double asymmetryPercentageSampleFrequency; // @synthesize asymmetryPercentageSampleFrequency=_asymmetryPercentageSampleFrequency;
@property(nonatomic) double asymmetryPercentageStdDev; // @synthesize asymmetryPercentageStdDev=_asymmetryPercentageStdDev;
@property(nonatomic) double asymmetryPercentageMean; // @synthesize asymmetryPercentageMean=_asymmetryPercentageMean;
@property(nonatomic) double stepLengthSampleFrequencyStdDev; // @synthesize stepLengthSampleFrequencyStdDev=_stepLengthSampleFrequencyStdDev;
@property(nonatomic) double stepLengthSampleFrequency; // @synthesize stepLengthSampleFrequency=_stepLengthSampleFrequency;
@property(nonatomic) double stepLengthStdDev; // @synthesize stepLengthStdDev=_stepLengthStdDev;
@property(nonatomic) double stepLengthMean; // @synthesize stepLengthMean=_stepLengthMean;
@property(nonatomic) double walkingSpeedSampleFrequencyStdDev; // @synthesize walkingSpeedSampleFrequencyStdDev=_walkingSpeedSampleFrequencyStdDev;
@property(nonatomic) double walkingSpeedSampleFrequency; // @synthesize walkingSpeedSampleFrequency=_walkingSpeedSampleFrequency;
@property(nonatomic) double walkingSpeedStdDev; // @synthesize walkingSpeedStdDev=_walkingSpeedStdDev;
@property(nonatomic) double walkingSpeedMean; // @synthesize walkingSpeedMean=_walkingSpeedMean;
@property(nonatomic) double rehabLogarithmicConstant; // @synthesize rehabLogarithmicConstant=_rehabLogarithmicConstant;
@property(nonatomic) double flightsClimbedSampleFrequencyStdDev; // @synthesize flightsClimbedSampleFrequencyStdDev=_flightsClimbedSampleFrequencyStdDev;
@property(nonatomic) double flightsClimbedSampleFrequency; // @synthesize flightsClimbedSampleFrequency=_flightsClimbedSampleFrequency;
@property(nonatomic) double flightsClimbedSampleTime; // @synthesize flightsClimbedSampleTime=_flightsClimbedSampleTime;
@property(nonatomic) double flightsClimbedStdDev; // @synthesize flightsClimbedStdDev=_flightsClimbedStdDev;
@property(nonatomic) double flightsClimbedDailyMean; // @synthesize flightsClimbedDailyMean=_flightsClimbedDailyMean;
@property(nonatomic) double exercisePostDietWeeklyWorkoutsStdDev; // @synthesize exercisePostDietWeeklyWorkoutsStdDev=_exercisePostDietWeeklyWorkoutsStdDev;
@property(nonatomic) double exercisePostDietWeeklyWorkoutsMean; // @synthesize exercisePostDietWeeklyWorkoutsMean=_exercisePostDietWeeklyWorkoutsMean;
@property(nonatomic) double exerciseWeeklyWorkoutsStdDev; // @synthesize exerciseWeeklyWorkoutsStdDev=_exerciseWeeklyWorkoutsStdDev;
@property(nonatomic) double exerciseWeeklyWorkoutsMean; // @synthesize exerciseWeeklyWorkoutsMean=_exerciseWeeklyWorkoutsMean;
@property(retain, nonatomic) NSDictionary *workoutPrototypesByCalendarDay; // @synthesize workoutPrototypesByCalendarDay=_workoutPrototypesByCalendarDay;
@property(nonatomic) double exerciseIntensityPercentage; // @synthesize exerciseIntensityPercentage=_exerciseIntensityPercentage;
@property(nonatomic) double exerciseStopTimeStdDev; // @synthesize exerciseStopTimeStdDev=_exerciseStopTimeStdDev;
@property(nonatomic) double exerciseStartTimeStdDev; // @synthesize exerciseStartTimeStdDev=_exerciseStartTimeStdDev;
@property(nonatomic) double exerciseCooldownTime; // @synthesize exerciseCooldownTime=_exerciseCooldownTime;
@property(nonatomic) double exerciseStopTime; // @synthesize exerciseStopTime=_exerciseStopTime;
@property(nonatomic) double exerciseStartTime; // @synthesize exerciseStartTime=_exerciseStartTime;
@property(nonatomic) double swimmingStrokesPerYard; // @synthesize swimmingStrokesPerYard=_swimmingStrokesPerYard;
@property(nonatomic) double moveGoal; // @synthesize moveGoal=_moveGoal;
@property(nonatomic) double exerciseTimeSampleFrequency; // @synthesize exerciseTimeSampleFrequency=_exerciseTimeSampleFrequency;
@property(nonatomic) double sedentarySampleFrequency; // @synthesize sedentarySampleFrequency=_sedentarySampleFrequency;
@property(nonatomic) double stepsSampleFrequencyDuringExercise; // @synthesize stepsSampleFrequencyDuringExercise=_stepsSampleFrequencyDuringExercise;
@property(nonatomic) double stepsSampleFrequency; // @synthesize stepsSampleFrequency=_stepsSampleFrequency;
@property(nonatomic) double restingCaloriesSampleFrequency; // @synthesize restingCaloriesSampleFrequency=_restingCaloriesSampleFrequency;
@property(nonatomic) double activeCaloriesSampleFrequency; // @synthesize activeCaloriesSampleFrequency=_activeCaloriesSampleFrequency;
@property(nonatomic) double handwashingSampleFrequencyStdDev; // @synthesize handwashingSampleFrequencyStdDev=_handwashingSampleFrequencyStdDev;
@property(nonatomic) double handwashingSampleFrequency; // @synthesize handwashingSampleFrequency=_handwashingSampleFrequency;
@property(nonatomic) double handwashingDurationMeanStdDev; // @synthesize handwashingDurationMeanStdDev=_handwashingDurationMeanStdDev;
@property(nonatomic) double handwashingDurationMean; // @synthesize handwashingDurationMean=_handwashingDurationMean;
@property(nonatomic) double toothbrushingDurationMeanStdDev; // @synthesize toothbrushingDurationMeanStdDev=_toothbrushingDurationMeanStdDev;
@property(nonatomic) double toothbrushingDurationMean; // @synthesize toothbrushingDurationMean=_toothbrushingDurationMean;
@property(nonatomic) long long fitzpatrickSkinTypeScore; // @synthesize fitzpatrickSkinTypeScore=_fitzpatrickSkinTypeScore;
@property(nonatomic) double fitzpatrickSkinTypeSampleTime; // @synthesize fitzpatrickSkinTypeSampleTime=_fitzpatrickSkinTypeSampleTime;
@property(nonatomic) double ovulationIndeterminateProbabilityPercentage; // @synthesize ovulationIndeterminateProbabilityPercentage=_ovulationIndeterminateProbabilityPercentage;
@property(nonatomic) _Bool sexualActivityIsTryingToConceive; // @synthesize sexualActivityIsTryingToConceive=_sexualActivityIsTryingToConceive;
@property(nonatomic) double menstrualPeriodFrequency; // @synthesize menstrualPeriodFrequency=_menstrualPeriodFrequency;
@property(nonatomic) double sexualActivityProtectionDocumentationProbabilityPercentage; // @synthesize sexualActivityProtectionDocumentationProbabilityPercentage=_sexualActivityProtectionDocumentationProbabilityPercentage;
@property(nonatomic) double sexualActivityProtectionProbabilityPercentage; // @synthesize sexualActivityProtectionProbabilityPercentage=_sexualActivityProtectionProbabilityPercentage;
@property(nonatomic) double sexualActivityProbabilityPercentage; // @synthesize sexualActivityProbabilityPercentage=_sexualActivityProbabilityPercentage;
@property(nonatomic) double peripheralPerfusionIndexStdDev; // @synthesize peripheralPerfusionIndexStdDev=_peripheralPerfusionIndexStdDev;
@property(nonatomic) double peripheralPerfusionIndexSampleFrequency; // @synthesize peripheralPerfusionIndexSampleFrequency=_peripheralPerfusionIndexSampleFrequency;
@property(nonatomic) double peripheralPerfusionIndexMean; // @synthesize peripheralPerfusionIndexMean=_peripheralPerfusionIndexMean;
@property(nonatomic) double oxygenSaturationSampleFrequency; // @synthesize oxygenSaturationSampleFrequency=_oxygenSaturationSampleFrequency;
@property(nonatomic) double oxygenSaturationMeasuringSuccessRateDuringSleep; // @synthesize oxygenSaturationMeasuringSuccessRateDuringSleep=_oxygenSaturationMeasuringSuccessRateDuringSleep;
@property(nonatomic) double oxygenSaturationMeasuringSuccessRate; // @synthesize oxygenSaturationMeasuringSuccessRate=_oxygenSaturationMeasuringSuccessRate;
@property(nonatomic) double oxygenSaturationStdDevAtElevation; // @synthesize oxygenSaturationStdDevAtElevation=_oxygenSaturationStdDevAtElevation;
@property(nonatomic) double oxygenSaturationMeanAtElevation; // @synthesize oxygenSaturationMeanAtElevation=_oxygenSaturationMeanAtElevation;
@property(nonatomic) double oxygenSaturationStdDev; // @synthesize oxygenSaturationStdDev=_oxygenSaturationStdDev;
@property(nonatomic) double oxygenSaturationMean; // @synthesize oxygenSaturationMean=_oxygenSaturationMean;
@property(nonatomic) double bodyTempSampleNoiseStdDev; // @synthesize bodyTempSampleNoiseStdDev=_bodyTempSampleNoiseStdDev;
@property(nonatomic) double bodyTempSampleFrequency; // @synthesize bodyTempSampleFrequency=_bodyTempSampleFrequency;
@property(nonatomic) double bodyTempExerciseMultiplier; // @synthesize bodyTempExerciseMultiplier=_bodyTempExerciseMultiplier;
@property(nonatomic) double bodyTempFeverMultiplier; // @synthesize bodyTempFeverMultiplier=_bodyTempFeverMultiplier;
@property(nonatomic) double restingDiastolicBloodPressureSampleNoiseStdDev; // @synthesize restingDiastolicBloodPressureSampleNoiseStdDev=_restingDiastolicBloodPressureSampleNoiseStdDev;
@property(nonatomic) double restingSystolicBloodPressureSampleNoiseStdDev; // @synthesize restingSystolicBloodPressureSampleNoiseStdDev=_restingSystolicBloodPressureSampleNoiseStdDev;
@property(nonatomic) long long restingDiastolicBloodPressure; // @synthesize restingDiastolicBloodPressure=_restingDiastolicBloodPressure;
@property(nonatomic) long long restingSystolicBloodPressure; // @synthesize restingSystolicBloodPressure=_restingSystolicBloodPressure;
@property(nonatomic) double bloodPressureSampleFrequency; // @synthesize bloodPressureSampleFrequency=_bloodPressureSampleFrequency;
@property(nonatomic) double restingRespirationRateSampleNoiseStdDev; // @synthesize restingRespirationRateSampleNoiseStdDev=_restingRespirationRateSampleNoiseStdDev;
@property(nonatomic) double restingRespirationRateSampleFrequencyDuringSleep; // @synthesize restingRespirationRateSampleFrequencyDuringSleep=_restingRespirationRateSampleFrequencyDuringSleep;
@property(nonatomic) double restingRespirationRateSampleFrequency; // @synthesize restingRespirationRateSampleFrequency=_restingRespirationRateSampleFrequency;
@property(nonatomic) long long restingRespirationRate; // @synthesize restingRespirationRate=_restingRespirationRate;
@property(nonatomic) double vo2MaxSampleTimeNoiseStdDev; // @synthesize vo2MaxSampleTimeNoiseStdDev=_vo2MaxSampleTimeNoiseStdDev;
@property(nonatomic) double vo2MaxValueMaxTotalDifference; // @synthesize vo2MaxValueMaxTotalDifference=_vo2MaxValueMaxTotalDifference;
@property(nonatomic) double vo2MaxValueMaxConsecutiveDifference; // @synthesize vo2MaxValueMaxConsecutiveDifference=_vo2MaxValueMaxConsecutiveDifference;
@property(nonatomic) double vo2MaxValueStdDev; // @synthesize vo2MaxValueStdDev=_vo2MaxValueStdDev;
@property(nonatomic) double heartRateSampleNoiseStdDev; // @synthesize heartRateSampleNoiseStdDev=_heartRateSampleNoiseStdDev;
@property(nonatomic) double heartRateSampleFrequencyStdDev; // @synthesize heartRateSampleFrequencyStdDev=_heartRateSampleFrequencyStdDev;
@property(nonatomic) double heartRateSampleFrequency; // @synthesize heartRateSampleFrequency=_heartRateSampleFrequency;
@property(nonatomic) long long walkingHeartRateAverageMaxTotalDifference; // @synthesize walkingHeartRateAverageMaxTotalDifference=_walkingHeartRateAverageMaxTotalDifference;
@property(nonatomic) long long walkingHeartRateAverageMaxDailyDifference; // @synthesize walkingHeartRateAverageMaxDailyDifference=_walkingHeartRateAverageMaxDailyDifference;
@property(nonatomic) long long walkingHeartRateAverage; // @synthesize walkingHeartRateAverage=_walkingHeartRateAverage;
@property(nonatomic) long long restingHeartRateMaxTotalDifference; // @synthesize restingHeartRateMaxTotalDifference=_restingHeartRateMaxTotalDifference;
@property(nonatomic) long long restingHeartRateMaxDailyDifference; // @synthesize restingHeartRateMaxDailyDifference=_restingHeartRateMaxDailyDifference;
@property(nonatomic) long long restingHeartRate; // @synthesize restingHeartRate=_restingHeartRate;
@property(retain, nonatomic) NSArray *weightGainHolidayDaysInYear; // @synthesize weightGainHolidayDaysInYear=_weightGainHolidayDaysInYear;
@property(nonatomic) double weightChangePercentageMax; // @synthesize weightChangePercentageMax=_weightChangePercentageMax;
@property(nonatomic) double weightDailyMaxLoss; // @synthesize weightDailyMaxLoss=_weightDailyMaxLoss;
@property(nonatomic) double weightDailyChangeStdDev; // @synthesize weightDailyChangeStdDev=_weightDailyChangeStdDev;
@property(nonatomic) double weightLossStartDay; // @synthesize weightLossStartDay=_weightLossStartDay;
@property(nonatomic) double weightSampleNoiseStdDev; // @synthesize weightSampleNoiseStdDev=_weightSampleNoiseStdDev;
@property(nonatomic) double weightSampleTimeFrequency; // @synthesize weightSampleTimeFrequency=_weightSampleTimeFrequency;
@property(nonatomic) double weightTargetInKg; // @synthesize weightTargetInKg=_weightTargetInKg;
@property(nonatomic) double weightSampleTime; // @synthesize weightSampleTime=_weightSampleTime;
@property(nonatomic) double heightSampleNoiseStdDev; // @synthesize heightSampleNoiseStdDev=_heightSampleNoiseStdDev;
@property(nonatomic) double heightSampleTimeFrequency; // @synthesize heightSampleTimeFrequency=_heightSampleTimeFrequency;
@property(nonatomic) double heightTargetInCm; // @synthesize heightTargetInCm=_heightTargetInCm;
@property(nonatomic) double heightSampleTime; // @synthesize heightSampleTime=_heightSampleTime;
@property(nonatomic) double hipCircumferenceInInches; // @synthesize hipCircumferenceInInches=_hipCircumferenceInInches;
@property(nonatomic) double forearmCircumferenceInInches; // @synthesize forearmCircumferenceInInches=_forearmCircumferenceInInches;
@property(nonatomic) double wristCircumferenceInInches; // @synthesize wristCircumferenceInInches=_wristCircumferenceInInches;
@property(nonatomic) double waistCircumferenceInInches; // @synthesize waistCircumferenceInInches=_waistCircumferenceInInches;
@property(nonatomic) double uvIndexSampleFrequency; // @synthesize uvIndexSampleFrequency=_uvIndexSampleFrequency;
@property(nonatomic) long long profileType; // @synthesize profileType=_profileType;
@property(nonatomic) _Bool createHighFidelityData; // @synthesize createHighFidelityData=_createHighFidelityData;
@property(nonatomic) double genericSampleTimeNoiseStdDev; // @synthesize genericSampleTimeNoiseStdDev=_genericSampleTimeNoiseStdDev;
@property(nonatomic) double sunsetTime; // @synthesize sunsetTime=_sunsetTime;
@property(nonatomic) double dawnTime; // @synthesize dawnTime=_dawnTime;
@property(nonatomic) double timeIncrementDuringExercise; // @synthesize timeIncrementDuringExercise=_timeIncrementDuringExercise;
@property(nonatomic) double timeIncrement; // @synthesize timeIncrement=_timeIncrement;
@property(nonatomic) long long fitzpatrickSkinType; // @synthesize fitzpatrickSkinType=_fitzpatrickSkinType;
@property(nonatomic) long long bloodType; // @synthesize bloodType=_bloodType;
@property(nonatomic) long long biologicalSex; // @synthesize biologicalSex=_biologicalSex;
@property(retain, nonatomic) NSDate *birthDate; // @synthesize birthDate=_birthDate;
@property(retain, nonatomic) NSDateComponents *birthDateComponents; // @synthesize birthDateComponents=_birthDateComponents;
@property(copy, nonatomic) NSString *personDescription; // @synthesize personDescription=_personDescription;
@property(copy, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(copy, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
- (void)updateMedicalIDData;	// IMP=0x0000000000269367
- (void)setHighFidelityGeneration:(_Bool)arg1;	// IMP=0x00000000002692b8
- (void)applyProfileType:(long long)arg1;	// IMP=0x0000000000269191
- (id)fullName;	// IMP=0x00000000002690c4
- (id)initWithFirstName:(id)arg1 lastName:(id)arg2 description:(id)arg3 birthDateComponents:(id)arg4 biologicalSex:(long long)arg5;	// IMP=0x00000000002679bd

@end
