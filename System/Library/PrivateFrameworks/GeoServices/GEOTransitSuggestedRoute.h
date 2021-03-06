//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/GEOCompanionCompatibility-Protocol.h>
#import <GeoServices/NSCopying-Protocol.h>

@class GEOAdvisoriesInfo, GEOPBTransitRoutingIncidentMessage, GEOTransitEngineDebugData, GEOTransitRouteDisplayStrings, NSData, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOTransitSuggestedRoute : PBCodable <GEOCompanionCompatibility, NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    CDStruct_95bda58d _routeBadges;	// 24 = 0x18
    GEOAdvisoriesInfo *_advisoriesInfo;	// 48 = 0x30
    GEOTransitRouteDisplayStrings *_displayStrings;	// 56 = 0x38
    GEOTransitEngineDebugData *_engineDebugData;	// 64 = 0x40
    NSData *_routeHandle;	// 72 = 0x48
    NSMutableArray *_routePlanningArtworks;	// 80 = 0x50
    NSMutableArray *_sectionOptions;	// 88 = 0x58
    NSMutableArray *_sections;	// 96 = 0x60
    NSMutableArray *_steps;	// 104 = 0x68
    GEOPBTransitRoutingIncidentMessage *_transitIncidentMessage;	// 112 = 0x70
    unsigned int _readerMarkPos;	// 120 = 0x78
    unsigned int _readerMarkLength;	// 124 = 0x7c
    struct os_unfair_lock_s _readerLock;	// 128 = 0x80
    unsigned int _absEndTime;	// 132 = 0x84
    unsigned int _absStartTime;	// 136 = 0x88
    unsigned int _rank;	// 140 = 0x8c
    unsigned int _travelTimeAggressiveEstimate;	// 144 = 0x90
    unsigned int _travelTimeConservativeEstimate;	// 148 = 0x94
    _Bool _supportsRouteUpdates;	// 152 = 0x98
    struct {
        unsigned int has_absEndTime:1;
        unsigned int has_absStartTime:1;
        unsigned int has_rank:1;
        unsigned int has_travelTimeAggressiveEstimate:1;
        unsigned int has_travelTimeConservativeEstimate:1;
        unsigned int has_supportsRouteUpdates:1;
        unsigned int read_unknownFields:1;
        unsigned int read_routeBadges:1;
        unsigned int read_advisoriesInfo:1;
        unsigned int read_displayStrings:1;
        unsigned int read_engineDebugData:1;
        unsigned int read_routeHandle:1;
        unsigned int read_routePlanningArtworks:1;
        unsigned int read_sectionOptions:1;
        unsigned int read_sections:1;
        unsigned int read_steps:1;
        unsigned int read_transitIncidentMessage:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 156 = 0x9c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000003e0e8e
+ (Class)sectionType;	// IMP=0x00000000003de68a
+ (Class)sectionOptionType;	// IMP=0x00000000003de41a
+ (Class)routePlanningArtworkType;	// IMP=0x00000000003ddc9f
+ (Class)stepsType;	// IMP=0x00000000003dd601
- (void).cxx_destruct;	// IMP=0x00000000003e3fcb
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x00000000003e3b5b
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000003e3406
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003e2e4f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003e25f0
- (void)copyTo:(id)arg1;	// IMP=0x00000000003e2124
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x00000000003e1fd3
- (void)writeTo:(id)arg1;	// IMP=0x00000000003e155f
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000003e1550
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000003e0bdb
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000003e0bc9
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000003dfb16
- (id)jsonRepresentation;	// IMP=0x00000000003dfa04
- (id)dictionaryRepresentation;	// IMP=0x00000000003de9be
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool hasSupportsRouteUpdates;
@property(nonatomic) _Bool supportsRouteUpdates;
@property(retain, nonatomic) GEOTransitEngineDebugData *engineDebugData;
@property(readonly, nonatomic) _Bool hasEngineDebugData;
@property(nonatomic) _Bool hasTravelTimeConservativeEstimate;
@property(nonatomic) unsigned int travelTimeConservativeEstimate;
@property(nonatomic) _Bool hasTravelTimeAggressiveEstimate;
@property(nonatomic) unsigned int travelTimeAggressiveEstimate;
- (id)sectionAtIndex:(unsigned long long)arg1;	// IMP=0x00000000003de659
- (unsigned long long)sectionsCount;	// IMP=0x00000000003de62d
- (void)addSection:(id)arg1;	// IMP=0x00000000003de576
- (void)clearSections;	// IMP=0x00000000003de54b
@property(retain, nonatomic) NSMutableArray *sections;
- (id)sectionOptionAtIndex:(unsigned long long)arg1;	// IMP=0x00000000003de3e9
- (unsigned long long)sectionOptionsCount;	// IMP=0x00000000003de3bd
- (void)addSectionOption:(id)arg1;	// IMP=0x00000000003de306
- (void)clearSectionOptions;	// IMP=0x00000000003de2db
@property(retain, nonatomic) NSMutableArray *sectionOptions;
- (int)StringAsRouteBadges:(id)arg1;	// IMP=0x00000000003de0f0
- (id)routeBadgesAsString:(int)arg1;	// IMP=0x00000000003de063
- (void)setRouteBadges:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000003de03e
- (int)routeBadgeAtIndex:(unsigned long long)arg1;	// IMP=0x00000000003ddf68
- (void)addRouteBadge:(int)arg1;	// IMP=0x00000000003ddf2c
- (void)clearRouteBadges;	// IMP=0x00000000003ddf0d
@property(readonly, nonatomic) int *routeBadges;
@property(readonly, nonatomic) unsigned long long routeBadgesCount;
@property(retain, nonatomic) GEOTransitRouteDisplayStrings *displayStrings;
@property(readonly, nonatomic) _Bool hasDisplayStrings;
- (id)routePlanningArtworkAtIndex:(unsigned long long)arg1;	// IMP=0x00000000003ddc6e
- (unsigned long long)routePlanningArtworksCount;	// IMP=0x00000000003ddc42
- (void)addRoutePlanningArtwork:(id)arg1;	// IMP=0x00000000003ddb8b
- (void)clearRoutePlanningArtworks;	// IMP=0x00000000003ddb60
@property(retain, nonatomic) NSMutableArray *routePlanningArtworks;
@property(retain, nonatomic) GEOAdvisoriesInfo *advisoriesInfo;
@property(readonly, nonatomic) _Bool hasAdvisoriesInfo;
@property(retain, nonatomic) GEOPBTransitRoutingIncidentMessage *transitIncidentMessage;
@property(readonly, nonatomic) _Bool hasTransitIncidentMessage;
@property(nonatomic) _Bool hasRank;
@property(nonatomic) unsigned int rank;
@property(retain, nonatomic) NSData *routeHandle;
@property(readonly, nonatomic) _Bool hasRouteHandle;
- (id)stepsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000003dd5d0
- (unsigned long long)stepsCount;	// IMP=0x00000000003dd5a4
- (void)addSteps:(id)arg1;	// IMP=0x00000000003dd4ed
- (void)clearSteps;	// IMP=0x00000000003dd4c2
@property(retain, nonatomic) NSMutableArray *steps;
@property(nonatomic) _Bool hasAbsEndTime;
@property(nonatomic) unsigned int absEndTime;
@property(nonatomic) _Bool hasAbsStartTime;
@property(nonatomic) unsigned int absStartTime;
- (void)dealloc;	// IMP=0x00000000003db8e5
- (id)initWithData:(id)arg1;	// IMP=0x00000000003db889
- (id)init;	// IMP=0x00000000003db82d
- (id)instanceCompatibleWithProtocolVersion:(unsigned long long)arg1;	// IMP=0x0000000000cf4157
- (id)nextOptionForOption:(id)arg1 withRideIndex:(unsigned long long)arg2;	// IMP=0x00000000010878ec
@property(readonly, nonatomic, getter=isWalkingOnlyRoute) _Bool walkingOnlyRoute;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

