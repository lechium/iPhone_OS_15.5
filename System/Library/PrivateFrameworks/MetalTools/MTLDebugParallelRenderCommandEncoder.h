//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MTLRenderPassDescriptor;

@interface MTLDebugParallelRenderCommandEncoder
{
    unsigned int _unknownStoreActions;	// 36 = 0x24
    struct atomic<unsigned long long> _attachmentWriteMask;	// 40 = 0x28
    MTLRenderPassDescriptor *_descriptor;	// 48 = 0x30
}

@property(readonly, copy, nonatomic) MTLRenderPassDescriptor *descriptor; // @synthesize descriptor=_descriptor;
- (void)filterCounterRangeWithFirstBatch:(unsigned int)arg1 lastBatch:(unsigned int)arg2 filterIndex:(unsigned int)arg3;	// IMP=0x000000000007ed0c
- (id)description;	// IMP=0x000000000007ecf8
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x000000000007ec62
- (void)endEncoding;	// IMP=0x000000000007e87d
- (void)setStencilStoreActionOptions:(unsigned long long)arg1;	// IMP=0x000000000007e7d9
- (void)setDepthStoreActionOptions:(unsigned long long)arg1;	// IMP=0x000000000007e735
- (void)setColorStoreActionOptions:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000007e64f
- (void)setStencilStoreAction:(unsigned long long)arg1;	// IMP=0x000000000007e5ab
- (void)setDepthStoreAction:(unsigned long long)arg1;	// IMP=0x000000000007e507
- (void)setColorStoreAction:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000007e421
- (id)renderCommandEncoder;	// IMP=0x000000000007e386
- (id)sampledRenderCommandEncoderWithProgramInfoBuffer:(CDUnion_c6e49ed4 *)arg1 capacity:(unsigned long long)arg2;	// IMP=0x000000000007e2d1
- (void)mergeAttachmentWriteMask:(unsigned long long)arg1;	// IMP=0x000000000007e2bf
- (void)dealloc;	// IMP=0x000000000007e27d
- (id)initWithBaseRenderPass:(id)arg1 commandBuffer:(id)arg2 descriptor:(id)arg3;	// IMP=0x000000000007e172

@end

