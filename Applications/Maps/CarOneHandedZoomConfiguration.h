//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, _MKOneHandedZoomGestureRecognizer;

__attribute__((visibility("hidden")))
@interface CarOneHandedZoomConfiguration : NSObject
{
    double _decelerationThreshold;	// 8 = 0x8
    double _maximumZoomInVelocity;	// 16 = 0x10
    double _maximumZoomOutVelocity;	// 24 = 0x18
    double _zoomOutFrictionScale;	// 32 = 0x20
    double _zoomDraggingResistance;	// 40 = 0x28
    _MKOneHandedZoomGestureRecognizer *_gestureRecognizer;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000005074ca
@property(readonly, nonatomic) double zoomDraggingResistance; // @synthesize zoomDraggingResistance=_zoomDraggingResistance;
@property(readonly, nonatomic) double zoomOutFrictionScale; // @synthesize zoomOutFrictionScale=_zoomOutFrictionScale;
@property(readonly, nonatomic) double maximumZoomOutVelocity; // @synthesize maximumZoomOutVelocity=_maximumZoomOutVelocity;
@property(readonly, nonatomic) double maximumZoomInVelocity; // @synthesize maximumZoomInVelocity=_maximumZoomInVelocity;
@property(readonly, nonatomic) double decelerationThreshold; // @synthesize decelerationThreshold=_decelerationThreshold;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000507443
- (double)valueWithKey:(id)arg1 defaultValue:(double)arg2;	// IMP=0x0010000000507373
- (void)_refreshSetting;	// IMP=0x001000000050725a
- (void)dealloc;	// IMP=0x00100000005071e5
- (id)initWithGestureRecongizer:(id)arg1;	// IMP=0x001000000050711c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

