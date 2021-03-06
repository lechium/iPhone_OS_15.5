//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SceneKit/SCNMaterialPropertyTextureProviderHelper-Protocol.h>

@class NSString;
@protocol MTLTexture, SCNMaterialPropertyTextureProvider;

__attribute__((visibility("hidden")))
@interface SCNMaterialPropertyTextureProviderSource <SCNMaterialPropertyTextureProviderHelper>
{
    id <MTLTexture> _texture;	// 8 = 0x8
    struct __C3DEngineContext *_engineContext;	// 16 = 0x10
    id <SCNMaterialPropertyTextureProvider> _textureProvider;	// 24 = 0x18
}

- (id)cachedTextureWithURL:(id)arg1 token:(id *)arg2;	// IMP=0x00000000000bee40
- (void)renderWithEngineContext:(struct __C3DEngineContext *)arg1 textureSampler:(struct __C3DTextureSampler *)arg2 nextFrameTime:(double *)arg3;	// IMP=0x00000000000bed9d
- (id)metalTextureWithEngineContext:(struct __C3DEngineContext *)arg1 textureSampler:(struct __C3DTextureSampler *)arg2 nextFrameTime:(double *)arg3;	// IMP=0x00000000000beca9
- (void)cleanup:(struct __C3DRendererContext *)arg1;	// IMP=0x00000000000beca3
- (void)connectToProxy:(struct __C3DImageProxy *)arg1;	// IMP=0x00000000000bebf4
@property(retain, nonatomic) id <SCNMaterialPropertyTextureProvider> textureProvider;
- (void)dealloc;	// IMP=0x00000000000beb2a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

