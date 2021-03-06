//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapKit/MKGeoJSONObject-Protocol.h>

@class NSString;

@interface MKMultiPoint <MKGeoJSONObject>
{
    CDStruct_c3b9c2ee *_points;	// 8 = 0x8
    unsigned long long _pointCount;	// 16 = 0x10
    CDStruct_02837cd9 _boundingRect;	// 24 = 0x18
    struct GEOOnce_s _calculatedMapPointsLength;	// 56 = 0x38
    double _mapPointsLength;	// 64 = 0x40
    struct GEOOnce_s _calculatedSelfIntersecting;	// 72 = 0x48
    _Bool _selfIntersecting;	// 80 = 0x50
}

@property(readonly, nonatomic) unsigned long long pointCount; // @synthesize pointCount=_pointCount;
- (id)locationsAtPointIndexes:(id)arg1;	// IMP=0x00000000002081c4
- (double)locationAtPointIndex:(unsigned long long)arg1;	// IMP=0x00000000002080e3
- (_Bool)_determineSelfIntersecting;	// IMP=0x00000000002078bc
- (_Bool)_isSelfIntersecting;	// IMP=0x0000000000207828
- (double)_mapPointsLength;	// IMP=0x0000000000207728
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000207635
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002073eb
- (_Bool)intersectsMapRect:(CDStruct_02837cd9)arg1;	// IMP=0x00000000002073ad
- (struct CLLocationCoordinate2D)coordinate;	// IMP=0x0000000000207379
- (void)getCoordinates:(struct CLLocationCoordinate2D *)arg1 range:(struct _NSRange)arg2;	// IMP=0x00000000002072d6
- (void)_assignPoints:(CDStruct_c3b9c2ee *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000207292
- (void)_setPoints:(const CDStruct_c3b9c2ee *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000002071b9
- (void)_setCoordinates:(const struct CLLocationCoordinate2D *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000207125
- (void)_wrapAroundTheDateline:(const struct CLLocationCoordinate2D *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000207041
- (void)_pointsDidChange;	// IMP=0x000000000020703b
- (void)_calculateBounds;	// IMP=0x0000000000206fe9
- (void)_setBounds:(CDStruct_02837cd9)arg1;	// IMP=0x0000000000206fcb
- (CDStruct_02837cd9)boundingMapRect;	// IMP=0x0000000000206fab
- (CDStruct_c3b9c2ee *)points;	// IMP=0x0000000000206f9a
- (void)dealloc;	// IMP=0x0000000000206f54
- (id)_initWithGeoJSONObject:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000dadb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

