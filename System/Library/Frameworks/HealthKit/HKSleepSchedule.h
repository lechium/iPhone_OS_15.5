//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class NSDateComponents, NSNumber;

@interface HKSleepSchedule <NSSecureCoding, NSCopying>
{
    unsigned long long _weekdays;	// 8 = 0x8
    NSDateComponents *_wakeTimeComponents;	// 16 = 0x10
    NSDateComponents *_bedTimeComponents;	// 24 = 0x18
    NSNumber *_overrideDayIndex;	// 32 = 0x20
}

+ (_Bool)_isConcreteObjectClass;	// IMP=0x00000000000613af
+ (_Bool)supportsEquivalence;	// IMP=0x0000000000060fb8
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000060d90
+ (id)_sleepScheduleWithDate:(id)arg1 weekdays:(unsigned long long)arg2 wakeTimeComponents:(id)arg3 bedTimeComponents:(id)arg4 overrideDayIndex:(id)arg5 device:(id)arg6 metadata:(id)arg7 config:(CDUnknownBlockType)arg8;	// IMP=0x00000000000600ca
+ (id)sleepScheduleWithDate:(id)arg1 weekdays:(unsigned long long)arg2 wakeTimeComponents:(id)arg3 bedTimeComponents:(id)arg4 overrideDayIndex:(id)arg5 device:(id)arg6 metadata:(id)arg7;	// IMP=0x0000000000060095
- (void).cxx_destruct;	// IMP=0x000000000006143f
@property(copy, nonatomic, setter=_setOverrideDayIndex:) NSNumber *overrideDayIndex; // @synthesize overrideDayIndex=_overrideDayIndex;
@property(copy, nonatomic, setter=_setBedTimeComponents:) NSDateComponents *bedTimeComponents; // @synthesize bedTimeComponents=_bedTimeComponents;
@property(copy, nonatomic, setter=_setWakeTimeComponents:) NSDateComponents *wakeTimeComponents; // @synthesize wakeTimeComponents=_wakeTimeComponents;
@property(nonatomic, setter=_setWeekdays:) unsigned long long weekdays; // @synthesize weekdays=_weekdays;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000613a4
- (_Bool)isEquivalent:(id)arg1;	// IMP=0x0000000000060fc0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000060e71
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000060d98
- (_Bool)hasEquivalentOverrideDayToSleepSchedule:(id)arg1;	// IMP=0x0000000000060c1b
- (_Bool)hasEquivalentTimesToSleepSchedule:(id)arg1;	// IMP=0x00000000000609e1
- (id)bedtimeDateIntervalForMorningIndex:(long long)arg1 calendar:(id)arg2;	// IMP=0x0000000000060932
- (id)bedtimeDateIntervalForWakeTime:(id)arg1 calendar:(id)arg2;	// IMP=0x0000000000060766
- (id)wakeDateComponentsForMorningIndex:(long long)arg1 calendar:(id)arg2;	// IMP=0x0000000000060645
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration)arg1;	// IMP=0x000000000006054a
- (id)description;	// IMP=0x00000000000603d6
- (id)init;	// IMP=0x000000000006035c

@end
