//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iWorkImport/GQWrapPointGenerator-Protocol.h>

@class GQDSStyle, GQDWPContainerHint, GQHStyle, GQWrapPointSet, NSString;

__attribute__((visibility("hidden")))
@interface GQHPagesState <GQWrapPointGenerator>
{
    struct __CFDictionary *mFloatingDrawables;	// 184 = 0xb8
    int mMode;	// 192 = 0xc0
    struct __CFDictionary *mHeaders;	// 200 = 0xc8
    struct __CFDictionary *mFooters;	// 208 = 0xd0
    struct __CFArray *mSectionStyles;	// 216 = 0xd8
    struct __CFDictionary *mPageWrapPointsMap;	// 224 = 0xe0
    int mCurrentPageIndex;	// 232 = 0xe8
    int mStartPageAt;	// 236 = 0xec
    int mStartPageAtValueChangedAtPageIndex;	// 240 = 0xf0
    GQHStyle *mCurrentLayoutStyle;	// 248 = 0xf8
    GQHStyle *mCurrentParagraphStyle;	// 256 = 0x100
    GQDSStyle *mCurrentBaseParagraphStyle;	// 264 = 0x108
    struct __CFString *mCurrentCachedParagraphClass;	// 272 = 0x110
    GQHStyle *mCurrentSpanStyle;	// 280 = 0x118
    GQDSStyle *mCurrentBaseSpanStyle;	// 288 = 0x120
    struct __CFString *mCurrentCachedSpanClass;	// 296 = 0x128
    GQWrapPointSet *mCurrentWrapPointSet;	// 304 = 0x130
    struct CGRect mLastFrame;	// 312 = 0x138
    _Bool mMappingFloatingDrawables;	// 344 = 0x158
    _Bool mStartedPage;	// 345 = 0x159
    _Bool mStartedSection;	// 346 = 0x15a
    _Bool mDidInsertPageHeader;	// 347 = 0x15b
    _Bool mDidFindContainerHint;	// 348 = 0x15c
    GQDWPContainerHint *mLastInsertedContainerHint;	// 352 = 0x160
    struct __CFArray *mAttachmentPositions;	// 360 = 0x168
    long long mAttachmentIdCounter;	// 368 = 0x170
    long long mFirstAttachmentId;	// 376 = 0x178
    _Bool mSplitNextAttachment;	// 384 = 0x180
    GQDSStyle *mCurrentSectionStyle;	// 392 = 0x188
    _Bool mHasLayoutDrawables;	// 400 = 0x190
    int mCurrentHintPageIndex;	// 404 = 0x194
    int mCurrentHintColumnIndex;	// 408 = 0x198
    _Bool mIsMappingHeadersFooters;	// 412 = 0x19c
    int mHeaderFooterPageNumber;	// 416 = 0x1a0
    struct __CFDictionary *mDrawablePagesOrderToCssZOrderClassMap;	// 424 = 0x1a8
    struct CGSize mPageSize;	// 432 = 0x1b0
    struct __CFArray *mTocHrefStack;	// 448 = 0x1c0
    _Bool mCurrentFrameHasSandbagFloats;	// 456 = 0x1c8
    int mProgressiveIndex;	// 460 = 0x1cc
}

