//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, PreferenceValuesDataSource, UICollectionView, UITableView;

__attribute__((visibility("hidden")))
@interface PreferencesValuesContaineeViewController
{
    PreferenceValuesDataSource *_dataSource;	// 8 = 0x8
    UITableView *_tableView;	// 16 = 0x10
    UICollectionView *_collectionView;	// 24 = 0x18
}

+ (_Bool)useCollectionView;	// IMP=0x0020000000970bdc
- (void).cxx_destruct;	// IMP=0x0020000000971788
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void)dataSourceDidRebuildSections:(id)arg1;	// IMP=0x0010000000971717
- (void)rebuildSections;	// IMP=0x00100000009716da
- (void)loadContentNowIfNeeded;	// IMP=0x001000000097169d
- (void)addSectionWithTitle:(id)arg1 content:(CDUnknownBlockType)arg2;	// IMP=0x0010000000971617
- (void)addSection:(id)arg1;	// IMP=0x00100000009715a5
- (void)prepareContent;	// IMP=0x0010000000971568
@property(readonly, nonatomic) PreferenceValuesDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (_Bool)shouldAutorotate;	// IMP=0x001000000097150b
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000009714ca
- (id)initialConstraints;	// IMP=0x001000000097142a
- (void)setupSubviews;	// IMP=0x0010000000970ce8
- (id)collectionViewDecorationItems;	// IMP=0x0010000000970ce0
- (long long)collectionViewConfigurationSeparatorStyle;	// IMP=0x0010000000970cd8
- (struct NSDirectionalEdgeInsets)collectionViewDecorationItemContentInsetsForSection:(long long)arg1;	// IMP=0x0010000000970cb9
- (struct NSDirectionalEdgeInsets)collectionViewListSectionContentInsetsForSection:(long long)arg1;	// IMP=0x0010000000970c9b
- (long long)collectionViewListLayoutAppearanceStyle;	// IMP=0x0010000000970c93
- (void)viewDidLoad;	// IMP=0x0010000000970be4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
