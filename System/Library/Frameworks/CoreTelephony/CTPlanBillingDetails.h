//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;

@interface CTPlanBillingDetails : NSObject <NSSecureCoding>
{
    NSString *_planName;	// 8 = 0x8
    NSNumber *_planCost;	// 16 = 0x10
    NSString *_planCurrency;	// 24 = 0x18
    NSNumber *_planDataAmount;	// 32 = 0x20
    unsigned long long _planDataMeasureUnit;	// 40 = 0x28
    unsigned long long _planType;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000a7979
- (void).cxx_destruct;	// IMP=0x00000000000a7bf2
@property(readonly, nonatomic) unsigned long long planType; // @synthesize planType=_planType;
@property(readonly, nonatomic) unsigned long long planDataMeasureUnit; // @synthesize planDataMeasureUnit=_planDataMeasureUnit;
@property(readonly, nonatomic) NSNumber *planDataAmount; // @synthesize planDataAmount=_planDataAmount;
@property(readonly, nonatomic) NSString *planCurrency; // @synthesize planCurrency=_planCurrency;
@property(readonly, nonatomic) NSNumber *planCost; // @synthesize planCost=_planCost;
@property(readonly, nonatomic) NSString *planName; // @synthesize planName=_planName;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000a7af2
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000a7981
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000a75ba
- (id)description;	// IMP=0x00000000000a7422
- (id)initWithName:(id)arg1 PlanCost:(id)arg2 PlanCurrency:(id)arg3 PlanDataAmount:(id)arg4 PlanDataMeasureUnit:(unsigned long long)arg5 PlanType:(unsigned long long)arg6;	// IMP=0x00000000000a7330

@end

