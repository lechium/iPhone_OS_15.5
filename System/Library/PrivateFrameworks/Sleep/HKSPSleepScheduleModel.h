//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Sleep/NAEquatable-Protocol.h>
#import <Sleep/NAHashable-Protocol.h>
#import <Sleep/NSCopying-Protocol.h>

@class HKSPSleepEventRecord, HKSPSleepSchedule, HKSPSleepSettings, NSDate, NSString;

@interface HKSPSleepScheduleModel : NSObject <NSCopying, NAEquatable, NAHashable>
{
    HKSPSleepSchedule *_sleepSchedule;	// 8 = 0x8
    HKSPSleepSettings *_sleepSettings;	// 16 = 0x10
    HKSPSleepEventRecord *_sleepEventRecord;	// 24 = 0x18
}

+ (id)templateModelForSchedule:(id)arg1;	// IMP=0x000000000000772b
+ (id)sleepScheduleModelWithSleepSchedule:(id)arg1 sleepSettings:(id)arg2 sleepEventRecord:(id)arg3;	// IMP=0x000000000000637a
- (void).cxx_destruct;	// IMP=0x0000000000007c41
@property(readonly, copy, nonatomic) HKSPSleepEventRecord *sleepEventRecord; // @synthesize sleepEventRecord=_sleepEventRecord;
@property(readonly, copy, nonatomic) HKSPSleepSettings *sleepSettings; // @synthesize sleepSettings=_sleepSettings;
@property(readonly, copy, nonatomic) HKSPSleepSchedule *sleepSchedule; // @synthesize sleepSchedule=_sleepSchedule;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000007aba
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000007a6a
- (id)succinctDescriptionBuilder;	// IMP=0x0000000000007a4e
- (id)succinctDescription;	// IMP=0x00000000000079fe
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (id)modelByApplyingChangesFromOccurrence:(id)arg1;	// IMP=0x00000000000077c4
- (long long)alarmStatusForOccurrence:(id)arg1;	// IMP=0x00000000000075b3
- (id)_upcomingResolvedOccurrencesDueAfterDate:(id)arg1 searchBackwards:(_Bool)arg2;	// IMP=0x0000000000007502
- (id)_timelineResultsDueAfterDate:(id)arg1;	// IMP=0x00000000000074a3
- (id)timelineForDate:(id)arg1;	// IMP=0x0000000000007453
- (id)previousResolvedOccurrenceBeforeDate:(id)arg1;	// IMP=0x00000000000073fe
- (id)previousOccurrenceBeforeDate:(id)arg1;	// IMP=0x00000000000073ae
- (id)nextResolvedOccurrenceAfterDate:(id)arg1 repeatingWithinInterval:(double)arg2;	// IMP=0x00000000000072ea
- (id)nextResolvedOccurrenceAfterDate:(id)arg1;	// IMP=0x0000000000007298
- (id)nextOccurrenceAfterDate:(id)arg1 repeatingWithinInterval:(double)arg2;	// IMP=0x0000000000007248
- (id)nextOccurrenceAfterDate:(id)arg1;	// IMP=0x00000000000071f8
- (id)upcomingResolvedOccurrenceAfterDate:(id)arg1;	// IMP=0x00000000000071db
- (id)upcomingOccurrenceAfterDate:(id)arg1;	// IMP=0x000000000000718b
- (id)_upcomingEventsDueAfterDate:(id)arg1 searchBackwards:(_Bool)arg2;	// IMP=0x0000000000006f82
- (id)previousEventsDueBeforeDate:(id)arg1;	// IMP=0x0000000000006f6b
- (id)upcomingEventsDueAfterDate:(id)arg1;	// IMP=0x0000000000006f57
- (id)nextEventDueAfterDate:(id)arg1;	// IMP=0x0000000000006f07
- (id)previousEventWithIdentifier:(id)arg1 dueBeforeDate:(id)arg2;	// IMP=0x0000000000006c90
- (id)nextEventWithIdentifier:(id)arg1 dueAfterDate:(id)arg2;	// IMP=0x0000000000006a21
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000067a6
- (_Bool)isEquivalentTo:(id)arg1;	// IMP=0x0000000000006624
@property(readonly, nonatomic) NSDate *lastModifiedDate;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000006450
- (id)computeConfirmedWakeUpUntilDateForOverrideWakeUpDate:(id)arg1;	// IMP=0x00000000000127e0
- (id)computeConfirmedWakeUpUntilDateForEarlyWakeUpDate:(id)arg1;	// IMP=0x00000000000121db
- (_Bool)chargingRemindersEnabledWithLogObject:(id)arg1;	// IMP=0x0000000000015fd1
@property(readonly, nonatomic) _Bool chargingRemindersEnabled;
- (_Bool)goodMorningScreenEnabledWithLogObject:(id)arg1;	// IMP=0x0000000000015dc0
@property(readonly, nonatomic) _Bool goodMorningScreenEnabled;
- (_Bool)goodMorningAlertNotificationsEnabledWithLogObject:(id)arg1;	// IMP=0x0000000000015b16
@property(readonly, nonatomic) _Bool goodMorningAlertNotificationEnabled;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
