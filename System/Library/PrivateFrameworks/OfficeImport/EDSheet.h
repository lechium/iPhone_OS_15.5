//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EDColorReference, EDHeaderFooter, EDPageSetup, EDProcessors, EDString, EDWarnings, EDWorkbook, ESDContainer, NSMutableArray, OITSUPointerKeyDictionary;

__attribute__((visibility("hidden")))
@interface EDSheet
{
    EDString *mName;	// 24 = 0x18
    _Bool mHidden;	// 32 = 0x20
    _Bool mDisplayFormulas;	// 33 = 0x21
    _Bool mDisplayGridlines;	// 34 = 0x22
    _Bool mIsDialogSheet;	// 35 = 0x23
    EDColorReference *mDefaultGridlineColorReference;	// 40 = 0x28
    EDHeaderFooter *mHeaderFooter;	// 48 = 0x30
    EDPageSetup *mPageSetup;	// 56 = 0x38
    NSMutableArray *mDrawables;	// 64 = 0x40
    OITSUPointerKeyDictionary *mTextBoxMap;	// 72 = 0x48
    OITSUPointerKeyDictionary *mCommentMap;	// 80 = 0x50
    EDProcessors *mProcessors;	// 88 = 0x58
    EDWarnings *mWarnings;	// 96 = 0x60
    ESDContainer *mEscherDrawing;	// 104 = 0x68
    EDWorkbook *mWorkbook;	// 112 = 0x70
}

+ (id)sheetWithWorkbook:(id)arg1;	// IMP=0x00000000003aef5d
- (void).cxx_destruct;	// IMP=0x00000000003af290
@property(readonly) __weak EDWorkbook *workbook; // @synthesize workbook=mWorkbook;
@property(nonatomic) _Bool isDialogSheet; // @synthesize isDialogSheet=mIsDialogSheet;
- (id)description;	// IMP=0x00000000003af239
- (id)warnings;	// IMP=0x0000000000237a84
- (void)applyProcessors;	// IMP=0x000000000012e56e
- (id)processors;	// IMP=0x0000000000123bc9
- (void)setEDComment:(id)arg1 forShape:(id)arg2;	// IMP=0x00000000003af21b
- (id)edCommentForShape:(id)arg1;	// IMP=0x00000000003af1ee
- (unsigned long long)commentCount;	// IMP=0x00000000003af1d1
- (void)setEDTextBox:(id)arg1 forShape:(id)arg2;	// IMP=0x00000000003af1b3
- (id)edTextBoxForShape:(id)arg1;	// IMP=0x00000000003af186
- (id)drawables;	// IMP=0x00000000003af171
- (void)removeDrawableAtIndex:(unsigned long long)arg1;	// IMP=0x00000000003af154
- (void)addDrawable:(id)arg1;	// IMP=0x000000000013f352
- (id)drawableAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001461d5
- (unsigned long long)drawableCount;	// IMP=0x0000000000130ca8
- (void)setPageSetup:(id)arg1;	// IMP=0x0000000000124de7
- (id)pageSetup;	// IMP=0x00000000001c5f42
- (void)setHeaderFooter:(id)arg1;	// IMP=0x0000000000124c81
- (id)headerFooter;	// IMP=0x00000000003af13c
- (void)setDefaultGridlineColor:(id)arg1;	// IMP=0x00000000003af05f
- (id)defaultGridlineColor;	// IMP=0x00000000003af042
- (void)setDisplayGridlines:(_Bool)arg1;	// IMP=0x000000000012c3e2
- (_Bool)isDisplayGridlines;	// IMP=0x0000000000131ef2
- (void)setDisplayFormulas:(_Bool)arg1;	// IMP=0x000000000012c3d2
- (_Bool)isDisplayFormulas;	// IMP=0x0000000000130382
- (void)setHidden:(_Bool)arg1;	// IMP=0x000000000011fec2
- (_Bool)isHidden;	// IMP=0x0000000000120372
- (void)setName:(id)arg1;	// IMP=0x000000000011fe41
- (id)name;	// IMP=0x000000000012f25c
- (void)doneWithNonRowContent;	// IMP=0x00000000003aefcb
- (void)dealloc;	// IMP=0x0000000000137422
- (id)initWithWorkbook:(id)arg1;	// IMP=0x000000000011f930
- (void)reduceMemoryIfPossible;	// IMP=0x00000000003af358
- (void)setEscherDrawing:(id)arg1;	// IMP=0x00000000003af373
- (id)escherDrawing;	// IMP=0x00000000003af35e
- (id)drawableEnumerator;	// IMP=0x00000000003af3a7
- (void)setDefaultGridlineColorReference:(id)arg1;	// IMP=0x000000000011fde6
- (id)defaultGridlineColorReference;	// IMP=0x00000000003af391
- (void)teardown;	// IMP=0x000000000013728d
- (void)setup;	// IMP=0x000000000011fbf7

@end
