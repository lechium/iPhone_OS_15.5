//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EDCollection, EDColorsCollection, EDContentFormatsCollection, EDFontsCollection, EDLinksCollection, EDStylesCollection, EDTableStylesCollection;

__attribute__((visibility("hidden")))
@interface EDResources : NSObject
{
    EDCollection *mStrings;	// 8 = 0x8
    EDContentFormatsCollection *mContentFormats;	// 16 = 0x10
    EDFontsCollection *mFonts;	// 24 = 0x18
    EDCollection *mAlignmentInfos;	// 32 = 0x20
    EDStylesCollection *mStyles;	// 40 = 0x28
    EDColorsCollection *mColors;	// 48 = 0x30
    EDColorsCollection *mThemes;	// 56 = 0x38
    EDCollection *mNames;	// 64 = 0x40
    EDLinksCollection *mLinks;	// 72 = 0x48
    EDCollection *mBorders;	// 80 = 0x50
    EDCollection *mBorder;	// 88 = 0x58
    EDCollection *mFills;	// 96 = 0x60
    EDCollection *mDifferentialStyles;	// 104 = 0x68
    EDTableStylesCollection *mTableStyles;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x00000000003ad9d0
- (id)description;	// IMP=0x00000000003ad992
- (id)tableStyles;	// IMP=0x00000000001bfe04
- (id)differentialStyles;	// IMP=0x0000000000150263
- (id)fills;	// IMP=0x000000000011c80c
- (id)border;	// IMP=0x000000000011be9b
- (id)borders;	// IMP=0x000000000011c413
- (id)links;	// IMP=0x000000000011ea7a
- (id)names;	// IMP=0x000000000011ec63
- (id)themes;	// IMP=0x00000000001bc438
- (id)colors;	// IMP=0x000000000013582a
- (id)styles;	// IMP=0x000000000011a3e2
- (id)alignmentInfos;	// IMP=0x000000000011b5f5
- (id)fonts;	// IMP=0x0000000000117c54
- (id)contentFormats;	// IMP=0x0000000000118caa
- (id)strings;	// IMP=0x000000000011ee2e
- (id)initWithStringOptimization:(_Bool)arg1;	// IMP=0x0000000000114c08
- (void)setThemes:(id)arg1;	// IMP=0x0000000000207420
- (void)setColors:(id)arg1;	// IMP=0x000000000011d7a5

@end

