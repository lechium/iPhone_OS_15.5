//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class NSData;

@interface HDCodableObjectSourceAuthorization : PBCodable <NSCopying>
{
    long long _authorizationStatus;	// 8 = 0x8
    double _modificationDate;	// 16 = 0x10
    NSData *_sessionUUID;	// 24 = 0x18
    NSData *_sourceUUID;	// 32 = 0x20
    struct {
        unsigned int authorizationStatus:1;
        unsigned int modificationDate:1;
    } _has;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000047f37a
@property(retain, nonatomic) NSData *sessionUUID; // @synthesize sessionUUID=_sessionUUID;
@property(nonatomic) double modificationDate; // @synthesize modificationDate=_modificationDate;
@property(nonatomic) long long authorizationStatus; // @synthesize authorizationStatus=_authorizationStatus;
@property(retain, nonatomic) NSData *sourceUUID; // @synthesize sourceUUID=_sourceUUID;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000047f268
- (unsigned long long)hash;	// IMP=0x000000000047f0e8
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000047efc7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000047eee4
- (void)copyTo:(id)arg1;	// IMP=0x000000000047ee3f
- (void)writeTo:(id)arg1;	// IMP=0x000000000047ed91
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000047ed84
- (id)dictionaryRepresentation;	// IMP=0x000000000047e992
- (id)description;	// IMP=0x000000000047e8e3
@property(readonly, nonatomic) _Bool hasSessionUUID;
@property(nonatomic) _Bool hasModificationDate;
@property(nonatomic) _Bool hasAuthorizationStatus;
@property(readonly, nonatomic) _Bool hasSourceUUID;

@end
