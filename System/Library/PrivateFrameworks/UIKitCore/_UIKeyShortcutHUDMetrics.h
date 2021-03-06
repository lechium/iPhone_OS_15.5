//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableArray, UIEvent, UITraitCollection, UIView, _UIKeyShortcutHUDMenu, _UIKeyShortcutHUDShortcutCell, _UIKeyShortcutHUDShortcutColumnMetrics, _UIKeyShortcutHUDToolbarCategoryCell, _UIKeyShortcutHUDToolbarSearchCell;

__attribute__((visibility("hidden")))
@interface _UIKeyShortcutHUDMetrics : NSObject
{
    _Bool _shouldMirrorShortcutInputs;	// 8 = 0x8
    _Bool _shouldDisplayEscShortcutAlternative;	// 9 = 0x9
    _Bool _searching;	// 10 = 0xa
    _Bool _combinedShortcutAndAlternateColumnWidths;	// 11 = 0xb
    _UIKeyShortcutHUDShortcutCell *_selfSizingShortcutCell;	// 16 = 0x10
    _UIKeyShortcutHUDToolbarSearchCell *_selfSizingSearchCell;	// 24 = 0x18
    _UIKeyShortcutHUDToolbarCategoryCell *_selfSizingToolbarCategoryCell;	// 32 = 0x20
    _UIKeyShortcutHUDMenu *_baseMenu;	// 40 = 0x28
    UIView *_selfSizingPlayground;	// 48 = 0x30
    unsigned long long _numCellsPerColumn;	// 56 = 0x38
    double _searchModePreferredMenuPanelHeight;	// 64 = 0x40
    double _displayedMenuContentWidth;	// 72 = 0x48
    double _searchButtonWidth;	// 80 = 0x50
    double _widestToolbarCategoryCellWidth;	// 88 = 0x58
    UITraitCollection *_traitCollection;	// 96 = 0x60
    double _windowSceneHeight;	// 104 = 0x68
    UIEvent *_triggeringEvent;	// 112 = 0x70
    NSMapTable *_shortcutCellMetricsMap;	// 120 = 0x78
    NSMapTable *_shortcutCellIndexPathsMap;	// 128 = 0x80
    double _computedHUDWidthForBaseMenu;	// 136 = 0x88
    _UIKeyShortcutHUDMenu *_displayedMenu;	// 144 = 0x90
    NSMutableArray *_displayedMenuColumnMetrics;	// 152 = 0x98
    NSMutableArray *_displayedMenuCategoryOffsets;	// 160 = 0xa0
    _UIKeyShortcutHUDShortcutColumnMetrics *_displayedSearchColumnMetrics;	// 168 = 0xa8
}

