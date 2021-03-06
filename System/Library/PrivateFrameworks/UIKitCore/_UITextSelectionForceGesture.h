//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIKBPanGestureVelocitySample;

@interface _UITextSelectionForceGesture
{
    _Bool _shouldFailWithoutForce;	// 16 = 0x10
    _Bool _didLongPress;	// 17 = 0x11
    _Bool _touchEclipsesVelocity;	// 18 = 0x12
    UIKBPanGestureVelocitySample *_velocitySample;	// 24 = 0x18
    UIKBPanGestureVelocitySample *_previousVelocitySample;	// 32 = 0x20
    UIKBPanGestureVelocitySample *_liftOffSample;	// 40 = 0x28
    double _increasingForceTimestamp;	// 48 = 0x30
    double _lastTouchTime;	// 56 = 0x38
    long long _liftOffState;	// 64 = 0x40
    long long _increasingForceState;	// 72 = 0x48
    struct CGPoint _lastSceneReferenceLocation;	// 80 = 0x50
    struct CGPoint _lastUnadjustedSceneReferenceLocation;	// 96 = 0x60
    struct CGRect _velocityRange;	// 112 = 0x70
}

@property(nonatomic) struct CGRect velocityRange; // @synthesize velocityRange=_velocityRange;
@property(nonatomic) long long increasingForceState; // @synthesize increasingForceState=_increasingForceState;
@property(nonatomic) long long liftOffState; // @synthesize liftOffState=_liftOffState;
@property(nonatomic) struct CGPoint lastUnadjustedSceneReferenceLocation; // @synthesize lastUnadjustedSceneReferenceLocation=_lastUnadjustedSceneReferenceLocation;
@property(nonatomic) struct CGPoint lastSceneReferenceLocation; // @synthesize lastSceneReferenceLocation=_lastSceneReferenceLocation;
@property(nonatomic) double lastTouchTime; // @synthesize lastTouchTime=_lastTouchTime;
@property(nonatomic) double increasingForceTimestamp; // @synthesize increasingForceTimestamp=_increasingForceTimestamp;
@property(nonatomic) _Bool touchEclipsesVelocity; // @synthesize touchEclipsesVelocity=_touchEclipsesVelocity;
@property(nonatomic) _Bool didLongPress; // @synthesize didLongPress=_didLongPress;
@property(nonatomic) _Bool shouldFailWithoutForce; // @synthesize shouldFailWithoutForce=_shouldFailWithoutForce;
@property(readonly, getter=_liftOffSample) UIKBPanGestureVelocitySample *_liftOffSample; // @synthesize _liftOffSample;
@property(readonly, getter=_previousVelocitySample) UIKBPanGestureVelocitySample *_previousVelocitySample; // @synthesize _previousVelocitySample;
@property(readonly, getter=_velocitySample) UIKBPanGestureVelocitySample *_velocitySample; // @synthesize _velocitySample;
- (_Bool)forceHasIncreasedForTimeInterval:(double)arg1;	// IMP=0x0000000000b3d9e3
- (struct CGPoint)_centroidInView:(id)arg1;	// IMP=0x0000000000b3d954
- (void)_updateLiftOffState;	// IMP=0x0000000000b3d850
- (_Bool)shouldResetRangeForVelocity:(struct CGPoint)arg1 previousVelocity:(struct CGPoint)arg2;	// IMP=0x0000000000b3d79f
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000b3d788
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000b3d5b7
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000b3d25b
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000b3d19b
- (void)_centroidMovedTo:(struct CGPoint)arg1 atTime:(double)arg2 physicalTouch:(id)arg3;	// IMP=0x0000000000b3cfee
- (struct CGPoint)_adjustSceneReferenceLocation:(struct CGPoint)arg1;	// IMP=0x0000000000b3cfaf
- (struct CGPoint)_shiftPanLocationToNewSceneReferenceLocation:(struct CGPoint)arg1;	// IMP=0x0000000000b3cef1
- (struct UIOffset)_offsetInViewFromSceneReferenceLocation:(struct CGPoint)arg1 toSceneReferenceLocation:(struct CGPoint)arg2;	// IMP=0x0000000000b3ce5a
- (struct CGPoint)_locationOfTouches:(id)arg1;	// IMP=0x0000000000b3ce01
- (struct CGPoint)velocityInView:(id)arg1;	// IMP=0x0000000000b3cd3d
- (struct CGPoint)_convertVelocitySample:(id)arg1 fromSceneReferenceCoordinatesToView:(id)arg2;	// IMP=0x0000000000b3cc40
- (struct CGPoint)_convertPoint:(struct CGPoint)arg1 fromSceneReferenceCoordinatesToView:(id)arg2;	// IMP=0x0000000000b3cbb3
- (struct CGPoint)_convertPoint:(struct CGPoint)arg1 toSceneReferenceCoordinatesFromView:(id)arg2;	// IMP=0x0000000000b3cb1b
- (void)reset;	// IMP=0x0000000000b3ca65
- (void)_resetVelocitySamples;	// IMP=0x0000000000b3c9ff
- (_Bool)_shouldDelayUntilForceLevelRequirementIsMet;	// IMP=0x0000000000b3c9b9
- (void)enoughTimeElapsed:(id)arg1;	// IMP=0x0000000000b3c926
- (void)dealloc;	// IMP=0x0000000000b3c8c0
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x0000000000b3c7cd

@end

