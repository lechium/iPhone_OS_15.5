//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AllRAPHistoryDataSource, ContainerHeaderView, NSString, UICollectionView;

__attribute__((visibility("hidden")))
@interface AllRAPHistoryViewController
{
    ContainerHeaderView *_titleHeaderView;	// 8 = 0x8
    UICollectionView *_collectionView;	// 16 = 0x10
    unsigned long long _reportSectionTypeForView;	// 24 = 0x18
    AllRAPHistoryDataSource *_reportsDataSource;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000015c6d6
- (void)headerViewButtonTapped:(id)arg1;	// IMP=0x001000000015c6bd
- (void)loadDataSource;	// IMP=0x001000000015c623
- (void)_createCollectionViewLayout;	// IMP=0x001000000015c20d
- (void)_setupConstraints;	// IMP=0x001000000015bc4f
- (void)viewDidLoad;	// IMP=0x001000000015bad0
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x001000000015babe
- (id)initWithReportSection:(unsigned long long)arg1 sectionTitle:(id)arg2;	// IMP=0x001000000015b984

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

