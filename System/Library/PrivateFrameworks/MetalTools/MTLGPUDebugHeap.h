//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MTLGPUDebugHeap
{
    _Bool _enableResourceUsageValidation;	// 36 = 0x24
    struct os_unfair_lock_s _bufferLock;	// 40 = 0x28
    struct vector<unsigned int, std::allocator<unsigned int>> _bufferIndices;	// 48 = 0x30
    struct os_unfair_lock_s _textureLock;	// 72 = 0x48
    struct vector<unsigned int, std::allocator<unsigned int>> _textureIndices;	// 80 = 0x50
}

- (id).cxx_construct;	// IMP=0x000000000006d848
- (void).cxx_destruct;	// IMP=0x000000000006d7fe
- (void)enumerateTextureIndices:(CDUnknownBlockType)arg1;	// IMP=0x000000000006d799
- (void)enumerateBufferIndices:(CDUnknownBlockType)arg1;	// IMP=0x000000000006d734
- (void)notifyResourceReleasing:(id)arg1;	// IMP=0x000000000006d5df
- (id)newTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2;	// IMP=0x000000000006d3df
- (id)newTextureWithDescriptor:(id)arg1;	// IMP=0x000000000006d1df
- (id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 offset:(unsigned long long)arg3;	// IMP=0x000000000006cfdf
- (id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000006cddf
- (id)initWithHeap:(id)arg1 descriptor:(id)arg2 device:(id)arg3;	// IMP=0x000000000006cd72

@end

