//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ASVRubberBand, MISSING_TYPE, NSSet;
@protocol ASVTouch, ASVTwoFingerGestureDelegate;

@interface ASVTwoFingerGesture
{
    _Bool _panThresholdPassed;	// 8 = 0x8
    _Bool _rotationThresholdPassed;	// 9 = 0x9
    _Bool _levitationThresholdPassed;	// 10 = 0xa
    _Bool _scaleThresholdPassed;	// 11 = 0xb
    float _initialFingerAngle;	// 12 = 0xc
    float _lastFingerAngle;	// 16 = 0x10
    float _initialDistanceBetweenFingers;	// 20 = 0x14
    float _baseDistanceBetweenFingers;	// 24 = 0x18
    float _assetBaseScale;	// 28 = 0x1c
    float _lastAssetScale;	// 32 = 0x20
    float _minScale;	// 36 = 0x24
    float _maxScale;	// 40 = 0x28
    float _scaleOvershoot;	// 44 = 0x2c
    float _scaleFactor;	// 48 = 0x30
    id <ASVTouch> _firstTouch;	// 56 = 0x38
    id <ASVTouch> _secondTouch;	// 64 = 0x40
    MISSING_TYPE *_initialFirstTouchLocation;	// 72 = 0x48
    MISSING_TYPE *_initialSecondTouchLocation;	// 80 = 0x50
    MISSING_TYPE *_initialMidPoint;	// 88 = 0x58
    NSSet *_snapScalesSet;	// 96 = 0x60
    id <ASVTwoFingerGestureDelegate> _delegate;	// 104 = 0x68
    ASVRubberBand *_rubberBand;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x0000000000017ceb
@property(nonatomic) float scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property(nonatomic) float scaleOvershoot; // @synthesize scaleOvershoot=_scaleOvershoot;
@property(retain, nonatomic) ASVRubberBand *rubberBand; // @synthesize rubberBand=_rubberBand;
@property(nonatomic) __weak id <ASVTwoFingerGestureDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSSet *snapScalesSet; // @synthesize snapScalesSet=_snapScalesSet;
@property(nonatomic) float maxScale; // @synthesize maxScale=_maxScale;
@property(nonatomic) float minScale; // @synthesize minScale=_minScale;
@property(nonatomic) float lastAssetScale; // @synthesize lastAssetScale=_lastAssetScale;
@property(nonatomic) float assetBaseScale; // @synthesize assetBaseScale=_assetBaseScale;
@property(nonatomic) float baseDistanceBetweenFingers; // @synthesize baseDistanceBetweenFingers=_baseDistanceBetweenFingers;
@property(nonatomic) float initialDistanceBetweenFingers; // @synthesize initialDistanceBetweenFingers=_initialDistanceBetweenFingers;
@property(nonatomic) _Bool scaleThresholdPassed; // @synthesize scaleThresholdPassed=_scaleThresholdPassed;
@property(nonatomic) float lastFingerAngle; // @synthesize lastFingerAngle=_lastFingerAngle;
@property(nonatomic) float initialFingerAngle; // @synthesize initialFingerAngle=_initialFingerAngle;
@property(nonatomic) _Bool levitationThresholdPassed; // @synthesize levitationThresholdPassed=_levitationThresholdPassed;
@property(nonatomic) _Bool rotationThresholdPassed; // @synthesize rotationThresholdPassed=_rotationThresholdPassed;
@property(nonatomic) _Bool panThresholdPassed; // @synthesize panThresholdPassed=_panThresholdPassed;
@property(nonatomic) MISSING_TYPE *initialMidPoint; // @synthesize initialMidPoint=_initialMidPoint;
@property(nonatomic) MISSING_TYPE *initialSecondTouchLocation; // @synthesize initialSecondTouchLocation=_initialSecondTouchLocation;
@property(nonatomic) MISSING_TYPE *initialFirstTouchLocation; // @synthesize initialFirstTouchLocation=_initialFirstTouchLocation;
@property(retain, nonatomic) id <ASVTouch> secondTouch; // @synthesize secondTouch=_secondTouch;
@property(retain, nonatomic) id <ASVTouch> firstTouch; // @synthesize firstTouch=_firstTouch;
- (void)finishGesture;	// IMP=0x0000000000017881
- (void)updateScalingWithSpan: /* Error: Ran out of types for this method. */;	// IMP=0x00000000000172fd
- (_Bool)scaleIsWithinSnapRange:(float)arg1 snapTarget:(float)arg2;	// IMP=0x00000000000172a4
- (void)updateRotationWithSpan: /* Error: Ran out of types for this method. */;	// IMP=0x000000000001706c
- (void)updatePanWithFirstTouchLocation:secondTouchLocation:midPoint: /* Error: Ran out of types for this method. */;	// IMP=0x0000000000017066
- (void)updateGesture;	// IMP=0x0000000000016e14
- (void)updateRubberBand;	// IMP=0x0000000000016d6d
- (id)initWithFirstTouch:(id)arg1 secondTouch:(id)arg2 dataSource:(id)arg3 delegate:(id)arg4;	// IMP=0x0000000000016a27

@end

