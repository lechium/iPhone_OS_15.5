//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKCDPError, NSData, NSMutableArray;

@interface CKCDPCodeServiceResponse : PBCodable <NSCopying>
{
    NSMutableArray *_assetAuthorizationResponses;	// 8 = 0x8
    CKCDPError *_error;	// 16 = 0x10
    NSData *_routingToken;	// 24 = 0x18
    NSData *_serializedResult;	// 32 = 0x20
}

+ (Class)assetAuthorizationResponsesType;	// IMP=0x0000000000296cc7
- (void).cxx_destruct;	// IMP=0x0000000000297c1c
@property(retain, nonatomic) NSData *routingToken; // @synthesize routingToken=_routingToken;
@property(retain, nonatomic) NSMutableArray *assetAuthorizationResponses; // @synthesize assetAuthorizationResponses=_assetAuthorizationResponses;
@property(retain, nonatomic) CKCDPError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSData *serializedResult; // @synthesize serializedResult=_serializedResult;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002979b6
- (unsigned long long)hash;	// IMP=0x0000000000297932
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000297806
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002975c2
- (void)copyTo:(id)arg1;	// IMP=0x0000000000297495
- (void)writeTo:(id)arg1;	// IMP=0x00000000002972fc
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000297076
- (id)dictionaryRepresentation;	// IMP=0x0000000000296d9c
- (id)description;	// IMP=0x0000000000296ced
@property(readonly, nonatomic) _Bool hasRoutingToken;
- (id)assetAuthorizationResponsesAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000296caa
- (unsigned long long)assetAuthorizationResponsesCount;	// IMP=0x0000000000296c8d
- (void)addAssetAuthorizationResponses:(id)arg1;	// IMP=0x0000000000296c23
- (void)clearAssetAuthorizationResponses;	// IMP=0x0000000000296c06
@property(readonly, nonatomic) _Bool hasError;
@property(readonly, nonatomic) _Bool hasSerializedResult;

@end

