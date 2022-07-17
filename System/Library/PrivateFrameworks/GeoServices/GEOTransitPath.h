//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields;

@interface GEOTransitPath : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_legs;	// 16 = 0x10
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000003b7822
+ (Class)legType;	// IMP=0x00000000003b6d3e
- (void).cxx_destruct;	// IMP=0x00000000003b8213
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x00000000003b80a7
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000003b7f26
- (unsigned long long)hash;	// IMP=0x00000000003b7eeb
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003b7e28
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003b7c42
- (void)copyTo:(id)arg1;	// IMP=0x00000000003b7b6f
- (void)writeTo:(id)arg1;	// IMP=0x00000000003b7a10
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000003b7a01
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000003b7547
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000003b7535
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000003b72b2
- (id)jsonRepresentation;	// IMP=0x00000000003b71a0
- (id)dictionaryRepresentation;	// IMP=0x00000000003b6dfe
- (id)description;	// IMP=0x00000000003b6d4f
- (id)legAtIndex:(unsigned long long)arg1;	// IMP=0x00000000003b6d21
- (unsigned long long)legsCount;	// IMP=0x00000000003b6d04
- (void)addLeg:(id)arg1;	// IMP=0x00000000003b6c9a
- (void)clearLegs;	// IMP=0x00000000003b6c7d
@property(retain, nonatomic) NSMutableArray *legs;

@end
