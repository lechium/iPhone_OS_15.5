//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface SDUnlockStashToken : PBCodable
{
    unsigned int _sessionID;	// 8 = 0x8
    NSData *_stashToken;	// 16 = 0x10
    unsigned int _version;	// 24 = 0x18
    CDStruct_6358cc24 _has;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x002000000003c24d
@property(retain, nonatomic) NSData *stashToken; // @synthesize stashToken=_stashToken;
@property(nonatomic) unsigned int sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000003c188
- (unsigned long long)hash;	// IMP=0x001000000003c120
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000003c039
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000003bf8c
- (void)copyTo:(id)arg1;	// IMP=0x001000000003bf0c
- (void)writeTo:(id)arg1;	// IMP=0x001000000003be7e
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000003be71
- (id)dictionaryRepresentation;	// IMP=0x001000000003baa4
- (id)description;	// IMP=0x001000000003b9f5
@property(readonly, nonatomic) _Bool hasStashToken;
@property(nonatomic) _Bool hasSessionID;
@property(nonatomic) _Bool hasVersion;

@end

