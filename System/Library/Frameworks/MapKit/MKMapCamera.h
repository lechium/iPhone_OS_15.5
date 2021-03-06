//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MapKit/NSCopying-Protocol.h>
#import <MapKit/NSSecureCoding-Protocol.h>

@class MKMapView;

@interface MKMapCamera : NSObject <NSSecureCoding, NSCopying>
{
    struct CLLocationCoordinate2D _centerCoordinate;	// 8 = 0x8
    double _heading;	// 24 = 0x18
    double _pitch;	// 32 = 0x20
    double _altitude;	// 40 = 0x28
    MKMapView *_mapView;	// 48 = 0x30
    _Bool _pitchAdjustsAltitude;	// 56 = 0x38
    _Bool _needsStateUpdate;	// 57 = 0x39
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000015c46f
+ (id)_cameraLookingAtMapRect:(CDStruct_02837cd9)arg1 forViewSize:(struct CGSize)arg2;	// IMP=0x000000000015c11c
+ (id)_cameraLookingAtGEOMapRect:(const CDStruct_02837cd9 *)arg1 aspectRatio:(float)arg2;	// IMP=0x000000000015c089
+ (id)cameraLookingAtCenterCoordinate:(struct CLLocationCoordinate2D)arg1 fromDistance:(double)arg2 pitch:(double)arg3 heading:(double)arg4;	// IMP=0x000000000015bfd2
+ (id)cameraLookingAtCenterCoordinate:(struct CLLocationCoordinate2D)arg1 fromEyeCoordinate:(struct CLLocationCoordinate2D)arg2 eyeAltitude:(double)arg3;	// IMP=0x000000000015beaf
+ (id)camera;	// IMP=0x000000000015be95
- (void).cxx_destruct;	// IMP=0x000000000015cb6f
@property(nonatomic, getter=_precisePitch, setter=_setPrecisePitch:) double precisePitch; // @synthesize precisePitch=_pitch;
- (_Bool)_validate;	// IMP=0x000000000015ca41
- (id)description;	// IMP=0x000000000015c977
- (void)_updateState;	// IMP=0x000000000015c7fd
@property(nonatomic) double centerCoordinateDistance;
@property(nonatomic) double altitude; // @synthesize altitude=_altitude;
@property(nonatomic) double pitch;
@property(nonatomic) double heading; // @synthesize heading=_heading;
@property(nonatomic) struct CLLocationCoordinate2D centerCoordinate; // @synthesize centerCoordinate=_centerCoordinate;
- (void)_mapViewStateChanged;	// IMP=0x000000000015c540
- (void)_setMapView:(id)arg1;	// IMP=0x000000000015c52f
- (id)_mapView;	// IMP=0x000000000015c519
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000015c477
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000015c3b6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000015c2e6
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000015c1f7
- (CDStruct_02837cd9)_enclosingGEOMapRectForAspectRatio:(float)arg1;	// IMP=0x000000000015c161

@end

