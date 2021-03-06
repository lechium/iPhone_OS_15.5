//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Sleep/BSDescriptionProviding-Protocol.h>
#import <Sleep/NSCopying-Protocol.h>
#import <Sleep/NSSecureCoding-Protocol.h>

@class HKSPSleepEvent, HKSPSleepScheduleOccurrence, NSDateInterval, NSString;

@interface HKSPResolvedSleepScheduleOccurrence : NSObject <BSDescriptionProviding, NSCopying, NSSecureCoding>
{
    HKSPSleepScheduleOccurrence *_occurrence;	// 8 = 0x8
    HKSPSleepEvent *_wakeUpEvent;	// 16 = 0x10
    HKSPSleepEvent *_bedtimeEvent;	// 24 = 0x18
    HKSPSleepEvent *_windDownEvent;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000003d406
- (void).cxx_destruct;	// IMP=0x000000000003da79
@property(readonly, nonatomic) HKSPSleepEvent *windDownEvent; // @synthesize windDownEvent=_windDownEvent;
@property(readonly, nonatomic) HKSPSleepEvent *bedtimeEvent; // @synthesize bedtimeEvent=_bedtimeEvent;
@property(readonly, nonatomic) HKSPSleepEvent *wakeUpEvent; // @synthesize wakeUpEvent=_wakeUpEvent;
@property(readonly, nonatomic) HKSPSleepScheduleOccurrence *occurrence; // @synthesize occurrence=_occurrence;
- (id)succinctDescriptionBuilder;	// IMP=0x000000000003d8b9
- (id)succinctDescription;	// IMP=0x000000000003d869
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000000003d857
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x000000000003d845
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003d470
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003d465
- (long long)compare:(id)arg1;	// IMP=0x000000000003d40e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000003d371
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003d21c
- (id)generateOverrideOccurrenceForCurrentDate:(id)arg1 gregorianCalendar:(id)arg2;	// IMP=0x000000000003ce47
@property(readonly, nonatomic) NSDateInterval *windDownInterval;
@property(readonly, nonatomic) NSDateInterval *bedtimeInterval;
@property(readonly, nonatomic) NSDateInterval *scheduledInterval;
- (id)occurrenceByRemovingEventWithIdentifier:(id)arg1;	// IMP=0x000000000003c99a
- (id)occurrenceByAdjustingEvent:(id)arg1;	// IMP=0x000000000003c7a7
- (id)initWithOccurrence:(id)arg1 wakeUpEvent:(id)arg2 bedtimeEvent:(id)arg3 windDownEvent:(id)arg4;	// IMP=0x000000000003c6b5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

