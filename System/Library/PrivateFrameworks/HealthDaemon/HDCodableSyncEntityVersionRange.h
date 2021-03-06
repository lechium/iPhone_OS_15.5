//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class HDCodableEntityIdentifier, HDCodableSyncVersionRange;

@interface HDCodableSyncEntityVersionRange : PBCodable <NSCopying>
{
    HDCodableEntityIdentifier *_entityIdentifier;	// 8 = 0x8
    HDCodableSyncVersionRange *_versionRange;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000044a962
@property(retain, nonatomic) HDCodableSyncVersionRange *versionRange; // @synthesize versionRange=_versionRange;
@property(retain, nonatomic) HDCodableEntityIdentifier *entityIdentifier; // @synthesize entityIdentifier=_entityIdentifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000044a887
- (unsigned long long)hash;	// IMP=0x000000000044a83a
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000044a772
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000044a6d4
- (void)copyTo:(id)arg1;	// IMP=0x000000000044a671
- (void)writeTo:(id)arg1;	// IMP=0x000000000044a614
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000044a607
- (id)dictionaryRepresentation;	// IMP=0x000000000044a31f
- (id)description;	// IMP=0x000000000044a270
@property(readonly, nonatomic) _Bool hasVersionRange;
@property(readonly, nonatomic) _Bool hasEntityIdentifier;

@end

