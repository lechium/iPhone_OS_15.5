//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Portrait/RenderingIntegration-Protocol.h>

@class NSDictionary, NSString, PTColor, PTPyramidRGB, PTRaytracingUtils, PTRaytracingV14RenderState, PTRenderDebugLayer, PTUtil;
@protocol MTLDeviceSPI, MTLLibrary, MTLPipelineLibrary;

@interface PTRaytracingV14 : NSObject <RenderingIntegration>
{
    PTRaytracingV14RenderState *_renderState;	// 8 = 0x8
    NSDictionary *_config;	// 16 = 0x10
    PTColor *_portraitColor;	// 24 = 0x18
    PTPyramidRGB *_rgbaPyramid;	// 32 = 0x20
    PTRenderDebugLayer *_debugLayer;	// 40 = 0x28
    long long _debugRendering;	// 48 = 0x30
    PTRaytracingUtils *_raytracingUtils;	// 56 = 0x38
    PTUtil *_util;	// 64 = 0x40
    struct CGSize _disparitySize;	// 72 = 0x48
    struct CGSize _colorSize;	// 88 = 0x58
    id <MTLDeviceSPI> _device;	// 104 = 0x68
    id <MTLLibrary> _library;	// 112 = 0x70
    id <MTLPipelineLibrary> _pipelineLibrary;	// 120 = 0x78
    _Bool _injectedRGBAPyramid;	// 128 = 0x80
    _Bool _bicubicUpscale;	// 129 = 0x81
    struct PTFocusEdge _focusEdge;	// 132 = 0x84
}

- (void).cxx_destruct;	// IMP=0x000000000003b56f
- (void)setResourceHeap:(id)arg1;	// IMP=0x000000000003b569
- (unsigned long long)minimumResourceHeapSize;	// IMP=0x000000000003b55e
- (int)renderContinuousWithSource:(id)arg1 renderRequest:(id)arg2;	// IMP=0x000000000003a014
- (int)prewarm;	// IMP=0x000000000003a00c
- (id)initWithDevice:(id)arg1 library:(id)arg2 pipelineLibrary:(id)arg3 colorSize:(struct CGSize)arg4 disparitySize:(struct CGSize)arg5 debugRendering:(long long)arg6 verbose:(_Bool)arg7 gpuProfiling:(_Bool)arg8 config:(id)arg9 quality:(int)arg10;	// IMP=0x0000000000039c1a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

