//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKClinicalBrand, HKClinicalGateway, HKSignedClinicalDataIssuer, NSString;

@interface HKClinicalAccountProvenance : NSObject <NSCopying, NSSecureCoding>
{
    HKClinicalGateway *_gateway;	// 8 = 0x8
    HKSignedClinicalDataIssuer *_signedClinicalDataIssuer;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000063573
- (void).cxx_destruct;	// IMP=0x0000000000063701
@property(readonly, nonatomic) HKSignedClinicalDataIssuer *signedClinicalDataIssuer; // @synthesize signedClinicalDataIssuer=_signedClinicalDataIssuer;
@property(readonly, nonatomic) HKClinicalGateway *gateway; // @synthesize gateway=_gateway;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000635e9
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000006357b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000063355
- (unsigned long long)hash;	// IMP=0x0000000000063316
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006330b
- (id)description;	// IMP=0x0000000000063278
@property(readonly, nonatomic) HKClinicalBrand *brand;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, nonatomic) long long type;
- (id)initWithSignedClinicalDataIssuer:(id)arg1;	// IMP=0x00000000000630e2
- (id)initWithGateway:(id)arg1;	// IMP=0x0000000000063077

@end

