//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableArray;

__attribute__((visibility("hidden")))
@interface VKLabelNavTileData : NSObject
{
    struct shared_ptr<md::LabelTile> _tile;	// 8 = 0x8
    NSMapTable *_geoJunctionToJunctionMap;	// 24 = 0x18
    NSMutableArray *_tileEdgeJunctions;	// 32 = 0x20
    _Bool _foundTileEdgeJunctions;	// 40 = 0x28
    _Bool _oppositeCarriagewayJunctionsValid;	// 41 = 0x29
    NSMutableArray *_oppositeCarriagewayJunctions;	// 48 = 0x30
    struct vector<LabelNavJunctionInfo, geo::StdAllocator<LabelNavJunctionInfo, mdm::Allocator>> _junctionInfos;	// 56 = 0x38
}

- (id).cxx_construct;	// IMP=0x00000000006e3dca
- (void).cxx_destruct;	// IMP=0x00000000006e3d91
@property(readonly, nonatomic) const void *tile; // @synthesize tile=_tile;
@property(readonly, retain, nonatomic) NSMutableArray *oppositeCarriagewayJunctions; // @synthesize oppositeCarriagewayJunctions=_oppositeCarriagewayJunctions;
@property(nonatomic) _Bool oppositeCarriagewayJunctionsValid; // @synthesize oppositeCarriagewayJunctionsValid=_oppositeCarriagewayJunctionsValid;
- (void)findOppositeCarriagewayJunctionsWithRouteFeatures:(void *)arg1 distanceThreshold:(double)arg2;	// IMP=0x00000000006e3477
- (void)appendNavJunctionsInWorldRect:(const void *)arg1 junctions:(id)arg2;	// IMP=0x00000000006e3335
- (void)initializeJunctionInfos;	// IMP=0x00000000006e2fba
- (id)findTileEdgeJunctionAtCoordinate:(Matrix_8746f91e)arg1;	// IMP=0x00000000006e2e3a
- (void)_findTileEdgeJunctions;	// IMP=0x00000000006e2cfd
- (void)addJunction:(id)arg1;	// IMP=0x00000000006e2c87
- (id)junctionAtCoordinate:(Matrix_8746f91e)arg1;	// IMP=0x00000000006e2b44
- (id)junctionForGeoJunction:(struct GeoCodecsConnectivityJunction *)arg1;	// IMP=0x00000000006e2b2e
- (void)dealloc;	// IMP=0x00000000006e2add
- (id)initWithTile:(const void *)arg1;	// IMP=0x00000000006e2a04

@end

