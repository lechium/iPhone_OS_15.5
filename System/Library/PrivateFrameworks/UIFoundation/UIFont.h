//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIFoundation/NSCopying-Protocol.h>
#import <UIFoundation/NSSecureCoding-Protocol.h>

@class NSString, UIFontDescriptor;

@interface UIFont : NSObject <NSCopying, NSSecureCoding>
{
}

+ (id)_fontWithName:(id)arg1 size:(double)arg2;	// IMP=0x00000000000d942c
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000d92e7
+ (id)classFallbacksForKeyedArchiver;	// IMP=0x00000000000d9063
+ (void)_setSystemFontSize:(double)arg1;	// IMP=0x00000000000d8b7a
+ (double)systemFontSize;	// IMP=0x00000000000d8b6c
+ (void)_setSmallSystemFontSize:(double)arg1;	// IMP=0x00000000000d8b5e
+ (double)smallSystemFontSize;	// IMP=0x00000000000d8b50
+ (void)_setButtonFontSize:(double)arg1;	// IMP=0x00000000000d8b42
+ (double)buttonFontSize;	// IMP=0x00000000000d8b34
+ (void)_setLabelFontSize:(double)arg1;	// IMP=0x00000000000d8b26
+ (double)labelFontSize;	// IMP=0x00000000000d8b18
+ (id)fontWithDescriptor:(id)arg1 size:(double)arg2;	// IMP=0x00000000000d8af1
+ (id)monospacedDigitSystemFontOfSize:(double)arg1 weight:(double)arg2;	// IMP=0x00000000000d8ac6
+ (id)monospacedSystemFontOfSize:(double)arg1 weight:(double)arg2;	// IMP=0x00000000000d8a9e
+ (id)systemFontOfSize:(double)arg1 weight:(double)arg2 design:(id)arg3;	// IMP=0x00000000000d8a80
+ (id)systemFontOfSize:(double)arg1 weight:(double)arg2;	// IMP=0x00000000000d8a58
+ (id)_ultraLightSystemFontOfSize:(double)arg1;	// IMP=0x00000000000d8a32
+ (id)_lightSystemFontOfSize:(double)arg1;	// IMP=0x00000000000d8a0c
+ (id)_thinSystemFontOfSize:(double)arg1;	// IMP=0x00000000000d89e6
+ (id)italicSystemFontOfSize:(double)arg1;	// IMP=0x00000000000d89cf
+ (id)boldSystemFontOfSize:(double)arg1;	// IMP=0x00000000000d89b8
+ (id)_opticalBoldSystemFontOfSize:(double)arg1;	// IMP=0x00000000000d8992
+ (id)_opticalSystemFontOfSize:(double)arg1;	// IMP=0x00000000000d896f
+ (id)systemFontOfSize:(double)arg1;	// IMP=0x00000000000d895b
+ (id)systemFontOfSize:(double)arg1 traits:(int)arg2;	// IMP=0x00000000000d8938
+ (id)fontWithName:(id)arg1 size:(double)arg2;	// IMP=0x00000000000d8924
+ (id)fontWithName:(id)arg1 size:(double)arg2 traits:(int)arg3;	// IMP=0x00000000000d8903
+ (id)ib_preferredFontForTextStyle:(id)arg1;	// IMP=0x00000000000d798f
+ (id)defaultFontForTextStyle:(id)arg1;	// IMP=0x00000000000d7971
+ (double)_readableWidth;	// IMP=0x00000000000d77ac
+ (double)_pointSize:(double)arg1 scaledLikeTextStyle:(id)arg2 maximumPointSize:(double)arg3 compatibleWithTraitCollection:(id)arg4 roundSize:(_Bool)arg5;	// IMP=0x00000000000d7575
+ (double)_pointSize:(double)arg1 scaledLikeTextStyle:(id)arg2 maximumPointSize:(double)arg3 compatibleWithTraitCollection:(id)arg4;	// IMP=0x00000000000d755a
+ (id)_preferredFontForTextStyle:(id)arg1 maximumPointSize:(double)arg2 compatibleWithTraitCollection:(id)arg3;	// IMP=0x00000000000d72a9
+ (id)_supportedDynamicFontStyles;	// IMP=0x00000000000d6c48
+ (_Bool)_isSupportedDynamicFontTextStyle:(id)arg1;	// IMP=0x00000000000d6be3
+ (id)_preferredFontForTextStyle:(id)arg1 design:(id)arg2 weight:(id)arg3 symbolicTraits:(unsigned int)arg4 maximumContentSizeCategory:(id)arg5 compatibleWithTraitCollection:(id)arg6 pointSize:(double)arg7 pointSizeForScaling:(double)arg8;	// IMP=0x00000000000d6a9d
+ (id)_preferredFontForTextStyle:(id)arg1 design:(id)arg2 weight:(double)arg3 maximumContentSizeCategory:(id)arg4 compatibleWithTraitCollection:(id)arg5;	// IMP=0x00000000000d6a34
+ (id)_preferredFontForTextStyle:(id)arg1 addingSymbolicTraits:(unsigned int)arg2 design:(id)arg3 weight:(double)arg4;	// IMP=0x00000000000d69ca
+ (id)_preferredFontForTextStyle:(id)arg1 addingSymbolicTraits:(unsigned int)arg2 weight:(double)arg3;	// IMP=0x00000000000d6968
+ (id)_preferredFontForTextStyle:(id)arg1 addingSymbolicTraits:(unsigned int)arg2;	// IMP=0x00000000000d6938
+ (id)_preferredFontForTextStyle:(id)arg1 design:(id)arg2 weight:(double)arg3;	// IMP=0x00000000000d68d5
+ (id)_preferredFontForTextStyle:(id)arg1 weight:(double)arg2;	// IMP=0x00000000000d687a
+ (id)_preferredFontForTextStyle:(id)arg1 design:(id)arg2 variant:(long long)arg3 maximumContentSizeCategory:(id)arg4 compatibleWithTraitCollection:(id)arg5 pointSize:(double)arg6 pointSizeForScaling:(double)arg7;	// IMP=0x00000000000d6819
+ (id)_preferredFontForTextStyle:(id)arg1 design:(id)arg2 variant:(long long)arg3 maximumContentSizeCategory:(id)arg4 compatibleWithTraitCollection:(id)arg5;	// IMP=0x00000000000d67fe
+ (id)_preferredFontForTextStyle:(id)arg1 design:(id)arg2 variant:(long long)arg3 compatibleWithTraitCollection:(id)arg4;	// IMP=0x00000000000d67dc
+ (id)_preferredFontForTextStyle:(id)arg1 design:(id)arg2 variant:(long long)arg3;	// IMP=0x00000000000d67b6
+ (id)_preferredFontForTextStyle:(id)arg1 variant:(long long)arg2 maximumContentSizeCategory:(id)arg3;	// IMP=0x00000000000d678b
+ (id)_preferredFontForTextStyle:(id)arg1 variant:(long long)arg2;	// IMP=0x00000000000d6760
+ (id)_preferredFontForTextStyle:(id)arg1 maximumContentSizeCategory:(id)arg2 compatibleWithTraitCollection:(id)arg3;	// IMP=0x00000000000d66e8
+ (id)_preferredFontForTextStyle:(id)arg1 maximumContentSizeCategory:(id)arg2;	// IMP=0x00000000000d66d3
+ (id)preferredFontForUsage:(id)arg1 contentSizeCategoryName:(id)arg2;	// IMP=0x00000000000d66b7
+ (id)preferredFontForUsage:(id)arg1;	// IMP=0x00000000000d669c
+ (id)preferredFontForTextStyle:(id)arg1 compatibleWithTraitCollection:(id)arg2;	// IMP=0x00000000000d664c
+ (id)preferredFontForTextStyle:(id)arg1;	// IMP=0x00000000000d64b3
+ (id)_systemFontsOfSize:(double)arg1 traits:(int)arg2;	// IMP=0x00000000000d6371
+ (id)_fontWithDescriptor:(id)arg1 size:(double)arg2 textStyleForScaling:(id)arg3 pointSizeForScaling:(double)arg4 maximumPointSizeAfterScaling:(double)arg5 forIB:(_Bool)arg6 legibilityWeight:(long long)arg7;	// IMP=0x00000000000d6057
+ (id)fontNamesForFamilyName:(id)arg1;	// IMP=0x00000000000d5f81
+ (id)familyNames;	// IMP=0x00000000000d5f67
+ (id)fontWithMarkupDescription:(id)arg1;	// IMP=0x00000000000d5f31
+ (id)fontWithFamilyName:(id)arg1 traits:(int)arg2 size:(double)arg3;	// IMP=0x00000000000d5f1f
+ (void)_evictAllItemsFromFontAndFontDescriptorCaches;	// IMP=0x00000000000d5ee1
+ (id)_sharedFontCache;	// IMP=0x00000000000d5e9c
+ (id)_sharedZeroPointFont;	// IMP=0x00000000000d5e2f
+ (id)userFontOfSize:(double)arg1;	// IMP=0x00000000000d980d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d97de
- (id)description;	// IMP=0x00000000000d974d
- (id)verticalFont;	// IMP=0x00000000000d9744
- (_Bool)isVertical;	// IMP=0x00000000000d973a
- (_Bool)isFixedPitch;	// IMP=0x00000000000d9729
- (_Bool)isSystemFont;	// IMP=0x00000000000d970f
- (double)_leading;	// IMP=0x00000000000d9705
@property(readonly, nonatomic) double xHeight;
@property(readonly, nonatomic) double capHeight;
- (double)_ascenderDeltaForBehavior:(long long)arg1;	// IMP=0x00000000000d96e8
@property(readonly, nonatomic) double leading;
@property(readonly, nonatomic) double lineHeight;
@property(readonly, nonatomic) double descender;
@property(readonly, nonatomic) double ascender;
- (int)traits;	// IMP=0x00000000000d95a6
- (double)_defaultLineHeightForUILayout;	// IMP=0x00000000000d9594
- (double)_baseLineHeightForFont:(_Bool)arg1;	// IMP=0x00000000000d953e
- (_Bool)_isHiraginoFont;	// IMP=0x00000000000d9536
- (_Bool)__isSystemFont;	// IMP=0x00000000000d951c
- (unsigned long long)mostCompatibleStringEncoding;	// IMP=0x00000000000d94fd
- (id)_kernOverride;	// IMP=0x00000000000d94f5
- (unsigned long long)renderingMode;	// IMP=0x00000000000d94ea
@property(readonly, nonatomic) UIFontDescriptor *fontDescriptor;
@property(readonly, nonatomic) double pointSize;
@property(readonly, nonatomic) NSString *familyName;
@property(readonly, nonatomic) NSString *fontName;
- (id)fontWithSize:(double)arg1;	// IMP=0x00000000000d931e
- (double)_bodyLeading;	// IMP=0x00000000000d92ef
- (Class)classForCoder;	// IMP=0x00000000000d92d6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000d9070
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000d8b90
- (_Bool)_isUIFont;	// IMP=0x00000000000d8b88
- (id)_fontScaledByScaleFactor:(double)arg1;	// IMP=0x00000000000d888c
- (id)htmlMarkupDescription;	// IMP=0x00000000000d8827
- (id)markupDescription;	// IMP=0x00000000000d87e9
- (id)markupDescriptionForWebKit:(_Bool)arg1 pointSize:(float)arg2 sizeUnit:(id)arg3;	// IMP=0x00000000000d8741
- (id)familyNameForCSSFontFamilyValueForWebKit:(_Bool)arg1;	// IMP=0x00000000000d862b
- (id)initWithMarkupDescription:(id)arg1;	// IMP=0x00000000000d7cf8
- (id)initWithFamilyName:(id)arg1 traits:(int)arg2 size:(double)arg3;	// IMP=0x00000000000d7c95
- (id)initWithName:(id)arg1 size:(double)arg2;	// IMP=0x00000000000d7c37
- (double)_scaledValueForValue:(double)arg1;	// IMP=0x00000000000d7a44
- (id)_textStyle;	// IMP=0x00000000000d7a3a
- (_Bool)_isTextStyleFont;	// IMP=0x00000000000d7a30
- (double)readableWidth;	// IMP=0x00000000000d75fc
- (id)_fontScaledLikeTextStyle:(id)arg1 maximumPointSize:(double)arg2 compatibleWithTraitCollection:(id)arg3 forIB:(_Bool)arg4;	// IMP=0x00000000000d7382
- (id)_fontAdjustedForContentSizeCategoryCompatibleWithTraitCollection:(id)arg1;	// IMP=0x00000000000d6e5a
- (id)_fontAdjustedForCurrentContentSizeCategory;	// IMP=0x00000000000d6e46
@property(readonly, nonatomic) double maximumPointSizeAfterScaling;
@property(readonly, nonatomic) double pointSizeForScaling;
@property(readonly, nonatomic) NSString *textStyleForScaling;
- (_Bool)isIBFontMetricsScaledFont;	// IMP=0x00000000000d6db6
- (_Bool)isIBTextStyleFont;	// IMP=0x00000000000d6d73
- (id)_alternateSystemFonts;	// IMP=0x00000000000d63e4
- (id)init;	// IMP=0x00000000000d5e00
- (_Bool)_hasColorGlyphs;	// IMP=0x00000000000d9f38
- (id)lastResortFont;	// IMP=0x00000000000d9eff
- (id)bestMatchingFontForCharacters:(const unsigned short *)arg1 length:(unsigned long long)arg2 attributes:(id)arg3 actualCoveredLength:(unsigned long long *)arg4;	// IMP=0x00000000000d9e6e
- (void)getBoundingRects:(struct CGRect *)arg1 forCGGlyphs:(const unsigned short *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000000000d9e4c
- (unsigned int)_defaultGlyphForChar:(unsigned short)arg1;	// IMP=0x00000000000d9e16
- (_Bool)_getLatin1Glyphs:(const unsigned short **)arg1 advanceWidths:(const double **)arg2;	// IMP=0x00000000000d9e06
- (id)_familyName;	// IMP=0x00000000000d9df4
- (unsigned long long)getCaretPositions:(double *)arg1 forGlyph:(unsigned int)arg2 maximumLength:(unsigned long long)arg3;	// IMP=0x00000000000d9da2
- (unsigned int)hyphenGlyphForLocale:(id)arg1;	// IMP=0x00000000000d9d4a
- (id)screenFontWithRenderingMode:(unsigned long long)arg1;	// IMP=0x00000000000d9d41
- (struct CGSize)advancementForGlyph:(unsigned short)arg1;	// IMP=0x00000000000d9cdd
- (double)underlineThickness;	// IMP=0x00000000000d9cd3
- (double)underlinePosition;	// IMP=0x00000000000d9c0b
- (struct CGRect)boundingRectForFont;	// IMP=0x00000000000d9bf3
- (struct CGFont *)_backingCGSFont;	// IMP=0x00000000000d9bdf
- (void)getVerticalOriginTranslations:(struct CGSize *)arg1 forCGGlyphs:(const unsigned short *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000000000d9a7b
- (void)getAdvancements:(struct CGSize *)arg1 forCGGlyphs:(const unsigned short *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000000000d9a64
- (double)_totalAdvancementForNativeGlyphs:(const unsigned short *)arg1 count:(long long)arg2;	// IMP=0x00000000000d9a3e
- (void)setInContext:(struct CGContext *)arg1;	// IMP=0x00000000000d99f6
- (void)applyToGraphicsContext:(id)arg1;	// IMP=0x00000000000d9917
- (struct CGAffineTransform)_textMatrixTransformForContext:(id)arg1;	// IMP=0x00000000000d983f
- (unsigned short)glyphWithName:(id)arg1;	// IMP=0x00000000000d9832
- (unsigned long long)numberOfGlyphs;	// IMP=0x00000000000d9828
- (struct __CTFont *)CTFont;	// IMP=0x00000000000d981f
- (_Bool)_isDefaultFace;	// IMP=0x00000000000d9803
- (id)coveredCharacterSet;	// IMP=0x00000000000d97e9

@end
