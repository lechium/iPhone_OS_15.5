//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewController.h>

#import <DocumentCamera/ICDocCamThumbnailViewLayoutDelegate-Protocol.h>
#import <DocumentCamera/UICollectionViewDataSource-Protocol.h>
#import <DocumentCamera/UICollectionViewDelegate-Protocol.h>

@class ICDocCamImageCache, ICDocCamThumbnailCollectionViewLayout, NSMutableArray, NSString;
@protocol ICDocCamThumbnailViewDelegate;

__attribute__((visibility("hidden")))
@interface ICDocCamThumbnailCollectionViewController : UICollectionViewController <UICollectionViewDataSource, UICollectionViewDelegate, ICDocCamThumbnailViewLayoutDelegate>
{
    _Bool _isPerformingBatchUpdates;	// 8 = 0x8
    _Bool _needReloadAfterBatchUpdates;	// 9 = 0x9
    NSMutableArray *_documentInfoArray;	// 16 = 0x10
    ICDocCamImageCache *_imageCache;	// 24 = 0x18
    id <ICDocCamThumbnailViewDelegate> _delegate;	// 32 = 0x20
    ICDocCamThumbnailCollectionViewLayout *_layout;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000097fb8
@property(nonatomic) _Bool needReloadAfterBatchUpdates; // @synthesize needReloadAfterBatchUpdates=_needReloadAfterBatchUpdates;
@property(nonatomic) _Bool isPerformingBatchUpdates; // @synthesize isPerformingBatchUpdates=_isPerformingBatchUpdates;
@property(retain, nonatomic) ICDocCamThumbnailCollectionViewLayout *layout; // @synthesize layout=_layout;
@property(nonatomic) __weak id <ICDocCamThumbnailViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) ICDocCamImageCache *imageCache; // @synthesize imageCache=_imageCache;
@property(retain, nonatomic) NSMutableArray *documentInfoArray; // @synthesize documentInfoArray=_documentInfoArray;
- (_Bool)_canShowWhileLocked;	// IMP=0x0000000000097ed4
- (void)animateLayoutChange;	// IMP=0x0000000000097dfc
- (void)addNewDocument:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000978e9
- (void)update;	// IMP=0x0000000000097874
- (void)reloadDataForCollectionView;	// IMP=0x0000000000097807
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000000097588
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x000000000009757d
- (_Bool)shouldAutorotate;	// IMP=0x0000000000097575
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x000000000009756f
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x0000000000097569
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x00000000000974f7
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x00000000000972a7
- (void)setImageWithUUID:(id)arg1 forCell:(id)arg2 useResizedImage:(_Bool)arg3;	// IMP=0x000000000009703f
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x0000000000096f76
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x0000000000096f6b
- (id)rootView;	// IMP=0x0000000000096f1b
- (struct CGRect)targetViewRect;	// IMP=0x0000000000096ebd
- (struct CGSize)collectionView:(id)arg1 imageSizeAtIndex:(long long)arg2;	// IMP=0x0000000000096cff
- (void)didReceiveMemoryWarning;	// IMP=0x0000000000096cd0
- (void)viewDidLoad;	// IMP=0x0000000000096c14
- (id)initWithDelegate:(id)arg1;	// IMP=0x0000000000096a67

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

