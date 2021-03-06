//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MTLAttributeDescriptorArrayInternal, MTLBufferLayoutDescriptorArrayInternal;

__attribute__((visibility("hidden")))
@interface MTLStageInputOutputDescriptorInternal
{
    MTLBufferLayoutDescriptorArrayInternal *_vertexBufferArray;	// 8 = 0x8
    MTLAttributeDescriptorArrayInternal *_attributeArray;	// 16 = 0x10
    unsigned long long _indexBufferIndex;	// 24 = 0x18
    unsigned long long _indexType;	// 32 = 0x20
}

+ (id)vertexDescriptor;	// IMP=0x0000000000004e4f
- (_Bool)validateWithVertexFunction:(id)arg1 error:(id *)arg2 renderPipelineDescriptor:(id)arg3;	// IMP=0x0000000000005768
- (id)newSerializedDescriptor;	// IMP=0x0000000000005299
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000050a3
- (unsigned long long)hash;	// IMP=0x0000000000004f78
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000004e68
- (void)reset;	// IMP=0x0000000000004db0
- (id)description;	// IMP=0x0000000000004d9c
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x0000000000004615
- (void)dealloc;	// IMP=0x00000000000045bd
- (void)setIndexBufferIndex:(unsigned long long)arg1;	// IMP=0x00000000000045ac
- (unsigned long long)indexBufferIndex;	// IMP=0x000000000000459b
- (void)setIndexType:(unsigned long long)arg1;	// IMP=0x000000000000458a
- (unsigned long long)indexType;	// IMP=0x0000000000004579
- (id)attributes;	// IMP=0x0000000000004568
- (id)layouts;	// IMP=0x0000000000004557
- (id)init;	// IMP=0x00000000000044ed

@end

