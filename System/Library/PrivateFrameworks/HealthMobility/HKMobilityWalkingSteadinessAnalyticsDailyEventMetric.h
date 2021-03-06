//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthMobility/HKMobilityAnalyticsEventMetric-Protocol.h>

@class NSNumber, NSString;

@interface HKMobilityWalkingSteadinessAnalyticsDailyEventMetric : NSObject <HKMobilityAnalyticsEventMetric>
{
    _Bool _improveHealthAndActivityAllowed;	// 8 = 0x8
    NSNumber *_hasWalkingSteadinessMeasurements;	// 16 = 0x10
    NSNumber *_walkingSteadinessNotificationsEnabled;	// 24 = 0x18
    NSString *_activePairedWatchType;	// 32 = 0x20
    NSNumber *_age;	// 40 = 0x28
    NSNumber *_biologicalSex;	// 48 = 0x30
    NSNumber *_hasHeight;	// 56 = 0x38
    NSNumber *_numberOfDaysSinceLastWalkingSteadinessMeasurement;	// 64 = 0x40
    NSNumber *_numberOfLowNotificationsInPastYear;	// 72 = 0x48
    NSNumber *_numberOfRepeatLowNotificationsInPastYear;	// 80 = 0x50
    NSNumber *_numberOfVeryLowNotificationsInPastYear;	// 88 = 0x58
    NSNumber *_numberOfRepeatVeryLowNotificationsInPastYear;	// 96 = 0x60
    NSNumber *_numberOfInitialNotificationsInPastYear;	// 104 = 0x68
    NSNumber *_daysSinceLastRepeatNotification;	// 112 = 0x70
    NSNumber *_daysSinceLastInitialNotification;	// 120 = 0x78
    NSString *_currentWalkingSteadinessClassification;	// 128 = 0x80
    NSString *_previousWalkingSteadinessClassification;	// 136 = 0x88
}

+ (_Bool)requiresImproveHealthAndActivityAllowed;	// IMP=0x0000000000002464
- (void).cxx_destruct;	// IMP=0x0000000000002aad
@property(retain, nonatomic) NSString *previousWalkingSteadinessClassification; // @synthesize previousWalkingSteadinessClassification=_previousWalkingSteadinessClassification;
@property(retain, nonatomic) NSString *currentWalkingSteadinessClassification; // @synthesize currentWalkingSteadinessClassification=_currentWalkingSteadinessClassification;
@property(retain, nonatomic) NSNumber *daysSinceLastInitialNotification; // @synthesize daysSinceLastInitialNotification=_daysSinceLastInitialNotification;
@property(retain, nonatomic) NSNumber *daysSinceLastRepeatNotification; // @synthesize daysSinceLastRepeatNotification=_daysSinceLastRepeatNotification;
@property(retain, nonatomic) NSNumber *numberOfInitialNotificationsInPastYear; // @synthesize numberOfInitialNotificationsInPastYear=_numberOfInitialNotificationsInPastYear;
@property(retain, nonatomic) NSNumber *numberOfRepeatVeryLowNotificationsInPastYear; // @synthesize numberOfRepeatVeryLowNotificationsInPastYear=_numberOfRepeatVeryLowNotificationsInPastYear;
@property(retain, nonatomic) NSNumber *numberOfVeryLowNotificationsInPastYear; // @synthesize numberOfVeryLowNotificationsInPastYear=_numberOfVeryLowNotificationsInPastYear;
@property(retain, nonatomic) NSNumber *numberOfRepeatLowNotificationsInPastYear; // @synthesize numberOfRepeatLowNotificationsInPastYear=_numberOfRepeatLowNotificationsInPastYear;
@property(retain, nonatomic) NSNumber *numberOfLowNotificationsInPastYear; // @synthesize numberOfLowNotificationsInPastYear=_numberOfLowNotificationsInPastYear;
@property(retain, nonatomic) NSNumber *numberOfDaysSinceLastWalkingSteadinessMeasurement; // @synthesize numberOfDaysSinceLastWalkingSteadinessMeasurement=_numberOfDaysSinceLastWalkingSteadinessMeasurement;
@property(retain, nonatomic) NSNumber *hasHeight; // @synthesize hasHeight=_hasHeight;
@property(retain, nonatomic) NSNumber *biologicalSex; // @synthesize biologicalSex=_biologicalSex;
@property(retain, nonatomic) NSNumber *age; // @synthesize age=_age;
@property(retain, nonatomic) NSString *activePairedWatchType; // @synthesize activePairedWatchType=_activePairedWatchType;
@property(retain, nonatomic, getter=isWalkingSteadinessNotificationsEnabled) NSNumber *walkingSteadinessNotificationsEnabled; // @synthesize walkingSteadinessNotificationsEnabled=_walkingSteadinessNotificationsEnabled;
@property(retain, nonatomic) NSNumber *hasWalkingSteadinessMeasurements; // @synthesize hasWalkingSteadinessMeasurements=_hasWalkingSteadinessMeasurements;
@property(nonatomic, getter=isImproveHealthAndActivityAllowed) _Bool improveHealthAndActivityAllowed; // @synthesize improveHealthAndActivityAllowed=_improveHealthAndActivityAllowed;
- (id)eventPayload;	// IMP=0x0000000000002479
- (id)eventName;	// IMP=0x000000000000246c
- (id)initWithImproveHealthAndActivityAllowed:(_Bool)arg1;	// IMP=0x0000000000002429

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

