//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface TSUCGImage
{
    struct CGImage *mCGImage;	// 8 = 0x8
    long long mOrientation;	// 16 = 0x10
    double mScale;	// 24 = 0x18
}

- (void)dealloc;	// IMP=0x0000000000034505
- (long long)imageOrientation;	// IMP=0x00000000000344f4
- (double)scale;	// IMP=0x00000000000344c5
- (struct CGSize)size;	// IMP=0x00000000000343f4
- (struct CGImage *)CGImageForSize:(struct CGSize)arg1;	// IMP=0x00000000000343e3
- (struct CGImage *)CGImage;	// IMP=0x00000000000343d2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000034384
- (id)initWithCGImage:(struct CGImage *)arg1 scale:(double)arg2 orientation:(long long)arg3;	// IMP=0x00000000000342f4

@end

