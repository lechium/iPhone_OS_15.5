//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOComposedWaypoint;

__attribute__((visibility("hidden")))
@interface WaypointSet : NSObject
{
    GEOComposedWaypoint *_origin;	// 8 = 0x8
    GEOComposedWaypoint *_destination;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000c315c
@property(readonly, copy, nonatomic) GEOComposedWaypoint *destination; // @synthesize destination=_destination;
@property(readonly, copy, nonatomic) GEOComposedWaypoint *origin; // @synthesize origin=_origin;
- (unsigned long long)hash;	// IMP=0x00100000000c3109
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000c2f2a
- (id)initWithOrigin:(id)arg1 destination:(id)arg2;	// IMP=0x00100000000c2e71

@end
