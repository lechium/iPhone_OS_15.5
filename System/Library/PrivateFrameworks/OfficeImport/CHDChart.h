//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <OfficeImport/OADDrawableContainer-Protocol.h>

@class CHDDefaultTextProperties, CHDLegend, CHDPlotArea, CHDTitle, CHDView3D, EDSheet, EDWorkbook, NSMutableArray, NSString, OADGraphicProperties, OADThemeOverrides;

__attribute__((visibility("hidden")))
@interface CHDChart <OADDrawableContainer>
{
    EDSheet *mSheet;	// 48 = 0x30
    int mStyleId;	// 56 = 0x38
    _Bool mAutoTitleDeleted;	// 60 = 0x3c
    _Bool mPlotVisibleCellsOnly;	// 61 = 0x3d
    _Bool mMSGraph;	// 62 = 0x3e
    _Bool mHasSharedXValues;	// 63 = 0x3f
    _Bool mDirectionChanged;	// 64 = 0x40
    _Bool mHasVisibleSeriesNames;	// 65 = 0x41
    int mDisplayBlankCellsAs;	// 68 = 0x44
    CHDPlotArea *mPlotArea;	// 72 = 0x48
    CHDView3D *mView3D;	// 80 = 0x50
    CHDTitle *mTitle;	// 88 = 0x58
    CHDLegend *mLegend;	// 96 = 0x60
    EDWorkbook *mExternalData;	// 104 = 0x68
    OADGraphicProperties *mChartAreaGraphicProperties;	// 112 = 0x70
    OADGraphicProperties *mBackWallGraphicProperties;	// 120 = 0x78
    OADGraphicProperties *mSideWallGraphicProperties;	// 128 = 0x80
    OADGraphicProperties *mFloorGraphicProperties;	// 136 = 0x88
    CHDDefaultTextProperties *mDefaultTextProperties;	// 144 = 0x90
    int mChartDirection;	// 152 = 0x98
    struct CGRect mLogicalBounds;	// 160 = 0xa0
    NSMutableArray *mDrawables;	// 192 = 0xc0
    OADThemeOverrides *mThemeOverrides;	// 200 = 0xc8
}

