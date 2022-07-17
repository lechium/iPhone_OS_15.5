//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEONavigabilityInfo, GEOTrafficBannerText, GEOWaypointInfo, NSData, NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEOETARoute : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    CDStruct_9f2792e4 _incidentEndOffsetsInETARoutes;	// 24 = 0x18
    CDStruct_9f2792e4 _incidentIndexs;	// 48 = 0x30
    CDStruct_9f2792e4 _trafficColorOffsets;	// 72 = 0x48
    CDStruct_9f2792e4 _trafficColors;	// 96 = 0x60
    GEOWaypointInfo *_destinationWaypointInfo;	// 120 = 0x78
    NSMutableArray *_enrouteNotices;	// 128 = 0x80
    NSMutableArray *_guidanceEvents;	// 136 = 0x88
    NSMutableArray *_incidentOnRouteInfos;	// 144 = 0x90
    NSMutableArray *_incidentsOffReRoutes;	// 152 = 0x98
    NSMutableArray *_incidentsOnETARoutes;	// 160 = 0xa0
    NSMutableArray *_incidentsOnReRoutes;	// 168 = 0xa8
    NSMutableArray *_invalidSectionZilchPoints;	// 176 = 0xb0
    GEONavigabilityInfo *_navigabilityInfo;	// 184 = 0xb8
    GEOWaypointInfo *_originWaypointInfo;	// 192 = 0xc0
    NSData *_pathLeg;	// 200 = 0xc8
    NSMutableArray *_reroutedRoutes;	// 208 = 0xd0
    NSData *_routeID;	// 216 = 0xd8
    NSMutableArray *_routeCameraInputInfos;	// 224 = 0xe0
    NSMutableArray *_routeLineStyleInfos;	// 232 = 0xe8
    NSMutableArray *_steps;	// 240 = 0xf0
    GEOTrafficBannerText *_trafficBannerText;	// 248 = 0xf8
    NSMutableArray *_trafficColorInfos;	// 256 = 0x100
    NSMutableArray *_zilchPoints;	// 264 = 0x108
    unsigned int _readerMarkPos;	// 272 = 0x110
    unsigned int _readerMarkLength;	// 276 = 0x114
    struct os_unfair_lock_s _readerLock;	// 280 = 0x118
    unsigned int _historicTravelTime;	// 284 = 0x11c
    unsigned int _staticTravelTime;	// 288 = 0x120
    unsigned int _travelTimeAggressiveEstimate;	// 292 = 0x124
    unsigned int _travelTimeBestEstimate;	// 296 = 0x128
    unsigned int _travelTimeConservativeEstimate;	// 300 = 0x12c
    _Bool _routeNoLongerValid;	// 304 = 0x130
    struct {
        unsigned int has_historicTravelTime:1;
        unsigned int has_staticTravelTime:1;
        unsigned int has_travelTimeAggressiveEstimate:1;
        unsigned int has_travelTimeBestEstimate:1;
        unsigned int has_travelTimeConservativeEstimate:1;
        unsigned int has_routeNoLongerValid:1;
        unsigned int read_unknownFields:1;
        unsigned int read_incidentEndOffsetsInETARoutes:1;
        unsigned int read_incidentIndexs:1;
        unsigned int read_trafficColorOffsets:1;
        unsigned int read_trafficColors:1;
        unsigned int read_destinationWaypointInfo:1;
        unsigned int read_enrouteNotices:1;
        unsigned int read_guidanceEvents:1;
        unsigned int read_incidentOnRouteInfos:1;
        unsigned int read_incidentsOffReRoutes:1;
        unsigned int read_incidentsOnETARoutes:1;
        unsigned int read_incidentsOnReRoutes:1;
        unsigned int read_invalidSectionZilchPoints:1;
        unsigned int read_navigabilityInfo:1;
        unsigned int read_originWaypointInfo:1;
        unsigned int read_pathLeg:1;
        unsigned int read_reroutedRoutes:1;
        unsigned int read_routeID:1;
        unsigned int read_routeCameraInputInfos:1;
        unsigned int read_routeLineStyleInfos:1;
        unsigned int read_steps:1;
        unsigned int read_trafficBannerText:1;
        unsigned int read_trafficColorInfos:1;
        unsigned int read_zilchPoints:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 308 = 0x134
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000131a68b
+ (Class)guidanceEventType;	// IMP=0x0000000001315762
+ (Class)incidentOnRouteInfoType;	// IMP=0x0000000001315126
+ (Class)trafficColorInfoType;	// IMP=0x0000000001314eb6
+ (Class)enrouteNoticeType;	// IMP=0x0000000001314c4c
+ (Class)incidentsOffReRoutesType;	// IMP=0x00000000013141c9
+ (Class)incidentsOnReRoutesType;	// IMP=0x0000000001313f59
+ (Class)incidentsOnETARouteType;	// IMP=0x0000000001313ce9
+ (Class)routeCameraInputInfoType;	// IMP=0x0000000001313a79
+ (Class)routeLineStyleInfoType;	// IMP=0x000000000131380f
+ (Class)invalidSectionZilchPointsType;	// IMP=0x00000000013130c3
+ (Class)reroutedRouteType;	// IMP=0x0000000001312e53
+ (Class)zilchPointsType;	// IMP=0x0000000001312a39
+ (Class)stepType;	// IMP=0x00000000013127cf
- (void).cxx_destruct;	// IMP=0x0000000001321632
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000001320bb5
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000131fab2
- (unsigned long long)hash;	// IMP=0x000000000131f750
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000131f15b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000131de4c
- (void)copyTo:(id)arg1;	// IMP=0x000000000131d2f7
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x000000000131ce19
- (void)writeTo:(id)arg1;	// IMP=0x000000000131b51f
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000131b510
- (void)readAll:(_Bool)arg1;	// IMP=0x000000000131a231
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000131a21f
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000001317cba
- (id)jsonRepresentation;	// IMP=0x0000000001317ba8
- (id)dictionaryRepresentation;	// IMP=0x0000000001315822
- (id)description;	// IMP=0x0000000001315773
- (id)guidanceEventAtIndex:(unsigned long long)arg1;	// IMP=0x0000000001315731
- (unsigned long long)guidanceEventsCount;	// IMP=0x0000000001315705
- (void)addGuidanceEvent:(id)arg1;	// IMP=0x000000000131564e
- (void)clearGuidanceEvents;	// IMP=0x0000000001315623
@property(retain, nonatomic) NSMutableArray *guidanceEvents;
@property(retain, nonatomic) GEONavigabilityInfo *navigabilityInfo;
@property(readonly, nonatomic) _Bool hasNavigabilityInfo;
@property(retain, nonatomic) GEOWaypointInfo *destinationWaypointInfo;
@property(readonly, nonatomic) _Bool hasDestinationWaypointInfo;
@property(retain, nonatomic) GEOWaypointInfo *originWaypointInfo;
@property(readonly, nonatomic) _Bool hasOriginWaypointInfo;
- (id)incidentOnRouteInfoAtIndex:(unsigned long long)arg1;	// IMP=0x00000000013150f5
- (unsigned long long)incidentOnRouteInfosCount;	// IMP=0x00000000013150c9
- (void)addIncidentOnRouteInfo:(id)arg1;	// IMP=0x0000000001315012
- (void)clearIncidentOnRouteInfos;	// IMP=0x0000000001314fe7
@property(retain, nonatomic) NSMutableArray *incidentOnRouteInfos;
- (id)trafficColorInfoAtIndex:(unsigned long long)arg1;	// IMP=0x0000000001314e85
- (unsigned long long)trafficColorInfosCount;	// IMP=0x0000000001314e59
- (void)addTrafficColorInfo:(id)arg1;	// IMP=0x0000000001314da4
- (void)clearTrafficColorInfos;	// IMP=0x0000000001314d7b
@property(retain, nonatomic) NSMutableArray *trafficColorInfos;
- (id)enrouteNoticeAtIndex:(unsigned long long)arg1;	// IMP=0x0000000001314c1b
- (unsigned long long)enrouteNoticesCount;	// IMP=0x0000000001314bef
- (void)addEnrouteNotice:(id)arg1;	// IMP=0x0000000001314b38
- (void)clearEnrouteNotices;	// IMP=0x0000000001314b0d
@property(retain, nonatomic) NSMutableArray *enrouteNotices;
@property(nonatomic) _Bool hasStaticTravelTime;
@property(nonatomic) unsigned int staticTravelTime;
@property(nonatomic) _Bool hasTravelTimeConservativeEstimate;
@property(nonatomic) unsigned int travelTimeConservativeEstimate;
@property(nonatomic) _Bool hasTravelTimeBestEstimate;
@property(nonatomic) unsigned int travelTimeBestEstimate;
@property(nonatomic) _Bool hasTravelTimeAggressiveEstimate;
@property(nonatomic) unsigned int travelTimeAggressiveEstimate;
@property(nonatomic) _Bool hasHistoricTravelTime;
@property(nonatomic) unsigned int historicTravelTime;
@property(retain, nonatomic) GEOTrafficBannerText *trafficBannerText;
@property(readonly, nonatomic) _Bool hasTrafficBannerText;
- (void)setIncidentEndOffsetsInETARoutes:(unsigned int *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000001314695
- (unsigned int)incidentEndOffsetsInETARouteAtIndex:(unsigned long long)arg1;	// IMP=0x00000000013145bf
- (void)addIncidentEndOffsetsInETARoute:(unsigned int)arg1;	// IMP=0x0000000001314583
- (void)clearIncidentEndOffsetsInETARoutes;	// IMP=0x0000000001314564
@property(readonly, nonatomic) unsigned int *incidentEndOffsetsInETARoutes;
@property(readonly, nonatomic) unsigned long long incidentEndOffsetsInETARoutesCount;
- (void)setIncidentIndexs:(unsigned int *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000001314426
- (unsigned int)incidentIndexAtIndex:(unsigned long long)arg1;	// IMP=0x0000000001314350
- (void)addIncidentIndex:(unsigned int)arg1;	// IMP=0x0000000001314314
- (void)clearIncidentIndexs;	// IMP=0x00000000013142f5
@property(readonly, nonatomic) unsigned int *incidentIndexs;
@property(readonly, nonatomic) unsigned long long incidentIndexsCount;
- (id)incidentsOffReRoutesAtIndex:(unsigned long long)arg1;	// IMP=0x0000000001314198
- (unsigned long long)incidentsOffReRoutesCount;	// IMP=0x000000000131416c
- (void)addIncidentsOffReRoutes:(id)arg1;	// IMP=0x00000000013140b5
- (void)clearIncidentsOffReRoutes;	// IMP=0x000000000131408a
@property(retain, nonatomic) NSMutableArray *incidentsOffReRoutes;
- (id)incidentsOnReRoutesAtIndex:(unsigned long long)arg1;	// IMP=0x0000000001313f28
- (unsigned long long)incidentsOnReRoutesCount;	// IMP=0x0000000001313efc
- (void)addIncidentsOnReRoutes:(id)arg1;	// IMP=0x0000000001313e45
- (void)clearIncidentsOnReRoutes;	// IMP=0x0000000001313e1a
@property(retain, nonatomic) NSMutableArray *incidentsOnReRoutes;
- (id)incidentsOnETARouteAtIndex:(unsigned long long)arg1;	// IMP=0x0000000001313cb8
- (unsigned long long)incidentsOnETARoutesCount;	// IMP=0x0000000001313c8c
- (void)addIncidentsOnETARoute:(id)arg1;	// IMP=0x0000000001313bd5
- (void)clearIncidentsOnETARoutes;	// IMP=0x0000000001313baa
@property(retain, nonatomic) NSMutableArray *incidentsOnETARoutes;
- (id)routeCameraInputInfoAtIndex:(unsigned long long)arg1;	// IMP=0x0000000001313a48
- (unsigned long long)routeCameraInputInfosCount;	// IMP=0x0000000001313a1c
- (void)addRouteCameraInputInfo:(id)arg1;	// IMP=0x0000000001313967
- (void)clearRouteCameraInputInfos;	// IMP=0x000000000131393e
@property(retain, nonatomic) NSMutableArray *routeCameraInputInfos;
- (id)routeLineStyleInfoAtIndex:(unsigned long long)arg1;	// IMP=0x00000000013137de
- (unsigned long long)routeLineStyleInfosCount;	// IMP=0x00000000013137b2
- (void)addRouteLineStyleInfo:(id)arg1;	// IMP=0x00000000013136fd
- (void)clearRouteLineStyleInfos;	// IMP=0x00000000013136d4
@property(retain, nonatomic) NSMutableArray *routeLineStyleInfos;
- (void)setTrafficColorOffsets:(unsigned int *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000001313591
- (unsigned int)trafficColorOffsetAtIndex:(unsigned long long)arg1;	// IMP=0x00000000013134bb
- (void)addTrafficColorOffset:(unsigned int)arg1;	// IMP=0x000000000131347f
- (void)clearTrafficColorOffsets;	// IMP=0x0000000001313460
@property(readonly, nonatomic) unsigned int *trafficColorOffsets;
@property(readonly, nonatomic) unsigned long long trafficColorOffsetsCount;
- (void)setTrafficColors:(unsigned int *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000001313320
- (unsigned int)trafficColorAtIndex:(unsigned long long)arg1;	// IMP=0x000000000131324a
- (void)addTrafficColor:(unsigned int)arg1;	// IMP=0x000000000131320e
- (void)clearTrafficColors;	// IMP=0x00000000013131ef
@property(readonly, nonatomic) unsigned int *trafficColors;
@property(readonly, nonatomic) unsigned long long trafficColorsCount;
- (id)invalidSectionZilchPointsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000001313092
- (unsigned long long)invalidSectionZilchPointsCount;	// IMP=0x0000000001313066
- (void)addInvalidSectionZilchPoints:(id)arg1;	// IMP=0x0000000001312faf
- (void)clearInvalidSectionZilchPoints;	// IMP=0x0000000001312f84
@property(retain, nonatomic) NSMutableArray *invalidSectionZilchPoints;
- (id)reroutedRouteAtIndex:(unsigned long long)arg1;	// IMP=0x0000000001312e22
- (unsigned long long)reroutedRoutesCount;	// IMP=0x0000000001312df6
- (void)addReroutedRoute:(id)arg1;	// IMP=0x0000000001312d3f
- (void)clearReroutedRoutes;	// IMP=0x0000000001312d14
@property(retain, nonatomic) NSMutableArray *reroutedRoutes;
@property(nonatomic) _Bool hasRouteNoLongerValid;
@property(nonatomic) _Bool routeNoLongerValid;
@property(retain, nonatomic) NSData *pathLeg;
@property(readonly, nonatomic) _Bool hasPathLeg;
- (id)zilchPointsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000001312a08
- (unsigned long long)zilchPointsCount;	// IMP=0x00000000013129dc
- (void)addZilchPoints:(id)arg1;	// IMP=0x0000000001312927
- (void)clearZilchPoints;	// IMP=0x00000000013128fe
@property(retain, nonatomic) NSMutableArray *zilchPoints;
- (id)stepAtIndex:(unsigned long long)arg1;	// IMP=0x000000000131279e
- (unsigned long long)stepsCount;	// IMP=0x0000000001312772
- (void)addStep:(id)arg1;	// IMP=0x00000000013126bd
- (void)clearSteps;	// IMP=0x0000000001312694
@property(retain, nonatomic) NSMutableArray *steps;
@property(retain, nonatomic) NSData *routeID;
@property(readonly, nonatomic) _Bool hasRouteID;
- (void)dealloc;	// IMP=0x000000000130f664
- (id)initWithData:(id)arg1;	// IMP=0x000000000130f608
- (id)init;	// IMP=0x000000000130f5ac
- (unsigned long long)stepIndexOfStepWithID:(unsigned int)arg1;	// IMP=0x0000000000d06cdb
- (double)remainingTimeAlongRoute:(unsigned int)arg1 currentStepRemainingDistance:(double)arg2;	// IMP=0x0000000000d06afc
- (double)remainingTimeFromStepID:(unsigned int)arg1 toEndStepID:(unsigned int)arg2 currentStepRemainingDistance:(double)arg3;	// IMP=0x0000000000d068d2
@property(readonly, nonatomic) double expectedTime;

@end