+ (id)metricsForHUDWindow:(id)arg1 triggeringEvent:(id)arg2;	// IMP=0x000000000088378c
- (void).cxx_destruct;	// IMP=0x0000000000887598
@property(retain, nonatomic) _UIKeyShortcutHUDShortcutColumnMetrics *displayedSearchColumnMetrics; // @synthesize displayedSearchColumnMetrics=_displayedSearchColumnMetrics;
@property(retain, nonatomic) NSMutableArray *displayedMenuCategoryOffsets; // @synthesize displayedMenuCategoryOffsets=_displayedMenuCategoryOffsets;
@property(retain, nonatomic) NSMutableArray *displayedMenuColumnMetrics; // @synthesize displayedMenuColumnMetrics=_displayedMenuColumnMetrics;
@property(readonly, nonatomic, getter=areShortcutAndAlternateColumnWidthsCombined) _Bool combinedShortcutAndAlternateColumnWidths; // @synthesize combinedShortcutAndAlternateColumnWidths=_combinedShortcutAndAlternateColumnWidths;
@property(readonly, nonatomic, getter=isSearching) _Bool searching; // @synthesize searching=_searching;
@property(readonly, nonatomic) _UIKeyShortcutHUDMenu *displayedMenu; // @synthesize displayedMenu=_displayedMenu;
@property(nonatomic) double computedHUDWidthForBaseMenu; // @synthesize computedHUDWidthForBaseMenu=_computedHUDWidthForBaseMenu;
@property(retain, nonatomic) NSMapTable *shortcutCellIndexPathsMap; // @synthesize shortcutCellIndexPathsMap=_shortcutCellIndexPathsMap;
@property(retain, nonatomic) NSMapTable *shortcutCellMetricsMap; // @synthesize shortcutCellMetricsMap=_shortcutCellMetricsMap;
@property(retain, nonatomic) UIEvent *triggeringEvent; // @synthesize triggeringEvent=_triggeringEvent;
@property(nonatomic) double windowSceneHeight; // @synthesize windowSceneHeight=_windowSceneHeight;
@property(retain, nonatomic) UITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
@property(readonly, nonatomic) double widestToolbarCategoryCellWidth; // @synthesize widestToolbarCategoryCellWidth=_widestToolbarCategoryCellWidth;
@property(readonly, nonatomic) double searchButtonWidth; // @synthesize searchButtonWidth=_searchButtonWidth;
@property(readonly, nonatomic) _Bool shouldDisplayEscShortcutAlternative; // @synthesize shouldDisplayEscShortcutAlternative=_shouldDisplayEscShortcutAlternative;
@property(readonly, nonatomic) _Bool shouldMirrorShortcutInputs; // @synthesize shouldMirrorShortcutInputs=_shouldMirrorShortcutInputs;
@property(readonly, nonatomic) double displayedMenuContentWidth; // @synthesize displayedMenuContentWidth=_displayedMenuContentWidth;
@property(readonly, nonatomic) double searchModePreferredMenuPanelHeight; // @synthesize searchModePreferredMenuPanelHeight=_searchModePreferredMenuPanelHeight;
@property(readonly, nonatomic) unsigned long long numCellsPerColumn; // @synthesize numCellsPerColumn=_numCellsPerColumn;
@property(nonatomic) __weak UIView *selfSizingPlayground; // @synthesize selfSizingPlayground=_selfSizingPlayground;
@property(nonatomic) __weak _UIKeyShortcutHUDMenu *baseMenu; // @synthesize baseMenu=_baseMenu;
- (double)headerWidthForCategory:(id)arg1;	// IMP=0x000000000088732c
- (double)inputWidthForShortcut:(id)arg1;	// IMP=0x000000000088721d
- (double)modifiersWidthForShortcut:(id)arg1;	// IMP=0x000000000088710e
- (double)cellWidthForShortcut:(id)arg1;	// IMP=0x0000000000886fc9
@property(readonly, nonatomic) double emptyColumnWidth;
@property(readonly, nonatomic) double menuCellHeight;
@property(readonly, nonatomic) double maxShortcutCellWidth;
@property(readonly, nonatomic) double minShortcutCellWidth;
@property(readonly, nonatomic) double categoryHeaderVerticalTextAdjustment;
@property(readonly, nonatomic) double cellCornerRadius;
@property(readonly, nonatomic) double cellFlashDuration;
@property(readonly, nonatomic) double shortcutTitleToSubtitleVerticalPadding;
@property(readonly, nonatomic) double standardShortcutModifierInputMinimumSpacing;
@property(readonly, nonatomic) double standardShortcutInputReservedWidth;
@property(readonly, nonatomic) double minShortcutNameKeyCombinationSpacing;
@property(readonly, nonatomic) double menuCellHorizontalContentMargin;
- (double)horizontalOffsetForCategoryAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000886e56
- (unsigned long long)categoryIndexAtHorizontalOffset:(double)arg1;	// IMP=0x0000000000886d2a
@property(readonly, nonatomic) double toolbarSeparatorVerticalMargin;
@property(readonly, nonatomic) double menuSeparatorHorizontalMargin;
@property(readonly, nonatomic) double separatorWidth;
@property(readonly, nonatomic) _Bool toolbarStylesCategoriesAsPageControl;
@property(readonly, nonatomic) double toolbarContentInset;
@property(readonly, nonatomic) double menuColumnSpacing;
@property(readonly, nonatomic) double searchModeMenuBottomContentInset;
@property(readonly, nonatomic) double searchModeMenuTopContentInset;
@property(readonly, nonatomic) double searchModeMenuBaseVerticalContentInset;
@property(readonly, nonatomic) double menuBottomContentInset;
@property(readonly, nonatomic) double menuTopContentInset;
@property(readonly, nonatomic) double menuBaseVerticalContentInset;
@property(readonly, nonatomic) double menuHorizontalContentInset;
@property(readonly, nonatomic) double standardMenuPadding;
@property(readonly, nonatomic) _Bool shouldAlignShortcutModifiersAndInputInColumn;
@property(readonly, nonatomic) unsigned long long maxNumberOfCellsInSearchResults;
@property(readonly, nonatomic) double toolbarPanelStrokeWidth;
@property(readonly, nonatomic) unsigned long long toolbarPanelCornerMask;
@property(readonly, nonatomic) _Bool shouldExtendToolbarThroughSafeArea;
@property(readonly, nonatomic) double standardToolbarContentHeight;
@property(readonly, nonatomic) double menuPanelStrokeWidth;
@property(readonly, nonatomic) unsigned long long menuPanelCornerMask;
@property(readonly, nonatomic) double hiddenMenuPanelHeight;
@property(readonly, nonatomic) double hiddenMenuPanelWidth;
@property(readonly, nonatomic) double searchModePreferredMenuPanelWidth;
@property(readonly, nonatomic) double searchModeMaximumMenuPanelHeight;
@property(readonly, nonatomic) double standardMenuPanelHeight;
@property(readonly, nonatomic) double platterShadowOpacity;
@property(readonly, nonatomic) double platterShadowRadius;
@property(readonly, nonatomic) double standardPlatterStrokeWidth;
@property(readonly, nonatomic) double platterCornerRadius;
@property(readonly, nonatomic) double minimumBottomScreenEdgeDistance;
@property(readonly, nonatomic) double minimumScreenEdgeDistance;
@property(readonly, nonatomic) double standardMenuToolbarSpacing;
@property(readonly, nonatomic) double searchModeStandardHUDWidth;
@property(readonly, nonatomic) double standardHUDWidth;
@property(readonly, nonatomic) unsigned long long baseNumberOfVisibleColumns;
@property(readonly, nonatomic) unsigned long long maxNumberOfCellsPerColumn;
@property(readonly, nonatomic, getter=isHUDShrunkToFitHorizontally) _Bool hudShrunkToFitHorizontally;
- (double)_contentSizeScaledMetric:(double)arg1;	// IMP=0x00000000008866f0
- (double)_computedWidthForCategoryAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000886492
- (void)_updateDisplayedSearchMenuMetrics;	// IMP=0x0000000000885bae
- (double)_shortcutWidthAdjustmentForMetrics:(id)arg1 shortcutWidth:(double)arg2;	// IMP=0x0000000000885b29
- (void)_updateDisplayedStandardMenuMetrics;	// IMP=0x0000000000884b64
- (void)_updateDisplayedMenuMetrics;	// IMP=0x0000000000884a3c
- (void)_computeAndStoreCellMetricsForShortcut:(id)arg1 indexPath:(id)arg2;	// IMP=0x00000000008848b1
- (void)_updateBaseMenuMetrics;	// IMP=0x0000000000883f54
- (void)_computeOneTimeMetrics;	// IMP=0x0000000000883e85
- (void)_setDisplayedMenu:(id)arg1 searching:(_Bool)arg2 combinedShortcutAndAlternateColumnWidths:(_Bool)arg3;	// IMP=0x0000000000883e02
- (void)setDisplayedMenu:(id)arg1 searching:(_Bool)arg2;	// IMP=0x0000000000883d9d
@property(readonly, nonatomic) _UIKeyShortcutHUDToolbarCategoryCell *selfSizingToolbarCategoryCell; // @synthesize selfSizingToolbarCategoryCell=_selfSizingToolbarCategoryCell;
@property(readonly, nonatomic) _UIKeyShortcutHUDToolbarSearchCell *selfSizingSearchCell; // @synthesize selfSizingSearchCell=_selfSizingSearchCell;
@property(readonly, nonatomic) _UIKeyShortcutHUDShortcutCell *selfSizingShortcutCell; // @synthesize selfSizingShortcutCell=_selfSizingShortcutCell;

@end

