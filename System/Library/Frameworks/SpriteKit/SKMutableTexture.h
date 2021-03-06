//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SKMutableTexture
{
    void *_ioSurface;	// 8 = 0x8
    _Bool _ioSurfaceBacked;	// 16 = 0x10
    struct CGSize _textureSize;	// 24 = 0x18
    void *_pixelData;	// 40 = 0x28
    unsigned long long _pixelDataLength;	// 48 = 0x30
    int _pixelFormat;	// 56 = 0x38
}

+ (id)mutableTextureWithSize:(struct CGSize)arg1;	// IMP=0x000000000008cd9f
- (void)dealloc;	// IMP=0x000000000008d32d
- (id)description;	// IMP=0x000000000008d2c4
- (shared_ptr_bb77cfd9)_backingTexture;	// IMP=0x000000000008cef2
- (void)modifyPixelDataWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000008cde4
- (id)initWithSize:(struct CGSize)arg1 pixelFormat:(int)arg2;	// IMP=0x000000000008cd85
- (id)initWithSize:(struct CGSize)arg1;	// IMP=0x000000000008cd68
- (id)initWithSize:(struct CGSize)arg1 ioSurfaceBacked:(_Bool)arg2 pixelFormat:(int)arg3;	// IMP=0x000000000008cb16

@end

