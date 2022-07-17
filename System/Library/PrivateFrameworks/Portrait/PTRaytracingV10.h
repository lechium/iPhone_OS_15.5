//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Portrait/RenderingIntegration-Protocol.h>

@class NSString, PTColor, PTPyramidYUV, PTRaytracingUtils, PTRaytracingV10RenderState, PTRenderDebugLayer;
@protocol MTLBuffer, MTLDeviceSPI, MTLLibrary, MTLPipelineLibrary, MTLTexture;

@interface PTRaytracingV10 : NSObject <RenderingIntegration>
{
    PTRaytracingV10RenderState *_renderState;	// 8 = 0x8
    PTColor *_portraitColor;	// 16 = 0x10
    PTRaytracingUtils *_raytracingUtils;	// 24 = 0x18
    PTRenderDebugLayer *_debugLayer;	// 32 = 0x20
    long long _debugRendering;	// 40 = 0x28
    PTPyramidYUV *_yuvPyramid;	// 48 = 0x30
    struct CGSize _disparitySize;	// 56 = 0x38
    struct CGSize _colorSize;	// 72 = 0x48
    id <MTLDeviceSPI> _device;	// 88 = 0x58
    id <MTLBuffer> _randomValues;	// 96 = 0x60
    id <MTLLibrary> _library;	// 104 = 0x68
    id <MTLPipelineLibrary> _pipelineLibrary;	// 112 = 0x70
    id <MTLTexture> _lumaRadiusTex;	// 120 = 0x78
    id <MTLTexture> _outColorLuma;	// 128 = 0x80
    id <MTLTexture> _outColorChroma;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x00000000000659a8
- (void)setResourceHeap:(id)arg1;	// IMP=0x00000000000659a2
- (unsigned long long)minimumResourceHeapSize;	// IMP=0x0000000000065997
- (int)renderContinuousWithSource:(id)arg1 renderRequest:(id)arg2;	// IMP=0x0000000000065336
- (int)prewarm;	// IMP=0x000000000006532e
- (id)initWithDevice:(id)arg1 library:(id)arg2 pipelineLibrary:(id)arg3 colorSize:(struct CGSize)arg4 disparitySize:(struct CGSize)arg5 debugRendering:(long long)arg6 verbose:(_Bool)arg7 gpuProfiling:(_Bool)arg8 config:(id)arg9 quality:(int)arg10;	// IMP=0x0000000000064f86

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
