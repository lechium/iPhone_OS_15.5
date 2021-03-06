//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PTUtil;
@protocol MTLComputePipelineState, MTLDeviceSPI, MTLLibrary, MTLTexture;

@interface BlurMapSmoothing : NSObject
{
    PTUtil *_portraitUtil;	// 8 = 0x8
    _Bool _shadersLoaded;	// 16 = 0x10
    struct CGSize _disparitySize;	// 24 = 0x18
    id <MTLDeviceSPI> _device;	// 40 = 0x28
    id <MTLLibrary> _library;	// 48 = 0x30
    id <MTLComputePipelineState> _smoothing_x_kernel;	// 56 = 0x38
    id <MTLComputePipelineState> _smoothing_y_kernel;	// 64 = 0x40
    struct blurmap_smoothing_params _config_params;	// 72 = 0x48
    id <MTLTexture> _intermediateTexture;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000028037
- (int)enqueueSmoothingUsingForBlurMap:(id)arg1 outputBlurMap:(id)arg2 commandBuffer:(id)arg3;	// IMP=0x0000000000027f5d
- (int)enqueueSmoothingPassWithCommandBuffer:(id)arg1 inputBlurMap:(id)arg2 referenceBlurMap:(id)arg3 intermediateTex:(id)arg4 outputBlurMap:(id)arg5 iterationIndex:(int)arg6;	// IMP=0x0000000000027c2b
- (void)dealloc;	// IMP=0x0000000000027bfc
- (int)loadShadersWithLibrary:(id)arg1;	// IMP=0x0000000000027b0c
- (id)initWithDevice:(id)arg1 library:(id)arg2 disparitySize:(struct CGSize)arg3 debugRendering:(long long)arg4 verbose:(_Bool)arg5 gpuProfiling:(_Bool)arg6 config:(id)arg7;	// IMP=0x000000000002792f

@end

