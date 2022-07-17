//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface MTLRenderPassColorAttachmentDescriptorInternal
{
    struct MTLRenderPassAttachmentDescriptorPrivate _private;	// 8 = 0x8
}

+ (id)attachmentDescriptor;	// IMP=0x000000000008cd10
- (const struct MTLRenderPassAttachmentDescriptorPrivate *)_descriptorPrivate;	// IMP=0x000000000008d70d
- (void)setStoreActionOptions:(unsigned long long)arg1;	// IMP=0x000000000008d6fb
- (unsigned long long)storeActionOptions;	// IMP=0x000000000008d6e9
- (void)setStoreAction:(unsigned long long)arg1;	// IMP=0x000000000008d6d7
- (unsigned long long)storeAction;	// IMP=0x000000000008d6c5
- (void)setLoadAction:(unsigned long long)arg1;	// IMP=0x000000000008d6b3
- (unsigned long long)loadAction;	// IMP=0x000000000008d6a1
- (_Bool)yInvert;	// IMP=0x000000000008d68d
- (void)setYInvert:(_Bool)arg1;	// IMP=0x000000000008d679
- (unsigned long long)resolveDepthPlane;	// IMP=0x000000000008d664
- (void)setResolveDepthPlane:(unsigned long long)arg1;	// IMP=0x000000000008d64f
- (unsigned long long)resolveSlice;	// IMP=0x000000000008d63a
- (void)setResolveSlice:(unsigned long long)arg1;	// IMP=0x000000000008d625
- (unsigned long long)resolveLevel;	// IMP=0x000000000008d613
- (void)setResolveLevel:(unsigned long long)arg1;	// IMP=0x000000000008d601
- (CDStruct_3ead2808)clearColor;	// IMP=0x000000000008d5e0
- (void)setClearColor:(CDStruct_3ead2808)arg1;	// IMP=0x000000000008d5c1
- (unsigned long long)depthPlane;	// IMP=0x000000000008d5af
- (void)setDepthPlane:(unsigned long long)arg1;	// IMP=0x000000000008d59d
- (unsigned long long)slice;	// IMP=0x000000000008d58b
- (void)setSlice:(unsigned long long)arg1;	// IMP=0x000000000008d579
- (unsigned long long)level;	// IMP=0x000000000008d567
- (void)setLevel:(unsigned long long)arg1;	// IMP=0x000000000008d555
- (id)resolveTexture;	// IMP=0x000000000008d543
- (void)setResolveTexture:(id)arg1;	// IMP=0x000000000008d4b9
- (id)texture;	// IMP=0x000000000008d4a8
- (void)setTexture:(id)arg1;	// IMP=0x000000000008d420
- (id)description;	// IMP=0x000000000008d40c
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x000000000008cfa2
- (unsigned long long)hash;	// IMP=0x000000000008cf89
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000008cf2a
- (void)dealloc;	// IMP=0x000000000008ced4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000008cdac
- (id)init;	// IMP=0x000000000008cd22

@end
