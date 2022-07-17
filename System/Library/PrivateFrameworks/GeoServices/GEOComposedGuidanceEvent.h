//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/NSSecureCoding-Protocol.h>

@class GEOGuidanceEvent, GEOJunction, GEOJunctionView, GEONameInfo, NSArray, NSData, NSMutableArray, NSString, NSUUID;
@protocol GEOServerFormattedString, GEOTransitArtworkDataSource;

@interface GEOComposedGuidanceEvent : NSObject <NSSecureCoding>
{
    NSUUID *_uniqueID;	// 8 = 0x8
    unsigned long long _creationOrder;	// 16 = 0x10
    GEOGuidanceEvent *_guidanceEvent;	// 24 = 0x18
    unsigned long long _stepIndex;	// 32 = 0x20
    unsigned long long _legIndex;	// 40 = 0x28
    NSMutableArray *_lanes;	// 48 = 0x30
    NSData *_serverRouteID;	// 56 = 0x38
    unsigned int _stepID;	// 64 = 0x40
    int _transportType;	// 68 = 0x44
    NSString *_roadName;	// 72 = 0x48
    double _distance;	// 80 = 0x50
    GEOJunction *_maneuverJunction;	// 88 = 0x58
    int _maneuverType;	// 96 = 0x60
    int _drivingSide;	// 100 = 0x64
    CDStruct_3f2a7a20 _startValidRouteCoordinate;	// 104 = 0x68
    CDStruct_3f2a7a20 _endValidRouteCoordinate;	// 112 = 0x70
    CDStruct_3f2a7a20 _coordinateForDistanceStrings;	// 120 = 0x78
    double _startValidDistance;	// 128 = 0x80
    double _endValidDistance;	// 136 = 0x88
    double _distanceForStrings;	// 144 = 0x90
    unsigned long long _source;	// 152 = 0x98
    unsigned long long _sourceIndex;	// 160 = 0xa0
    unsigned long long _enrouteNoticeIndex;	// 168 = 0xa8
    id <GEOTransitArtworkDataSource> _artworkOverride;	// 176 = 0xb0
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000009eada3
- (void).cxx_destruct;	// IMP=0x00000000009eb5db
@property(nonatomic) unsigned long long enrouteNoticeIndex; // @synthesize enrouteNoticeIndex=_enrouteNoticeIndex;
@property(nonatomic) unsigned long long sourceIndex; // @synthesize sourceIndex=_sourceIndex;
@property(nonatomic) unsigned long long source; // @synthesize source=_source;
@property(readonly, nonatomic) double distanceForStrings; // @synthesize distanceForStrings=_distanceForStrings;
@property(readonly, nonatomic) double endValidDistance; // @synthesize endValidDistance=_endValidDistance;
@property(readonly, nonatomic) double startValidDistance; // @synthesize startValidDistance=_startValidDistance;
@property(readonly, nonatomic) CDStruct_3f2a7a20 coordinateForDistanceStrings; // @synthesize coordinateForDistanceStrings=_coordinateForDistanceStrings;
@property(readonly, nonatomic) CDStruct_3f2a7a20 endValidRouteCoordinate; // @synthesize endValidRouteCoordinate=_endValidRouteCoordinate;
@property(readonly, nonatomic) CDStruct_3f2a7a20 startValidRouteCoordinate; // @synthesize startValidRouteCoordinate=_startValidRouteCoordinate;
@property(readonly, nonatomic) double distance; // @synthesize distance=_distance;
@property(readonly, nonatomic) NSString *roadName; // @synthesize roadName=_roadName;
@property(readonly, nonatomic) int transportType; // @synthesize transportType=_transportType;
@property(readonly, nonatomic) unsigned int stepID; // @synthesize stepID=_stepID;
@property(readonly, nonatomic) NSData *serverRouteID; // @synthesize serverRouteID=_serverRouteID;
@property(readonly, nonatomic) id <GEOTransitArtworkDataSource> artworkOverride; // @synthesize artworkOverride=_artworkOverride;
@property(readonly, nonatomic) GEOJunction *maneuverJunction; // @synthesize maneuverJunction=_maneuverJunction;
@property(readonly, nonatomic) int drivingSide; // @synthesize drivingSide=_drivingSide;
@property(readonly, nonatomic) int maneuverType; // @synthesize maneuverType=_maneuverType;
@property(readonly, nonatomic) unsigned long long legIndex; // @synthesize legIndex=_legIndex;
@property(readonly, nonatomic) unsigned long long stepIndex; // @synthesize stepIndex=_stepIndex;
@property(readonly, nonatomic) NSUUID *uniqueID; // @synthesize uniqueID=_uniqueID;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000009eb25c
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000009eadab
- (long long)comparePriority:(id)arg1;	// IMP=0x00000000009eabd7
- (long long)compareFactoringInSpeed:(id)arg1 speed:(double)arg2;	// IMP=0x00000000009ea982
- (long long)compare:(id)arg1;	// IMP=0x00000000009ea8bf
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000009ea811
- (unsigned long long)hash;	// IMP=0x00000000009ea7cd
- (double)desiredTimeGapToEvent:(id)arg1 chained:(_Bool)arg2;	// IMP=0x00000000009ea550
- (double)triggerDistanceForSpeed:(double)arg1 andDuration:(CDUnknownBlockType)arg2;	// IMP=0x00000000009ea406
- (double)endDistanceForSpeed:(double)arg1;	// IMP=0x00000000009ea335
- (double)startDistanceForSpeed:(double)arg1;	// IMP=0x00000000009ea266
- (_Bool)isValidForSpeed:(double)arg1;	// IMP=0x00000000009ea1ed
@property(readonly, nonatomic) NSArray *gapRanges;
@property(readonly, nonatomic) int arType;
@property(readonly, nonatomic) NSString *arArrowLabel;
@property(readonly, nonatomic) id <GEOServerFormattedString> arInstruction;
@property(readonly, nonatomic) unsigned long long numChainedAnnouncements;
@property(readonly, nonatomic) _Bool isLaneGuidanceForManeuver;
@property(readonly, nonatomic) int composedGuidanceEventType;
@property(readonly, nonatomic) NSArray *laneInstructions;
@property(readonly, nonatomic) NSArray *laneTitles;
@property(readonly, nonatomic) NSArray *lanes;
@property(readonly, nonatomic) _Bool isImportant;
@property(readonly, nonatomic) _Bool isSticky;
@property(readonly, nonatomic) _Bool hasHaptics;
@property(readonly, nonatomic) double repetitionInterval;
@property(readonly, nonatomic) NSArray *announcements;
@property(readonly, nonatomic) NSString *exclusiveSetIdentifier;
@property(readonly, nonatomic) GEOJunctionView *junctionView;
@property(readonly, nonatomic) GEONameInfo *shieldInfo;
@property(readonly, nonatomic) NSArray *signDetails;
@property(readonly, nonatomic) NSArray *signTitles;
@property(readonly, nonatomic) unsigned long long stackRanking;
@property(readonly, nonatomic) _Bool hasArGuidance;
@property(readonly, nonatomic) _Bool hasJunctionView;
@property(readonly, nonatomic) _Bool hasSpokenGuidance;
@property(readonly, nonatomic) _Bool hasSignGuidance;
- (id)description;	// IMP=0x00000000009e8d00
- (unsigned long long)_junctionViewIDForData:(id)arg1;	// IMP=0x00000000009e8c85
- (id)initWithGeoGuidanceEvent:(id)arg1 step:(id)arg2 legIndex:(unsigned long long)arg3 coordinates:(id)arg4;	// IMP=0x00000000009e8500

@end
