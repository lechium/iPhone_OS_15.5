//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ARUICelebrationsRenderer, ARUIRingsRenderPipelineFactory, ARUIRingsRenderer, ARUISpritesRenderer;
@protocol MTLCommandQueue, MTLDeviceSPI;

@interface ARUIRenderer : NSObject
{
    id <MTLDeviceSPI> _device;	// 8 = 0x8
    id <MTLCommandQueue> _commandQueue;	// 16 = 0x10
    ARUIRingsRenderPipelineFactory *_ringsRenderPipelineFactory;	// 24 = 0x18
    ARUIRingsRenderer *_ringsRenderer;	// 32 = 0x20
    ARUISpritesRenderer *_spritesRenderer;	// 40 = 0x28
    ARUICelebrationsRenderer *_celebrationsRenderer;	// 48 = 0x30
    unsigned long long _renderStyle;	// 56 = 0x38
}

+ (void)load;	// IMP=0x0000000000016c18
- (void).cxx_destruct;	// IMP=0x0000000000003e1a
@property(readonly, nonatomic) unsigned long long renderStyle; // @synthesize renderStyle=_renderStyle;
- (id)snapshotRingGroupControllers:(id)arg1 withSize: /* Error: Ran out of types for this method. */;	// IMP=0x0000000000003b17
- (void)renderRingGroupControllers:(id)arg1 withSize:(id)arg2 intoTexture:(id)arg3 withDrawable:(_Bool)arg4 waitUntilCompleted:(CDUnknownBlockType)arg5 completionHandler: /* Error: Ran out of types for this method. */;	// IMP=0x000000000000374b
- (void)clearCaches;	// IMP=0x0000000000003735
- (id)_snapshotRings:(id)arg1 spriteSheet:(id)arg2 withContext:(id)arg3;	// IMP=0x00000000000033eb
- (id)snapshotRings:(id)arg1 spriteSheet:(id)arg2 withContext:(id)arg3;	// IMP=0x00000000000033d9
- (id)snapshotRings:(id)arg1 withContext:(id)arg2;	// IMP=0x00000000000033c2
- (void)_renderRings:(id)arg1 commandEncoder:(id)arg2 passDescriptor:(id)arg3 commandBuffer:(id)arg4 withContext:(id)arg5;	// IMP=0x0000000000003181
- (void)_renderRings:(id)arg1 passDescriptor:(id)arg2 commandBuffer:(id)arg3 withContext:(id)arg4;	// IMP=0x00000000000030aa
- (void)_renderRings:(id)arg1 spriteSheet:(id)arg2 intoTexture:(id)arg3 presentingDrawable:(id)arg4 withContext:(id)arg5 waitUntilCompleted:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x0000000000002c9f
- (void)renderRings:(id)arg1 spriteSheet:(id)arg2 intoDrawable:(id)arg3 withContext:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000002bb3
- (void)renderRings:(id)arg1 spriteSheet:(id)arg2 intoDrawable:(id)arg3 withContext:(id)arg4;	// IMP=0x0000000000002ade
- (void)renderRings:(id)arg1 intoDrawable:(id)arg2 withContext:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000002a0f
- (void)renderRings:(id)arg1 intoDrawable:(id)arg2 withContext:(id)arg3;	// IMP=0x000000000000295f
- (id)ringsRenderPipelineConfigurationForRings:(id)arg1 context:(id)arg2;	// IMP=0x0000000000002409
- (id)renderPipelineFactoryWithDevice:(id)arg1 library:(id)arg2;	// IMP=0x000000000000237e
- (id)renderPipelineFactoryWithDeviceSPI:(id)arg1 librarySPI:(id)arg2;	// IMP=0x00000000000022f3
- (id)initWithRenderStyle:(unsigned long long)arg1 commandQueue:(id)arg2;	// IMP=0x0000000000002128
- (id)initWithRenderStyle:(unsigned long long)arg1;	// IMP=0x0000000000002114
- (id)initWithCommandQueue:(id)arg1;	// IMP=0x00000000000020fd
- (id)init;	// IMP=0x00000000000020e7
- (void)sim_renderRings:(id)arg1 spriteSheet:(id)arg2 intoTexture:(id)arg3 presentingDrawable:(id)arg4 withContext:(id)arg5 waitUntilCompleted:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x0000000000016d03
- (id)sim_snapshotRings:(id)arg1 spriteSheet:(id)arg2 withContext:(id)arg3;	// IMP=0x0000000000016cfb

@end
