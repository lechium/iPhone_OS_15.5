//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIImage;

@interface TSUUIImage
{
    UIImage *mUIImage;	// 8 = 0x8
}

+ (id)imageNamed:(id)arg1 inBundle:(id)arg2;	// IMP=0x0000000000034546
- (long long)imageOrientation;	// IMP=0x00000000000347e5
- (struct CGImage *)CGImageForSize:(struct CGSize)arg1;	// IMP=0x00000000000347c8
- (struct CGImage *)CGImage;	// IMP=0x00000000000347ab
- (double)scale;	// IMP=0x000000000003478e
- (struct CGSize)size;	// IMP=0x0000000000034771
- (id)UIImage;	// IMP=0x0000000000034760
- (void)dealloc;	// IMP=0x0000000000034712
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000346db
- (id)initWithContentsOfFile:(id)arg1;	// IMP=0x0000000000034684
- (id)initWithData:(id)arg1;	// IMP=0x000000000003462d
- (id)initWithUIImage:(id)arg1;	// IMP=0x00000000000345c6

@end
