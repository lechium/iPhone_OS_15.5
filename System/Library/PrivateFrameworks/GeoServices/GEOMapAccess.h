//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject;
@protocol GEOMapAccessRestrictions, OS_dispatch_queue;

@interface GEOMapAccess
{
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 24 = 0x18
    id <GEOMapAccessRestrictions> _restrictions;	// 32 = 0x20
    CDUnknownBlockType _tileErrorHandler;	// 40 = 0x28
    _Bool _useMapMatchingTilesetForRoads;	// 48 = 0x30
}

+ (_Bool)supportsBuildingMapAccess;	// IMP=0x00000000012d96ed
+ (_Bool)supportsTransitMapAccess;	// IMP=0x00000000012d965d
+ (_Bool)supportsRoadMapAccess;	// IMP=0x00000000012d95f1
+ (id)map;	// IMP=0x00000000012d95d8
+ (id)transitMap;	// IMP=0x00000000012d95a3
+ (id)realisticMap;	// IMP=0x00000000012d956e
+ (_Bool)supportsTransitMap;	// IMP=0x00000000012d9555
+ (_Bool)supportsRealisticMap;	// IMP=0x00000000012d953c
- (void).cxx_destruct;	// IMP=0x00000000012dc1f8
@property(nonatomic) _Bool useMapMatchingTilesetForRoads; // @synthesize useMapMatchingTilesetForRoads=_useMapMatchingTilesetForRoads;
@property(copy, nonatomic) CDUnknownBlockType tileErrorHandler; // @synthesize tileErrorHandler=_tileErrorHandler;
@property(nonatomic) __weak id <GEOMapAccessRestrictions> restrictions; // @synthesize restrictions=_restrictions;
@property(readonly, nonatomic) unsigned long long buildingsZoomLevel;
@property(readonly, nonatomic) unsigned long long transitZoomLevel;
@property(readonly, nonatomic) unsigned long long roadsZoomLevel;
- (id)_transitPointForTransitMapNode:(shared_ptr_52e51bdf)arg1;	// IMP=0x00000000012dbe1e
- (id)_findTransitPointWithID:(unsigned long long)arg1 near:(CDStruct_c3b9c2ee)arg2 type:(unsigned long long)arg3 pointHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000012dba7d
- (id)_findTransitPointsWithin:(double)arg1 of:(CDStruct_c3b9c2ee)arg2 type:(unsigned long long)arg3 pointHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000012db6e9
- (id)buildMapEdgeTransitFrom:(const struct TransitEdgePiece *)arg1 edgeHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000012db630
- (id)findRoadTilesWithin:(double)arg1 of:(CDStruct_c3b9c2ee)arg2 tileHander:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000012db522
- (_Bool)hasLoadedBuildingTilesNearCoordinate:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2;	// IMP=0x00000000012db4bd
- (_Bool)hasLoadedTransitTilesNearCoordinate:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2;	// IMP=0x00000000012db458
- (_Bool)hasLoadedRoadTilesNearCoordinate:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2;	// IMP=0x00000000012db3d6
- (_Bool)_hasLoadedTilesNearCoordinate:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2 zoomLevel:(unsigned long long)arg3 tileStyle:(int)arg4 tileSize:(int)arg5 tileScale:(int)arg6;	// IMP=0x00000000012db1de
- (void)preloadBuildingTilesNearCoordinate:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000012db11c
- (void)preloadTransitTilesNearCoordinate:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000012db05a
- (void)preloadRoadTilesNearCoordinate:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000012daf98
- (id)findBuildingsWithin:(double)arg1 of:(CDStruct_c3b9c2ee)arg2 buildingHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000012dae7a
- (id)findTransitPointWithParentID:(unsigned long long)arg1 near:(CDStruct_c3b9c2ee)arg2 type:(unsigned long long)arg3 pointHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000012daad9
- (id)findTransitHallWithID:(unsigned long long)arg1 near:(CDStruct_c3b9c2ee)arg2 hallHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000012da9be
- (id)findTransitStopWithID:(unsigned long long)arg1 near:(CDStruct_c3b9c2ee)arg2 stopHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000012da8a3
- (id)findTransitStationWithID:(unsigned long long)arg1 near:(CDStruct_c3b9c2ee)arg2 stationHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000012da788
- (id)findTransitNodeWithID:(unsigned long long)arg1 near:(CDStruct_c3b9c2ee)arg2 nodeHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000012da660
- (id)findTransitPointWithID:(unsigned long long)arg1 near:(CDStruct_c3b9c2ee)arg2 pointHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000012da5a1
- (id)findTransitHallsWithin:(double)arg1 of:(CDStruct_c3b9c2ee)arg2 hallHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000012da484
- (id)findTransitStopsWithin:(double)arg1 of:(CDStruct_c3b9c2ee)arg2 stopHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000012da367
- (id)findTransitStationsWithin:(double)arg1 of:(CDStruct_c3b9c2ee)arg2 stationHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000012da24a
- (id)findTransitNodesWithin:(double)arg1 of:(CDStruct_c3b9c2ee)arg2 nodeHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000012da11e
- (id)findTransitPointsWithin:(double)arg1 of:(CDStruct_c3b9c2ee)arg2 pointHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000012da05f
- (id)findTransitLinksWithin:(double)arg1 of:(CDStruct_c3b9c2ee)arg2 linkHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000012d9e90
- (id)findTransitEdgesWithin:(double)arg1 of:(CDStruct_c3b9c2ee)arg2 edgeHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000012d9d82
- (id)findRoadsWithin:(double)arg1 of:(CDStruct_c3b9c2ee)arg2 handler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000012d9bb3
- (id)findRoadEdgesWithin:(double)arg1 of:(CDStruct_c3b9c2ee)arg2 edgeHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000012d9aa5
- (id)findClosestRoadAtCoordinate:(CDStruct_c3b9c2ee)arg1 roadHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000012d99ac
- (id)findClosestNamedFeaturesAtCoordinate:(CDStruct_c3b9c2ee)arg1 roadHandler:(CDUnknownBlockType)arg2 pointHandler:(CDUnknownBlockType)arg3 polygonHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000012d9867
@property(readonly, nonatomic) _Bool allowsNetworkTileLoad;
@property(readonly, nonatomic) unsigned int maxTransitZoomLevel;
@property(readonly, nonatomic) unsigned int maxZoomLevel;
@property(readonly, nonatomic) unsigned int minZoomLevel;
@property(nonatomic) unsigned int zoomLevel;
- (void)setCallbackQueue:(id)arg1;	// IMP=0x00000000012d976e
- (id)callbackQueue;	// IMP=0x00000000012d9759
- (id)init;	// IMP=0x00000000012d9410

@end

