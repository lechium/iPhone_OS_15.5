//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXGMetalSpriteTexture-Protocol.h>

@class MISSING_TYPE, NSIndexSet, NSString, PXGColorProgram, PXGMetalTextureCache;
@protocol MTLTexture;

@interface PXGMetalImageTexture <PXGMetalSpriteTexture>
{
    _Bool _isOpaque;	// 8 = 0x8
    int _shaderFlags;	// 12 = 0xc
    id <MTLTexture> _texture;	// 16 = 0x10
    id <MTLTexture> _chromaTexture;	// 24 = 0x18
    PXGColorProgram *_colorProgram;	// 32 = 0x20
    long long _renderPipelineIndex;	// 40 = 0x28
    PXGMetalTextureCache *_textureCache;	// 48 = 0x30
    MISSING_TYPE *_orientationTransform;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000005e6f58
@property(nonatomic) __weak PXGMetalTextureCache *textureCache; // @synthesize textureCache=_textureCache;
@property(readonly, nonatomic) int shaderFlags; // @synthesize shaderFlags=_shaderFlags;
@property(readonly, nonatomic) _Bool isOpaque; // @synthesize isOpaque=_isOpaque;
@property(nonatomic) long long renderPipelineIndex; // @synthesize renderPipelineIndex=_renderPipelineIndex;
@property(readonly, nonatomic) PXGColorProgram *colorProgram; // @synthesize colorProgram=_colorProgram;
@property(readonly, nonatomic) id <MTLTexture> chromaTexture; // @synthesize chromaTexture=_chromaTexture;
@property(readonly, nonatomic) id <MTLTexture> texture; // @synthesize texture=_texture;
- (void)cleanupAfterRender:(long long)arg1;	// IMP=0x00000000005e6eb0
- (void)prepareForRender:(long long)arg1;	// IMP=0x00000000005e6eaa
@property(readonly, nonatomic) _Bool isCaptureTexture;
@property(readonly, nonatomic) _Bool isAtlas;
@property(readonly, nonatomic) int presentationType;
@property(readonly, nonatomic) long long estimatedByteSize;
@property(readonly, nonatomic) struct CGSize pixelSize;
- (MISSING_TYPE *)orientationTransform;	// IMP=0x00000000005e6de4
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x00000000005e6ca9
- (id)init;	// IMP=0x00000000005e6c2f
- (id)initWithTexture:(id)arg1 chromaTexture:(id)arg2 colorProgram:(id)arg3 isOpaque:(_Bool)arg4 shaderFlags:(int)arg5 orientationTransform: /* Error: Ran out of types for this method. */;	// IMP=0x00000000005e698a
- (id)initWithTexture:(id)arg1 colorProgram:(id)arg2 isOpaque:(_Bool)arg3 shaderFlags:(int)arg4 orientationTransform: /* Error: Ran out of types for this method. */;	// IMP=0x00000000005e6960

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) _Bool hasSprites;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) struct CGImage *imageRepresentation;
@property(readonly, nonatomic) _Bool isDegraded;
@property(readonly, nonatomic) unsigned int spriteCount;
@property(readonly, nonatomic) NSIndexSet *spriteIndexes;
@property(readonly) Class superclass;

@end

