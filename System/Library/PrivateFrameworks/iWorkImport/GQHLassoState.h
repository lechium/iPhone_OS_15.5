//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GQHXML;

__attribute__((visibility("hidden")))
@interface GQHLassoState
{
    GQHXML *mNavigation;	// 184 = 0xb8
    int mSheetCount;	// 192 = 0xc0
    int mTableCount;	// 196 = 0xc4
    struct __CFString *mCssUri;	// 200 = 0xc8
    struct __CFString *mCurrentSheetFilename;	// 208 = 0xd0
    struct __CFString *mCurrentSheetUri;	// 216 = 0xd8
    struct CGPoint mMaxCanvasPoint;	// 224 = 0xe0
    unsigned int mCurrentDrawableZOrder;	// 240 = 0xf0
    unsigned int mZOrderedDrawableCount;	// 244 = 0xf4
    struct __CFDictionary *mDrawableUidToCssZOrderClassMap;	// 248 = 0xf8
    struct __CFArray *mSheetCssUriList;	// 256 = 0x100
    struct __CFString *mSheetCssFilename;	// 264 = 0x108
    struct __CFString *mSheetOneCss;	// 272 = 0x110
    struct __CFString *mSheetOneLastCSS;	// 280 = 0x118
    char *mFirstWorkspaceName;	// 288 = 0x120
    _Bool mIsProgressiveMode;	// 296 = 0x128
    GQHXML *mIndex;	// 304 = 0x130
    struct __CFArray *mSheetFilenameList;	// 312 = 0x138
    struct __CFArray *mSheetUriList;	// 320 = 0x140
    struct __CFArray *mSheetCssLastUriList;	// 328 = 0x148
    struct __CFString *mSheetCssLastFilename;	// 336 = 0x150
}

- (struct __CFString *)writeTabsJS;	// IMP=0x000000000002a1f7
- (_Bool)inProgressiveMode;	// IMP=0x000000000002a1e7
- (void)writeNavigationPage:(id)arg1;	// IMP=0x0000000000029ec6
- (_Bool)writeIndexPageWithIFrame:(id)arg1;	// IMP=0x00000000000295dd
- (void)writeIndexPageWithDocumentSize:(struct CGSize)arg1;	// IMP=0x0000000000029308
- (unsigned int)currentDrawableZOrder;	// IMP=0x00000000000292f3
- (struct __CFString *)cssZOrderClassForDrawableUid:(const char *)arg1;	// IMP=0x0000000000029273
- (_Bool)drawablesNeedCssZOrdering;	// IMP=0x000000000002926b
- (void)addedDrawableWithBounds:(struct CGRect)arg1;	// IMP=0x0000000000029246
- (struct CGPoint)maxCanvasPoint;	// IMP=0x000000000002922e
- (_Bool)finishMainHtml;	// IMP=0x00000000000290f9
- (void)addCachedStyle:(struct __CFString *)arg1;	// IMP=0x00000000000290aa
- (struct __CFString *)makeInlineStyle:(struct __CFString *)arg1;	// IMP=0x0000000000028fba
- (void)addStyle:(struct __CFString *)arg1 className:(struct __CFString *)arg2 srcStyle:(id)arg3;	// IMP=0x0000000000028f0a
- (int)endSheet;	// IMP=0x0000000000028d2b
- (void)cacheAnchorForIndexPage:(char *)arg1;	// IMP=0x0000000000028ccb
- (void)writeAnchorInNavigationPage:(char *)arg1;	// IMP=0x0000000000028aaa
- (void)beginNewSheet:(const char *)arg1 processorState:(id)arg2;	// IMP=0x0000000000028555
- (void)dealloc;	// IMP=0x0000000000028347
- (id)initWithState:(id)arg1;	// IMP=0x00000000000281f0

@end

