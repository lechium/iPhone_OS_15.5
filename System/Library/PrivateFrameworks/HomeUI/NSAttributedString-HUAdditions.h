//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSAttributedString.h>

@interface NSAttributedString (HUAdditions)
+ (id)hu_attributedStringWithSystemImageNamed:(id)arg1 title:(id)arg2 isRTL:(_Bool)arg3;	// IMP=0x0000000000344336
+ (id)hu_safeAttributedStringWithHTML:(id)arg1 attributes:(id)arg2;	// IMP=0x0000000000343b83
+ (id)hu_attributedLinkStringForString:(id)arg1 linkString:(id)arg2 linkURL:(id)arg3 attributes:(id)arg4 additionalLinkAttributes:(id)arg5;	// IMP=0x0000000000343382
+ (id)hu_attributedLinkStringForAttributedString:(id)arg1 linkString:(id)arg2 linkURL:(id)arg3;	// IMP=0x00000000003431b7
+ (id)hu_attributedLinkStringForString:(id)arg1 linkString:(id)arg2 linkURL:(id)arg3;	// IMP=0x000000000034318a
+ (id)hu_attributedString:(id)arg1 withAppendedLinkString:(id)arg2 linkURL:(id)arg3;	// IMP=0x00000000003430ea
+ (id)hu_attributedStringForString:(id)arg1 withAppendedString:(id)arg2 asURL:(id)arg3 withAttributes:(id)arg4;	// IMP=0x0000000000342f7d
- (id)hu_attributedStringByTrimmingWhitespaceNewlinesAndObjectReplacementCharacters;	// IMP=0x0000000000343ac9
- (id)hu_attributedStringByTrimmingCharactersInCharacterSet:(id)arg1;	// IMP=0x00000000003439c4
- (id)hu_attributedStringWithDefaultAttributes:(id)arg1 inRange:(struct _NSRange)arg2;	// IMP=0x00000000003435e5
- (id)hu_attributedStringWithDefaultAttributes:(id)arg1;	// IMP=0x000000000034357b
- (id)hu_scaledAttributedStringWithBoundingSize:(struct CGSize)arg1 minimumScaleFactor:(double)arg2 maximumNumberOfLines:(unsigned long long)arg3;	// IMP=0x0000000000342f03
- (id)hu_attributedStringScaledByFactor:(double)arg1;	// IMP=0x0000000000342ebe
- (double)hu_scaleFactorForBoundingSize:(struct CGSize)arg1 minimumScaleFactor:(double)arg2 maximumNumberOfLines:(unsigned long long)arg3;	// IMP=0x0000000000342e10
@end

