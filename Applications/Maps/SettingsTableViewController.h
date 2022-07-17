//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MapViewModeGridSelector, NSArray, NSDictionary, NSLayoutConstraint, NSString, SettingsController, VGVirtualGarage;

__attribute__((visibility("hidden")))
@interface SettingsTableViewController
{
    NSArray *_displaySections;	// 8 = 0x8
    NSDictionary *_menuItemsPerSections;	// 16 = 0x10
    NSArray *_lastDisplaySections;	// 24 = 0x18
    NSDictionary *_lastMenuItemsPerSections;	// 32 = 0x20
    MapViewModeGridSelector *_mapModeSelector;	// 40 = 0x28
    _Bool _isReloadingData;	// 48 = 0x30
    _Bool _shouldShowMyVehicles;	// 49 = 0x31
    VGVirtualGarage *_virtualGarage;	// 56 = 0x38
    NSArray *_unpairedVehicles;	// 64 = 0x40
    int _notifyToken;	// 72 = 0x48
    NSLayoutConstraint *_compactHeightConstraint;	// 80 = 0x50
    _Bool _useCompactVerticalLayout;	// 88 = 0x58
    SettingsController *_settingsController;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0020000000668415
@property(nonatomic) __weak SettingsController *settingsController; // @synthesize settingsController=_settingsController;
@property(nonatomic) _Bool useCompactVerticalLayout; // @synthesize useCompactVerticalLayout=_useCompactVerticalLayout;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x001000000066826b
- (void)_handleSelectedMenuItem:(long long)arg1;	// IMP=0x00100000006681f8
- (void)mapViewModeGridSelector:(id)arg1 selectedMapMode:(long long)arg2;	// IMP=0x0010000000668025
- (id)_mapModeSelector;	// IMP=0x0010000000667f00
- (void)updateTheme;	// IMP=0x0010000000667c90
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;	// IMP=0x0010000000667c87
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x0010000000667c7e
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0010000000667b35
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x0010000000667ae4
- (id)weatherAttributionButton;	// IMP=0x00100000006678ef
- (id)mapAttributionButton;	// IMP=0x00100000006677f4
- (id)indexPathForMenuItem:(long long)arg1;	// IMP=0x001000000066750d
- (id)_cellForMenuItem:(long long)arg1;	// IMP=0x00100000006674be
- (id)_environmentInfoCell;	// IMP=0x0010000000667211
- (id)_cellForMapModeSelector;	// IMP=0x0010000000666e21
- (id)_cellWithIdentifier:(id)arg1 setupBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000666d54
- (id)_attributionCell;	// IMP=0x001000000066638d
- (id)_menuCellWithText:(id)arg1 identifier:(id)arg2;	// IMP=0x00100000006662a7
- (id)_menuCellWithText:(id)arg1;	// IMP=0x001000000066628e
- (id)_viewModeSelectionCellWithText:(id)arg1;	// IMP=0x0010000000666275
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00100000006661d2
- (id)_menuItemsPerSections:(id)arg1;	// IMP=0x0010000000665fa5
- (id)_menuItemsInSection:(long long)arg1;	// IMP=0x0010000000665ef0
- (long long)_sectionAtIndex:(long long)arg1;	// IMP=0x0010000000665e6b
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0010000000665e4e
- (id)_displayableSectionsInTableView;	// IMP=0x0010000000665d54
@property(readonly, nonatomic) double desiredHeight;
- (_Bool)_usesCompactMetrics;	// IMP=0x0010000000665ca0
- (void)_updateTableViewCells;	// IMP=0x001000000066522e
- (void)reloadData;	// IMP=0x00100000006650f4
- (void)_environmnentNotification;	// IMP=0x001000000066505f
- (void)_reloadMyVehiclesVisibility;	// IMP=0x0010000000664f06
- (void)_consumeUpdatedUnpairedVehicles:(id)arg1;	// IMP=0x0010000000664df1
- (void)_consumeUpdatedVirtualGarage:(id)arg1;	// IMP=0x0010000000664cdc
- (void)virtualGarage:(id)arg1 didUpdateUnpairedVehicles:(id)arg2;	// IMP=0x0010000000664cc7
- (void)virtualGarageDidUpdate:(id)arg1;	// IMP=0x0010000000664cb5
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000664bf8
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0010000000664b53
- (void)viewDidLayoutSubviews;	// IMP=0x00100000006649a7
- (void)willMoveToParentViewController:(id)arg1;	// IMP=0x0010000000664934
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000664899
- (void)viewDidLoad;	// IMP=0x001000000066459f
- (void)setupConstraints;	// IMP=0x0010000000664216
- (void)_contentSizeCategoryDidChange;	// IMP=0x0010000000664204
- (void)dealloc;	// IMP=0x0010000000664139
- (id)init;	// IMP=0x0010000000663cae

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
