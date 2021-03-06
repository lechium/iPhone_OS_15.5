//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXGAXResponder-Protocol.h>
#import <PhotosUICore/PXGStringSource-Protocol.h>
#import <PhotosUICore/PXGSublayoutFaultingDelegate-Protocol.h>
#import <PhotosUICore/PXGSublayoutProvider-Protocol.h>
#import <PhotosUICore/PXGViewSource-Protocol.h>

@class NSArray, NSAttributedString, NSMutableIndexSet, NSString, PXCArrayStore, PXGPageControlConfiguration, PXStoryChromeButtonConfiguration, PXStoryFullsizeLayout, PXStoryModel, PXStoryStyleSelectionDataSource;
@protocol PXGAXResponder;

@interface PXStoryStyleSwitchingFullsizeLayout <PXChangeObserver, PXGSublayoutProvider, PXGSublayoutFaultingDelegate, PXGStringSource, PXGViewSource, PXGAXResponder>
{
    CDStruct_af00bf4e _updateFlags;	// 8 = 0x8
    unsigned int _styleSwitcherTitleSpriteIndex;	// 32 = 0x20
    unsigned int _pageControlSpriteIndex;	// 36 = 0x24
    unsigned int _restartButtonSpriteIndex;	// 40 = 0x28
    unsigned int _spriteCount;	// 44 = 0x2c
    NSMutableIndexSet *_axSpriteIndexes;	// 48 = 0x30
    id <PXGAXResponder> axNextResponder;	// 56 = 0x38
    PXStoryModel *_model;	// 64 = 0x40
    double _relativeZPositionAboveLegibilityGradients;	// 72 = 0x48
    PXStoryStyleSelectionDataSource *_dataSource;	// 80 = 0x50
    NSArray *_displayedStyleInfos;	// 88 = 0x58
    PXCArrayStore *_fullsizeFrameRectsStore;	// 96 = 0x60
    NSAttributedString *_styleSwitcherTitleString;	// 104 = 0x68
    long long _styleSwitcherTitleVersion;	// 112 = 0x70
    PXStoryChromeButtonConfiguration *_restartButtonConfiguration;	// 120 = 0x78
    long long _restartButtonVersion;	// 128 = 0x80
    PXGPageControlConfiguration *_pageControlConfiguration;	// 136 = 0x88
    long long _pageControlVersion;	// 144 = 0x90
    struct _NSRange _displayedStyleRange;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x00000000005029c9
@property(nonatomic) long long pageControlVersion; // @synthesize pageControlVersion=_pageControlVersion;
@property(copy, nonatomic) PXGPageControlConfiguration *pageControlConfiguration; // @synthesize pageControlConfiguration=_pageControlConfiguration;
@property(nonatomic) long long restartButtonVersion; // @synthesize restartButtonVersion=_restartButtonVersion;
@property(copy, nonatomic) PXStoryChromeButtonConfiguration *restartButtonConfiguration; // @synthesize restartButtonConfiguration=_restartButtonConfiguration;
@property(nonatomic) long long styleSwitcherTitleVersion; // @synthesize styleSwitcherTitleVersion=_styleSwitcherTitleVersion;
@property(copy, nonatomic) NSAttributedString *styleSwitcherTitleString; // @synthesize styleSwitcherTitleString=_styleSwitcherTitleString;
@property(readonly, nonatomic) PXCArrayStore *fullsizeFrameRectsStore; // @synthesize fullsizeFrameRectsStore=_fullsizeFrameRectsStore;
@property(copy, nonatomic) NSArray *displayedStyleInfos; // @synthesize displayedStyleInfos=_displayedStyleInfos;
@property(nonatomic) struct _NSRange displayedStyleRange; // @synthesize displayedStyleRange=_displayedStyleRange;
@property(retain, nonatomic) PXStoryStyleSelectionDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) double relativeZPositionAboveLegibilityGradients; // @synthesize relativeZPositionAboveLegibilityGradients=_relativeZPositionAboveLegibilityGradients;
@property(readonly, nonatomic) PXStoryModel *model; // @synthesize model=_model;
@property(nonatomic) __weak id <PXGAXResponder> axNextResponder; // @synthesize axNextResponder;
- (id)_axAssetsVisible;	// IMP=0x00000000005026ba
- (id)_axSongTitle;	// IMP=0x00000000005025a7
- (id)_axSongArtistName;	// IMP=0x0000000000502494
- (id)_axStyleTitle;	// IMP=0x000000000050236e
- (unsigned long long)_axSwitcherFractionDenominator;	// IMP=0x00000000005022e2
- (unsigned long long)_axSwitcherFractionNumerator;	// IMP=0x0000000000502271
- (_Bool)_handleSwitchStyle:(id)arg1 inGroup:(id)arg2;	// IMP=0x000000000050209a
- (_Bool)axGroup:(id)arg1 didRequestToPerformAction:(long long)arg2 userInfo:(id)arg3;	// IMP=0x0000000000501df5
- (void)axGroup:(id)arg1 didChange:(unsigned long long)arg2 userInfo:(id)arg3;	// IMP=0x0000000000501d67
- (id)axContainingScrollViewForAXGroup:(id)arg1;	// IMP=0x0000000000501ce4
- (id)axContentInfoAtSpriteIndex:(unsigned int)arg1;	// IMP=0x00000000005019f7
- (_Bool)_isFakeAXSpriteIndex:(unsigned long long)arg1;	// IMP=0x00000000005019d5
- (unsigned int)axSpriteIndexClosestToSpriteIndex:(unsigned int)arg1 inDirection:(unsigned long long)arg2;	// IMP=0x0000000000501943
- (id)axSpriteIndexesInRect:(struct CGRect)arg1;	// IMP=0x0000000000501931
- (id)axVisibleSpriteIndexes;	// IMP=0x0000000000501838
- (id)axSpriteIndexes;	// IMP=0x0000000000501813
- (struct CGRect)axFrame;	// IMP=0x0000000000501710
- (void)_configureTimelineLayout:(id)arg1 maskLayout:(id)arg2 forIndex:(long long)arg3;	// IMP=0x0000000000500f16
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x0000000000500d19
- (id)layout:(id)arg1 createSublayoutAtIndex:(long long)arg2;	// IMP=0x0000000000500b28
- (struct CGSize)layout:(id)arg1 estimatedContentSizeForSublayoutAtIndex:(long long)arg2 referenceSize:(struct CGSize)arg3;	// IMP=0x0000000000500b22
- (_Bool)layout:(id)arg1 shouldPreventFaultOutOfSublayout:(id)arg2;	// IMP=0x0000000000500b1a
- (id)viewUserDataForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;	// IMP=0x0000000000500a3e
- (Class)viewClassForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;	// IMP=0x0000000000500963
- (id)attributedStringForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;	// IMP=0x000000000050089d
- (long long)verticalAlignmentForStringAtIndex:(unsigned int)arg1 inLayout:(id)arg2;	// IMP=0x0000000000500895
- (id)stringAttributesAtIndex:(unsigned int)arg1 inLayout:(id)arg2;	// IMP=0x000000000050088d
- (id)stringAtIndex:(unsigned int)arg1 inLayout:(id)arg2;	// IMP=0x0000000000500880
- (void)_handleRestartButton:(id)arg1;	// IMP=0x000000000050083c
- (void)_handlePageControl:(id)arg1;	// IMP=0x0000000000500764
- (void)_updateAXSpriteIndexes;	// IMP=0x00000000005005f3
- (void)_invalidateAXSpriteIndexes;	// IMP=0x00000000005004ff
- (void)_updateContent;	// IMP=0x00000000005000d7
- (void)_invalidateContent;	// IMP=0x00000000004fffe3
- (void)_updateDisplayedStyles;	// IMP=0x00000000004ffe88
- (void)_invalidateDisplayedStyles;	// IMP=0x00000000004ffd94
- (void)_updateDisplayedStyleRange;	// IMP=0x00000000004ffc30
- (void)_invalidateDisplayedStyleRange;	// IMP=0x00000000004ffb3c
- (void)_updateRestartButton;	// IMP=0x00000000004ff9f5
- (void)_invalidateRestartButton;	// IMP=0x00000000004ff901
- (void)_updatePageControl;	// IMP=0x00000000004ff7ee
- (void)_invalidatePageControl;	// IMP=0x00000000004ff6fa
- (void)_updateTitleString;	// IMP=0x00000000004ff605
- (void)_invalidateTitleString;	// IMP=0x00000000004ff511
- (void)didUpdate;	// IMP=0x00000000004ff43b
- (void)update;	// IMP=0x00000000004fee20
- (void)willUpdate;	// IMP=0x00000000004fed45
- (_Bool)allowsSublayoutUpdateCycleAssertions;	// IMP=0x00000000004fed3d
- (void)referenceDepthDidChange;	// IMP=0x00000000004fece7
- (void)referenceSizeDidChange;	// IMP=0x00000000004fec91
- (void)alphaDidChange;	// IMP=0x00000000004fec50
@property(readonly, nonatomic) PXStoryFullsizeLayout *dominantFullsizePlayerLayout;
- (id)initWithModel:(id)arg1;	// IMP=0x00000000004fe4fd
- (id)init;	// IMP=0x00000000004fe483

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

