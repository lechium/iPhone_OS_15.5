//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKMedicalCodingCollection, NSString;

@interface HKConceptResolutionDefinition : NSObject <NSCopying, NSSecureCoding>
{
    HKMedicalCodingCollection *_codingCollection;	// 8 = 0x8
    NSString *_countryCode;	// 16 = 0x10
    long long _recordCategoryType;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001e7431
- (void).cxx_destruct;	// IMP=0x00000000001e78d6
@property(readonly, nonatomic) long long recordCategoryType; // @synthesize recordCategoryType=_recordCategoryType;
@property(readonly, copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(readonly, copy, nonatomic) HKMedicalCodingCollection *codingCollection; // @synthesize codingCollection=_codingCollection;
- (id)description;	// IMP=0x00000000001e7823
- (unsigned long long)hash;	// IMP=0x00000000001e77e0
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001e75b6
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001e74c0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001e7439
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001e7426
- (id)initWithCodingCollection:(id)arg1 countryCode:(id)arg2 recordCategoryType:(long long)arg3;	// IMP=0x00000000001e7367
- (id)initWithCodingCollection:(id)arg1 countryCode:(id)arg2;	// IMP=0x00000000001e7352
- (id)init;	// IMP=0x00000000001e72d8

@end

