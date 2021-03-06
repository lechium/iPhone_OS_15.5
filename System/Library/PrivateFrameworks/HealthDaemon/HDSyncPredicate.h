//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthDaemon/NSCopying-Protocol.h>
#import <HealthDaemon/NSSecureCoding-Protocol.h>

@class NSDateInterval, NSDictionary, NSNumber, NSSet;

@interface HDSyncPredicate : NSObject <NSSecureCoding, NSCopying>
{
    NSSet *_excludedSyncProvenances;	// 8 = 0x8
    NSDateInterval *_dateInterval;	// 16 = 0x10
    NSSet *_includedObjectTypes;	// 24 = 0x18
    NSNumber *_defaultMaximumObjectAge;	// 32 = 0x20
    NSNumber *_defaultMaximumTombstoneAge;	// 40 = 0x28
    NSDictionary *_maximumObjectAgeByType;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000045a3cb
- (void).cxx_destruct;	// IMP=0x000000000045a753
@property(readonly, copy, nonatomic) NSDictionary *maximumObjectAgeByType; // @synthesize maximumObjectAgeByType=_maximumObjectAgeByType;
@property(readonly, copy, nonatomic) NSNumber *defaultMaximumTombstoneAge; // @synthesize defaultMaximumTombstoneAge=_defaultMaximumTombstoneAge;
@property(readonly, copy, nonatomic) NSNumber *defaultMaximumObjectAge; // @synthesize defaultMaximumObjectAge=_defaultMaximumObjectAge;
@property(readonly, copy, nonatomic) NSSet *includedObjectTypes; // @synthesize includedObjectTypes=_includedObjectTypes;
@property(readonly, copy, nonatomic) NSDateInterval *dateInterval; // @synthesize dateInterval=_dateInterval;
@property(readonly, copy, nonatomic) NSSet *excludedSyncProvenances; // @synthesize excludedSyncProvenances=_excludedSyncProvenances;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000045a490
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000045a3d3
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000045a295
- (unsigned long long)hash;	// IMP=0x000000000045a206
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000045a1fb
- (id)maximumObjectAgeForType:(id)arg1;	// IMP=0x000000000045a1b0
- (id)initWithExcludedSyncProvenances:(id)arg1 dateInterval:(id)arg2 includedObjectTypes:(id)arg3 defaultMaximumObjectAge:(id)arg4 defaultMaximumTombstoneAge:(id)arg5 maximumObjectAgeByType:(id)arg6;	// IMP=0x000000000045a051

@end