- (_Bool)allowInlineWrap;	// IMP=0x000000000002dbbc
- (_Bool)needAbsolutelyPositionedTables;	// IMP=0x000000000002dba3
- (void)endSection;	// IMP=0x000000000002daae
- (void)popTocHref;	// IMP=0x000000000002da72
- (void)pushTocHref:(struct __CFString *)arg1;	// IMP=0x000000000002da29
- (unsigned int)tocDepth;	// IMP=0x000000000002da0a
- (void)setPageSize:(struct CGSize)arg1;	// IMP=0x000000000002d9f2
- (struct CGSize)pageSize;	// IMP=0x000000000002d9da
- (struct __CFDictionary *)pagesOrderToCssZOrderClassMapDictionary;	// IMP=0x000000000002d9c9
- (struct __CFString *)cssZOrderClassForDrawablePagesOrder:(int)arg1;	// IMP=0x000000000002d91f
- (struct __CFString *)cssZOrderClassForDrawable:(id)arg1;	// IMP=0x000000000002d8ec
- (void)addStyle:(struct __CFString *)arg1 className:(struct __CFString *)arg2 srcStyle:(id)arg3;	// IMP=0x000000000002d898
- (void)setOutlineStyleType:(int)arg1;	// IMP=0x000000000002d878
- (void)setOutlineLevel:(int)arg1;	// IMP=0x000000000002d858
- (_Bool)useOutline;	// IMP=0x000000000002d844
- (int)pageNumberForHeaderOrFooter;	// IMP=0x000000000002d820
- (_Bool)isMappingHeadersFooters;	// IMP=0x000000000002d810
- (void)setIsMappingHeadersFooters:(_Bool)arg1;	// IMP=0x000000000002d800
- (_Bool)hasLayoutDrawables;	// IMP=0x000000000002d7f0
- (void)setHasLayoutDrawables:(_Bool)arg1;	// IMP=0x000000000002d7e0
- (void)inContent;	// IMP=0x000000000002d59a
- (void)clearWrapPoints;	// IMP=0x000000000002d594
- (void *)createListOfWrapPointsAlongY:(float)arg1 minX:(float)arg2 maxX:(float)arg3 zIndex:(int)arg4;	// IMP=0x000000000002d32f
- (const void *)wrapPoints;	// IMP=0x000000000002d305
- (void)addWrapPoint:(id)arg1;	// IMP=0x000000000002d29b
- (void)endWrapPointSet;	// IMP=0x000000000002d221
- (void)beginWrapPointSet;	// IMP=0x000000000002d1fa
- (void)resolveHeaderName:(const struct __CFString **)arg1 footerName:(const struct __CFString **)arg2;	// IMP=0x000000000002cd88
- (void)handleContainerHint:(id)arg1;	// IMP=0x000000000002c8bb
- (void)insertAttachmentPlaceholder;	// IMP=0x000000000002c815
- (long long)firstAttachmentId;	// IMP=0x000000000002c804
- (long long)nextAttachmentId;	// IMP=0x000000000002c7eb
- (long long)currentAttachmentId;	// IMP=0x000000000002c7da
- (double)moveToNextAttachmentPosition;	// IMP=0x000000000002c79c
- (double)currentAttachmentPosition;	// IMP=0x000000000002c73a
- (void)addAttachmentPosition:(double)arg1;	// IMP=0x000000000002c6f1
- (void)finishedWithSplitAttachment;	// IMP=0x000000000002c6c6
- (_Bool)splitNextAttachment;	// IMP=0x000000000002c6b6
- (void)mapFloatingDrawablesForPageAtIndex:(unsigned long long)arg1;	// IMP=0x000000000002c551
- (void)setDidFindContainerHint:(_Bool)arg1;	// IMP=0x000000000002c541
- (void)setDidInsertPageHeader:(_Bool)arg1;	// IMP=0x000000000002c531
- (void)setCurrentSpanStyle:(id)arg1 baseStyle:(id)arg2 cachedClass:(struct __CFString *)arg3;	// IMP=0x000000000002c455
- (void)setCurrentParagraphStyle:(id)arg1 baseStyle:(id)arg2 cachedClass:(struct __CFString *)arg3;	// IMP=0x000000000002c379
- (void)setCurrentLayoutStyle:(id)arg1;	// IMP=0x000000000002c333
- (void)setCurrentPageIndex:(int)arg1;	// IMP=0x000000000002c323
- (int)currentPageIndex;	// IMP=0x000000000002c313
- (void)overrideSectionStyle:(id)arg1;	// IMP=0x000000000002c2d7
- (CDStruct_627e0f85)rangeForSectionStyleAtPageIndex:(int)arg1;	// IMP=0x000000000002c27a
- (id)sectionStyleForPageIndex:(int)arg1;	// IMP=0x000000000002c1f4
- (void)addSectionStyle:(id)arg1 pageIndex:(int)arg2 numPages:(int)arg3;	// IMP=0x000000000002c0df
- (void)setFooters:(struct __CFArray *)arg1;	// IMP=0x000000000002c01c
- (id)footerForName:(struct __CFString *)arg1;	// IMP=0x000000000002bffb
- (void)setHeaders:(struct __CFArray *)arg1;	// IMP=0x000000000002bf38
- (id)headerForName:(struct __CFString *)arg1;	// IMP=0x000000000002bf17
- (void)setMode:(int)arg1;	// IMP=0x000000000002bf07
- (int)mode;	// IMP=0x000000000002bef7
- (struct __CFArray *)pageDrawables:(int)arg1;	// IMP=0x000000000002bea3
- (void)clearFloatingDrawables;	// IMP=0x000000000002be2d
- (id)drawableAtIndex:(int)arg1;	// IMP=0x000000000002bdef
- (void)addFloatingDrawable:(id)arg1;	// IMP=0x000000000002bd4a
- (int)floatingDrawablesCount;	// IMP=0x000000000002bd1c
- (void)dealloc;	// IMP=0x000000000002bc10
- (id)initWithState:(id)arg1 documentSize:(struct CGSize)arg2;	// IMP=0x000000000002bafe
- (id)sectionStyleRunForRunBeforePageIndex:(int)arg1;	// IMP=0x000000000002e1f5
- (void)openStateLayoutElementsAndStyles;	// IMP=0x000000000002df97
- (void)closeStateLayoutElementsAndStyles;	// IMP=0x000000000002de80
- (void)startLayout;	// IMP=0x000000000002dd04
- (void)startSection;	// IMP=0x000000000002dc24
- (id)wrapPointSetForPage:(int)arg1;	// IMP=0x000000000002dbd0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
