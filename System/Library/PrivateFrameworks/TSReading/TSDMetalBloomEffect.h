//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TSDMetalRenderTarget, TSDMetalShader;
@protocol TSDMTLDataBuffer;

@interface TSDMetalBloomEffect : NSObject
{
    struct CGSize _effectSize;	// 8 = 0x8
    struct CGSize _blurBufferSize;	// 24 = 0x18
    id <TSDMTLDataBuffer> _dataBuffer;	// 40 = 0x28
    id <TSDMTLDataBuffer> _blurDataBuffer;	// 48 = 0x30
    TSDMetalRenderTarget *_downSampleRenderTarget;	// 56 = 0x38
    TSDMetalRenderTarget *_horizontalBlurRenderTarget;	// 64 = 0x40
    TSDMetalRenderTarget *_verticalBlurRenderTarget;	// 72 = 0x48
    TSDMetalShader *_blurShader;	// 80 = 0x50
    TSDMetalShader *_bloomShader;	// 88 = 0x58
    TSDMetalShader *_fboTransferShader;	// 96 = 0x60
    struct {
        CDStruct_14d5dc5e MVPMatrix;
    } _blurVertexUniforms;	// 112 = 0x70
    struct {
        _Bool TextureSize__IsHorizontal;
    } _blurFragmentUniforms;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x000000000025853c
- (void)drawBloomEffectWithTexture:(id)arg1 metalContext:(id)arg2 encoder:(id)arg3 MVPMatrix:(struct CATransform3D)arg4 bloomAmount:(double)arg5;	// IMP=0x000000000025839e
- (id)p_blurTextureWithTexture:(id)arg1 metalContext:(id)arg2 MVPMatrix:(struct CATransform3D)arg3;	// IMP=0x0000000000258039
- (void)p_setupBuffersWithMetalContext:(id)arg1;	// IMP=0x0000000000257e30
- (void)p_setupShadersWithMetalContext:(id)arg1;	// IMP=0x0000000000257ba9
- (void)teardown;	// IMP=0x0000000000257b2e
- (id)initWithEffectSize:(struct CGSize)arg1 blurScale:(double)arg2 metalContext:(id)arg3;	// IMP=0x0000000000257966

@end

