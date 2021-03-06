//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLKUIMetalResourcePool, NSBundle;
@protocol MTLDevice, MTLTexture;

@interface NUNIRenderer : NSObject
{
    id <MTLDevice> _mtlDevice;	// 8 = 0x8
    NSBundle *_bundle;	// 16 = 0x10
    struct NUNIRendererResources _resources;	// 24 = 0x18
    unsigned long long _viewMtlPixelFormat;	// 80 = 0x50
    struct _NUNIGeometryRange _octahedronGeomRange;	// 88 = 0x58
    struct _NUNIGeometryRange _quadGeomRange;	// 96 = 0x60
    union float4x4 _globeLinesMatrix;	// 112 = 0x70
    CLKUIMetalResourcePool *_globeLineTextureResourcePool;	// 176 = 0xb0
    id <MTLTexture> _globeLinesCurrentTexture;	// 184 = 0xb8
    struct NUNIRendererState _state;	// 192 = 0xc0
}

+ (void)_deallocInstanceWithPixelFormat:(unsigned long long)arg1;	// IMP=0x00000000000059d9
+ (id)sharedInstanceWithPixelFormat:(unsigned long long)arg1;	// IMP=0x000000000000590e
- (void).cxx_destruct;	// IMP=0x0000000000009922
- (void)_asyncDeallocInstance;	// IMP=0x00000000000097b6
- (void)_initPrograms;	// IMP=0x00000000000091b0
- (void)_createPipelineForProgramType:(unsigned long long)arg1 fromLibrary:(id)arg2 librarySPI:(id)arg3;	// IMP=0x0000000000008d38
- (void)_updateStateWithScene:(id)arg1 viewport:(struct NUNIViewport)arg2 resources:(id)arg3;	// IMP=0x00000000000085ef
- (void)renderOffscreenWithScene:(id)arg1 viewport:(struct NUNIViewport)arg2 resources:(id)arg3 commandBuffer:(id)arg4;	// IMP=0x00000000000081a4
- (void)renderWithScene:(id)arg1 viewport:(struct NUNIViewport)arg2 resources:(id)arg3 encoder:(id)arg4;	// IMP=0x0000000000007c9d
- (void)drawSpriteWithEncoder:(id)arg1 state:(const struct NUNIRendererState *)arg2 spheroid:(id)arg3 resources:(id)arg4;	// IMP=0x000000000000793b
- (id)_renderGlobeLinesWithCommandBuffer:(id)arg1 state:(const struct NUNIRendererState *)arg2 spheroid:(id)arg3 resources:(id)arg4;	// IMP=0x0000000000007355
- (void)drawOffscreen3DWithCommandBuffer:(id)arg1 state:(const struct NUNIRendererState *)arg2 spheroid:(id)arg3 resources:(id)arg4;	// IMP=0x00000000000071ee
- (void)draw3DWithEncoder:(id)arg1 state:(const struct NUNIRendererState *)arg2 spheroid:(id)arg3 resources:(id)arg4;	// IMP=0x0000000000005fa4
- (void)bindAssetArt:(unsigned long long)arg1 withEncoder:(id)arg2 resources:(id)arg3 toSlot:(unsigned long long)arg4;	// IMP=0x0000000000005ee8
- (void)_initHemi;	// IMP=0x0000000000005cb6
- (void)_initDepthStencilState;	// IMP=0x0000000000005cb0
- (void)dealloc;	// IMP=0x0000000000005c2e
- (id)initWithPixelFormat:(unsigned long long)arg1;	// IMP=0x0000000000005b00

@end

