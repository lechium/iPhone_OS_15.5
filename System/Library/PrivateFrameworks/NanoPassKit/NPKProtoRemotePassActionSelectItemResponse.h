//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSData, NSString;

@interface NPKProtoRemotePassActionSelectItemResponse : PBCodable <NSCopying>
{
    long long _incrementAmount;	// 8 = 0x8
    NSString *_incrementCurrency;	// 16 = 0x10
    NSString *_requestUniqueID;	// 24 = 0x18
    int _result;	// 32 = 0x20
    NSData *_serviceProviderDataData;	// 40 = 0x28
    CDStruct_ec65678c _has;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000003626f
@property(retain, nonatomic) NSData *serviceProviderDataData; // @synthesize serviceProviderDataData=_serviceProviderDataData;
@property(nonatomic) long long incrementAmount; // @synthesize incrementAmount=_incrementAmount;
@property(retain, nonatomic) NSString *incrementCurrency; // @synthesize incrementCurrency=_incrementCurrency;
@property(nonatomic) int result; // @synthesize result=_result;
@property(retain, nonatomic) NSString *requestUniqueID; // @synthesize requestUniqueID=_requestUniqueID;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000003611d
- (unsigned long long)hash;	// IMP=0x0000000000036070
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000035f32
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000035e39
- (void)copyTo:(id)arg1;	// IMP=0x0000000000035d8c
- (void)writeTo:(id)arg1;	// IMP=0x0000000000035ccd
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000035cc0
- (id)dictionaryRepresentation;	// IMP=0x0000000000035802
- (id)description;	// IMP=0x0000000000035753
@property(readonly, nonatomic) _Bool hasServiceProviderDataData;
@property(nonatomic) _Bool hasIncrementAmount;
@property(readonly, nonatomic) _Bool hasIncrementCurrency;
- (int)StringAsResult:(id)arg1;	// IMP=0x0000000000035618
- (id)resultAsString:(int)arg1;	// IMP=0x000000000003558c

@end

