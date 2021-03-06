//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class NSString;

@interface HMDNotificationConditionConverter : HMFObject <HMFLogging>
{
}

+ (id)logCategory;	// IMP=0x0000000000836e2e
+ (id)predicateFromTimePeriodCondition:(id)arg1;	// IMP=0x00000000008366b4
+ (id)predicateFromPresenceCondition:(id)arg1;	// IMP=0x00000000008363c4
+ (id)negateOffsetDateComponents:(id)arg1;	// IMP=0x00000000008362fc
+ (id)_timeOfDayTimePeriodElementFromComparisonPredicate:(id)arg1;	// IMP=0x0000000000836132
+ (id)_sunriseSunsetTimePeriodElementFromComparisonPredicate:(id)arg1;	// IMP=0x0000000000835d7a
+ (id)_timePredicatesFromPredicate:(id)arg1;	// IMP=0x0000000000835afc
+ (_Bool)_isTimePredicate:(id)arg1;	// IMP=0x00000000008359ea
+ (id)_presencePredicatesFromPredicate:(id)arg1;	// IMP=0x000000000083567c
+ (id)timePeriodNotificationConditionFromPredicate:(id)arg1;	// IMP=0x0000000000835211
+ (id)presenceNotificationConditionFromPredicate:(id)arg1;	// IMP=0x0000000000834e1c
+ (id)predicatesFromConditions:(id)arg1;	// IMP=0x0000000000834cc8
+ (id)conditionsFromPredicate:(id)arg1;	// IMP=0x0000000000834a43

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

