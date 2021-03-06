//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HKCorrelationType, NSMutableDictionary, NSSet, NSUUID;

@interface HKCorrelation
{
    NSMutableDictionary *_objects;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001cf080
+ (_Bool)_allowEmptyCorrelations;	// IMP=0x00000000001cf078
+ (_Bool)_isConcreteObjectClass;	// IMP=0x00000000001cddce
+ (id)correlationWithType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 objects:(id)arg4 device:(id)arg5 metadata:(id)arg6;	// IMP=0x00000000001cdc40
+ (id)correlationWithType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 objects:(id)arg4 metadata:(id)arg5;	// IMP=0x00000000001cdc24
+ (id)correlationWithType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 objects:(id)arg4;	// IMP=0x00000000001cdc02
- (void).cxx_destruct;	// IMP=0x00000000001cf229
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001cf1ac
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001cf088
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration)arg1;	// IMP=0x00000000001cea43
- (id)_allTypes;	// IMP=0x00000000001cea26
- (void)_removeAllCorrelatedObjects;	// IMP=0x00000000001ce9e6
- (_Bool)_containsObjects;	// IMP=0x00000000001ce905
- (_Bool)_correlatedObjectsMatchFilterDictionary:(id)arg1;	// IMP=0x00000000001ce63b
- (void)_filterCorrelatedObjectsWithFilterDictionary:(id)arg1;	// IMP=0x00000000001ce2fd
- (id)objectsForType:(id)arg1;	// IMP=0x00000000001ce29b
- (void)_addCorrelatedObjects:(id)arg1;	// IMP=0x00000000001ce171
- (void)_addCorrelatedObject:(id)arg1;	// IMP=0x00000000001ce09a
@property(readonly) HKCorrelationType *correlationType;
- (id)description;	// IMP=0x00000000001cdfbd
@property(readonly, getter=_UUID) NSUUID *UUID;
@property(readonly, copy) NSSet *objects;
- (id)_init;	// IMP=0x00000000001cddd6

@end

