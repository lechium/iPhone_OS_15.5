//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface _CLPolygonalRegion
{
    _Bool _allowMonitoringWhileNearby;	// 8 = 0x8
    int _geoReferenceFrame;	// 12 = 0xc
    NSArray *_vertices;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000067557
@property(readonly, nonatomic) _Bool allowMonitoringWhileNearby; // @synthesize allowMonitoringWhileNearby=_allowMonitoringWhileNearby;
@property int geoReferenceFrame; // @synthesize geoReferenceFrame=_geoReferenceFrame;
@property(readonly, copy, nonatomic) NSArray *vertices; // @synthesize vertices=_vertices;
- (id)description;	// IMP=0x00000000000678cf
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000067831
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000676ff
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006755f
- (void)dealloc;	// IMP=0x0000000000067509
- (id)initNearbyAllowedWithVertices:(id)arg1 identifier:(id)arg2;	// IMP=0x00000000000674e6
- (id)initWithVertices:(id)arg1 identifier:(id)arg2;	// IMP=0x0000000000067068

@end
