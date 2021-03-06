//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ContainerHeaderView, NSString, TravelPreferencesDataSource;

__attribute__((visibility("hidden")))
@interface TravelPreferencesViewController
{
    ContainerHeaderView *_titleHeaderView;	// 16 = 0x10
    CDUnknownBlockType _completionHandler;	// 24 = 0x18
}

+ (_Bool)useCollectionView;	// IMP=0x0020000000509f19
- (void).cxx_destruct;	// IMP=0x002000000050a9a1
- (void)dataSourceDidRebuildSections:(id)arg1;	// IMP=0x001000000050a972
- (void)headerViewButtonTapped:(id)arg1;	// IMP=0x001000000050a960
- (struct NSDirectionalEdgeInsets)collectionViewListSectionContentInsetsForSection:(long long)arg1;	// IMP=0x001000000050a901
- (long long)collectionViewConfigurationSeparatorStyle;	// IMP=0x001000000050a8ea
- (long long)collectionViewListLayoutAppearanceStyle;	// IMP=0x001000000050a8d0
- (void)setupSubviews;	// IMP=0x001000000050a8a1
- (void)viewDidLoad;	// IMP=0x001000000050a08b
@property(readonly, nonatomic) TravelPreferencesDataSource *travelPreferencesDataSource;
- (id)initWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000509f21

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

