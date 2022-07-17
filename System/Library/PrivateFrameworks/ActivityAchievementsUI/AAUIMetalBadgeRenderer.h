//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AAUIBadgeModelConfiguration, CADisplayLink, CAMetalLayer, MISSING_TYPE, MTLRenderPassDescriptor, UIImage;
@protocol MTLBuffer, MTLCommandQueue, MTLDepthStencilState, MTLDevice, MTLRenderPipelineState, MTLTexture;

@interface AAUIMetalBadgeRenderer : NSObject
{
    CAMetalLayer *_metalLayer;	// 8 = 0x8
    CADisplayLink *_displayLink;	// 16 = 0x10
    _Bool _useEarnedShader;	// 24 = 0x18
    id <MTLDevice> _device;	// 32 = 0x20
    id <MTLCommandQueue> _commandQueue;	// 40 = 0x28
    id <MTLRenderPipelineState> _shaderRenderPipeline;	// 48 = 0x30
    id <MTLRenderPipelineState> _shaderFaceRenderPipeline;	// 56 = 0x38
    id <MTLRenderPipelineState> _shaderFaceInlayRenderPipeline;	// 64 = 0x40
    id <MTLRenderPipelineState> _shaderFaceTriColorRenderPipeline;	// 72 = 0x48
    id <MTLDepthStencilState> _depthStencilState;	// 80 = 0x50
    CDStruct_14d5dc5e _viewProjectionMatrix;	// 96 = 0x60
    CDStruct_14d5dc5e _modelTransform;	// 160 = 0xa0
    CDStruct_14d5dc5e _environmentMatrix;	// 224 = 0xe0
    MISSING_TYPE *_cameraPosition;	// 288 = 0x120
    struct {
        float color__enamelColor__enamelTriColor1__enamelTriColor2__enamelTriColor3__useTexture;
        float useTextureShine;
        _Bool useTwoToneEnamel;
        _Bool useEnamelAlpha;
        _Bool useFullColorEnamel;
    } _uniforms;	// 304 = 0x130
    id <MTLTexture> _fleckNormalTexture;	// 400 = 0x190
    id <MTLTexture> _environmentTexture;	// 408 = 0x198
    id <MTLTexture> _backTexture;	// 416 = 0x1a0
    id <MTLTexture> _colorTexture;	// 424 = 0x1a8
    MTLRenderPassDescriptor *_renderPassDesc;	// 432 = 0x1b0
    id <MTLTexture> _colorAttachmentMSAA;	// 440 = 0x1b8
    id <MTLTexture> _depthAttachmentMSAA;	// 448 = 0x1c0
    MISSING_TYPE *_attachmentRasterSize;	// 456 = 0x1c8
    float _rasterScaleFactor;	// 464 = 0x1d0
    int _numGroups;	// 468 = 0x1d4
    int *_groupTriangleCounts;	// 472 = 0x1d8
    int *_materialIndices;	// 480 = 0x1e0
    id <MTLBuffer> _verticesBuffer;	// 488 = 0x1e8
    int _numVertices;	// 496 = 0x1f0
    id <MTLBuffer> _indexBuffer;	// 504 = 0x1f8
    int _numIndices;	// 512 = 0x200
    CDUnknownBlockType _stateUpdateBlock;	// 520 = 0x208
    AAUIBadgeModelConfiguration *_configuration;	// 528 = 0x210
    UIImage *_backTextureImage;	// 536 = 0x218
}

+ (id)_commandQueueForDevice:(id)arg1;	// IMP=0x0000000000001caf
+ (double)screenScaleMaximum;	// IMP=0x0000000000001a22
+ (double)screenScaleMultiple;	// IMP=0x0000000000001a14
- (void).cxx_destruct;	// IMP=0x0000000000004b10
@property(retain, nonatomic) UIImage *backTextureImage; // @synthesize backTextureImage=_backTextureImage;
@property(retain, nonatomic) AAUIBadgeModelConfiguration *configuration; // @synthesize configuration=_configuration;
@property(copy, nonatomic) CDUnknownBlockType stateUpdateBlock; // @synthesize stateUpdateBlock=_stateUpdateBlock;
- (void)cleanupAfterSnapshot;	// IMP=0x0000000000004a18
- (id)snapshot;	// IMP=0x0000000000004706
- (void)_drawFrameWithDrawable:(id)arg1;	// IMP=0x0000000000004552
- (void)_drawIntoRenderEncoder:(id)arg1;	// IMP=0x0000000000004116
- (void)_setupCommonBindingsForRenderEncoder:(id)arg1 pipelineState:(id)arg2;	// IMP=0x0000000000004008
- (void)_drawBadgeFrameCallback;	// IMP=0x0000000000003f26
- (void)_updateModelTransformForBadge:(id)arg1;	// IMP=0x0000000000003b77
- (void)resizeBadgeForCurrentViewSize;	// IMP=0x00000000000034e2
- (void)_setupRenderPipeline;	// IMP=0x0000000000002c5d
- (void)_setupTextures;	// IMP=0x00000000000028f7
- (void)_loadBadgeModelWithConfiguration:(id)arg1;	// IMP=0x000000000000220c
- (void)_setupAttributes;	// IMP=0x0000000000001ece
@property(nonatomic, getter=isPaused) _Bool paused;
- (void)dealloc;	// IMP=0x0000000000001c46
- (void)_cleanupConfiguration;	// IMP=0x0000000000001bf4
- (id)initWithCAMetalLayer:(id)arg1 useEarnedShader:(_Bool)arg2;	// IMP=0x0000000000001a30

@end
