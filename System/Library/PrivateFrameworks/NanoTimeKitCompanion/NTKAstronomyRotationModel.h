//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CADisplayLink, MISSING_TYPE;
@protocol NTKAstronomyRotationModelObserver, NUNIRotatable;

@interface NTKAstronomyRotationModel : NSObject
{
    CADisplayLink *_displayLink;	// 8 = 0x8
    const struct NTKAstronomyInteractionSettings *_interactionSettings;	// 16 = 0x10
    id <NTKAstronomyRotationModelObserver> _observer;	// 24 = 0x18
    id <NUNIRotatable> _rotatable;	// 32 = 0x20
    long long _state;	// 40 = 0x28
    struct CLLocationCoordinate2D _landingCoordinate;	// 48 = 0x30
    MISSING_TYPE *_accumulatedPushVector;	// 64 = 0x40
    float _effectivePushDeceleration;	// 72 = 0x48
    float _effectivePullAcceleration;	// 76 = 0x4c
    double _pushStartTime;	// 80 = 0x50
    double _pullStartTime;	// 88 = 0x58
    double _previousDisplayLinkCallbackTime;	// 96 = 0x60
    _Bool _isPulling;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000000001b7aff
@property(nonatomic, getter=isPulling) _Bool pulling; // @synthesize pulling=_isPulling;
@property(readonly, nonatomic) const struct NTKAstronomyInteractionSettings *interactionSettings; // @synthesize interactionSettings=_interactionSettings;
@property(nonatomic) __weak id <NTKAstronomyRotationModelObserver> observer; // @synthesize observer=_observer;
@property(nonatomic) __weak id <NUNIRotatable> rotatable; // @synthesize rotatable=_rotatable;
- (void)push: /* Error: Ran out of types for this method. */;	// IMP=0x00000000001b78f5
- (void)_update;	// IMP=0x00000000001b74bf
- (void)_handleDisplayLink;	// IMP=0x00000000001b74a1
- (void)stop;	// IMP=0x00000000001b7443
- (_Bool)isAtHomeCoordinate;	// IMP=0x00000000001b7378
- (void)dealloc;	// IMP=0x00000000001b733a
- (id)init;	// IMP=0x00000000001b72e1

@end
