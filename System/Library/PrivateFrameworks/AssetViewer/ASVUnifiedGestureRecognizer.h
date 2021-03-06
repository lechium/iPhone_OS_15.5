//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssetViewer/ASVSingleFingerGestureDelegate-Protocol.h>
#import <AssetViewer/ASVTwoFingerGestureDelegate-Protocol.h>

@class ASVGesture, ASVGestureFeedbackGenerator, MISSING_TYPE, NSMutableSet, NSString, NSTimer;
@protocol ASVGestureDataSource, ASVUnifiedGestureRecognizerDelegate;

@interface ASVUnifiedGestureRecognizer : NSObject <ASVSingleFingerGestureDelegate, ASVTwoFingerGestureDelegate>
{
    _Bool _allowObjectScaling;	// 8 = 0x8
    _Bool _isScaleAnimating;	// 9 = 0x9
    _Bool _lastTapWasOnAsset;	// 10 = 0xa
    float _currentObjectScale;	// 12 = 0xc
    float _animateScaleStart;	// 16 = 0x10
    float _animateScaleEnd;	// 20 = 0x14
    id <ASVGestureDataSource> _dataSource;	// 24 = 0x18
    id <ASVUnifiedGestureRecognizerDelegate> _delegate;	// 32 = 0x20
    ASVGestureFeedbackGenerator *_feedbackGenerator;	// 40 = 0x28
    unsigned long long _enabledGestureTypes;	// 48 = 0x30
    double _lastTapTime;	// 56 = 0x38
    MISSING_TYPE *_lastTapLocation;	// 64 = 0x40
    double _lastFireFeedbackTime;	// 72 = 0x48
    NSTimer *_singleTapTimer;	// 80 = 0x50
    double _startScaleAnimationTime;	// 88 = 0x58
    ASVGesture *_currentGesture;	// 96 = 0x60
    NSMutableSet *_currentTouches;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x000000000000638d
@property(retain, nonatomic) NSMutableSet *currentTouches; // @synthesize currentTouches=_currentTouches;
@property(retain, nonatomic) ASVGesture *currentGesture; // @synthesize currentGesture=_currentGesture;
@property(nonatomic) float animateScaleEnd; // @synthesize animateScaleEnd=_animateScaleEnd;
@property(nonatomic) float animateScaleStart; // @synthesize animateScaleStart=_animateScaleStart;
@property(nonatomic) double startScaleAnimationTime; // @synthesize startScaleAnimationTime=_startScaleAnimationTime;
@property(retain, nonatomic) NSTimer *singleTapTimer; // @synthesize singleTapTimer=_singleTapTimer;
@property(nonatomic) double lastFireFeedbackTime; // @synthesize lastFireFeedbackTime=_lastFireFeedbackTime;
@property(nonatomic) _Bool lastTapWasOnAsset; // @synthesize lastTapWasOnAsset=_lastTapWasOnAsset;
@property(nonatomic) MISSING_TYPE *lastTapLocation; // @synthesize lastTapLocation=_lastTapLocation;
@property(nonatomic) double lastTapTime; // @synthesize lastTapTime=_lastTapTime;
@property(nonatomic) _Bool isScaleAnimating; // @synthesize isScaleAnimating=_isScaleAnimating;
@property(nonatomic) float currentObjectScale; // @synthesize currentObjectScale=_currentObjectScale;
@property(nonatomic) _Bool allowObjectScaling; // @synthesize allowObjectScaling=_allowObjectScaling;
@property(nonatomic) unsigned long long enabledGestureTypes; // @synthesize enabledGestureTypes=_enabledGestureTypes;
@property(retain, nonatomic) ASVGestureFeedbackGenerator *feedbackGenerator; // @synthesize feedbackGenerator=_feedbackGenerator;
@property(nonatomic) __weak id <ASVUnifiedGestureRecognizerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <ASVGestureDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)gestureDidSnapAwayFromScale:(id)arg1;	// IMP=0x000000000000610a
@property(readonly, nonatomic) float animatedScaleValue;
- (void)gestureStopScaleAnimation;	// IMP=0x000000000000608d
- (void)gestureStartScaleAnimationFrom:(float)arg1 to:(float)arg2;	// IMP=0x0000000000006065
- (void)gestureDidSnapToScale:(id)arg1;	// IMP=0x0000000000005f76
- (void)gestureEndedScaling:(id)arg1;	// IMP=0x0000000000005f2a
- (void)gesture:(id)arg1 scaledAssetToScale:(float)arg2;	// IMP=0x0000000000005ec7
- (void)gestureBeganScaling:(id)arg1;	// IMP=0x0000000000005e7b
- (void)gestureEndedRotation:(id)arg1;	// IMP=0x0000000000005dde
- (void)gesture:(id)arg1 rotatedAssetByDeltaYaw:(float)arg2;	// IMP=0x0000000000005d88
- (void)gestureBeganRotation:(id)arg1;	// IMP=0x0000000000005ceb
- (void)gesture:(id)arg1 singleTappedAtScreenPoint:(_Bool)arg2 onAsset: /* Error: Ran out of types for this method. */;	// IMP=0x00000000000058f8
@property(readonly, nonatomic) float maximumObjectScale;
@property(readonly, nonatomic) float minimumObjectScale;
- (float)clampedScaleForScale:(float)arg1;	// IMP=0x00000000000058db
- (void)processTouches:(id)arg1 phase:(long long)arg2;	// IMP=0x00000000000057eb
- (void)cancelDeceleration;	// IMP=0x00000000000057e5
@property(readonly, nonatomic) _Bool isDecelerating;
- (void)updateGestureFromTouches:(id)arg1 phase:(long long)arg2;	// IMP=0x0000000000005362
- (void)startGestureFromTouches:(id)arg1;	// IMP=0x000000000000509c
- (id)twoFingerGestureForFirstTouch:(id)arg1 secondTouch:(id)arg2 dataSource:(id)arg3;	// IMP=0x0000000000005094
- (id)singleFingerGestureForTouch:(id)arg1 dataSource:(id)arg2 enabledGestureTypes:(unsigned long long)arg3;	// IMP=0x000000000000508c
- (_Bool)twoFingerGesturesEnabled;	// IMP=0x000000000000507a
- (_Bool)singleFingerGesturesEnabled;	// IMP=0x0000000000005041
- (_Bool)generatesTransforms;	// IMP=0x000000000000502a
- (_Bool)generatesTaps;	// IMP=0x0000000000004feb
- (_Bool)gestureTypeIsEnabled:(unsigned long long)arg1;	// IMP=0x0000000000004fc5
@property(readonly, nonatomic) _Bool isEnabled;
- (void)update;	// IMP=0x0000000000004eb2
@property(readonly, nonatomic) _Bool isActive;
- (id)initWithDelegate:(id)arg1 feedbackGenerator:(id)arg2;	// IMP=0x0000000000004da7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

