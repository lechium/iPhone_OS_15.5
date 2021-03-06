//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>
#import <PassKitCore/PKCloudStoreCoding-Protocol.h>

@class NSSet;

@interface PKPaymentTransactionFees : NSObject <NSSecureCoding, PKCloudStoreCoding>
{
    NSSet *_fees;	// 8 = 0x8
}

+ (id)_feesSetFromJsonString:(id)arg1;	// IMP=0x0000000000340a48
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000340647
+ (id)recordNamePrefix;	// IMP=0x000000000034063f
- (void).cxx_destruct;	// IMP=0x0000000000340df7
@property(retain, nonatomic) NSSet *fees; // @synthesize fees=_fees;
- (id)description;	// IMP=0x0000000000340834
- (_Bool)isEqualToFees:(id)arg1;	// IMP=0x0000000000340822
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003407ba
- (unsigned long long)hash;	// IMP=0x0000000000340752
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000034072f
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000034064f
- (id)primaryIdentifier;	// IMP=0x0000000000340637
- (id)recordTypesAndNamesForCodingType:(unsigned long long)arg1;	// IMP=0x000000000034062f
- (unsigned long long)itemType;	// IMP=0x0000000000340624
- (void)_encodeServerDataWithCloudStoreCoder:(id)arg1;	// IMP=0x0000000000340557
- (void)encodeWithCloudStoreCoder:(id)arg1 codingType:(unsigned long long)arg2;	// IMP=0x000000000034053a
- (id)_feeItemsFromRecord:(id)arg1;	// IMP=0x00000000003404c6
- (void)applyPropertiesFromCloudStoreRecord:(id)arg1;	// IMP=0x000000000034042b
- (id)initWithCloudStoreCoder:(id)arg1;	// IMP=0x000000000034037d
- (id)jsonString;	// IMP=0x0000000000340219
- (id)jsonArrayRepresentation;	// IMP=0x0000000000340054
- (id)initWithJsonString:(id)arg1;	// IMP=0x000000000033ff83
- (id)initWithFeeItems:(id)arg1;	// IMP=0x000000000033fede

@end

