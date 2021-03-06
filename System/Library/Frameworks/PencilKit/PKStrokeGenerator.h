//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PencilKit/PKInputProvider-Protocol.h>

@class PKStroke;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface PKStrokeGenerator : NSObject <PKInputProvider>
{
    double _latestNonPredictedTimestamp;	// 8 = 0x8
    vector_59e02562 _drawPoints;	// 16 = 0x10
    struct vector<_PKStrokePoint, std::allocator<_PKStrokePoint>> _outputPoints;	// 40 = 0x28
    long long _outputImmutableCount;	// 64 = 0x40
    _Bool _inputHasChanged;	// 72 = 0x48
    struct _PKStrokePoint _baseValues;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_inputQueue;	// 160 = 0xa0
    PKStroke *_currentStroke;	// 168 = 0xa8
    long long _currentInputType;	// 176 = 0xb0
    unsigned long long _currentActiveInputProperties;	// 184 = 0xb8
    long long _immutableCount;	// 192 = 0xc0
    long long _missedUpdates;	// 200 = 0xc8
    vector_59e02562 _updatedDrawPoints;	// 208 = 0xd0
    _Bool _drawingEndedButNotFinished;	// 232 = 0xe8
    NSObject<OS_dispatch_semaphore> *_drawingWaitForFinishSemaphore;	// 240 = 0xf0
    _Bool _keepPredictedTouchesAtEndOfStroke;	// 248 = 0xf8
    _Bool _useRuler;	// 249 = 0xf9
    _Bool _isSnappedToRulerTopSide;	// 250 = 0xfa
    _Bool _canSnapToRuler;	// 251 = 0xfb
    _Bool _isSnappedToRuler;	// 252 = 0xfc
    double _rulerWidth;	// 256 = 0x100
    double _strokeMaxForce;	// 264 = 0x108
    NSObject<OS_dispatch_queue> *_outputQueue;	// 272 = 0x110
    double _touchSensitivity;	// 280 = 0x118
    void *_inputProvider;	// 288 = 0x120
    void *_pixelSmoothingFilter;	// 296 = 0x128
    void *_pointReductionFilter;	// 304 = 0x130
    void *_startHookFilter;	// 312 = 0x138
    void *_endHookFilter;	// 320 = 0x140
    void *_velocityFilter;	// 328 = 0x148
    void *_inputSmoother;	// 336 = 0x150
    void *_inputToOutputFilter;	// 344 = 0x158
    void *_startCapFilter;	// 352 = 0x160
    void *_azimuthFilter;	// 360 = 0x168
    void *_endCapFilter;	// 368 = 0x170
    void *_rulerExtremaFilter;	// 376 = 0x178
    void *_estimatedAltitudeAndAzimuthFilter;	// 384 = 0x180
    void *_compressionFilter;	// 392 = 0x188
    void *_decompressionFilter;	// 400 = 0x190
    double _eraserIndicatorAlpha;	// 408 = 0x198
    double _inputScale;	// 416 = 0x1a0
    struct CGPoint _lastPoint;	// 424 = 0x1a8
    struct CGAffineTransform _rulerTransform;	// 440 = 0x1b8
}

