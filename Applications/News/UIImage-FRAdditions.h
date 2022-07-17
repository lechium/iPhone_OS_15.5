//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIImage.h>

@interface UIImage (FRAdditions)
+ (long long)fr_estimatedImageTypeWithData:(id)arg1;	// IMP=0x00100000000472d5
+ (id)fr_gradientImageForTextSize:(struct CGSize)arg1 withStartColor:(id)arg2 endColor:(id)arg3;	// IMP=0x001000000004711b
+ (id)fr_imageWithColor:(id)arg1 size:(struct CGSize)arg2 cornerRadius:(double)arg3;	// IMP=0x00100000000447ae
+ (id)fr_immediatelyLoadedImageWithData:(id)arg1;	// IMP=0x0010000000044794
+ (id)fr_immediatelyLoadedImageWithData:(id)arg1 scale:(double)arg2;	// IMP=0x001000000004466a
+ (id)imageFromFileURL:(id)arg1;	// IMP=0x0010000000042888
- (struct CGSize)fr_sizeThatFills:(struct CGSize)arg1;	// IMP=0x00200000000470be
- (id)applyBlurWithRadius:(double)arg1 tintColor:(id)arg2 saturationDeltaFactor:(double)arg3 maskImage:(id)arg4 targetSize:(struct CGSize)arg5 screenScale:(double)arg6 opaque:(_Bool)arg7 logoRect:(struct CGRect)arg8 logoImage:(id)arg9 logoText:(id)arg10 cornerRadius:(double)arg11 punchThroughBanner:(_Bool)arg12 allowAldenTint:(_Bool)arg13;	// IMP=0x00100000000451fb
- (id)imageWithCornerRadius:(double)arg1 scale:(double)arg2 targetSize:(struct CGSize)arg3;	// IMP=0x0010000000045094
- (id)imageWithCornerRadius:(double)arg1;	// IMP=0x0010000000045030
- (struct CGRect)filledRectForRect:(struct CGRect)arg1;	// IMP=0x0010000000044e23
- (id)fr_applyDarkEffect;	// IMP=0x0010000000044d4e
- (id)fr_darkAndBlurredImageWithContext:(id)arg1 withBlurRadius:(double)arg2 vibrancyAmount:(double)arg3 alpha:(double)arg4;	// IMP=0x0010000000044970
- (id)fr_darkAndBlurredImageWithContext:(id)arg1 withBlurRadius:(double)arg2 vibrancyAmount:(double)arg3;	// IMP=0x0010000000044956
- (id)fr_darkAndBlurredImageWithContext:(id)arg1;	// IMP=0x0010000000044934
- (id)fr_bannerImageWithLogo:(id)arg1;	// IMP=0x001000000004417a
- (id)fr_imageByCroppingSubRect:(struct CGRect)arg1;	// IMP=0x0010000000043ff1
- (id)fr_imageByScalingAndCroppingForSize:(struct CGSize)arg1 scale:(double)arg2;	// IMP=0x0010000000043e2b
- (id)fr_croppedImageWithAspectRatio:(double)arg1;	// IMP=0x0010000000043d20
- (id)fr_scaledImageWithMaximumSize:(struct CGSize)arg1 targetScale:(double)arg2;	// IMP=0x00100000000439b6
- (id)fr_scaledImageWithMaximumSize:(struct CGSize)arg1;	// IMP=0x0010000000043969
- (id)fr_colorMonochromeImageWithColor:(id)arg1;	// IMP=0x00100000000437a1
- (id)fr_imageAspectFitToSize:(struct CGSize)arg1 targetScale:(double)arg2 croppedToCornerRadius:(double)arg3 withMargin:(double)arg4 withBackgroundColor:(id)arg5 borderColor:(id)arg6;	// IMP=0x001000000004307d
- (id)fr_imageCroppedToCornerRadius:(double)arg1 withBackgroundColor:(id)arg2;	// IMP=0x0010000000042e41
- (id)fr_imageCroppedToCircleWithBackgroundColor:(id)arg1;	// IMP=0x0010000000042db5
- (id)fr_tintedImageWithColor:(id)arg1;	// IMP=0x0010000000042c1e
- (id)fr_imageByApplyingAlpha:(double)arg1;	// IMP=0x0010000000042b0e
- (id)fr_opaqueImageWithFillColor:(id)arg1;	// IMP=0x0010000000042981
- (id)imageMaskWithColor:(id)arg1 size:(struct CGSize)arg2;	// IMP=0x0010000000042690
- (id)imageMaskWithColor:(id)arg1;	// IMP=0x0010000000042466
@end
