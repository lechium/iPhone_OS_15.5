//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEOArrivalParameters : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSMutableArray *_arrivalMapRegions;	// 24 = 0x18
    NSMutableArray *_arrivalPoints;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    unsigned int _arrivalParametersEndOfRouteDistanceThreshold;	// 52 = 0x34
    unsigned int _endOfRouteDistanceThreshold;	// 56 = 0x38
    struct {
        unsigned int has_arrivalParametersEndOfRouteDistanceThreshold:1;
        unsigned int has_endOfRouteDistanceThreshold:1;
        unsigned int read_unknownFields:1;
        unsigned int read_arrivalMapRegions:1;
        unsigned int read_arrivalPoints:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 60 = 0x3c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000085c576
+ (Class)arrivalMapRegionsType;	// IMP=0x000000000085ad85
+ (Class)arrivalPointsType;	// IMP=0x000000000085ab20
- (void).cxx_destruct;	// IMP=0x000000000085e200
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x000000000085dfb2
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000085dc21
- (unsigned long long)hash;	// IMP=0x000000000085db63
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000085da0a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000085d58b
- (void)copyTo:(id)arg1;	// IMP=0x000000000085d384
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x000000000085d10f
- (void)writeTo:(id)arg1;	// IMP=0x000000000085cd30
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000085cd21
- (void)readAll:(_Bool)arg1;	// IMP=0x000000000085bbb7
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000085bba5
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000085b633
- (id)jsonRepresentation;	// IMP=0x000000000085b521
- (id)dictionaryRepresentation;	// IMP=0x000000000085ae9d
- (id)description;	// IMP=0x000000000085adee
@property(nonatomic) _Bool hasArrivalParametersEndOfRouteDistanceThreshold;
@property(nonatomic) unsigned int arrivalParametersEndOfRouteDistanceThreshold;
- (id)arrivalMapRegionsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000085ad54
- (unsigned long long)arrivalMapRegionsCount;	// IMP=0x000000000085ad28
- (void)addArrivalMapRegions:(id)arg1;	// IMP=0x000000000085ac74
- (void)clearArrivalMapRegions;	// IMP=0x000000000085ac4c
@property(retain, nonatomic) NSMutableArray *arrivalMapRegions;
- (id)arrivalPointsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000085aaef
- (unsigned long long)arrivalPointsCount;	// IMP=0x000000000085aac3
- (void)addArrivalPoints:(id)arg1;	// IMP=0x000000000085aa0f
- (void)clearArrivalPoints;	// IMP=0x000000000085a9e7
@property(retain, nonatomic) NSMutableArray *arrivalPoints;
@property(nonatomic) _Bool hasEndOfRouteDistanceThreshold;
@property(nonatomic) unsigned int endOfRouteDistanceThreshold;
- (id)initWithData:(id)arg1;	// IMP=0x0000000000859d30
- (id)init;	// IMP=0x0000000000859cd4

@end
