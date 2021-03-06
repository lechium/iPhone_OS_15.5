//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKMedicalCoding, NSNumber, NSString;

@interface HKCodedQuantity : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_rawValue;	// 8 = 0x8
    HKMedicalCoding *_comparatorCoding;	// 16 = 0x10
    HKMedicalCoding *_unitCoding;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000003f685
+ (id)_numberFormatter;	// IMP=0x000000000003f0bd
+ (id)codedQuantityWithValue:(id)arg1 unitCoding:(id)arg2;	// IMP=0x000000000003ec88
+ (id)codedQuantityWithValue:(id)arg1 comparatorCoding:(id)arg2 unitCoding:(id)arg3;	// IMP=0x000000000003ebfa
- (void).cxx_destruct;	// IMP=0x000000000003fb83
@property(readonly, copy, nonatomic) HKMedicalCoding *unitCoding; // @synthesize unitCoding=_unitCoding;
@property(readonly, copy, nonatomic) HKMedicalCoding *comparatorCoding; // @synthesize comparatorCoding=_comparatorCoding;
@property(readonly, copy, nonatomic) NSString *rawValue; // @synthesize rawValue=_rawValue;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003f885
- (unsigned long long)hash;	// IMP=0x000000000003f82b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003f820
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000003f79d
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003f68d
- (id)quantityRepresentationWithUCUMConverter:(id)arg1 error:(id *)arg2;	// IMP=0x000000000003f23f
- (id)description;	// IMP=0x000000000003f14d
@property(readonly, copy, nonatomic) NSNumber *numberValue;
@property(readonly, copy, nonatomic) NSString *localizedValue;
@property(readonly, nonatomic) double doubleValue;
@property(readonly, copy, nonatomic) NSString *value;
- (id)initWithRawValue:(id)arg1 comparatorCoding:(id)arg2 unitCoding:(id)arg3;	// IMP=0x000000000003ed70
- (id)init;	// IMP=0x000000000003ecf6

@end

