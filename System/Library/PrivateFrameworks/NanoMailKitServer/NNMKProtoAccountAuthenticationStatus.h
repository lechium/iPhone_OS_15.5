//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoMailKitServer/NSCopying-Protocol.h>

@class NSMutableArray;

@interface NNMKProtoAccountAuthenticationStatus : PBCodable <NSCopying>
{
    double _requestTime;	// 8 = 0x8
    NSMutableArray *_accountsStatus;	// 16 = 0x10
    CDStruct_b7a4e4f9 _has;	// 24 = 0x18
}

+ (Class)accountsStatusType;	// IMP=0x000000000006116c
- (void).cxx_destruct;	// IMP=0x0000000000061f48
@property(nonatomic) double requestTime; // @synthesize requestTime=_requestTime;
@property(retain, nonatomic) NSMutableArray *accountsStatus; // @synthesize accountsStatus=_accountsStatus;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000061d98
- (unsigned long long)hash;	// IMP=0x0000000000061c5e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000061b97
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000619a1
- (void)copyTo:(id)arg1;	// IMP=0x00000000000618b8
- (void)writeTo:(id)arg1;	// IMP=0x000000000006174f
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000061742
- (id)dictionaryRepresentation;	// IMP=0x0000000000061273
- (id)description;	// IMP=0x00000000000611c4
@property(nonatomic) _Bool hasRequestTime;
- (id)accountsStatusAtIndex:(unsigned long long)arg1;	// IMP=0x000000000006114f
- (unsigned long long)accountsStatusCount;	// IMP=0x0000000000061132
- (void)addAccountsStatus:(id)arg1;	// IMP=0x00000000000610c8
- (void)clearAccountsStatus;	// IMP=0x00000000000610ab

@end

