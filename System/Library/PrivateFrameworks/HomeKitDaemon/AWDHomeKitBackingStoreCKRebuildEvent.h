//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@interface AWDHomeKitBackingStoreCKRebuildEvent : PBCodable <NSCopying>
{
    unsigned long long _timestamp;	// 8 = 0x8
    int _containerType;	// 16 = 0x10
    int _rebuildStatus;	// 20 = 0x14
    int _zoneType;	// 24 = 0x18
    struct {
        unsigned int timestamp:1;
        unsigned int containerType:1;
        unsigned int rebuildStatus:1;
        unsigned int zoneType:1;
    } _has;	// 28 = 0x1c
}

@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000009c88d2
- (unsigned long long)hash;	// IMP=0x00000000009c8853
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000009c875c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000009c86ab
- (void)copyTo:(id)arg1;	// IMP=0x00000000009c861d
- (void)writeTo:(id)arg1;	// IMP=0x00000000009c856d
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000009c8560
- (id)dictionaryRepresentation;	// IMP=0x00000000009c826e
- (id)description;	// IMP=0x00000000009c81bf
- (int)StringAsZoneType:(id)arg1;	// IMP=0x00000000009c80d0
- (id)zoneTypeAsString:(int)arg1;	// IMP=0x00000000009c8039
@property(nonatomic) _Bool hasZoneType;
@property(nonatomic) int zoneType; // @synthesize zoneType=_zoneType;
- (int)StringAsContainerType:(id)arg1;	// IMP=0x00000000009c7f20
- (id)containerTypeAsString:(int)arg1;	// IMP=0x00000000009c7ea0
@property(nonatomic) _Bool hasContainerType;
@property(nonatomic) int containerType; // @synthesize containerType=_containerType;
- (int)StringAsRebuildStatus:(id)arg1;	// IMP=0x00000000009c7d00
- (id)rebuildStatusAsString:(int)arg1;	// IMP=0x00000000009c7c4d
@property(nonatomic) _Bool hasRebuildStatus;
@property(nonatomic) int rebuildStatus; // @synthesize rebuildStatus=_rebuildStatus;
@property(nonatomic) _Bool hasTimestamp;

@end

