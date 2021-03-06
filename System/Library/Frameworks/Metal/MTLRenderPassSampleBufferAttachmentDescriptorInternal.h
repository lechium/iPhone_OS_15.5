//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface MTLRenderPassSampleBufferAttachmentDescriptorInternal
{
    struct MTLRenderPassSampleBufferAttachmentDescriptorPrivate _private;	// 8 = 0x8
}

- (unsigned long long)hash;	// IMP=0x000000000008eedd
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000008ee4a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000008edf3
- (unsigned long long)endOfFragmentSampleIndex;	// IMP=0x000000000008ede1
- (void)setEndOfFragmentSampleIndex:(unsigned long long)arg1;	// IMP=0x000000000008edcf
- (unsigned long long)startOfFragmentSampleIndex;	// IMP=0x000000000008edbd
- (void)setStartOfFragmentSampleIndex:(unsigned long long)arg1;	// IMP=0x000000000008edab
- (unsigned long long)endOfVertexSampleIndex;	// IMP=0x000000000008ed99
- (void)setEndOfVertexSampleIndex:(unsigned long long)arg1;	// IMP=0x000000000008ed87
- (unsigned long long)startOfVertexSampleIndex;	// IMP=0x000000000008ed75
- (void)setStartOfVertexSampleIndex:(unsigned long long)arg1;	// IMP=0x000000000008ed63
- (id)sampleBuffer;	// IMP=0x000000000008ed52
- (void)setSampleBuffer:(id)arg1;	// IMP=0x000000000008ed14
- (const struct MTLRenderPassSampleBufferAttachmentDescriptorPrivate *)_descriptorPrivate;	// IMP=0x000000000008ed04
- (void)dealloc;	// IMP=0x000000000008ecc2
- (id)init;	// IMP=0x000000000008ec7c

@end

