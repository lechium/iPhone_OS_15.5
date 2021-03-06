//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOEVChargeInfo, GEOEVStateInfo, GEOEVStepInfo, GEOInstructionSet, GEONameInfo, GEOPBTransitArtwork, GEOStopWaypoint, GEOTimeCheckpoints, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOStep : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    struct GEOJunctionElement *_junctionElements;	// 24 = 0x18
    unsigned long long _junctionElementsCount;	// 32 = 0x20
    unsigned long long _junctionElementsSpace;	// 40 = 0x28
    GEOPBTransitArtwork *_artworkOverride;	// 48 = 0x30
    GEOEVChargeInfo *_chargingInfo;	// 56 = 0x38
    GEOEVStepInfo *_evInfo;	// 64 = 0x40
    GEOEVStateInfo *_evStateInfo;	// 72 = 0x48
    GEONameInfo *_exitNumber;	// 80 = 0x50
    NSMutableArray *_guidanceEvents;	// 88 = 0x58
    GEOInstructionSet *_instructionSet;	// 96 = 0x60
    NSString *_instructions;	// 104 = 0x68
    NSMutableArray *_maneuverNames;	// 112 = 0x70
    NSString *_notice;	// 120 = 0x78
    NSMutableArray *_roadDescriptions;	// 128 = 0x80
    NSMutableArray *_signposts;	// 136 = 0x88
    GEOStopWaypoint *_stopWaypoint;	// 144 = 0x90
    GEOTimeCheckpoints *_timeCheckpoints;	// 152 = 0x98
    unsigned int _readerMarkPos;	// 160 = 0xa0
    unsigned int _readerMarkLength;	// 164 = 0xa4
    struct os_unfair_lock_s _readerLock;	// 168 = 0xa8
    unsigned int _arrivalParameterIndex;	// 172 = 0xac
    unsigned int _distanceCm;	// 176 = 0xb0
    float _distanceMeters;	// 180 = 0xb4
    unsigned int _distance;	// 184 = 0xb8
    unsigned int _expectedTime;	// 188 = 0xbc
    int _hintFirstAnnouncementZilchIndex;	// 192 = 0xc0
    int _junctionType;	// 196 = 0xc4
    int _maneuverEndBasicIndex;	// 200 = 0xc8
    int _maneuverEndZilchIndex;	// 204 = 0xcc
    int _maneuverStartZilchIndex;	// 208 = 0xd0
    int _maneuverType;	// 212 = 0xd4
    unsigned int _maneuverStartPointOffsetCm;	// 216 = 0xd8
    int _overrideDrivingSide;	// 220 = 0xdc
    int _overrideTransportType;	// 224 = 0xe0
    unsigned int _stepID;	// 228 = 0xe4
    unsigned int _zilchPathIndex;	// 232 = 0xe8
    _Bool _endsOnFwy;	// 236 = 0xec
    _Bool _maneuverLaneGuidanceSuppressed;	// 237 = 0xed
    _Bool _shouldChainManeuver;	// 238 = 0xee
    _Bool _stayOn;	// 239 = 0xef
    _Bool _toFreeway;	// 240 = 0xf0
    _Bool _tollAhead;	// 241 = 0xf1
    _Bool _tollPrior;	// 242 = 0xf2
    struct {
        unsigned int has_arrivalParameterIndex:1;
        unsigned int has_distanceCm:1;
        unsigned int has_distanceMeters:1;
        unsigned int has_distance:1;
        unsigned int has_expectedTime:1;
        unsigned int has_hintFirstAnnouncementZilchIndex:1;
        unsigned int has_junctionType:1;
        unsigned int has_maneuverEndBasicIndex:1;
        unsigned int has_maneuverEndZilchIndex:1;
        unsigned int has_maneuverStartZilchIndex:1;
        unsigned int has_maneuverType:1;
        unsigned int has_maneuverStartPointOffsetCm:1;
        unsigned int has_overrideDrivingSide:1;
        unsigned int has_overrideTransportType:1;
        unsigned int has_stepID:1;
        unsigned int has_zilchPathIndex:1;
        unsigned int has_endsOnFwy:1;
        unsigned int has_maneuverLaneGuidanceSuppressed:1;
        unsigned int has_shouldChainManeuver:1;
        unsigned int has_stayOn:1;
        unsigned int has_toFreeway:1;
        unsigned int has_tollAhead:1;
        unsigned int has_tollPrior:1;
        unsigned int read_unknownFields:1;
        unsigned int read_junctionElements:1;
        unsigned int read_artworkOverride:1;
        unsigned int read_chargingInfo:1;
        unsigned int read_evInfo:1;
        unsigned int read_evStateInfo:1;
        unsigned int read_exitNumber:1;
        unsigned int read_guidanceEvents:1;
        unsigned int read_instructionSet:1;
        unsigned int read_instructions:1;
        unsigned int read_maneuverNames:1;
        unsigned int read_notice:1;
        unsigned int read_roadDescriptions:1;
        unsigned int read_signposts:1;
        unsigned int read_stopWaypoint:1;
        unsigned int read_timeCheckpoints:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 244 = 0xf4
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000009513fe
+ (Class)roadDescriptionType;	// IMP=0x000000000094c978
+ (Class)guidanceEventType;	// IMP=0x000000000094be6f
+ (Class)signpostType;	// IMP=0x000000000094aef9
+ (Class)maneuverNameType;	// IMP=0x000000000094a707
- (void).cxx_destruct;	// IMP=0x0000000000955602
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x000000000095512d
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000009546b9
- (unsigned long long)hash;	// IMP=0x0000000000954022
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000009537a9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000952c28
- (void)copyTo:(id)arg1;	// IMP=0x00000000009524d5
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x00000000009524a4
- (void)writeTo:(id)arg1;	// IMP=0x0000000000951a83
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000951a74
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000950fa4
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000950f92
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000094eb96
- (id)jsonRepresentation;	// IMP=0x000000000094ea84
- (id)dictionaryRepresentation;	// IMP=0x000000000094cc3f
- (id)description;	// IMP=0x000000000094cb90
@property(nonatomic) _Bool hasManeuverStartPointOffsetCm;
@property(nonatomic) unsigned int maneuverStartPointOffsetCm;
@property(nonatomic) _Bool hasDistanceCm;
@property(nonatomic) unsigned int distanceCm;
@property(nonatomic) _Bool hasDistanceMeters;
@property(nonatomic) float distanceMeters;
@property(nonatomic) _Bool hasDistance;
@property(nonatomic) unsigned int distance;
- (id)roadDescriptionAtIndex:(unsigned long long)arg1;	// IMP=0x000000000094c947
- (unsigned long long)roadDescriptionsCount;	// IMP=0x000000000094c91b
- (void)addRoadDescription:(id)arg1;	// IMP=0x000000000094c866
- (void)clearRoadDescriptions;	// IMP=0x000000000094c83d
@property(retain, nonatomic) NSMutableArray *roadDescriptions;
@property(nonatomic) _Bool hasZilchPathIndex;
@property(nonatomic) unsigned int zilchPathIndex;
@property(retain, nonatomic) GEOStopWaypoint *stopWaypoint;
@property(readonly, nonatomic) _Bool hasStopWaypoint;
@property(retain, nonatomic) GEOPBTransitArtwork *artworkOverride;
@property(readonly, nonatomic) _Bool hasArtworkOverride;
@property(nonatomic) _Bool hasArrivalParameterIndex;
@property(nonatomic) unsigned int arrivalParameterIndex;
@property(retain, nonatomic) GEOEVChargeInfo *chargingInfo;
@property(readonly, nonatomic) _Bool hasChargingInfo;
@property(retain, nonatomic) GEOEVStepInfo *evInfo;
@property(readonly, nonatomic) _Bool hasEvInfo;
@property(retain, nonatomic) GEOEVStateInfo *evStateInfo;
@property(readonly, nonatomic) _Bool hasEvStateInfo;
@property(nonatomic) _Bool hasManeuverLaneGuidanceSuppressed;
@property(nonatomic) _Bool maneuverLaneGuidanceSuppressed;
@property(nonatomic) _Bool hasStayOn;
@property(nonatomic) _Bool stayOn;
- (id)guidanceEventAtIndex:(unsigned long long)arg1;	// IMP=0x000000000094be3e
- (unsigned long long)guidanceEventsCount;	// IMP=0x000000000094be12
- (void)addGuidanceEvent:(id)arg1;	// IMP=0x000000000094bd54
- (void)clearGuidanceEvents;	// IMP=0x000000000094bd22
@property(retain, nonatomic) NSMutableArray *guidanceEvents;
@property(nonatomic) _Bool hasShouldChainManeuver;
@property(nonatomic) _Bool shouldChainManeuver;
@property(retain, nonatomic) GEOInstructionSet *instructionSet;
@property(readonly, nonatomic) _Bool hasInstructionSet;
@property(retain, nonatomic) GEOTimeCheckpoints *timeCheckpoints;
@property(readonly, nonatomic) _Bool hasTimeCheckpoints;
@property(retain, nonatomic) NSString *notice;
@property(readonly, nonatomic) _Bool hasNotice;
@property(retain, nonatomic) NSString *instructions;
@property(readonly, nonatomic) _Bool hasInstructions;
@property(nonatomic) _Bool hasToFreeway;
@property(nonatomic) _Bool toFreeway;
@property(nonatomic) _Bool hasEndsOnFwy;
@property(nonatomic) _Bool endsOnFwy;
@property(nonatomic) _Bool hasTollAhead;
@property(nonatomic) _Bool tollAhead;
@property(nonatomic) _Bool hasTollPrior;
@property(nonatomic) _Bool tollPrior;
@property(retain, nonatomic) GEONameInfo *exitNumber;
@property(readonly, nonatomic) _Bool hasExitNumber;
- (int)StringAsOverrideDrivingSide:(id)arg1;	// IMP=0x000000000094b244
- (id)overrideDrivingSideAsString:(int)arg1;	// IMP=0x000000000094b1ef
@property(nonatomic) _Bool hasOverrideDrivingSide;
@property(nonatomic) int overrideDrivingSide;
- (int)StringAsOverrideTransportType:(id)arg1;	// IMP=0x000000000094b044
- (id)overrideTransportTypeAsString:(int)arg1;	// IMP=0x000000000094af9e
@property(nonatomic) _Bool hasOverrideTransportType;
@property(nonatomic) int overrideTransportType;
- (id)signpostAtIndex:(unsigned long long)arg1;	// IMP=0x000000000094aec8
- (unsigned long long)signpostsCount;	// IMP=0x000000000094ae9c
- (void)addSignpost:(id)arg1;	// IMP=0x000000000094ade7
- (void)clearSignposts;	// IMP=0x000000000094adbe
@property(retain, nonatomic) NSMutableArray *signposts;
- (void)setJunctionElements:(struct GEOJunctionElement *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000094ac26
- (struct GEOJunctionElement)junctionElementAtIndex:(unsigned long long)arg1;	// IMP=0x000000000094ab48
- (void)addJunctionElement:(struct GEOJunctionElement)arg1;	// IMP=0x000000000094aacc
- (void)clearJunctionElements;	// IMP=0x000000000094aa72
@property(readonly, nonatomic) struct GEOJunctionElement *junctionElements;
@property(readonly, nonatomic) unsigned long long junctionElementsCount;
- (int)StringAsJunctionType:(id)arg1;	// IMP=0x000000000094a7fc
- (id)junctionTypeAsString:(int)arg1;	// IMP=0x000000000094a7a7
@property(nonatomic) _Bool hasJunctionType;
@property(nonatomic) int junctionType;
- (id)maneuverNameAtIndex:(unsigned long long)arg1;	// IMP=0x000000000094a6d6
- (unsigned long long)maneuverNamesCount;	// IMP=0x000000000094a6aa
- (void)addManeuverName:(id)arg1;	// IMP=0x000000000094a5f5
- (void)clearManeuverNames;	// IMP=0x000000000094a5cc
@property(retain, nonatomic) NSMutableArray *maneuverNames;
- (int)StringAsManeuverType:(id)arg1;	// IMP=0x0000000000947438
- (id)maneuverTypeAsString:(int)arg1;	// IMP=0x0000000000946ff3
@property(nonatomic) _Bool hasManeuverType;
@property(nonatomic) int maneuverType;
@property(nonatomic) _Bool hasExpectedTime;
@property(nonatomic) unsigned int expectedTime;
@property(nonatomic) _Bool hasHintFirstAnnouncementZilchIndex;
@property(nonatomic) int hintFirstAnnouncementZilchIndex;
@property(nonatomic) _Bool hasManeuverEndZilchIndex;
@property(nonatomic) int maneuverEndZilchIndex;
@property(nonatomic) _Bool hasManeuverStartZilchIndex;
@property(nonatomic) int maneuverStartZilchIndex;
@property(nonatomic) _Bool hasManeuverEndBasicIndex;
@property(nonatomic) int maneuverEndBasicIndex;
@property(nonatomic) _Bool hasStepID;
@property(nonatomic) unsigned int stepID;
- (void)dealloc;	// IMP=0x0000000000946bce
- (id)initWithData:(id)arg1;	// IMP=0x0000000000946b72
- (id)init;	// IMP=0x0000000000946b16
- (id)executionInstructionsForSpoken;	// IMP=0x0000000000c3b716
- (id)prepareInstructionForSpoken;	// IMP=0x0000000000c3b69c
- (id)initialInstructionForSpoken;	// IMP=0x0000000000c3b622
- (id)continueInstructionForSpoken;	// IMP=0x0000000000c3b5a8
- (id)proceedInstructionForSpoken;	// IMP=0x0000000000c3b52e
- (id)normalInstructionsForSignView;	// IMP=0x0000000000c3b4b7
- (id)continueInstructionsForSignView;	// IMP=0x0000000000c3b440
- (id)mergeInstructionsForSignView;	// IMP=0x0000000000c3b3c9
- (id)distanceForSignView;	// IMP=0x0000000000c3b356
- (id)instructionsForListView;	// IMP=0x0000000000c3b2df
- (id)distanceForListView;	// IMP=0x0000000000c3b26c
- (id)maneuverDescription;	// IMP=0x0000000000c3aed1
- (_Bool)maneuverIsHighwayExit;	// IMP=0x0000000000c3ae6d
- (void)shieldInfo:(CDUnknownBlockType)arg1;	// IMP=0x0000000000c3ac1f
- (id)intersectionNameInfo;	// IMP=0x0000000000c3aacb
- (id)firstNameInfo;	// IMP=0x0000000000c3a9e6
@property(readonly, nonatomic) int hintFirstAnnouncementIndex;
@property(readonly, nonatomic) _Bool hasHintFirstAnnouncementIndex;
@property(readonly, nonatomic) unsigned int maneuverStartIndex;
@property(readonly, nonatomic) unsigned int maneuverEndIndex;
- (id)roadName;	// IMP=0x0000000000cf9194

@end

