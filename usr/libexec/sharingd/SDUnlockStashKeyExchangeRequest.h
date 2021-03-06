//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class NSData;

@interface SDUnlockStashKeyExchangeRequest : PBRequest
{
    NSData *_key;	// 8 = 0x8
    unsigned int _sessionID;	// 16 = 0x10
    unsigned int _version;	// 20 = 0x14
    CDStruct_6358cc24 _has;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000b442d
@property(retain, nonatomic) NSData *key; // @synthesize key=_key;
@property(nonatomic) unsigned int sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000b4368
- (unsigned long long)hash;	// IMP=0x00100000000b4300
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000b4219
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000b416c
- (void)copyTo:(id)arg1;	// IMP=0x00100000000b40ec
- (void)writeTo:(id)arg1;	// IMP=0x00100000000b405e
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000b4051
- (id)dictionaryRepresentation;	// IMP=0x00100000000b3c84
- (id)description;	// IMP=0x00100000000b3bd5
@property(readonly, nonatomic) _Bool hasKey;
@property(nonatomic) _Bool hasSessionID;
@property(nonatomic) _Bool hasVersion;

@end

