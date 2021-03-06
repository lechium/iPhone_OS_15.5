//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol MTLCommandBuffer, MTLCommandQueue, MTLComputeCommandEncoder, MTLRenderCommandEncoder, MTLTexture;

@interface PKMetalRenderState : NSObject
{
    NSMutableArray *_commandBuffers;	// 8 = 0x8
    NSMutableArray *_purgeableFramebuffers;	// 16 = 0x10
    _Bool _liveRendering;	// 24 = 0x18
    _Bool _waitUntilCompletedOnCommit;	// 25 = 0x19
    _Bool _msaaRendering;	// 26 = 0x1a
    _Bool _renderOnPaper;	// 27 = 0x1b
    _Bool _needRenderMask;	// 28 = 0x1c
    _Bool _isRestartingForSimulator;	// 29 = 0x1d
    id <MTLCommandQueue> _commandQueue;	// 32 = 0x20
    id <MTLCommandBuffer> _commandBuffer;	// 40 = 0x28
    id <MTLCommandBuffer> _computeCommandBuffer;	// 48 = 0x30
    id <MTLCommandBuffer> _maskCommandBuffer;	// 56 = 0x38
    id <MTLRenderCommandEncoder> _renderEncoder;	// 64 = 0x40
    id <MTLComputeCommandEncoder> _computeEncoder;	// 72 = 0x48
    id <MTLRenderCommandEncoder> _maskRenderEncoder;	// 80 = 0x50
    unsigned long long _vertexEncodeCount;	// 88 = 0x58
    id <MTLTexture> _destinationTexture;	// 96 = 0x60
    unsigned long long _destinationColorAttachmentIndex;	// 104 = 0x68
    long long _sixChannelRenderMode;	// 112 = 0x70
    id <MTLTexture> _sixChannelContentTexture;	// 120 = 0x78
    CDStruct_5f3a0cd7 _scissorRect;	// 128 = 0x80
    struct CGAffineTransform _renderTextureTexCoordTransform;	// 160 = 0xa0
}

+ (void)renderTargetBarrierForRenderEncoder:(id)arg1;	// IMP=0x00000000000a7121
- (void).cxx_destruct;	// IMP=0x00000000000a7096
- (void)dealloc;	// IMP=0x00000000000a6594

@end

