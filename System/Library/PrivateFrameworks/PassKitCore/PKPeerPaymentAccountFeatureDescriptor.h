//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSDecimalNumber;

@interface PKPeerPaymentAccountFeatureDescriptor <NSSecureCoding>
{
    NSDecimalNumber *_feePercentage;	// 8 = 0x8
    NSDecimalNumber *_minimumFee;	// 16 = 0x10
    NSDecimalNumber *_maximumFee;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000032d2b3
- (void).cxx_destruct;	// IMP=0x000000000032da3c
@property(copy, nonatomic) NSDecimalNumber *maximumFee; // @synthesize maximumFee=_maximumFee;
@property(copy, nonatomic) NSDecimalNumber *minimumFee; // @synthesize minimumFee=_minimumFee;
@property(copy, nonatomic) NSDecimalNumber *feePercentage; // @synthesize feePercentage=_feePercentage;
- (_Bool)isEqualToPeerPaymentAccountFeatureDescriptor:(id)arg1;	// IMP=0x000000000032d946
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000032d8da
- (unsigned long long)hash;	// IMP=0x000000000032d816
- (id)description;	// IMP=0x000000000032d49d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000032d3e3
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000032d2bb
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000032d1b8

@end

