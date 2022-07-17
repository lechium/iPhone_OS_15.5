//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SchoolTime/NSCopying-Protocol.h>
#import <SchoolTime/NSMutableCopying-Protocol.h>
#import <SchoolTime/NSSecureCoding-Protocol.h>

@class SCLSchedule;

@interface SCLScheduleSettings : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    _Bool _enabled;	// 8 = 0x8
    SCLSchedule *_schedule;	// 16 = 0x10
    unsigned long long _version;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001e7c2
+ (unsigned long long)version;	// IMP=0x000000000001e7b7
- (void).cxx_destruct;	// IMP=0x000000000001ee3e
@property(readonly, nonatomic) unsigned long long version; // @synthesize version=_version;
@property(readonly, copy, nonatomic) SCLSchedule *schedule; // @synthesize schedule=_schedule;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (id)endTimeForDay:(long long)arg1;	// IMP=0x000000000001edc2
- (id)startTimeForDay:(long long)arg1;	// IMP=0x000000000001ed63
- (id)debugDescription;	// IMP=0x000000000001ec86
- (id)description;	// IMP=0x000000000001ebc7
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001ead7
- (unsigned long long)hash;	// IMP=0x000000000001ea81
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001ea53
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001ea48
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001e9bc
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001e8cc
- (id)initWithSchoolModeScheduleSettings:(id)arg1;	// IMP=0x000000000001e820
- (id)init;	// IMP=0x000000000001e7ca
- (id)recurrenceForActiveScheduleOnOrAfterDate:(id)arg1 calendar:(id)arg2;	// IMP=0x000000000001fdd1
- (id)dateIntervalForActiveScheduleOnOrAfterDate:(id)arg1 calendar:(id)arg2;	// IMP=0x000000000001ef56
- (_Bool)isActiveAtDate:(id)arg1 calendar:(id)arg2;	// IMP=0x000000000001eed6

@end
