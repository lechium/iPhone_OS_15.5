//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UIAnimatedImage
{
    NSArray *_images;	// 96 = 0x60
    double _duration;	// 104 = 0x68
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000829ce1
- (void).cxx_destruct;	// IMP=0x000000000082b635
- (unsigned long long)hash;	// IMP=0x000000000082b5e4
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000082b21b
- (struct CGSize)_sizeWithHairlineThickening:(_Bool)arg1 renderingEffects:(unsigned long long)arg2 forTraitCollection:(id)arg3;	// IMP=0x000000000082b165
- (id)_imageWithStylePresets:(id)arg1 tintColor:(id)arg2 traitCollection:(id)arg3;	// IMP=0x000000000082b126
- (id)_imageScaledToProportion:(double)arg1 interpolationQuality:(int)arg2;	// IMP=0x000000000082aefc
- (id)_doubleBezeledImageWithExteriorShadowRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 interiorShadowRed:(double)arg5 green:(double)arg6 blue:(double)arg7 alpha:(double)arg8 fillRed:(double)arg9 green:(double)arg10 blue:(double)arg11 alpha:(double)arg12;	// IMP=0x000000000082abff
- (id)_bezeledImageWithShadowRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 fillRed:(double)arg5 green:(double)arg6 blue:(double)arg7 alpha:(double)arg8 drawShadow:(_Bool)arg9;	// IMP=0x000000000082a959
- (struct UIEdgeInsets)alignmentRectInsets;	// IMP=0x000000000082a8f4
- (void)_setAlignmentRectInsets:(struct UIEdgeInsets)arg1;	// IMP=0x000000000082a7af
- (id)resizableImageWithCapInsets:(struct UIEdgeInsets)arg1 resizingMode:(long long)arg2;	// IMP=0x000000000082a481
- (id)resizableImageWithCapInsets:(struct UIEdgeInsets)arg1;	// IMP=0x000000000082a46d
- (void)_setAlwaysStretches:(_Bool)arg1;	// IMP=0x000000000082a334
- (_Bool)_isTiledWhenStretchedToSize:(struct CGSize)arg1;	// IMP=0x000000000082a2c7
- (_Bool)_isResizable;	// IMP=0x000000000082a276
- (struct CGRect)_contentRectInPixels;	// IMP=0x000000000082a211
- (struct CGRect)_contentStretchInPixels;	// IMP=0x000000000082a1ac
- (long long)resizingMode;	// IMP=0x000000000082a15b
- (struct UIEdgeInsets)capInsets;	// IMP=0x000000000082a0f6
- (void)_flipImageOrientationHorizontally;	// IMP=0x0000000000829fb5
- (double)duration;	// IMP=0x0000000000829fa3
- (id)images;	// IMP=0x0000000000829f8e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000829e96
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000829ce9
- (_Bool)_isSVGVector;	// IMP=0x0000000000829cd9
- (_Bool)_isPDFVector;	// IMP=0x0000000000829cd1
- (id)initWithImages:(id)arg1 duration:(double)arg2;	// IMP=0x0000000000829bd0
- (id)_initWithOtherImage:(id)arg1;	// IMP=0x0000000000829abc

@end
