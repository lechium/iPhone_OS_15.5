//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CIImage;

__attribute__((visibility("hidden")))
@interface _UIImageCIImageContent
{
    CIImage *_ciImage;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000063373c
- (void)_drawWithoutEffectInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2;	// IMP=0x00000000006334ee
- (void)_prepareforDrawingInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2;	// IMP=0x00000000006334c7
- (id)description;	// IMP=0x0000000000633497
- (unsigned long long)hash;	// IMP=0x000000000063347a
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000063340e
- (struct CGSize)sizeInPixels;	// IMP=0x00000000006333be
- (_Bool)canScaleImageToTargetResolution;	// IMP=0x00000000006333b6
- (_Bool)isCIImage;	// IMP=0x00000000006333ae
- (id)CIImage;	// IMP=0x0000000000633399
- (id)initWithScale:(double)arg1;	// IMP=0x0000000000633312
- (id)initWithCIImage:(id)arg1 scale:(double)arg2;	// IMP=0x000000000063322a

@end

