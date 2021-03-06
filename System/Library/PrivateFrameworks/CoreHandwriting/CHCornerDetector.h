//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CHDrawing, NSMutableIndexSet;

@interface CHCornerDetector : NSObject
{
    _Bool _shouldUseDynamicSampling;	// 8 = 0x8
    double _minimumSignificantSegmentLength;	// 16 = 0x10
    CHDrawing *_drawing;	// 24 = 0x18
    CHDrawing *_resampledDrawing;	// 32 = 0x20
    unsigned long long _directionChangeCount;	// 40 = 0x28
    unsigned long long _highestDirectionChangeCount;	// 48 = 0x30
    unsigned long long __strawSize;	// 56 = 0x38
    NSMutableIndexSet *__cornerIndexSet;	// 64 = 0x40
    NSMutableIndexSet *__directionChangeCornerIndexes;	// 72 = 0x48
    vector_9d2b1d4b __resampledDrawingPointMap;	// 80 = 0x50
}

- (id).cxx_construct;	// IMP=0x00000000000797f0
- (void).cxx_destruct;	// IMP=0x0000000000079770
@property(readonly, nonatomic) vector_9d2b1d4b _resampledDrawingPointMap; // @synthesize _resampledDrawingPointMap=__resampledDrawingPointMap;
@property(readonly, copy, nonatomic) NSMutableIndexSet *_directionChangeCornerIndexes; // @synthesize _directionChangeCornerIndexes=__directionChangeCornerIndexes;
@property(readonly, copy, nonatomic) NSMutableIndexSet *_cornerIndexSet; // @synthesize _cornerIndexSet=__cornerIndexSet;
@property(readonly, nonatomic) unsigned long long _strawSize; // @synthesize _strawSize=__strawSize;
@property(readonly, nonatomic) unsigned long long highestDirectionChangeCount; // @synthesize highestDirectionChangeCount=_highestDirectionChangeCount;
@property(readonly, nonatomic) unsigned long long directionChangeCount; // @synthesize directionChangeCount=_directionChangeCount;
@property(readonly, copy, nonatomic) CHDrawing *resampledDrawing; // @synthesize resampledDrawing=_resampledDrawing;
@property(copy, nonatomic) CHDrawing *drawing; // @synthesize drawing=_drawing;
@property(nonatomic) double minimumSignificantSegmentLength; // @synthesize minimumSignificantSegmentLength=_minimumSignificantSegmentLength;
@property(nonatomic) _Bool shouldUseDynamicSampling; // @synthesize shouldUseDynamicSampling=_shouldUseDynamicSampling;
- (id)_resolveResampledDirectionChangePointIndexes:(id)arg1;	// IMP=0x00000000000792f0
- (_Bool)_isLine:(id)arg1 usingThreshold:(double)arg2 p1:(long long)arg3 p2:(long long)arg4;	// IMP=0x0000000000079230
- (long long)_strokeHalfwayCorner:(id)arg1 p1:(long long)arg2 p2:(long long)arg3;	// IMP=0x0000000000079020
- (id)_postProcessCorners:(id)arg1 corners:(id)arg2 straws:(id)arg3;	// IMP=0x0000000000078d30
- (void)_removeAdjacentCorners:(id)arg1 corners:(id)arg2 straws:(id)arg3;	// IMP=0x0000000000078a50
- (void)_removeColinearCorners:(id)arg1 usingDistanceThreshold:(double)arg2 usingLowerThreshold:(double)arg3 usingUpperThreshold:(double)arg4 corners:(id)arg5;	// IMP=0x00000000000787b0
- (void)_removeColinearCorners:(id)arg1 usingThreshold:(double)arg2 corners:(id)arg3;	// IMP=0x0000000000078600
- (double)_pathDistance:(id)arg1 p1:(long long)arg2 p2:(long long)arg3;	// IMP=0x0000000000078550
- (double)_distance:(id)arg1 p1:(long long)arg2 p2:(long long)arg3;	// IMP=0x0000000000078460
- (double)_resamplingDistance:(id)arg1;	// IMP=0x00000000000782d0
- (id)_resampleDrawing:(id)arg1 outputPointMap:(void *)arg2;	// IMP=0x0000000000078250
- (void)_detectCorners;	// IMP=0x00000000000776f0
- (unsigned long long)_detectDirectionalChanges;	// IMP=0x0000000000076ed0
- (id)directionChangeCornerIndexes;	// IMP=0x0000000000076e90
- (id)cornerIndexes;	// IMP=0x0000000000076e50
- (id)init;	// IMP=0x0000000000076ca0

@end

