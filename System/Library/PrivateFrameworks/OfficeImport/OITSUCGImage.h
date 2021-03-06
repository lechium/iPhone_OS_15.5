//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface OITSUCGImage
{
    struct CGImage *mCGImage;	// 8 = 0x8
    long long mOrientation;	// 16 = 0x10
    double mScale;	// 24 = 0x18
}

- (void)dealloc;	// IMP=0x00000000002897d6
- (long long)imageOrientation;	// IMP=0x00000000002897c5
- (double)scale;	// IMP=0x0000000000289796
- (struct CGSize)size;	// IMP=0x00000000002896c5
- (struct CGImage *)CGImageForSize:(struct CGSize)arg1;	// IMP=0x00000000002896b4
- (struct CGImage *)CGImage;	// IMP=0x00000000002896a3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000289655
- (id)initWithCGImage:(struct CGImage *)arg1 scale:(double)arg2 orientation:(long long)arg3;	// IMP=0x00000000002895c5

@end

