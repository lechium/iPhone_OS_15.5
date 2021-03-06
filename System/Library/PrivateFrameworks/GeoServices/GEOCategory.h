//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOCategory : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSString *_alias;	// 24 = 0x18
    long long _geoOntologyId;	// 32 = 0x20
    NSMutableArray *_localizedNames;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    int _level;	// 60 = 0x3c
    struct {
        unsigned int has_geoOntologyId:1;
        unsigned int read_unknownFields:1;
        unsigned int read_alias:1;
        unsigned int read_localizedNames:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 64 = 0x40
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000eac02d
+ (Class)localizedNamesType;	// IMP=0x0000000000eab331
- (void).cxx_destruct;	// IMP=0x0000000000ead0a9
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000eacf32
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000eacc84
- (unsigned long long)hash;	// IMP=0x0000000000eacbee
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000eacabb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000eac762
- (void)copyTo:(id)arg1;	// IMP=0x0000000000eac5e8
- (void)writeTo:(id)arg1;	// IMP=0x0000000000eac2d3
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000eac2c4
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000eabd7a
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000eabd68
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000eab999
- (id)jsonRepresentation;	// IMP=0x0000000000eab887
- (id)dictionaryRepresentation;	// IMP=0x0000000000eab3f1
- (id)description;	// IMP=0x0000000000eab342
- (id)localizedNamesAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000eab300
- (unsigned long long)localizedNamesCount;	// IMP=0x0000000000eab2d4
- (void)addLocalizedNames:(id)arg1;	// IMP=0x0000000000eab220
- (void)clearLocalizedNames;	// IMP=0x0000000000eab1f8
@property(retain, nonatomic) NSMutableArray *localizedNames;
@property(nonatomic) _Bool hasGeoOntologyId;
@property(nonatomic) long long geoOntologyId;
@property(nonatomic) int level;
@property(retain, nonatomic) NSString *alias;
- (id)initWithData:(id)arg1;	// IMP=0x0000000000eaa594
- (id)init;	// IMP=0x0000000000eaa538
- (id)initWithPlaceDataCategory:(id)arg1;	// IMP=0x00000000009f3359

@end

