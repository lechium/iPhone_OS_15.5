//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MDLTexture, MDLTextureFilter, MDLTransform;

@interface MDLTextureSampler : NSObject
{
    MDLTexture *texture;	// 8 = 0x8
    MDLTextureFilter *hardwareFilter;	// 16 = 0x10
    MDLTransform *transform;	// 24 = 0x18
    unsigned long long mappingChannel;	// 32 = 0x20
    long long textureComponents;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000002dcd1f
@property(nonatomic) long long textureComponents; // @synthesize textureComponents;
@property(nonatomic) unsigned long long mappingChannel; // @synthesize mappingChannel;
@property(retain, nonatomic) MDLTransform *transform; // @synthesize transform;
@property(retain, nonatomic) MDLTextureFilter *hardwareFilter; // @synthesize hardwareFilter;
@property(retain, nonatomic) MDLTexture *texture; // @synthesize texture;
- (id)init;	// IMP=0x00000000002dcc27

@end

