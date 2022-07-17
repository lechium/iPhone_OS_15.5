//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewController.h>

#import <PhotosUICore/UICollectionViewDataSourcePrefetching-Protocol.h>
#import <PhotosUICore/UICollectionViewDelegateFlowLayout-Protocol.h>

@class NSString, PXPeopleDataSource, PXPeopleStripCollectionViewCell;
@protocol PXPeopleStripCollectionViewControllerDelegate;

@interface PXPeopleStripCollectionViewController : UICollectionViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDataSourcePrefetching>
{
    id <PXPeopleStripCollectionViewControllerDelegate> _delegate;	// 8 = 0x8
    PXPeopleDataSource *_dataSource;	// 16 = 0x10
    PXPeopleStripCollectionViewCell *_preloadedCell;	// 24 = 0x18
}

+ (id)_formattedPeopleForMember:(id)arg1;	// IMP=0x000000000050480f
- (void).cxx_destruct;	// IMP=0x000000000050470e
@property(retain, nonatomic) PXPeopleStripCollectionViewCell *preloadedCell; // @synthesize preloadedCell=_preloadedCell;
@property(nonatomic) __weak PXPeopleDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <PXPeopleStripCollectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;	// IMP=0x0000000000504687
- (struct CGPoint)collectionView:(id)arg1 targetContentOffsetForProposedContentOffset:(struct CGPoint)arg2;	// IMP=0x0000000000504619
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000000050444c
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x0000000000504408
- (void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2;	// IMP=0x0000000000504262
- (void)contentWidthChanged;	// IMP=0x000000000050413e
- (void)viewDidLoad;	// IMP=0x0000000000503f6a
- (id)initWithDataSource:(id)arg1 delegate:(id)arg2;	// IMP=0x0000000000503e21

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
