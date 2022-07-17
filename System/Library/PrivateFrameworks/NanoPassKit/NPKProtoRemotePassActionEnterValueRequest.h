//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSData, NSString;

@interface NPKProtoRemotePassActionEnterValueRequest : PBRequest <NSCopying>
{
    long long _currentBalanceAmount;	// 8 = 0x8
    NSString *_balanceIdentifier;	// 16 = 0x10
    NSString *_balanceLabel;	// 24 = 0x18
    NSString *_currentBalanceCurrency;	// 32 = 0x20
    NSData *_paymentPassActionData;	// 40 = 0x28
    NSString *_requestUniqueID;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000013f200
@property(retain, nonatomic) NSData *paymentPassActionData; // @synthesize paymentPassActionData=_paymentPassActionData;
@property(nonatomic) long long currentBalanceAmount; // @synthesize currentBalanceAmount=_currentBalanceAmount;
@property(retain, nonatomic) NSString *currentBalanceCurrency; // @synthesize currentBalanceCurrency=_currentBalanceCurrency;
@property(retain, nonatomic) NSString *balanceLabel; // @synthesize balanceLabel=_balanceLabel;
@property(retain, nonatomic) NSString *balanceIdentifier; // @synthesize balanceIdentifier=_balanceIdentifier;
@property(retain, nonatomic) NSString *requestUniqueID; // @synthesize requestUniqueID=_requestUniqueID;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000013f053
- (unsigned long long)hash;	// IMP=0x000000000013ef9b
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000013ee26
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000013ed03
- (void)copyTo:(id)arg1;	// IMP=0x000000000013ec41
- (void)writeTo:(id)arg1;	// IMP=0x000000000013eb59
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000013eb4c
- (id)dictionaryRepresentation;	// IMP=0x000000000013e760
- (id)description;	// IMP=0x000000000013e6b1
@property(readonly, nonatomic) _Bool hasPaymentPassActionData;

@end
