//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIImage.h>

@interface UIImage (Utilities)
+ (struct CGRect)vk_aspectFitImageFrameForViewWithFrame:(struct CGRect)arg1 imageSize:(struct CGSize)arg2;	// IMP=0x0000000000085dd7
+ (id)vk_imageWithColor:(id)arg1 size:(struct CGSize)arg2;	// IMP=0x0000000000085d1a
+ (id)vk_fileIconForURL:(id)arg1 withPreferredSize:(struct CGSize)arg2;	// IMP=0x0000000000085647
+ (id)vk_orientationMetadataFromImageOrientation:(long long)arg1;	// IMP=0x0000000000085174
+ (id)vk_imageWithData:(id)arg1;	// IMP=0x00000000000850ec
+ (id)vk_imageWithCGImage:(struct CGImage *)arg1;	// IMP=0x00000000000850c8
+ (id)vk_imageWithCGImage:(struct CGImage *)arg1 scale:(double)arg2 orientation:(long long)arg3;	// IMP=0x00000000000850af
+ (id)vk_orientedImageFromImage:(id)arg1 toOrientation:(long long)arg2;	// IMP=0x0000000000084f7e
+ (id)vk_orientedImageFromImage:(id)arg1 fromOrientation:(long long)arg2;	// IMP=0x0000000000084e98
+ (id)vk_orientedImageFromCGImage:(struct CGImage *)arg1 scale:(double)arg2 transform:(struct CGAffineTransform)arg3;	// IMP=0x0000000000084c58
+ (id)vk_UIImageFromCIImage:(id)arg1;	// IMP=0x0000000000084b6a
+ (id)vk_symbolImageWithName:(id)arg1;	// IMP=0x00000000000849f2
+ (id)vk_imageNamed:(id)arg1 withTint:(id)arg2 size:(struct CGSize)arg3;	// IMP=0x00000000000844cf
+ (id)vk_imageNamed:(id)arg1 withTint:(id)arg2;	// IMP=0x0000000000084435
+ (id)vk_imageWithContentsOfURL:(id)arg1;	// IMP=0x00000000000843ae
- (struct CGContext *)vk_newARGB8BitmapContextFromImage:(struct CGImage *)arg1;	// IMP=0x00000000000862c1
- (struct CGRect)vk_cropRectZeroAlpha;	// IMP=0x0000000000085f43
- (id)vk_decodeInBackground;	// IMP=0x0000000000085bfc
- (void)vk_decodeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000859b5
- (id)vk_imageDataWithUTType:(id)arg1 metadata:(id)arg2;	// IMP=0x0000000000085502
- (id)vk_imageDataWithUTType:(id)arg1;	// IMP=0x000000000008541d
- (id)vk_PNGDataWithOrientation:(long long)arg1;	// IMP=0x0000000000085379
- (id)vk_PNGData;	// IMP=0x000000000008530e
- (id)vk_JPEGDataWithOrientation:(long long)arg1;	// IMP=0x000000000008526a
- (id)vk_JPEGData;	// IMP=0x0000000000085239
- (unsigned int)vk_cgImagePropertyOrientation;	// IMP=0x000000000008515a
- (id)vk_horizontallyMirroredImage;	// IMP=0x0000000000085105
- (long long)vk_imageOrientation;	// IMP=0x00000000000850da
- (struct CGImage *)vk_cgImage;	// IMP=0x0000000000085095
- (id)vk_imageFromRect:(struct CGRect)arg1;	// IMP=0x0000000000084a0b
- (id)vk_scaledImageWithSize:(struct CGSize)arg1 scale:(double)arg2;	// IMP=0x00000000000848b4
- (id)vk_scaledImageMaxDimension:(double)arg1 scale:(double)arg2;	// IMP=0x000000000008482e
- (id)vk_scaledImageMinDimension:(double)arg1 scale:(double)arg2;	// IMP=0x00000000000847a8
- (id)vk_imageWithTint:(id)arg1 size:(struct CGSize)arg2;	// IMP=0x0000000000084573
@end
