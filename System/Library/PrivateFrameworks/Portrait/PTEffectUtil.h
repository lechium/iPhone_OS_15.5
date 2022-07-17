//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;
@protocol MTLComputePipelineState;

@interface PTEffectUtil : NSObject
{
    id <MTLComputePipelineState> _updateFocusObject;	// 8 = 0x8
    id <MTLComputePipelineState> _effectSampleFaceRects;	// 16 = 0x10
    id <MTLComputePipelineState> _convertToDisparity;	// 24 = 0x18
    id <MTLComputePipelineState> _fixedFocusDistanceAndCenterDisparity;	// 32 = 0x20
    id <MTLComputePipelineState> _copySingleChannel;	// 40 = 0x28
    id <MTLComputePipelineState> _copyRGBAToBGRA;	// 48 = 0x30
    id <MTLComputePipelineState> _clear;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000044cf5
- (void)copyRGBAToBGRA:(id)arg1 inTex:(id)arg2 outTex:(id)arg3;	// IMP=0x0000000000044bb5
- (void)clear:(id)arg1 outTex:(id)arg2;	// IMP=0x0000000000044aa8
- (void)copySingleChannel:(id)arg1 inTex:(id)arg2 outTex:(id)arg3;	// IMP=0x0000000000044968
- (void)fixedFocusDistanceAndCenterDisparity:(id)arg1 inDisparity:(id)arg2 outDisparity:(id)arg3 focusDepthFixed:(float)arg4 focusDepthMax:(float)arg5 inFocusObject:(id)arg6;	// IMP=0x00000000000447ab
- (void)rotateTexture:(id)arg1 inTex:(id)arg2 outTex:(id)arg3 rotationDegrees:(int)arg4;	// IMP=0x0000000000044623
- (void)sampleFaceRects:(id)arg1 maxFaceRects:(int)arg2 faceRects:(MISSING_TYPE **)arg3 numberOfFaceRects:(int)arg4 inDisparity:(id)arg5 outFocusDistanceArray:(id)arg6;	// IMP=0x00000000000444b8
- (void)updateFocusObject:(id)arg1 faceRectCount:(int)arg2 focusDepthOffset:(float)arg3 exponentialMovingAverage:(float)arg4 isFirstFrame:(_Bool)arg5 lastFocus:(id)arg6 inFocusDistanceArray:(id)arg7 outFocusObject:(id)arg8;	// IMP=0x00000000000442d0
- (id)initWithDevice:(id)arg1 library:(id)arg2 pipelineLibrary:(id)arg3;	// IMP=0x000000000004406d

@end
