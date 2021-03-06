//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface MTLTextureReferenceTypeInternal
{
    unsigned long long _dataType;	// 8 = 0x8
    unsigned long long _textureDataType;	// 16 = 0x10
    unsigned long long _textureType;	// 24 = 0x18
    unsigned long long _access;	// 32 = 0x20
    _Bool _isDepthTexture;	// 40 = 0x28
}

- (_Bool)isDepthTexture;	// IMP=0x0000000000098281
- (unsigned long long)access;	// IMP=0x0000000000098270
- (unsigned long long)textureType;	// IMP=0x000000000009825f
- (unsigned long long)textureDataType;	// IMP=0x000000000009824e
- (unsigned long long)dataType;	// IMP=0x000000000009823d
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x000000000009807f
- (void)dealloc;	// IMP=0x0000000000098050
- (id)initWithDataType:(unsigned long long)arg1 textureType:(unsigned long long)arg2 access:(unsigned long long)arg3 isDepthTexture:(_Bool)arg4;	// IMP=0x0000000000097fcc

@end

