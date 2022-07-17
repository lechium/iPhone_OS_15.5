//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, PXGUniform;

@interface PXGUniformAlias
{
    PXGUniform *_original;	// 112 = 0x70
    long long _index;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x00000000007c7f6d
@property(readonly, nonatomic) long long index; // @synthesize index=_index;
@property(readonly, nonatomic) PXGUniform *original; // @synthesize original=_original;
- (const void *)bytes;	// IMP=0x00000000007c7eff
- (long long)bytesLength;	// IMP=0x00000000007c7ebb
- (id)cachedTexture;	// IMP=0x00000000007c7e6b
- (void)setCachedTexture:(id)arg1;	// IMP=0x00000000007c7df9
- (CDUnknownBlockType)textureProvider;	// IMP=0x00000000007c7da9
- (struct CGImage *)image;	// IMP=0x00000000007c7d65
- (MISSING_TYPE *)float4Value;	// IMP=0x00000000007c7d17
- (MISSING_TYPE *)float3Value;	// IMP=0x00000000007c7cc9
- (MISSING_TYPE *)float2Value;	// IMP=0x00000000007c7c79
- (float)floatValue;	// IMP=0x00000000007c7c29
- (_Bool)isEquivalentToUniform:(id)arg1;	// IMP=0x00000000007c7a83
- (id)description;	// IMP=0x00000000007c79ba
- (id)name;	// IMP=0x00000000007c7911
- (id)initWithIndex:(long long)arg1 aliasing:(id)arg2;	// IMP=0x00000000007c784d
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2;	// IMP=0x00000000007c77ca

@end
