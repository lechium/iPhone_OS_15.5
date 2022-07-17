//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameController/CoalescableMicroGamepad-Protocol.h>
#import <GameController/DigitizerValueChangedDelegate-Protocol.h>
#import <GameController/DirectionPadValueChangedDelegate-Protocol.h>

@class GCControllerButtonInput, GCControllerDirectionPad, NSString;

@interface GCDirectionalGamepad <CoalescableMicroGamepad, DigitizerValueChangedDelegate, DirectionPadValueChangedDelegate>
{
    _Bool _reportsAbsoluteDpadValues;	// 8 = 0x8
    float _touchpadRelativeWindowSize;	// 12 = 0xc
    float _touchpadRelativeOriginBufferSize;	// 16 = 0x10
    unsigned char _directionPadButtonsState;	// 20 = 0x14
    _Bool _centerButtonPressed;	// 21 = 0x15
    long long _touchState;	// 24 = 0x18
    _Bool _leftBufferZone;	// 32 = 0x20
    _Bool _beganTouchOutsideBounds;	// 33 = 0x21
    float _previousButtonState;	// 36 = 0x24
    struct CGPoint _absoluteWindowLocation;	// 40 = 0x28
    struct CGPoint _absolutePosition;	// 56 = 0x38
    struct CGPoint _absoluteTouchDownPosition;	// 72 = 0x48
    struct CGPoint _relativePosition;	// 88 = 0x58
    GCControllerDirectionPad *_cardinalDpad;	// 104 = 0x68
    GCControllerButtonInput *_centerButton;	// 112 = 0x70
    _Bool _treatOnlyCenterRingAsButtonA;	// 120 = 0x78
    unsigned long long _owner;	// 128 = 0x80
    long long _deviceType;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x000000000004815c
@property(nonatomic) unsigned long long owner;
- (struct CGPoint)clampPoint:(struct CGPoint)arg1 toLength:(double)arg2;	// IMP=0x00000000000480e5
- (struct CGPoint)mulCGPoint:(struct CGPoint)arg1 byScalar:(double)arg2;	// IMP=0x00000000000480d7
- (struct CGPoint)subCGPoint:(struct CGPoint)arg1 fromPoint:(struct CGPoint)arg2;	// IMP=0x00000000000480c1
- (struct CGPoint)addCGPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;	// IMP=0x00000000000480b3
- (struct CGPoint)scaleCGPoint:(struct CGPoint)arg1 toLength:(double)arg2;	// IMP=0x0000000000048086
- (struct CGPoint)normalizeCGPoint:(struct CGPoint)arg1;	// IMP=0x0000000000048044
- (double)distanceBetweenCGPoint:(struct CGPoint)arg1 andCGPoint:(struct CGPoint)arg2;	// IMP=0x0000000000048023
- (double)magnitudeForCGPoint:(struct CGPoint)arg1;	// IMP=0x000000000004800a
- (void)setDpad:(id)arg1 digitizerX:(double)arg2 digitizerY:(double)arg3 touchDown:(_Bool)arg4;	// IMP=0x0000000000047e65
- (_Bool)determineTouchStateWithDigitizerX:(float)arg1 digitizerY:(float)arg2 touchDown:(_Bool)arg3;	// IMP=0x0000000000047dd9
- (void)reportDirectionpadChange:(id)arg1 onQueue:(id)arg2;	// IMP=0x0000000000047cae
- (void)reportDigitizerChange:(id)arg1;	// IMP=0x0000000000047908
- (_Bool)calculateRelativePositionWithDigitizerX:(float)arg1 digitizerY:(float)arg2 touchDown:(_Bool)arg3;	// IMP=0x0000000000047606
@property(nonatomic) long long deviceType;
- (_Bool)reportsAbsoluteDpadValues;	// IMP=0x00000000000470c0
- (void)setReportsAbsoluteDpadValues:(_Bool)arg1;	// IMP=0x0000000000047061
- (_Bool)allowsRotation;	// IMP=0x0000000000047059
- (void)setAllowsRotation:(_Bool)arg1;	// IMP=0x0000000000047053
- (id)productCategory;	// IMP=0x0000000000046fc0
- (id)initWithIdentifier:(id)arg1;	// IMP=0x0000000000046f53
- (_Bool)ownershipClaimingElementsZero;	// IMP=0x000000000004818d
- (void)digitizerTouchUp:(id)arg1 timestamp:(unsigned long long)arg2 forceSkipDpadRotation:(_Bool)arg3;	// IMP=0x000000000004836a
- (void)digitizerTouchEvent:(id)arg1 x:(double)arg2 y:(double)arg3 timestamp:(unsigned long long)arg4 forceSkipDpadRotation:(_Bool)arg5;	// IMP=0x0000000000048302
- (id)centerButtonEvent:(id)arg1 pressed:(_Bool)arg2;	// IMP=0x000000000004885a
- (id)dpadDirectionEvent:(id)arg1 direction:(unsigned long long)arg2 pressed:(_Bool)arg3;	// IMP=0x00000000000483be

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) GCControllerDirectionPad *dpad;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
