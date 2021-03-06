//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface UIKBProductivityPinchGestureRecognizer
{
    _Bool _recognized;	// 16 = 0x10
    struct CGAffineTransform _transform;	// 24 = 0x18
    id _transformAnalyzer;	// 72 = 0x48
    _Bool _hasFailedOnOtherDominantMotion;	// 80 = 0x50
    unsigned long long _numberOfTouchesRequired;	// 88 = 0x58
    _Bool _multitouchTimerEnabled;	// 96 = 0x60
    _Bool _tooMuchSingleMovement;	// 97 = 0x61
    double _avgTouchesToCentroidDistance;	// 104 = 0x68
    long long _pinchDirection;	// 112 = 0x70
    double _beginPinchTimestamp;	// 120 = 0x78
    double _beforeReductionTimeInterval;	// 128 = 0x80
    double _beginPerimeter;	// 136 = 0x88
    NSMutableArray *_activeTouches;	// 144 = 0x90
    double _allowableElapsedTimeForAllRequiredTouches;	// 152 = 0x98
    NSMutableDictionary *_beginTouchLocations;	// 160 = 0xa0
    struct CGPoint _beginCentroid;	// 168 = 0xa8
}

+ (id)productivityPinchGestureRecognizerWithTarget:(id)arg1 action:(SEL)arg2 delegate:(id)arg3;	// IMP=0x00000000007c48f0
- (void).cxx_destruct;	// IMP=0x00000000007c6994
@property(nonatomic) _Bool tooMuchSingleMovement; // @synthesize tooMuchSingleMovement=_tooMuchSingleMovement;
@property(retain, nonatomic) NSMutableDictionary *beginTouchLocations; // @synthesize beginTouchLocations=_beginTouchLocations;
@property(nonatomic) double allowableElapsedTimeForAllRequiredTouches; // @synthesize allowableElapsedTimeForAllRequiredTouches=_allowableElapsedTimeForAllRequiredTouches;
@property(retain, nonatomic) NSMutableArray *activeTouches; // @synthesize activeTouches=_activeTouches;
@property(nonatomic) struct CGPoint beginCentroid; // @synthesize beginCentroid=_beginCentroid;
@property(nonatomic) double beginPerimeter; // @synthesize beginPerimeter=_beginPerimeter;
@property(nonatomic) double beforeReductionTimeInterval; // @synthesize beforeReductionTimeInterval=_beforeReductionTimeInterval;
@property(nonatomic) double beginPinchTimestamp; // @synthesize beginPinchTimestamp=_beginPinchTimestamp;
@property(readonly, nonatomic) long long pinchDirection; // @synthesize pinchDirection=_pinchDirection;
@property(readonly, nonatomic) double avgTouchesToCentroidDistance; // @synthesize avgTouchesToCentroidDistance=_avgTouchesToCentroidDistance;
- (_Bool)shouldBeRequiredToFailByGestureRecognizer:(id)arg1;	// IMP=0x00000000007c676d
- (double)avgDistanceToCentroid:(id)arg1;	// IMP=0x00000000007c65f8
- (struct CGPoint)centroidOfTouches:(id)arg1;	// IMP=0x00000000007c647a
- (double)perimeterOfTouches:(id)arg1;	// IMP=0x00000000007c61b6
- (long long)pinchDirectionWithCurrentTime:(double)arg1 perimeter:(double)arg2;	// IMP=0x00000000007c5fd9
- (double)scale;	// IMP=0x00000000007c5fc7
- (void)_updateTransformAnalyzerWeights;	// IMP=0x00000000007c5f79
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000007c5f23
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x00000000007c5d80
- (void)multitouchExpired:(id)arg1;	// IMP=0x00000000007c5ce9
- (void)startMultitouchTimer:(double)arg1;	// IMP=0x00000000007c5c95
- (void)clearMultitouchTimer;	// IMP=0x00000000007c5c52
- (void)reset;	// IMP=0x00000000007c5ab9
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000007c596a
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000007c584a
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000007c50e2
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000007c4ab6
- (_Bool)sufficientMotionInDirection:(long long)arg1 withLocation:(struct CGPoint)arg2 withScale:(double)arg3 withAngle:(double)arg4;	// IMP=0x00000000007c49f7

@end

