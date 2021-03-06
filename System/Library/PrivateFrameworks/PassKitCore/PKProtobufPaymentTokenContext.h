//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PassKitCore/NSCopying-Protocol.h>

@class NSString, PKProtobufCustomPrecisionAmount;

@interface PKProtobufPaymentTokenContext : PBCodable <NSCopying>
{
    long long _amount;	// 8 = 0x8
    PKProtobufCustomPrecisionAmount *_customPrecisionAmount;	// 16 = 0x10
    NSString *_externalIdentifier;	// 24 = 0x18
    NSString *_merchantDomain;	// 32 = 0x20
    NSString *_merchantIdentifier;	// 40 = 0x28
    NSString *_merchantName;	// 48 = 0x30
    struct {
        unsigned int amount:1;
    } _has;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000030062a
@property(retain, nonatomic) PKProtobufCustomPrecisionAmount *customPrecisionAmount; // @synthesize customPrecisionAmount=_customPrecisionAmount;
@property(nonatomic) long long amount; // @synthesize amount=_amount;
@property(retain, nonatomic) NSString *merchantDomain; // @synthesize merchantDomain=_merchantDomain;
@property(retain, nonatomic) NSString *merchantName; // @synthesize merchantName=_merchantName;
@property(retain, nonatomic) NSString *externalIdentifier; // @synthesize externalIdentifier=_externalIdentifier;
@property(retain, nonatomic) NSString *merchantIdentifier; // @synthesize merchantIdentifier=_merchantIdentifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000300465
- (unsigned long long)hash;	// IMP=0x00000000003003a2
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000300211
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003000d6
- (void)copyTo:(id)arg1;	// IMP=0x00000000002ffff2
- (void)writeTo:(id)arg1;	// IMP=0x00000000002fff19
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002fff0c
- (id)dictionaryRepresentation;	// IMP=0x00000000002ffa66
- (id)description;	// IMP=0x00000000002ff9b7
@property(readonly, nonatomic) _Bool hasCustomPrecisionAmount;
@property(nonatomic) _Bool hasAmount;
@property(readonly, nonatomic) _Bool hasMerchantDomain;
@property(readonly, nonatomic) _Bool hasMerchantName;
@property(readonly, nonatomic) _Bool hasExternalIdentifier;
@property(readonly, nonatomic) _Bool hasMerchantIdentifier;

@end

