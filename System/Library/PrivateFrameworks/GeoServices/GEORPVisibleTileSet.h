//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEORPVisibleTileSet : PBCodable <NSCopying>
{
    struct GEORPVisibleTileKey *_tileKeys;	// 8 = 0x8
    unsigned long long _tileKeysCount;	// 16 = 0x10
    unsigned long long _tileKeysSpace;	// 24 = 0x18
    unsigned int _identifier;	// 32 = 0x20
    int _style;	// 36 = 0x24
    struct {
        unsigned int has_identifier:1;
        unsigned int has_style:1;
    } _flags;	// 40 = 0x28
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000e92503
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000e92985
- (unsigned long long)hash;	// IMP=0x0000000000e928f5
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000e927d8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000e92715
- (void)copyTo:(id)arg1;	// IMP=0x0000000000e92611
- (void)writeTo:(id)arg1;	// IMP=0x0000000000e9251f
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000e92510
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000e921bb
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000e921a9
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000e91247
- (id)jsonRepresentation;	// IMP=0x0000000000e91238
- (id)dictionaryRepresentation;	// IMP=0x0000000000e90b6f
- (id)description;	// IMP=0x0000000000e90ac0
- (void)setTileKeys:(struct GEORPVisibleTileKey *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000e90a61
- (struct GEORPVisibleTileKey)tileKeyAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000e90988
- (void)addTileKey:(struct GEORPVisibleTileKey)arg1;	// IMP=0x0000000000e90935
- (void)clearTileKeys;	// IMP=0x0000000000e908f0
@property(readonly, nonatomic) struct GEORPVisibleTileKey *tileKeys;
@property(readonly, nonatomic) unsigned long long tileKeysCount;
@property(nonatomic) _Bool hasIdentifier;
@property(nonatomic) unsigned int identifier;
- (int)StringAsStyle:(id)arg1;	// IMP=0x0000000000e8fda4
- (id)styleAsString:(int)arg1;	// IMP=0x0000000000e8f8b3
@property(nonatomic) _Bool hasStyle;
@property(nonatomic) int style;
- (void)dealloc;	// IMP=0x0000000000e8f80d

@end
