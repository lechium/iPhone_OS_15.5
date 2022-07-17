//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSData;

@interface NPKProtoCompanionMigratedResponse : PBCodable <NSCopying>
{
    NSData *_errorData;	// 8 = 0x8
    NSData *_paymentWebServiceContextData;	// 16 = 0x10
    NSData *_peerPaymentAccountData;	// 24 = 0x18
    NSData *_peerPaymentWebServiceContextData;	// 32 = 0x20
    _Bool _pending;	// 40 = 0x28
    _Bool _success;	// 41 = 0x29
    CDStruct_5ee4970e _has;	// 44 = 0x2c
}

- (void).cxx_destruct;	// IMP=0x00000000000b6295
@property(retain, nonatomic) NSData *peerPaymentAccountData; // @synthesize peerPaymentAccountData=_peerPaymentAccountData;
@property(retain, nonatomic) NSData *peerPaymentWebServiceContextData; // @synthesize peerPaymentWebServiceContextData=_peerPaymentWebServiceContextData;
@property(retain, nonatomic) NSData *paymentWebServiceContextData; // @synthesize paymentWebServiceContextData=_paymentWebServiceContextData;
@property(retain, nonatomic) NSData *errorData; // @synthesize errorData=_errorData;
@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(nonatomic) _Bool pending; // @synthesize pending=_pending;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000b6101
- (unsigned long long)hash;	// IMP=0x00000000000b602f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000b5e82
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000b5d58
- (void)copyTo:(id)arg1;	// IMP=0x00000000000b5c78
- (void)writeTo:(id)arg1;	// IMP=0x00000000000b5b91
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000b5b84
- (id)dictionaryRepresentation;	// IMP=0x00000000000b56d5
- (id)description;	// IMP=0x00000000000b5626
@property(readonly, nonatomic) _Bool hasPeerPaymentAccountData;
@property(readonly, nonatomic) _Bool hasPeerPaymentWebServiceContextData;
@property(readonly, nonatomic) _Bool hasPaymentWebServiceContextData;
@property(readonly, nonatomic) _Bool hasErrorData;
@property(nonatomic) _Bool hasSuccess;
@property(nonatomic) _Bool hasPending;

@end
