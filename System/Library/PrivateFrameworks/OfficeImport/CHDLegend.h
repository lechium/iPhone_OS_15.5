//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EDCollection, EDResources, NSArray, OADGraphicProperties;

__attribute__((visibility("hidden")))
@interface CHDLegend : NSObject
{
    int mLegendPosition;	// 8 = 0x8
    OADGraphicProperties *mGraphicProperties;	// 16 = 0x10
    unsigned long long mFontIndex;	// 24 = 0x18
    EDCollection *mLegendEntries;	// 32 = 0x20
    EDResources *mResources;	// 40 = 0x28
    _Bool mIsVertical;	// 48 = 0x30
    _Bool mIsOverlay;	// 49 = 0x31
    NSArray *mLabelEffects;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000003957a0
- (id)description;	// IMP=0x0000000000395762
- (_Bool)isAutoSizeAndPosition;	// IMP=0x0000000000395749
- (void)setLabelEffects:(id)arg1;	// IMP=0x00000000003956fe
- (id)labelEffects;	// IMP=0x00000000003956f0
- (void)setIsOverlay:(_Bool)arg1;	// IMP=0x00000000003956e7
- (_Bool)isOverlay;	// IMP=0x00000000003956de
- (void)setIsSingleColumnLegend:(_Bool)arg1;	// IMP=0x00000000001e4cb4
- (_Bool)isSingleColumnLegend;	// IMP=0x00000000003956d5
- (id)legendEntries;	// IMP=0x00000000001e50ae
- (void)setFont:(id)arg1;	// IMP=0x000000000022d4d0
- (id)font;	// IMP=0x00000000001e50f7
- (void)setGraphicProperties:(id)arg1;	// IMP=0x00000000001e4c43
- (id)graphicProperties;	// IMP=0x00000000003956c7
- (void)setLegendPosition:(int)arg1;	// IMP=0x00000000001e4cab
- (int)legendPosition;	// IMP=0x00000000001e50ee
- (id)initWithResources:(id)arg1;	// IMP=0x00000000001e4911
- (void)setFontIndex:(unsigned long long)arg1;	// IMP=0x00000000001e4b5b
- (unsigned long long)fontIndex;	// IMP=0x00000000003957dc

@end

