//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthRecordServices/NSCopying-Protocol.h>
#import <HealthRecordServices/NSSecureCoding-Protocol.h>

@class HKClinicalRecord, HKFHIRIdentifier, HKMedicalRecord;

@interface HDExtractionResultItem : NSObject <NSCopying, NSSecureCoding>
{
    HKFHIRIdentifier *_resourceIdentifier;	// 8 = 0x8
    HKMedicalRecord *_medicalRecord;	// 16 = 0x10
    HKClinicalRecord *_clinicalRecord;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000123bc
- (void).cxx_destruct;	// IMP=0x00000000000125bb
@property(readonly, copy, nonatomic) HKClinicalRecord *clinicalRecord; // @synthesize clinicalRecord=_clinicalRecord;
@property(readonly, copy, nonatomic) HKMedicalRecord *medicalRecord; // @synthesize medicalRecord=_medicalRecord;
@property(readonly, copy, nonatomic) HKFHIRIdentifier *resourceIdentifier; // @synthesize resourceIdentifier=_resourceIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000012592
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000012509
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000123c4
- (id)initWithResourceIdentifier:(id)arg1 medicalRecord:(id)arg2 clinicalRecord:(id)arg3;	// IMP=0x00000000000122d6
- (id)init;	// IMP=0x000000000001225c

@end

