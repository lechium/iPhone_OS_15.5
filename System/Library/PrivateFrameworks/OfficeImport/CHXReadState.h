//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CHDChart, CHDChartType, CHDSeries, EDResources, EXOfficeArtState, OADParagraphProperties, OCPPackagePart;
@protocol CHAutoStyling;

__attribute__((visibility("hidden")))
@interface CHXReadState : NSObject
{
    EXOfficeArtState *mDrawingState;	// 8 = 0x8
    CHDChart *mChart;	// 16 = 0x10
    EDResources *mResources;	// 24 = 0x18
    OCPPackagePart *mChartPart;	// 32 = 0x20
    CHDChartType *mCurrentChartType;	// 40 = 0x28
    CHDSeries *mCurrentSeries;	// 48 = 0x30
    OADParagraphProperties *mDefaultTextProperties;	// 56 = 0x38
    _Bool mDefaultTextPropertiesHaveExplicitFontSize;	// 64 = 0x40
    id <CHAutoStyling> mAutoStyling;	// 72 = 0x48
    _Bool mIgnoreFormulas;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000039dd2f
@property(nonatomic) _Bool ignoreFormulas; // @synthesize ignoreFormulas=mIgnoreFormulas;
- (id)autoStyling;	// IMP=0x000000000039dd0f
- (void)popDefaultTextProperties;	// IMP=0x000000000039dcab
- (void)pushDefaultTextProperties:(id)arg1;	// IMP=0x000000000039dc4d
- (void)popTitleTextProperties;	// IMP=0x000000000039dbe9
- (void)pushTitleTextProperties:(_Bool)arg1;	// IMP=0x000000000039dae5
- (void)setDefaultTextPropertiesHaveExplicitFontSize:(_Bool)arg1;	// IMP=0x000000000039dadc
- (void)setDefaultTextProperties:(id)arg1;	// IMP=0x000000000039da91
- (id)defaultTextProperties;	// IMP=0x000000000039da83
- (id)exState;	// IMP=0x000000000039da6d
- (void)setCurrentSeries:(id)arg1;	// IMP=0x000000000039da22
- (id)currentSeries;	// IMP=0x000000000039da14
- (void)setCurrentChartType:(id)arg1;	// IMP=0x000000000039d9c9
- (id)currentChartType;	// IMP=0x000000000039d9bb
- (void)setChartPart:(id)arg1;	// IMP=0x000000000039d970
- (id)chartPart;	// IMP=0x000000000039d962
- (void)setResources:(id)arg1;	// IMP=0x000000000039d917
- (id)resources;	// IMP=0x000000000039d909
- (void)setChart:(id)arg1;	// IMP=0x000000000039d738
- (id)chart;	// IMP=0x000000000039d72a
- (id)drawingState;	// IMP=0x000000000039d71c
- (id)initWithDrawingState:(id)arg1;	// IMP=0x000000000039d69d

@end

