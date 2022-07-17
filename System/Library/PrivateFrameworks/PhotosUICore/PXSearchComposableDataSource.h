//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXSearchDataSourceSectionProviderChangeObserver-Protocol.h>
#import <PhotosUICore/UICollectionViewDataSourcePrefetching-Protocol.h>

@class NSArray, NSString, UICollectionViewDiffableDataSource;

@interface PXSearchComposableDataSource : NSObject <UICollectionViewDataSourcePrefetching, PXSearchDataSourceSectionProviderChangeObserver>
{
    NSArray *_sectionProviders;	// 8 = 0x8
    UICollectionViewDiffableDataSource *_diffableDataSource;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000138d75
@property(retain, nonatomic) UICollectionViewDiffableDataSource *diffableDataSource; // @synthesize diffableDataSource=_diffableDataSource;
@property(copy, nonatomic) NSArray *sectionProviders; // @synthesize sectionProviders=_sectionProviders;
- (id)_configuredSupplementaryViewForCollectionView:(id)arg1 kind:(id)arg2 indexPath:(id)arg3;	// IMP=0x0000000000138b03
- (id)_configuredCellForCollectionView:(id)arg1 indexPath:(id)arg2 itemIdentifier:(id)arg3;	// IMP=0x000000000013890f
- (void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2;	// IMP=0x0000000000138433
- (id)indexPathForItemIdentifier:(id)arg1;	// IMP=0x00000000001383b0
- (id)itemIdentifierForIndexPath:(id)arg1;	// IMP=0x000000000013832d
- (id)sectionIdentifierForSectionContainingItemIdentifier:(id)arg1;	// IMP=0x000000000013828c
- (id)itemIdentifiersInSectionWithIdentifier:(id)arg1;	// IMP=0x00000000001381eb
- (long long)numberOfItemsInSection:(id)arg1;	// IMP=0x0000000000138156
@property(readonly, copy, nonatomic) NSArray *itemIdentifiers;
@property(readonly, copy, nonatomic) NSArray *sectionIdentifiers;
@property(readonly, nonatomic) long long numberOfSections;
@property(readonly, nonatomic) long long numberOfItems;
- (id)_convertIndexPath:(id)arg1 toPXSearchDataSourceSectionProvider:(id)arg2;	// IMP=0x0000000000137d6f
- (id)searchDataSourceSectionProviderForSectionIdentifier:(id)arg1;	// IMP=0x0000000000137b25
- (id)searchDataSourceSectionProviderForItemIdentifier:(id)arg1;	// IMP=0x0000000000137974
- (id)searchDataSourceSectionProviderForSection:(long long)arg1;	// IMP=0x000000000013780c
- (id)searchDataSourceSectionProviderForIndexPath:(id)arg1;	// IMP=0x00000000001374f5
- (void)searchDataSourceSectionProviderDidChange:(id)arg1 reloadItemIdentifiers:(id)arg2 animateChanges:(_Bool)arg3;	// IMP=0x00000000001374e0
- (void)searchDataSourceSectionProviderDidChange:(id)arg1 animateChanges:(_Bool)arg2;	// IMP=0x00000000001374c2
- (void)_reloadDataAnimated:(_Bool)arg1 reloadItemIdentifiers:(id)arg2;	// IMP=0x0000000000137101
- (void)_registerClassesForCollectionView:(id)arg1 withPXSearchDataSourceSectionProviders:(id)arg2;	// IMP=0x0000000000136db5
- (id)initWithCollectionView:(id)arg1 searchDataSourceSectionProviders:(id)arg2;	// IMP=0x00000000001368e6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
