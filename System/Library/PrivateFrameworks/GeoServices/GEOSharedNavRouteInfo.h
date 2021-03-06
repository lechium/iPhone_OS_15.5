//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEOSharedNavRouteInfo : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    CDStruct_82f37d05 _coordinates;	// 24 = 0x18
    CDStruct_9f2792e4 _trafficColorOffsets;	// 48 = 0x30
    CDStruct_9f2792e4 _trafficColors;	// 72 = 0x48
    NSMutableArray *_chargingStations;	// 96 = 0x60
    NSMutableArray *_routingPathLegs;	// 104 = 0x68
    unsigned int _readerMarkPos;	// 112 = 0x70
    unsigned int _readerMarkLength;	// 116 = 0x74
    struct os_unfair_lock_s _readerLock;	// 120 = 0x78
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_coordinates:1;
        unsigned int read_trafficColorOffsets:1;
        unsigned int read_trafficColors:1;
        unsigned int read_chargingStations:1;
        unsigned int read_routingPathLegs:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 124 = 0x7c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000f97a40
+ (Class)routingPathLegType;	// IMP=0x0000000000f965e6
+ (Class)chargingStationsType;	// IMP=0x0000000000f96381
- (void).cxx_destruct;	// IMP=0x0000000000f9930e
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000f99197
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000f98d34
- (unsigned long long)hash;	// IMP=0x0000000000f98c90
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000f98b53
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000f986f0
- (void)copyTo:(id)arg1;	// IMP=0x0000000000f983ba
- (void)writeTo:(id)arg1;	// IMP=0x0000000000f97f6b
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000f97f5c
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000f9778d
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000f9777b
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000f96e6e
- (id)jsonRepresentation;	// IMP=0x0000000000f96d5c
- (id)dictionaryRepresentation;	// IMP=0x0000000000f966a6
- (id)description;	// IMP=0x0000000000f965f7
- (id)routingPathLegAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000f965b5
- (unsigned long long)routingPathLegsCount;	// IMP=0x0000000000f96589
- (void)addRoutingPathLeg:(id)arg1;	// IMP=0x0000000000f964d5
- (void)clearRoutingPathLegs;	// IMP=0x0000000000f964ad
@property(retain, nonatomic) NSMutableArray *routingPathLegs;
- (id)chargingStationsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000f96350
- (unsigned long long)chargingStationsCount;	// IMP=0x0000000000f96324
- (void)addChargingStations:(id)arg1;	// IMP=0x0000000000f96270
- (void)clearChargingStations;	// IMP=0x0000000000f96248
@property(retain, nonatomic) NSMutableArray *chargingStations;
- (void)setTrafficColorOffsets:(unsigned int *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000f9610b
- (unsigned int)trafficColorOffsetAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000f96035
- (void)addTrafficColorOffset:(unsigned int)arg1;	// IMP=0x0000000000f95ffc
- (void)clearTrafficColorOffsets;	// IMP=0x0000000000f95fe0
@property(readonly, nonatomic) unsigned int *trafficColorOffsets;
@property(readonly, nonatomic) unsigned long long trafficColorOffsetsCount;
- (void)setTrafficColors:(unsigned int *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000f95ea5
- (unsigned int)trafficColorAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000f95dcf
- (void)addTrafficColor:(unsigned int)arg1;	// IMP=0x0000000000f95d96
- (void)clearTrafficColors;	// IMP=0x0000000000f95d7a
@property(readonly, nonatomic) unsigned int *trafficColors;
@property(readonly, nonatomic) unsigned long long trafficColorsCount;
- (void)setCoordinates:(double *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000f95c3f
- (double)coordinatesAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000f95b67
- (void)addCoordinates:(double)arg1;	// IMP=0x0000000000f95b29
- (void)clearCoordinates;	// IMP=0x0000000000f95b0d
@property(readonly, nonatomic) double *coordinates;
@property(readonly, nonatomic) unsigned long long coordinatesCount;
- (void)dealloc;	// IMP=0x0000000000f94c64
- (id)initWithData:(id)arg1;	// IMP=0x0000000000f94c08
- (id)init;	// IMP=0x0000000000f94bac

@end

