//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Fitness/NSCopying-Protocol.h>

@class HKHealthStore, HKQuantity, NSDate, NSMutableDictionary;

@interface FIActivitySettingsController : NSObject <NSCopying>
{
    HKHealthStore *_healthStore;	// 8 = 0x8
    NSMutableDictionary *_dirtyPropertiesMap;	// 16 = 0x10
    NSDate *_dateOfBirth;	// 24 = 0x18
    HKQuantity *_height;	// 32 = 0x20
    HKQuantity *_weight;	// 40 = 0x28
    long long _biologicalSex;	// 48 = 0x30
    long long _wheelchairUse;	// 56 = 0x38
    CDUnknownBlockType _updateHandler;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000000f607
@property(copy, nonatomic) CDUnknownBlockType updateHandler; // @synthesize updateHandler=_updateHandler;
@property(nonatomic) long long wheelchairUse; // @synthesize wheelchairUse=_wheelchairUse;
@property(nonatomic) long long biologicalSex; // @synthesize biologicalSex=_biologicalSex;
@property(retain, nonatomic) HKQuantity *weight; // @synthesize weight=_weight;
@property(retain, nonatomic) HKQuantity *height; // @synthesize height=_height;
@property(copy, nonatomic) NSDate *dateOfBirth; // @synthesize dateOfBirth=_dateOfBirth;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000f50f
@property(readonly, nonatomic) HKQuantity *leanBodyMass;
@property(readonly) unsigned long long experienceType;
- (_Bool)commmitWithError:(id *)arg1;	// IMP=0x000000000000efc2
- (_Bool)_logAndNilError:(id *)arg1 operationDescription:(id)arg2;	// IMP=0x000000000000ef1b
- (void)populateExistingCharacteristics;	// IMP=0x000000000000ebcd
- (_Bool)_commitValue:(id)arg1 forPropertyKey:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000e4c4
- (void)_setUncommitedValue:(id)arg1 forPropertyKey:(id)arg2;	// IMP=0x000000000000e495
- (_Bool)_hasDirtyPropertyForPropertyKey:(id)arg1;	// IMP=0x000000000000e45e
- (id)initWithHealthStore:(id)arg1;	// IMP=0x000000000000e238
- (id)init;	// IMP=0x000000000000e1f8

@end
