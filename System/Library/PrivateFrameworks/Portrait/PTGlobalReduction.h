//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, PTMTLDropHints;
@protocol MTLComputePipelineState, MTLDeviceSPI, MTLLibrary, MTLTexture;

@interface PTGlobalReduction : NSObject
{
    id <MTLDeviceSPI> _device;	// 8 = 0x8
    id <MTLLibrary> _library;	// 16 = 0x10
    id <MTLTexture> _texPing;	// 24 = 0x18
    id <MTLTexture> _texPong;	// 32 = 0x20
    NSArray *_simdTextures;	// 40 = 0x28
    NSArray *_simdMinMaxTextures;	// 48 = 0x30
    id <MTLComputePipelineState> _parallelReductionTextureSimd;	// 56 = 0x38
    id <MTLComputePipelineState> _parallelReductionTextureMinMaxSimd;	// 64 = 0x40
    id <MTLComputePipelineState> _parallelReductionAverage;	// 72 = 0x48
    id <MTLComputePipelineState> _parallelReductionMax;	// 80 = 0x50
    id <MTLComputePipelineState> _parallelReductionMin;	// 88 = 0x58
    PTMTLDropHints *_dropHints;	// 96 = 0x60
    CDStruct_da2e99ad simdReductionThreadsPerGroup;	// 104 = 0x68
    short simdReductionThreadGroups[2];	// 128 = 0x80
    _Bool _supportGpuSIMD;	// 132 = 0x84
}

- (void).cxx_destruct;	// IMP=0x000000000003577c
- (void)parallelReductionTextureMinMaxSimd:(id)arg1 inTexture:(id)arg2 globalBuffer:(id)arg3;	// IMP=0x00000000000354b3
- (void)parallelReductionTextureSimd:(id)arg1 inTexture:(id)arg2 globalBuffer:(id)arg3 offset:(int)arg4 reductionType:(int)arg5 factor:(float)arg6;	// IMP=0x0000000000035183
- (void)parallelReduction:(id)arg1 inTexture:(id)arg2 globalBuffer:(id)arg3 offset:(int)arg4 pipelineState:(id)arg5 reductionType:(int)arg6 factor:(float)arg7;	// IMP=0x0000000000034cf1
- (void)parallelReductionMinMax:(id)arg1 inTexture:(id)arg2 globalMinMaxBuffer:(id)arg3;	// IMP=0x0000000000034bd3
- (void)parallelReductionMin:(id)arg1 inTexture:(id)arg2 globalMinBuffer:(id)arg3;	// IMP=0x0000000000034bac
- (void)parallelReductionMax:(id)arg1 inTexture:(id)arg2 globalMaxBuffer:(id)arg3;	// IMP=0x0000000000034b85
- (void)parallelReductionAverage:(id)arg1 inTexture:(id)arg2 outGlobalAverage:(id)arg3;	// IMP=0x0000000000034a95
- (id)initWithDevice:(id)arg1 library:(id)arg2 pipelineLibrary:(id)arg3 textureSize:(struct CGSize)arg4 pixelFormat:(unsigned long long)arg5;	// IMP=0x00000000000342bd
- (id)initWithDevice:(id)arg1 library:(id)arg2 pipelineLibrary:(id)arg3 textureSize:(struct CGSize)arg4;	// IMP=0x00000000000342a2

@end

