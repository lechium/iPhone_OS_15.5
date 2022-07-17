//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VectorKit/NSCopying-Protocol.h>

@class GEOFeatureStyleAttributes, NSString;

@interface VKTrafficFeature : NSObject <NSCopying>
{
    float _minZoom;	// 8 = 0x8
    float _maxZoom;	// 12 = 0xc
    Matrix_6e1d3589 _worldPoint;	// 16 = 0x10
    int _groupIdentifier;	// 40 = 0x28
    unsigned int _groupItemVerticalDisplayOrder;	// 44 = 0x2c
    unsigned int _groupItemHorizontalDisplayOrder;	// 48 = 0x30
    double _routeOffsetInMeters;	// 56 = 0x38
    double _facingAzimuth;	// 64 = 0x40
    CDStruct_071ac149 _position;	// 72 = 0x48
    struct PolylineCoordinate _approachingRouteOffset;	// 96 = 0x60
    struct PolylineCoordinate _routeOffset;	// 104 = 0x68
    double _approachingDistanceInMeters;	// 112 = 0x70
    long long _state;	// 120 = 0x78
    NSString *_uniqueIdentifier;	// 128 = 0x80
    unsigned char _collisionPriority;	// 136 = 0x88
    long long _trafficFeatureType;	// 144 = 0x90
    _Bool _shouldUpdateStyle;	// 152 = 0x98
    optional_f92fc060 _routeLegWhen;	// 153 = 0x99
}

+ (id)stringForNavState:(long long)arg1;	// IMP=0x0000000000857088
+ (id)stringForFeatureType:(long long)arg1;	// IMP=0x000000000085702f
+ (id)newTrafficFeatureForEnrouteNotice:(id)arg1 onRoute:(id)arg2;	// IMP=0x0000000000856ea4
- (id).cxx_construct;	// IMP=0x0000000000857ad4
- (void).cxx_destruct;	// IMP=0x0000000000857abe
@property(readonly, nonatomic) double facingAzimuth; // @synthesize facingAzimuth=_facingAzimuth;
@property(nonatomic) optional_f92fc060 routeLegWhen; // @synthesize routeLegWhen=_routeLegWhen;
@property(readonly, nonatomic) double routeOffsetInMeters; // @synthesize routeOffsetInMeters=_routeOffsetInMeters;
@property(nonatomic) _Bool shouldUpdateStyle; // @synthesize shouldUpdateStyle=_shouldUpdateStyle;
@property(readonly, nonatomic) unsigned int groupItemHorizontalDisplayOrder; // @synthesize groupItemHorizontalDisplayOrder=_groupItemHorizontalDisplayOrder;
@property(readonly, nonatomic) unsigned int groupItemVerticalDisplayOrder; // @synthesize groupItemVerticalDisplayOrder=_groupItemVerticalDisplayOrder;
@property(readonly, nonatomic) int groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
@property(readonly, nonatomic) unsigned char collisionPriority; // @synthesize collisionPriority=_collisionPriority;
@property(readonly, nonatomic) struct PolylineCoordinate approachingRouteOffset; // @synthesize approachingRouteOffset=_approachingRouteOffset;
@property(nonatomic) long long navigationState; // @synthesize navigationState=_state;
@property(readonly, nonatomic) long long trafficFeatureType; // @synthesize trafficFeatureType=_trafficFeatureType;
@property(readonly, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly, nonatomic) CDStruct_071ac149 position; // @synthesize position=_position;
@property(readonly, nonatomic) float maxZoom; // @synthesize maxZoom=_maxZoom;
@property(readonly, nonatomic) float minZoom; // @synthesize minZoom=_minZoom;
@property(readonly, nonatomic) struct PolylineCoordinate routeOffset; // @synthesize routeOffset=_routeOffset;
- (void)populateDebugNode:(void *)arg1;	// IMP=0x00000000008570e4
- (void)updateNavigationStateForRouteUserOffset:(const struct PolylineCoordinate *)arg1;	// IMP=0x0000000000856fa3
@property(readonly, nonatomic) vector_20f0823a attributes;
- (_Bool)isGrouped;	// IMP=0x0000000000856022
- (_Bool)isBehind;	// IMP=0x0000000000856014
- (_Bool)isApproaching;	// IMP=0x0000000000856006
- (_Bool)isAheadButNotApproaching;	// IMP=0x0000000000855ff8
- (_Bool)isUserReportedIncident;	// IMP=0x0000000000855fe7
- (_Bool)isRouteAnnotation;	// IMP=0x0000000000855fd6
- (_Bool)isIncident;	// IMP=0x0000000000855fc5
- (_Bool)isCamera;	// IMP=0x0000000000855fb4
- (_Bool)isSignal;	// IMP=0x0000000000855fa3
@property(readonly, nonatomic) GEOFeatureStyleAttributes *styleAttributes;
@property(readonly, nonatomic) Mercator3_d8bb135c mercatorPoint;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000855d97
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000855cbb
- (void)dealloc;	// IMP=0x0000000000855c7d
- (id)initWithFeatureType:(long long)arg1 uniqueIdentifier:(id)arg2 position:(CDStruct_071ac149)arg3 direction:(double)arg4 routeOffset:(struct PolylineCoordinate)arg5 routeOffsetInMeters:(double)arg6;	// IMP=0x0000000000855b42
- (id)initWithFeatureType:(long long)arg1 uniqueIdentifier:(id)arg2 routeOffset:(struct PolylineCoordinate)arg3 onRoute:(id)arg4;	// IMP=0x0000000000855a67
- (id)initWithFeatureType:(long long)arg1 uniqueIdentifier:(id)arg2 position:(CDStruct_071ac149)arg3 onRoute:(id)arg4;	// IMP=0x0000000000855947
- (id)initWithEnrouteNotice:(id)arg1 onRoute:(id)arg2;	// IMP=0x0000000000855595

@end
