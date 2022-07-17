//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PassKitCore/NSCopying-Protocol.h>

@class NSString, PKProtobufPayment;

@interface PKProtobufRemotePaymentResponse : PBCodable <NSCopying>
{
    PKProtobufPayment *_payment;	// 8 = 0x8
    NSString *_remotePaymentRequestIdentifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000003be9d2
@property(retain, nonatomic) NSString *remotePaymentRequestIdentifier; // @synthesize remotePaymentRequestIdentifier=_remotePaymentRequestIdentifier;
@property(retain, nonatomic) PKProtobufPayment *payment; // @synthesize payment=_payment;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000003be90e
- (unsigned long long)hash;	// IMP=0x00000000003be8c1
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003be7f9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003be75b
- (void)copyTo:(id)arg1;	// IMP=0x00000000003be6f8
- (void)writeTo:(id)arg1;	// IMP=0x00000000003be69b
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000003be68e
- (id)dictionaryRepresentation;	// IMP=0x00000000003be3ec
- (id)description;	// IMP=0x00000000003be33d
@property(readonly, nonatomic) _Bool hasRemotePaymentRequestIdentifier;
@property(readonly, nonatomic) _Bool hasPayment;

@end
