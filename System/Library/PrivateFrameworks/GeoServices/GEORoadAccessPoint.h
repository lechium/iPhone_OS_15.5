//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng, PBUnknownFields;

@interface GEORoadAccessPoint : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    GEOLatLng *_location;	// 16 = 0x10
    int _cyclingDirection;	// 24 = 0x18
    int _drivingDirection;	// 28 = 0x1c
    unsigned int _significance;	// 32 = 0x20
    int _source;	// 36 = 0x24
    int _transitDirection;	// 40 = 0x28
    int _walkingDirection;	// 44 = 0x2c
    _Bool _isApproximate;	// 48 = 0x30
    struct {
        unsigned int has_cyclingDirection:1;
        unsigned int has_drivingDirection:1;
        unsigned int has_significance:1;
        unsigned int has_source:1;
        unsigned int has_transitDirection:1;
        unsigned int has_walkingDirection:1;
        unsigned int has_isApproximate:1;
    } _flags;	// 52 = 0x34
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000010ff232
- (void).cxx_destruct;	// IMP=0x00000000010fff37
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x00000000010ffed1
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000010ffd8c
- (unsigned long long)hash;	// IMP=0x00000000010ffc78
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000010ffa94
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000010ff942
- (void)copyTo:(id)arg1;	// IMP=0x00000000010ff829
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x00000000010ff80c
- (void)writeTo:(id)arg1;	// IMP=0x00000000010ff6c7
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000010ff6b8
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000010feb22
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000010feb10
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000010fe2ee
- (id)jsonRepresentation;	// IMP=0x00000000010fe1dc
- (id)dictionaryRepresentation;	// IMP=0x00000000010fdb92
- (id)description;	// IMP=0x00000000010fdae3
- (int)StringAsSource:(id)arg1;	// IMP=0x00000000010fda34
- (id)sourceAsString:(int)arg1;	// IMP=0x00000000010fd9b4
@property(nonatomic) _Bool hasSource;
@property(nonatomic) int source;
@property(nonatomic) _Bool hasSignificance;
@property(nonatomic) unsigned int significance;
- (int)StringAsWalkingDirection:(id)arg1;	// IMP=0x00000000010fd824
- (id)walkingDirectionAsString:(int)arg1;	// IMP=0x00000000010fd799
@property(nonatomic) _Bool hasWalkingDirection;
@property(nonatomic) int walkingDirection;
- (int)StringAsTransitDirection:(id)arg1;	// IMP=0x00000000010fd664
- (id)transitDirectionAsString:(int)arg1;	// IMP=0x00000000010fd5d9
@property(nonatomic) _Bool hasTransitDirection;
@property(nonatomic) int transitDirection;
- (int)StringAsDrivingDirection:(id)arg1;	// IMP=0x00000000010fd4a4
- (id)drivingDirectionAsString:(int)arg1;	// IMP=0x00000000010fd417
@property(nonatomic) _Bool hasDrivingDirection;
@property(nonatomic) int drivingDirection;
- (int)StringAsCyclingDirection:(id)arg1;	// IMP=0x00000000010fd2e4
- (id)cyclingDirectionAsString:(int)arg1;	// IMP=0x00000000010fd25a
@property(nonatomic) _Bool hasCyclingDirection;
@property(nonatomic) int cyclingDirection;
@property(nonatomic) _Bool hasIsApproximate;
@property(nonatomic) _Bool isApproximate;
@property(retain, nonatomic) GEOLatLng *location;
@property(readonly, nonatomic) _Bool hasLocation;

@end

