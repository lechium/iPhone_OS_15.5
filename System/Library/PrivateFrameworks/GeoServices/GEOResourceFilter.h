//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBDataReader, PBUnknownFields;

@interface GEOResourceFilter : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    CDStruct_95bda58d _scales;	// 24 = 0x18
    CDStruct_95bda58d _scenarios;	// 48 = 0x30
    unsigned int _readerMarkPos;	// 72 = 0x48
    unsigned int _readerMarkLength;	// 76 = 0x4c
    struct os_unfair_lock_s _readerLock;	// 80 = 0x50
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_scales:1;
        unsigned int read_scenarios:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 84 = 0x54
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000006c4b7b
- (void).cxx_destruct;	// IMP=0x00000000006c53c4
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x00000000006c5373
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000006c5182
- (unsigned long long)hash;	// IMP=0x00000000006c513d
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000006c507c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000006c4f02
- (void)copyTo:(id)arg1;	// IMP=0x00000000006c4d73
- (void)writeTo:(id)arg1;	// IMP=0x00000000006c4b97
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000006c4b88
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000006c4a6f
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000006c4a62
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000006c44da
- (id)jsonRepresentation;	// IMP=0x00000000006c43c8
- (id)dictionaryRepresentation;	// IMP=0x00000000006c3fe2
- (id)description;	// IMP=0x00000000006c3f33
- (int)StringAsScenarios:(id)arg1;	// IMP=0x00000000006c3e68
- (id)scenariosAsString:(int)arg1;	// IMP=0x00000000006c3ddd
- (void)setScenarios:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000006c3dbb
- (int)scenarioAtIndex:(unsigned long long)arg1;	// IMP=0x00000000006c3ce5
- (void)addScenario:(int)arg1;	// IMP=0x00000000006c3cac
- (void)clearScenarios;	// IMP=0x00000000006c3c90
@property(readonly, nonatomic) int *scenarios;
@property(readonly, nonatomic) unsigned long long scenariosCount;
- (int)StringAsScales:(id)arg1;	// IMP=0x00000000006c3ac8
- (id)scalesAsString:(int)arg1;	// IMP=0x00000000006c3a4a
- (void)setScales:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000006c3a28
- (int)scaleAtIndex:(unsigned long long)arg1;	// IMP=0x00000000006c3952
- (void)addScale:(int)arg1;	// IMP=0x00000000006c3919
- (void)clearScales;	// IMP=0x00000000006c38fd
@property(readonly, nonatomic) int *scales;
@property(readonly, nonatomic) unsigned long long scalesCount;
- (void)dealloc;	// IMP=0x00000000006c2fb0
- (id)initWithData:(id)arg1;	// IMP=0x00000000006c2f54
- (id)init;	// IMP=0x00000000006c2ef8

@end
