//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOCacheHit : PBCodable <NSCopying>
{
    unsigned int _bytes;	// 8 = 0x8
    unsigned int _count;	// 12 = 0xc
    int _requestorType;	// 16 = 0x10
    int _tileSourceType;	// 20 = 0x14
    struct {
        unsigned int has_bytes:1;
        unsigned int has_count:1;
        unsigned int has_requestorType:1;
        unsigned int has_tileSourceType:1;
    } _flags;	// 24 = 0x18
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000134a532
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000134abf0
- (unsigned long long)hash;	// IMP=0x000000000134ab58
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000134aa29
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000134a97a
- (void)copyTo:(id)arg1;	// IMP=0x000000000134a8d2
- (void)writeTo:(id)arg1;	// IMP=0x000000000134a823
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000134a814
- (void)readAll:(_Bool)arg1;	// IMP=0x000000000134a0c8
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000134a0b6
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000001349c1f
- (id)jsonRepresentation;	// IMP=0x0000000001349c10
- (id)dictionaryRepresentation;	// IMP=0x0000000001349914
- (id)description;	// IMP=0x0000000001349865
@property(nonatomic) _Bool hasBytes;
@property(nonatomic) unsigned int bytes;
@property(nonatomic) _Bool hasCount;
@property(nonatomic) unsigned int count;
- (int)StringAsTileSourceType:(id)arg1;	// IMP=0x00000000013496a0
- (id)tileSourceTypeAsString:(int)arg1;	// IMP=0x00000000013495f9
@property(nonatomic) _Bool hasTileSourceType;
@property(nonatomic) int tileSourceType;
- (int)StringAsRequestorType:(id)arg1;	// IMP=0x0000000001349478
- (id)requestorTypeAsString:(int)arg1;	// IMP=0x00000000013493d1
@property(nonatomic) _Bool hasRequestorType;
@property(nonatomic) int requestorType;

@end

