//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSAttributedString.h>

#import <Home/HFStringGenerator-Protocol.h>

@class NSString;

@interface NSAttributedString (HFAdditions) <HFStringGenerator>
+ (id)hf_attributedStringWithSystemImageNamed:(id)arg1 title:(id)arg2 isRTL:(_Bool)arg3;	// IMP=0x00000000001732ce
+ (id)hf_safeAttributedStringWithHTML:(id)arg1 attributes:(id)arg2;	// IMP=0x0000000000172b1b
+ (id)hf_attributedLinkStringForString:(id)arg1 linkString:(id)arg2 linkURL:(id)arg3 attributes:(id)arg4 additionalLinkAttributes:(id)arg5;	// IMP=0x000000000017231a
+ (id)hu_attributedLinkStringForAttributedString:(id)arg1 linkString:(id)arg2 linkURL:(id)arg3;	// IMP=0x000000000017214f
+ (id)hf_attributedLinkStringForString:(id)arg1 linkString:(id)arg2 linkURL:(id)arg3;	// IMP=0x0000000000172122
+ (id)hf_attributedString:(id)arg1 withAppendedLinkString:(id)arg2 linkURL:(id)arg3;	// IMP=0x0000000000172082
+ (id)hf_attributedStringForString:(id)arg1 withAppendedString:(id)arg2 asURL:(id)arg3 withAttributes:(id)arg4;	// IMP=0x0000000000171f15
- (id)hf_attributedStringByTrimmingWhitespaceNewlinesAndObjectReplacementCharacters;	// IMP=0x0000000000172a61
- (id)hf_attributedStringByTrimmingCharactersInCharacterSet:(id)arg1;	// IMP=0x000000000017295c
- (id)hf_attributedStringWithDefaultAttributes:(id)arg1 inRange:(struct _NSRange)arg2;	// IMP=0x000000000017257d
- (id)hf_attributedStringWithDefaultAttributes:(id)arg1;	// IMP=0x0000000000172513
- (id)hf_scaledAttributedStringWithBoundingSize:(struct CGSize)arg1 minimumScaleFactor:(double)arg2 maximumNumberOfLines:(unsigned long long)arg3;	// IMP=0x0000000000171e9b
- (id)hf_attributedStringScaledByFactor:(double)arg1;	// IMP=0x0000000000171e56
- (double)hf_scaleFactorForBoundingSize:(struct CGSize)arg1 minimumScaleFactor:(double)arg2 maximumNumberOfLines:(unsigned long long)arg3;	// IMP=0x0000000000171da8
- (id)_synthesizeAttributedSubstringFromRange:(struct _NSRange)arg1 usingDefaultAttributes:(id)arg2;	// IMP=0x0000000000250822
- (_Bool)prefersDynamicString;	// IMP=0x000000000025081a
- (id)stringWithAttributes:(id)arg1;	// IMP=0x00000000002507b0
- (id)dynamicStringForSize:(struct CGSize)arg1 attributes:(id)arg2;	// IMP=0x000000000025079e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

