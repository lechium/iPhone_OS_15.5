//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBDataReader;

@interface GEORPFeedbackRouteStep : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    NSString *_routeStepImageId;	// 16 = 0x10
    NSString *_userPhotoId;	// 24 = 0x18
    unsigned int _readerMarkPos;	// 32 = 0x20
    unsigned int _readerMarkLength;	// 36 = 0x24
    struct os_unfair_lock_s _readerLock;	// 40 = 0x28
    int _directionsResponseWaypointIndex;	// 44 = 0x2c
    int _routeLegIndex;	// 48 = 0x30
    unsigned int _stepId;	// 52 = 0x34
    struct {
        unsigned int has_directionsResponseWaypointIndex:1;
        unsigned int has_routeLegIndex:1;
        unsigned int has_stepId:1;
        unsigned int read_routeStepImageId:1;
        unsigned int read_userPhotoId:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 56 = 0x38
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000e0783c
- (void).cxx_destruct;	// IMP=0x0000000000e080ab
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000e07fde
- (unsigned long long)hash;	// IMP=0x0000000000e07f14
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000e07da5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000e07b7f
- (void)copyTo:(id)arg1;	// IMP=0x0000000000e07a53
- (void)writeTo:(id)arg1;	// IMP=0x0000000000e07858
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000e07849
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000e07730
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000e0771e
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000e0742c
- (id)jsonRepresentation;	// IMP=0x0000000000e0741d
- (id)dictionaryRepresentation;	// IMP=0x0000000000e071d9
- (id)description;	// IMP=0x0000000000e0712a
@property(retain, nonatomic) NSString *userPhotoId;
@property(readonly, nonatomic) _Bool hasUserPhotoId;
@property(retain, nonatomic) NSString *routeStepImageId;
@property(readonly, nonatomic) _Bool hasRouteStepImageId;
@property(nonatomic) _Bool hasStepId;
@property(nonatomic) unsigned int stepId;
@property(nonatomic) _Bool hasRouteLegIndex;
@property(nonatomic) int routeLegIndex;
@property(nonatomic) _Bool hasDirectionsResponseWaypointIndex;
@property(nonatomic) int directionsResponseWaypointIndex;
- (id)initWithData:(id)arg1;	// IMP=0x0000000000e06724
- (id)init;	// IMP=0x0000000000e066c8

@end

