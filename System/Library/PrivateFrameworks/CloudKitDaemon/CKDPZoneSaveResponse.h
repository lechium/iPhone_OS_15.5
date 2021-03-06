//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPDate, CKDPZoneCapabilities;

@interface CKDPZoneSaveResponse : PBCodable <NSCopying>
{
    CKDPZoneCapabilities *_capabilities;	// 8 = 0x8
    CKDPDate *_expirationTime;	// 16 = 0x10
    _Bool _expired;	// 24 = 0x18
    struct {
        unsigned int expired:1;
    } _has;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x000000000032a35a
@property(retain, nonatomic) CKDPDate *expirationTime; // @synthesize expirationTime=_expirationTime;
@property(nonatomic) _Bool expired; // @synthesize expired=_expired;
@property(retain, nonatomic) CKDPZoneCapabilities *capabilities; // @synthesize capabilities=_capabilities;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000032a24f
- (unsigned long long)hash;	// IMP=0x000000000032a1db
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000032a0db
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000032a01a
- (void)copyTo:(id)arg1;	// IMP=0x0000000000329f97
- (void)writeTo:(id)arg1;	// IMP=0x0000000000329f15
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000329f08
- (id)dictionaryRepresentation;	// IMP=0x0000000000329b29
- (id)description;	// IMP=0x0000000000329a7a
@property(readonly, nonatomic) _Bool hasExpirationTime;
@property(nonatomic) _Bool hasExpired;
@property(readonly, nonatomic) _Bool hasCapabilities;

@end