+ (id)binaryEffects:(_Bool)arg1;	// IMP=0x0000000000170b43
- (void).cxx_destruct;	// IMP=0x000000000039344b
@property(readonly, copy) NSString *description;
- (void)setVisibleSeriesNames:(_Bool)arg1;	// IMP=0x00000000003933fd
- (_Bool)hasVisibleSeriesNames;	// IMP=0x00000000003933ed
- (void)setDirectionChanged:(_Bool)arg1;	// IMP=0x00000000001f372c
- (_Bool)isDirectionChanged;	// IMP=0x000000000022d2b0
- (void)setHasSharedXValues:(_Bool)arg1;	// IMP=0x00000000003933dd
- (_Bool)hasSharedXValues;	// IMP=0x00000000003933cd
- (void)setMSGraph:(_Bool)arg1;	// IMP=0x00000000003933bd
- (_Bool)isMSGraph;	// IMP=0x0000000000182259
- (unsigned long long)categoryCount;	// IMP=0x000000000022d2c0
- (unsigned long long)seriesCount;	// IMP=0x000000000021556e
- (_Bool)isBinary;	// IMP=0x000000000016f2c4
- (_Bool)isScatterOrBubble;	// IMP=0x0000000000393305
- (_Bool)supportsMarkers;	// IMP=0x000000000039324d
- (_Bool)isArea;	// IMP=0x00000000003931ee
- (_Bool)isPie;	// IMP=0x000000000021550f
- (_Bool)is3D;	// IMP=0x000000000020e969
- (id)mainType;	// IMP=0x00000000001881ef
- (id)styleMatrix;	// IMP=0x000000000020d6dc
- (int)defaultLabelPosition;	// IMP=0x000000000039317d
- (id)defaultFontWithResources:(id)arg1;	// IMP=0x00000000003930f1
- (id)defaultContentFormat;	// IMP=0x0000000000393074
- (unsigned long long)defaultFontIndex;	// IMP=0x00000000001fbf88
- (id)defaultSeriesTitleFont;	// IMP=0x0000000000392ef1
- (id)defaultDataLabelFont;	// IMP=0x0000000000392d71
- (id)defaultTextFont;	// IMP=0x0000000000392c35
- (id)defaultThemeFont;	// IMP=0x0000000000392850
- (void)changeParentTextListStylePreservingEffectiveValues:(id)arg1;	// IMP=0x00000000003926e6
- (void)setParentTextListStyle:(id)arg1;	// IMP=0x000000000018f0d0
- (void)removeChild:(id)arg1;	// IMP=0x0000000000392654
- (void)replaceChild:(id)arg1 with:(id)arg2;	// IMP=0x000000000039257e
- (void)setThemeOverrides:(id)arg1;	// IMP=0x000000000039256a
- (id)themeOverrides;	// IMP=0x0000000000392555
- (id)children;	// IMP=0x0000000000392540
- (id)childAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000392523
- (void)addChildren:(id)arg1;	// IMP=0x0000000000392434
- (void)addChild:(id)arg1;	// IMP=0x000000000018e795
- (unsigned long long)childCount;	// IMP=0x0000000000392417
- (void)setLogicalBounds:(struct CGRect)arg1;	// IMP=0x000000000016f859
- (struct CGRect)logicalBounds;	// IMP=0x00000000003923f7
- (void)setDirection:(int)arg1;	// IMP=0x0000000000182f32
- (int)direction;	// IMP=0x0000000000181399
- (void)setDefaultTextProperties:(id)arg1;	// IMP=0x00000000003923a6
- (id)defaultTextProperties;	// IMP=0x0000000000174998
- (void)setFloorGraphicProperties:(id)arg1;	// IMP=0x000000000017b30b
- (id)floorGraphicProperties;	// IMP=0x0000000000392391
- (void)setSideWallGraphicProperties:(id)arg1;	// IMP=0x000000000017a7f1
- (id)sideWallGraphicProperties;	// IMP=0x000000000039237c
- (void)setBackWallGraphicProperties:(id)arg1;	// IMP=0x000000000017a842
- (id)backWallGraphicProperties;	// IMP=0x0000000000392367
- (void)setChartAreaGraphicProperties:(id)arg1;	// IMP=0x0000000000171896
- (id)chartAreaGraphicProperties;	// IMP=0x0000000000188e19
- (void)setExternalData:(id)arg1;	// IMP=0x000000000021653e
- (id)externalData;	// IMP=0x0000000000392352
- (void)setLegend:(id)arg1;	// IMP=0x00000000001e4cbd
- (id)legend;	// IMP=0x000000000017fe58
- (void)setTitle:(id)arg1;	// IMP=0x00000000001816b1
- (id)title;	// IMP=0x00000000001886ad
- (void)setView3D:(id)arg1;	// IMP=0x000000000017cd8d
- (id)view3D;	// IMP=0x000000000022b9fd
- (void)setPlotArea:(id)arg1;	// IMP=0x00000000001815e4
- (id)plotArea;	// IMP=0x0000000000176804
- (void)setDisplayBlankAs:(int)arg1;	// IMP=0x0000000000171923
- (int)displayBlankAs;	// IMP=0x0000000000392342
- (void)setPlotVisibleCellsOnly:(_Bool)arg1;	// IMP=0x00000000001718f6
- (_Bool)isPlotVisibleCellsOnly;	// IMP=0x0000000000392332
- (void)setAutoTitleDeleted:(_Bool)arg1;	// IMP=0x0000000000181702
- (_Bool)isAutoTitleDeleted;	// IMP=0x0000000000392322
- (void)setStyleId:(int)arg1;	// IMP=0x000000000016f154
- (int)styleId;	// IMP=0x000000000020d433
- (id)processors;	// IMP=0x000000000017ef77
- (id)workbook;	// IMP=0x000000000020d7b1
- (void)setSheet:(id)arg1;	// IMP=0x000000000016f140
- (id)sheet;	// IMP=0x000000000039230d
- (id)init;	// IMP=0x000000000016ccec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

