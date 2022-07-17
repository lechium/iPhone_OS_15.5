//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPSImageBilinearScale;
@protocol MTLCommandQueue, MTLComputePipelineState, MTLDevice, MTLTexture;

@interface VCPSpillmapMetalSession : NSObject
{
    id <MTLDevice> _device;	// 8 = 0x8
    id <MTLCommandQueue> _commandQueue;	// 16 = 0x10
    id <MTLComputePipelineState> _colorspaceConversion;	// 24 = 0x18
    MPSImageBilinearScale *_bilinearScale;	// 32 = 0x20
    unsigned int _sourceFormat;	// 40 = 0x28
    unsigned long long _sourceWidth;	// 48 = 0x30
    unsigned long long _sourceHeight;	// 56 = 0x38
    unsigned long long _sourceProtectionOption;	// 64 = 0x40
    unsigned int _spillWidth;	// 72 = 0x48
    unsigned int _spillHeight;	// 76 = 0x4c
    struct CF<__CFDictionary *> _spillBufferAttributes;	// 80 = 0x50
    struct CF<__CVMetalTextureCache *> _textureCacheLuma;	// 88 = 0x58
    struct CF<__CVMetalTextureCache *> _textureCacheChroma;	// 96 = 0x60
    id <MTLTexture> _textureBGRA;	// 104 = 0x68
    id <MTLTexture> _textureSpillmap;	// 112 = 0x70
}

- (id).cxx_construct;	// IMP=0x000000000000c8bc
- (void).cxx_destruct;	// IMP=0x000000000000c84d
- (int)createPixelBuffer:(struct __CVBuffer **)arg1;	// IMP=0x000000000000c81a
- (int)calculateDrmSpillmapMetal:(struct __CVBuffer *)arg1;	// IMP=0x000000000000c620
- (int)convertYuv420:(struct __CVBuffer *)arg1 withCommandBuffer:(id)arg2;	// IMP=0x000000000000c3da
- (id)loadTexture:(struct __CVBuffer *)arg1 withAttributes:(id)arg2 forPlane:(unsigned int)arg3;	// IMP=0x000000000000c2c8
- (int)configureTexturesAndAttributes:(struct __IOSurface *)arg1 Width:(int)arg2 Height:(int)arg3;	// IMP=0x000000000000bd45
- (int)loadSurfaceInfo:(struct __IOSurface *)arg1;	// IMP=0x000000000000bc9d
- (int)configureGPU;	// IMP=0x000000000000b8a8
- (id)init;	// IMP=0x000000000000b826

@end
