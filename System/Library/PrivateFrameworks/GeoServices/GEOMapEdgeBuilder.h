//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOMapAccess, GEOMapTileFinder;

__attribute__((visibility("hidden")))
@interface GEOMapEdgeBuilder
{
    _Bool _buildAhead;	// 33 = 0x21
    _Bool _buildBehind;	// 34 = 0x22
    Matrix_8746f91e _firstTilePoint;	// 36 = 0x24
    Matrix_8746f91e _lastTilePoint;	// 44 = 0x2c
    GEOMapTileFinder *_currentTileFinder;	// 56 = 0x38
    CDUnknownBlockType _edgeHandler;	// 64 = 0x40
    struct unordered_set<_GEOTileKey, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, std::allocator<_GEOTileKey>> _tileKeysSeen;	// 72 = 0x48
    _Bool _searchDirection;	// 112 = 0x70
    unsigned long long _buildDirection;	// 120 = 0x78
}

- (id).cxx_construct;	// IMP=0x0000000000ce49d5
- (void).cxx_destruct;	// IMP=0x0000000000ce4995
@property(nonatomic) unsigned long long buildDirection; // @synthesize buildDirection=_buildDirection;
@property(copy, nonatomic) CDUnknownBlockType edgeHandler; // @synthesize edgeHandler=_edgeHandler;
- (id)_tileFinderForMap:(id)arg1 center:(CDStruct_c3b9c2ee)arg2 radius:(double)arg3;	// IMP=0x0000000000ce4939
- (id)_lastTile;	// IMP=0x0000000000ce4921
- (id)_firstTile;	// IMP=0x0000000000ce4909
- (Matrix_8746f91e)_lastPoint;	// IMP=0x0000000000ce48f4
- (Matrix_8746f91e)_firstPoint;	// IMP=0x0000000000ce48df
- (_Bool)_shouldFindEdgeBehind;	// IMP=0x0000000000ce48c7
- (_Bool)_shouldFindEdgeAhead;	// IMP=0x0000000000ce48af
- (_Bool)_findEdgeBehindInTile:(id)arg1;	// IMP=0x0000000000ce4897
- (_Bool)_findEdgeAheadInTile:(id)arg1;	// IMP=0x0000000000ce487f
- (void)_buildCompleteEdge;	// IMP=0x0000000000ce486a
- (unsigned long long)_maxTileCount;	// IMP=0x0000000000ce4852
- (_Bool)_edgeStart:(const void *)arg1 end:(const void *)arg2 connectsTo:(const void *)arg3;	// IMP=0x0000000000ce47df
- (_Bool)_pointConnects:(const void *)arg1 rect:(const CDStruct_90e2a262 *)arg2 to:(const CDStruct_c3b9c2ee *)arg3;	// IMP=0x0000000000ce475f
- (void)_findTilesAdjacentToTile:(const struct _GEOTileKey *)arg1 containingPoint:(const void *)arg2 findAhead:(_Bool)arg3;	// IMP=0x0000000000ce4296
- (void)buildEdge:(CDUnknownBlockType)arg1;	// IMP=0x0000000000ce423c
- (_Bool)_findNextEdge;	// IMP=0x0000000000ce4169
- (_Bool)_findEdgeBehind;	// IMP=0x0000000000ce3fab
- (_Bool)_findEdgeAhead;	// IMP=0x0000000000ce3dea
@property(readonly, nonatomic) GEOMapAccess *map;
- (void)cancel;	// IMP=0x0000000000ce3d63
- (id)initWithMap:(id)arg1;	// IMP=0x0000000000ce3d20

@end

