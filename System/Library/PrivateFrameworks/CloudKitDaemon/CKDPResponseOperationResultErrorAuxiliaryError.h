//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface CKDPResponseOperationResultErrorAuxiliaryError : PBCodable <NSCopying>
{
    int _code;	// 8 = 0x8
    NSString *_domain;	// 16 = 0x10
    NSMutableArray *_userInfos;	// 24 = 0x18
    CDStruct_9ab06576 _has;	// 32 = 0x20
}

+ (Class)userInfoType;	// IMP=0x00000000000f2c17
- (void).cxx_destruct;	// IMP=0x00000000000f3a07
@property(retain, nonatomic) NSMutableArray *userInfos; // @synthesize userInfos=_userInfos;
@property(nonatomic) int code; // @synthesize code=_code;
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000f3815
- (unsigned long long)hash;	// IMP=0x00000000000f37a2
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000f36ad
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000f34aa
- (void)copyTo:(id)arg1;	// IMP=0x00000000000f33a0
- (void)writeTo:(id)arg1;	// IMP=0x00000000000f322c
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000f321f
- (id)dictionaryRepresentation;	// IMP=0x00000000000f2cd7
- (id)description;	// IMP=0x00000000000f2c28
- (id)userInfoAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000f2bfa
- (unsigned long long)userInfosCount;	// IMP=0x00000000000f2bdd
- (void)addUserInfo:(id)arg1;	// IMP=0x00000000000f2b73
- (void)clearUserInfos;	// IMP=0x00000000000f2b56
@property(nonatomic) _Bool hasCode;
@property(readonly, nonatomic) _Bool hasDomain;

@end