+ (vector_59e02562)inputPointsFromPath:(struct CGPath *)arg1 maxSegmentLength:(double)arg2 velocityForDistanceFunction:(CDUnknownBlockType)arg3;	// IMP=0x0000000000243776
+ (vector_59e02562)inputPointsFromPoints:(const void *)arg1 velocityForDistanceFunction:(CDUnknownBlockType)arg2;	// IMP=0x00000000002433fa
+ (void)initialize;	// IMP=0x000000000023f293
- (id).cxx_construct;	// IMP=0x00000000002445a0
- (void).cxx_destruct;	// IMP=0x0000000000244516
@property(nonatomic) double inputScale; // @synthesize inputScale=_inputScale;
@property double eraserIndicatorAlpha; // @synthesize eraserIndicatorAlpha=_eraserIndicatorAlpha;
@property _Bool isSnappedToRuler; // @synthesize isSnappedToRuler=_isSnappedToRuler;
@property(nonatomic) void *decompressionFilter; // @synthesize decompressionFilter=_decompressionFilter;
@property(nonatomic) void *compressionFilter; // @synthesize compressionFilter=_compressionFilter;
@property(nonatomic) void *estimatedAltitudeAndAzimuthFilter; // @synthesize estimatedAltitudeAndAzimuthFilter=_estimatedAltitudeAndAzimuthFilter;
@property(nonatomic) void *rulerExtremaFilter; // @synthesize rulerExtremaFilter=_rulerExtremaFilter;
@property(nonatomic) void *endCapFilter; // @synthesize endCapFilter=_endCapFilter;
@property(nonatomic) void *azimuthFilter; // @synthesize azimuthFilter=_azimuthFilter;
@property(nonatomic) void *startCapFilter; // @synthesize startCapFilter=_startCapFilter;
@property(nonatomic) void *inputToOutputFilter; // @synthesize inputToOutputFilter=_inputToOutputFilter;
@property(nonatomic) void *inputSmoother; // @synthesize inputSmoother=_inputSmoother;
@property(nonatomic) void *velocityFilter; // @synthesize velocityFilter=_velocityFilter;
@property(nonatomic) void *endHookFilter; // @synthesize endHookFilter=_endHookFilter;
@property(nonatomic) void *startHookFilter; // @synthesize startHookFilter=_startHookFilter;
@property(nonatomic) void *pointReductionFilter; // @synthesize pointReductionFilter=_pointReductionFilter;
@property(nonatomic) void *pixelSmoothingFilter; // @synthesize pixelSmoothingFilter=_pixelSmoothingFilter;
@property(nonatomic) void *inputProvider; // @synthesize inputProvider=_inputProvider;
@property(nonatomic) double touchSensitivity; // @synthesize touchSensitivity=_touchSensitivity;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *outputQueue; // @synthesize outputQueue=_outputQueue;
@property struct CGPoint lastPoint; // @synthesize lastPoint=_lastPoint;
@property(nonatomic) double strokeMaxForce; // @synthesize strokeMaxForce=_strokeMaxForce;
@property(nonatomic) _Bool canSnapToRuler; // @synthesize canSnapToRuler=_canSnapToRuler;
@property(nonatomic) _Bool isSnappedToRulerTopSide; // @synthesize isSnappedToRulerTopSide=_isSnappedToRulerTopSide;
@property(nonatomic) double rulerWidth; // @synthesize rulerWidth=_rulerWidth;
@property(nonatomic) _Bool useRuler; // @synthesize useRuler=_useRuler;
@property(nonatomic) struct CGAffineTransform rulerTransform; // @synthesize rulerTransform=_rulerTransform;
- (id)strokeFromLineSegments:(const void *)arg1 maxSegmentLength:(double)arg2 ink:(id)arg3 inputScale:(double)arg4 strokeClass:(Class)arg5;	// IMP=0x0000000000243f86
- (id)strokeFromPoints:(const void *)arg1 sourceStroke:(id)arg2 inputScale:(double)arg3 averageInputPoint:(CDStruct_6422aa5d)arg4;	// IMP=0x0000000000243cf6
- (id)strokeFromPoints:(struct CGPoint *)arg1 count:(unsigned long long)arg2 ink:(id)arg3 inputScale:(double)arg4 strokeClass:(Class)arg5;	// IMP=0x0000000000243bcb
- (id)strokeFromPath:(struct CGPath *)arg1 ink:(id)arg2 inputScale:(double)arg3 maxSegmentLength:(double)arg4 velocityForDistanceFunction:(CDUnknownBlockType)arg5 strokeClass:(Class)arg6;	// IMP=0x0000000000243ab5
- (id)strokeFromInputPoints:(void *)arg1 inputType:(long long)arg2 ink:(id)arg3 inputScale:(double)arg4 strokeClass:(Class)arg5;	// IMP=0x0000000000243828
- (void)drawingCancelledWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000243225
- (void)drawingEndedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000242c85
- (void)_drawingAddPoint:(CDStruct_6422aa5d)arg1;	// IMP=0x0000000000242b63
- (void)closeStroke;	// IMP=0x0000000000242911
- (void)addPoint:(CDStruct_6422aa5d)arg1;	// IMP=0x00000000002427a4
- (void)addPoints:(vector_59e02562)arg1;	// IMP=0x000000000024251f
- (double)latestTimestamp;	// IMP=0x0000000000242466
- (double)latestNonPredictedTimestamp;	// IMP=0x00000000002423b7
- (void)_updatePredictedTouches;	// IMP=0x00000000002422da
- (void)_removePredictedTouches;	// IMP=0x0000000000242292
- (void)updateImmutableCount;	// IMP=0x0000000000242187
- (void)drawingUpdateAllPointsDidTimeoutWithStrokeUUID:(id)arg1;	// IMP=0x0000000000241da0
- (void)drawingUpdateAllPoints;	// IMP=0x0000000000241d8c
- (void)drawingUpdatePoint:(CDStruct_6422aa5d)arg1;	// IMP=0x0000000000241c7c
- (id)_newStrokeWithCurrentDataAndStrokeDataUUID:(id)arg1;	// IMP=0x0000000000241a49
- (id)newStrokeWithCurrentDataCopy;	// IMP=0x000000000024190f
- (id)newStrokeWithCurrentData;	// IMP=0x00000000002417b0
- (long long)fetchFilteredPointsFromIndex:(long long)arg1 accessBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000241564
- (struct _PKStrokePoint)outputPoint:(CDStruct_6422aa5d)arg1 baseValues:(struct _PKStrokePoint)arg2;	// IMP=0x0000000000241242
- (struct _PKStrokePoint)outputCurrentStrokePoint:(CDStruct_6422aa5d)arg1;	// IMP=0x00000000002411ac
- (void)reset;	// IMP=0x0000000000241162
- (unsigned long long)copyInputUpdatedRangeFromIndex:(unsigned long long)arg1 into:(void *)arg2;	// IMP=0x0000000000240e59
- (void *)getInputUpdatedRangeFromIndex:(inout unsigned long long *)arg1;	// IMP=0x0000000000240e07
- (void *)getUpdatedRangeFromIndex:(inout unsigned long long *)arg1;	// IMP=0x0000000000240d3a
- (void *)outputFilter;	// IMP=0x0000000000240d28
@property(readonly) _Bool lastPointIsMasked;
- (void)updateRulerSnapping;	// IMP=0x00000000002409fa
- (struct CGPoint)snapPointToRuler:(struct CGPoint)arg1;	// IMP=0x0000000000240927
- (void)maskToRuler;	// IMP=0x000000000024080c
- (void)snapToRuler;	// IMP=0x000000000024069d
- (_Bool)shouldSnapPointToRuler:(struct CGPoint)arg1;	// IMP=0x00000000002405c6
- (double)distanceToRulerCenter:(struct CGPoint)arg1;	// IMP=0x00000000002404e3
- (struct CGPoint)getRulerSnapLineOriginAndTangent:(struct CGPoint *)arg1 andNormal:(struct CGPoint *)arg2;	// IMP=0x00000000002402df
- (void)allowSnappingToRuler:(struct CGAffineTransform)arg1 width:(double)arg2;	// IMP=0x00000000002401f4
- (void)drawingBeganWithStroke:(id)arg1 inputType:(long long)arg2 activeInputProperties:(unsigned long long)arg3 inputScale:(double)arg4 start:(CDUnknownBlockType)arg5;	// IMP=0x000000000023fd12
@property(readonly, nonatomic) unsigned long long activeInputProperties;
@property(readonly, nonatomic) long long inputType; // @dynamic inputType;
- (void)dealloc;	// IMP=0x000000000023f95f
- (id)init;	// IMP=0x000000000023f2ce

@end

