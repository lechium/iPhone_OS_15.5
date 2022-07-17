//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOMapAccess, GEOMapTileFinder, GEOVectorTile, NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOMapEdgeConnectionFinder
{
    GEOMapAccess *_map;	// 40 = 0x28
    GEOMapTileFinder *_tileFinder;	// 48 = 0x30
    NSMutableArray *_builders;	// 56 = 0x38
    GEOVectorTile *_tile;	// 64 = 0x40
    struct GeoCodecsConnectivityJunction *_junction;	// 72 = 0x48
    CDStruct_2c43369c _coordinate;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000d091c8
- (void)_findConnections:(CDUnknownBlockType)arg1 incoming:(_Bool)arg2;	// IMP=0x0000000000d091b3
- (void)findConnectionsIn:(CDUnknownBlockType)arg1;	// IMP=0x0000000000d0919c
- (void)findConnectionsOut:(CDUnknownBlockType)arg1;	// IMP=0x0000000000d09188
- (void)cancel;	// IMP=0x0000000000d08eb5
- (id)initWithMap:(id)arg1 tile:(id)arg2 junction:(struct GeoCodecsConnectivityJunction *)arg3 coordinate:(CDStruct_c3b9c2ee)arg4;	// IMP=0x0000000000d08d92

@end
