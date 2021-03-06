//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKClinicalType, HKFHIRResource, NSString;

@interface HKClinicalRecord <NSSecureCoding, NSCopying>
{
    NSString *_displayName;	// 8 = 0x8
    HKFHIRResource *_FHIRResource;	// 16 = 0x10
}

+ (_Bool)_isConcreteObjectClass;	// IMP=0x000000000008c5a9
+ (_Bool)supportsEquivalence;	// IMP=0x000000000008c16a
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000008bfd4
+ (id)_newClinicalRecordWithType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 device:(id)arg4 metadata:(id)arg5 displayName:(id)arg6 FHIRResource:(id)arg7 config:(CDUnknownBlockType)arg8;	// IMP=0x000000000008bc53
+ (id)clinicalRecordWithType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 device:(id)arg4 metadata:(id)arg5 displayName:(id)arg6 FHIRResource:(id)arg7;	// IMP=0x000000000008bc17
- (void).cxx_destruct;	// IMP=0x000000000008c5c3
@property(readonly, copy) HKClinicalType *clinicalType;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration)arg1;	// IMP=0x000000000008c4e8
- (void)_setFHIRResource:(id)arg1;	// IMP=0x000000000008c4b4
@property(readonly, copy) HKFHIRResource *FHIRResource;
- (void)_setDisplayName:(id)arg1;	// IMP=0x000000000008c46b
@property(readonly, copy) NSString *displayName;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000008c44b
- (_Bool)isEquivalent:(id)arg1;	// IMP=0x000000000008c172
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000008c07b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000008bfdc
- (id)description;	// IMP=0x000000000008bf06
- (id)init;	// IMP=0x000000000008be8c

@end

