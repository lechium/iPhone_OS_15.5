//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLocale, NSMutableIndexSet, NSString, SXTextSourceDefaults;
@protocol SXDocumentLanguageProviding, SXFontAttributesConstructor, SXSmartFieldFactory, SXTextSourceDataSource, SXTextStyleFontDescribing;

@interface SXTextSource : NSObject
{
    id <SXTextSourceDataSource> _dataSource;	// 8 = 0x8
    NSString *_string;	// 16 = 0x10
    SXTextSourceDefaults *_defaults;	// 24 = 0x18
    id <SXSmartFieldFactory> _smartFieldFactory;	// 32 = 0x20
    NSMutableIndexSet *_deletedRangeOffsets;	// 40 = 0x28
    NSMutableIndexSet *_insertedRangeOffsets;	// 48 = 0x30
    NSMutableIndexSet *_rangesExcludedOfParagraphSpacing;	// 56 = 0x38
    id <SXFontAttributesConstructor> _fontAttributeConstructor;	// 64 = 0x40
    id <SXTextStyleFontDescribing> _defaultFontDescribing;	// 72 = 0x48
    id <SXDocumentLanguageProviding> _documentLanguageProvider;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000016087f
@property(readonly, nonatomic) id <SXDocumentLanguageProviding> documentLanguageProvider; // @synthesize documentLanguageProvider=_documentLanguageProvider;
@property(readonly, nonatomic) id <SXTextStyleFontDescribing> defaultFontDescribing; // @synthesize defaultFontDescribing=_defaultFontDescribing;
@property(readonly, nonatomic) id <SXFontAttributesConstructor> fontAttributeConstructor; // @synthesize fontAttributeConstructor=_fontAttributeConstructor;
@property(retain, nonatomic) NSMutableIndexSet *rangesExcludedOfParagraphSpacing; // @synthesize rangesExcludedOfParagraphSpacing=_rangesExcludedOfParagraphSpacing;
@property(retain, nonatomic) NSMutableIndexSet *insertedRangeOffsets; // @synthesize insertedRangeOffsets=_insertedRangeOffsets;
@property(retain, nonatomic) NSMutableIndexSet *deletedRangeOffsets; // @synthesize deletedRangeOffsets=_deletedRangeOffsets;
@property(readonly, nonatomic) id <SXSmartFieldFactory> smartFieldFactory; // @synthesize smartFieldFactory=_smartFieldFactory;
@property(readonly, nonatomic) SXTextSourceDefaults *defaults; // @synthesize defaults=_defaults;
@property(readonly, nonatomic) NSString *string; // @synthesize string=_string;
@property(readonly, nonatomic) __weak id <SXTextSourceDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)randomColorWithAlpha:(double)arg1;	// IMP=0x000000000016074b
- (id)description;	// IMP=0x0000000000160739
- (long long)fontSizeForTextStyle:(id)arg1;	// IMP=0x0000000000160699
- (long long)scaledFontSizeForFontSize:(long long)arg1;	// IMP=0x0000000000160525
- (unsigned int)paragraphAlignmentForTextAlignment:(long long)arg1;	// IMP=0x0000000000160508
- (id)fontDescriptionsForTextStyleFontDescription:(id)arg1 defaultTextStyleFontDesciptions:(id)arg2;	// IMP=0x0000000000160417
- (id)fontFaceForTextStyleFontDescription:(id)arg1 defaultTextStyleFontDescription:(id)arg2 fontAttributes:(id)arg3 fontSize:(long long)arg4;	// IMP=0x000000000016022e
- (struct _NSRange)rangeInBounds:(struct _NSRange)arg1 maxLength:(unsigned long long)arg2;	// IMP=0x0000000000160210
@property(readonly, nonatomic) NSLocale *locale;
- (void)transform:(id)arg1 forTextStyle:(id)arg2 range:(struct _NSRange)arg3;	// IMP=0x0000000000160072
- (id)attributesForTextStyle:(id)arg1 onParagraphStyle:(id)arg2 forRange:(struct _NSRange)arg3 resultingDropCapStyle:(id *)arg4 textResizer:(id)arg5 fontFace:(id)arg6;	// IMP=0x000000000015ec44
- (id)characterStyleFromAttributes:(id)arg1 context:(id)arg2;	// IMP=0x000000000015ea75
- (int)listNumberTypeForListType:(unsigned long long)arg1;	// IMP=0x000000000015ea58
- (int)listLabelTypeForListType:(unsigned long long)arg1;	// IMP=0x000000000015ea37
- (id)populateArray:(id)arg1 withValue:(id)arg2 forSize:(unsigned long long)arg3;	// IMP=0x000000000015e985
- (void)applyListStylingOnTextTangierStorage:(id)arg1 usingAttributesMap:(id)arg2;	// IMP=0x000000000015d40c
- (void)applyAdditionsOnTextTangierStorage:(id)arg1;	// IMP=0x000000000015d075
- (void)applyStylingOnTextTangierStorage:(id)arg1;	// IMP=0x000000000015b57e
- (struct _NSRange)rangeForRange:(struct _NSRange)arg1;	// IMP=0x000000000015b436
- (id)cleanString:(id)arg1;	// IMP=0x000000000015a33b
- (id)initWithString:(id)arg1 smartFieldFactory:(id)arg2 dataSource:(id)arg3 documentLanguageProvider:(id)arg4 fontAttributesConstructor:(id)arg5;	// IMP=0x0000000000159fa0

@end

