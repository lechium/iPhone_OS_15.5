//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOVectorTile;

@interface GEOTransitLink : NSObject
{
    void *_transitLink;	// 8 = 0x8
    GEOVectorTile *_containingTile;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000361484
@property(readonly, nonatomic) struct GeoCodecsRange *collapsedNodesIDRange;
@property(readonly, nonatomic) struct GeoCodecsRange *collapsedNodesIndexRange;
@property(readonly, nonatomic) struct GeoCodecsRange *originalNodeIDPointerIndexRange;
@property(readonly, nonatomic) struct GeoCodecsRange *shieldIndexRange;
@property(readonly, nonatomic) struct GeoCodecsRange *travelTimeIndexRange;
@property(readonly, nonatomic) unsigned long long toNodeID;
@property(readonly, nonatomic) unsigned long long fromNodeID;
@property(readonly, nonatomic) struct GeoCodecsConnectivityJunction *toJunction;
@property(readonly, nonatomic) struct GeoCodecsConnectivityJunction *fromJunction;
@property(readonly, nonatomic) struct GeoCodecsRange *transitIndexRange;
@property(readonly, nonatomic) unsigned int sectionCount;
@property(readonly, nonatomic) unsigned int sectionOffset;
@property(readonly, nonatomic) GEOVectorTile *containingTile;
- (void *)get;	// IMP=0x000000000036135b
- (id)init:(void *)arg1 withVectorTile:(id)arg2;	// IMP=0x00000000003612b1

@end
