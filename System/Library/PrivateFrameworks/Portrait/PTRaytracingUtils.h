//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol MTLComputePipelineState, MTLDevice, MTLSamplerState;

@interface PTRaytracingUtils : NSObject
{
    id <MTLComputePipelineState> _interpolateLumaRadius;	// 8 = 0x8
    id <MTLComputePipelineState> _interpolateLumaRadiusToDestYUV;	// 16 = 0x10
    id <MTLComputePipelineState> _interpolateLumaRadiusToDestRGBA;	// 24 = 0x18
    id <MTLComputePipelineState> _focusEdgeMask;	// 32 = 0x20
    id <MTLComputePipelineState> _interpolateRGBRadiusToDestYUV[9];	// 40 = 0x28
    id <MTLComputePipelineState> _interpolateRGBRadiusToDestRGBA[9];	// 112 = 0x70
    id <MTLComputePipelineState> _interpolateRGBRadiusToDestYUVFromSource[9];	// 184 = 0xb8
    id <MTLComputePipelineState> _interpolateRGBRadiusToDestRGBAFromSource[9];	// 256 = 0x100
    id <MTLComputePipelineState> _centerDisparityOnFocus;	// 328 = 0x148
    id <MTLComputePipelineState> _sobelEdgeDetector;	// 336 = 0x150
    id <MTLComputePipelineState> _edgeDilation;	// 344 = 0x158
    id <MTLDevice> _device;	// 352 = 0x160
    id <MTLSamplerState> _sNBE;	// 360 = 0x168
    id <MTLSamplerState> _sNLE;	// 368 = 0x170
}

+ (struct PTNoiseValues)calculateVarReadNoise:(id)arg1 colorSize:(struct CGSize)arg2;	// IMP=0x0000000000041705
+ (float)frameWidth;	// IMP=0x00000000000416f7
+ (float)focalLength;	// IMP=0x00000000000416e9
+ (struct PTFocusEdge)createFocusEdge;	// IMP=0x00000000000416d5
+ (struct PTFocus)createFocusObject:(id)arg1 coverageOverscan:(float)arg2 anamorphicFactor:(float)arg3 raytracingRadiusLocal:(float)arg4 rayCount:(int)arg5 colorSize:(_Bool)arg6 doMacroApertureLimit: /* Error: Ran out of types for this method. */;	// IMP=0x0000000000041276
+ (struct PTFocus)createFocusObject:(id)arg1;	// IMP=0x0000000000041245
+ (float)cocRadiusNormalized:(float)arg1 disparity:(float)arg2 fNumber:(float)arg3 focalLength:(float)arg4;	// IMP=0x00000000000411e5
+ (id)createRandomUChars:(id)arg1 rayCount:(int)arg2;	// IMP=0x00000000000410df
+ (id)createRandomValues:(id)arg1;	// IMP=0x0000000000040ffa
+     // Error parsing type: v28@0:8^{PTRandomDisk=[94{Half2=  }]i }16i24, name: initEquidistPoints:samplePatternCircles:
- (void).cxx_destruct;	// IMP=0x0000000000041a0d
- (int)detectDilatedEdges:(id)arg1 inDisparity:(id)arg2 tempEdges:(id)arg3 outEdges:(id)arg4 focusObject:(struct PTFocus)arg5 disparityDiffMinMax:(id)arg6;	// IMP=0x0000000000040a35
- (void)centerDisparityOnFocus:(id)arg1 inDisparity:(id)arg2 outDisparity:(id)arg3 focusObject:(struct PTFocus)arg4;	// IMP=0x000000000004088a
- (void)focusEdgeMask:(id)arg1 inDisparityDiff:(id)arg2 focusObject:(struct PTFocus)arg3 focusEdge:(struct PTFocusEdge)arg4 outFocusEdgeMask:(id)arg5;	// IMP=0x0000000000040713
- (void)interpolateRGBRadiusToDest:(id)arg1 renderRequest:(id)arg2 inRGBA:(id)arg3 inRGBRadius:(id)arg4 inRandomGauss:(id)arg5 bicubicSampling:(_Bool)arg6;	// IMP=0x0000000000040081
- (void)interpolateRGBRadiusUsingSourceToDest:(id)arg1 renderRequest:(id)arg2 inRGBRadius:(id)arg3 inRandomGauss:(id)arg4 bicubicSampling:(_Bool)arg5;	// IMP=0x000000000003f796
- (void)interpolateLumaRadiusToDest:(id)arg1 renderRequest:(id)arg2 inLumaSource:(id)arg3 inYuvRadius:(id)arg4;	// IMP=0x000000000003f10d
- (void)interpolateLumaRadius:(id)arg1 renderRequest:(id)arg2 inLumaSource:(id)arg3 inLumaRadius:(id)arg4 outLuma:(id)arg5;	// IMP=0x000000000003eeb6
- (id)sNLE;	// IMP=0x000000000003eea5
- (id)sNBE;	// IMP=0x000000000003ee94
- (id)initWithDevice:(id)arg1 library:(id)arg2 pipelineLibrary:(id)arg3;	// IMP=0x000000000003e94a

@end
