//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSData;

@interface NPKProtoPeerPaymentRegistrationResponse : PBCodable <NSCopying>
{
    NSData *_errorData;	// 8 = 0x8
    NSData *_peerPaymentAccountData;	// 16 = 0x10
    NSData *_peerPaymentWebServiceContextData;	// 24 = 0x18
    _Bool _pending;	// 32 = 0x20
    _Bool _success;	// 33 = 0x21
    CDStruct_5ee4970e _has;	// 36 = 0x24
}

- (void).cxx_destruct;	// IMP=0x0000000000043ff3
@property(retain, nonatomic) NSData *peerPaymentAccountData; // @synthesize peerPaymentAccountData=_peerPaymentAccountData;
@property(retain, nonatomic) NSData *peerPaymentWebServiceContextData; // @synthesize peerPaymentWebServiceContextData=_peerPaymentWebServiceContextData;
@property(retain, nonatomic) NSData *errorData; // @synthesize errorData=_errorData;
@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(nonatomic) _Bool pending; // @synthesize pending=_pending;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000043ea4
- (unsigned long long)hash;	// IMP=0x0000000000043ded
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000043c77
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000043b73
- (void)copyTo:(id)arg1;	// IMP=0x0000000000043ab3
- (void)writeTo:(id)arg1;	// IMP=0x00000000000439e9
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000439dc
- (id)dictionaryRepresentation;	// IMP=0x0000000000043574
- (id)description;	// IMP=0x00000000000434c5
@property(readonly, nonatomic) _Bool hasPeerPaymentAccountData;
@property(readonly, nonatomic) _Bool hasPeerPaymentWebServiceContextData;
@property(readonly, nonatomic) _Bool hasErrorData;
@property(nonatomic) _Bool hasSuccess;
@property(nonatomic) _Bool hasPending;

@end

