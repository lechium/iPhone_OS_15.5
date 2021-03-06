//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TLKFontUtilities : NSObject
{
}

+ (id)attributedStringForFormattedText:(id)arg1 appearance:(id)arg2 prominence:(unsigned long long)arg3 alignment:(long long)arg4 font:(id)arg5 isButton:(_Bool)arg6;	// IMP=0x00000000000343bc
+ (_Bool)formattedTextItemIsColoredImage:(id)arg1;	// IMP=0x00000000000342df
+ (id)attributedStringForRichText:(id)arg1 appearance:(id)arg2 prominence:(unsigned long long)arg3 alignment:(long long)arg4 coloredRanges:(id)arg5 nonColoredRanges:(id)arg6 rangesForNonTemplateImageAttachments:(id)arg7 rangesForTemplateImageAttachments:(id)arg8 font:(id)arg9 isButton:(_Bool)arg10;	// IMP=0x0000000000033b29
+ (id)attributedStringForRichText:(id)arg1 appearance:(id)arg2 prominence:(unsigned long long)arg3 alignment:(long long)arg4 font:(id)arg5 isButton:(_Bool)arg6;	// IMP=0x0000000000033aea
+ (id)preferredFontDescriptorWithTextStyle:(id)arg1 addingSymbolicTraits:(unsigned int)arg2;	// IMP=0x0000000000033ace
+ (id)preferredFontWithTextStyle:(id)arg1 isShort:(_Bool)arg2 isBold:(_Bool)arg3 useCustomWeight:(_Bool)arg4 customFontWeight:(double)arg5;	// IMP=0x000000000003393b
+ (id)preferredFontWithTextStyle:(id)arg1 isShort:(_Bool)arg2 isBold:(_Bool)arg3;	// IMP=0x0000000000033918
+ (id)preferredFontForTextStyle:(id)arg1 maximumContentSizeCategory:(id)arg2;	// IMP=0x00000000000338ff
+ (id)preferredFontForTextStyle:(id)arg1;	// IMP=0x00000000000338e3
+ (id)thinFontOfSize:(double)arg1 grade:(unsigned long long)arg2;	// IMP=0x00000000000338a4
+ (id)calloutFont;	// IMP=0x0000000000033883
+ (id)captionFont;	// IMP=0x0000000000033862
+ (id)shortSubheadFont;	// IMP=0x000000000003383e
+ (id)subheadBoldFont;	// IMP=0x000000000003381a
+ (id)subheadFont;	// IMP=0x00000000000337f9
+ (id)boldBodyFont;	// IMP=0x00000000000337d5
+ (id)shortBodyFont;	// IMP=0x00000000000337b1
+ (id)shortFootnoteFont;	// IMP=0x000000000003378d
+ (id)footnoteFont;	// IMP=0x0000000000033769
+ (id)shortSubheadBoldFont;	// IMP=0x0000000000033742
+ (id)shortTitle2Font;	// IMP=0x000000000003371e
+ (id)shortTitle1Font;	// IMP=0x00000000000336fa
+ (id)cachedFontForTextStyle:(id)arg1 isShort:(_Bool)arg2 isBold:(_Bool)arg3 useCustomWeight:(_Bool)arg4 customFontWeight:(double)arg5;	// IMP=0x00000000000334c0
+ (id)cachedFontForTextStyle:(id)arg1 isShort:(_Bool)arg2 fontWeight:(double)arg3;	// IMP=0x00000000000334a2
+ (id)cachedFontForTextStyle:(id)arg1 isShort:(_Bool)arg2 isBold:(_Bool)arg3;	// IMP=0x000000000003347f
+ (id)cachedFontForTextStyle:(id)arg1;	// IMP=0x0000000000033465
+ (id)cachedFontForKey:(id)arg1 creatorBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000332b6

@end

