//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <PhotosUI/PHAssetCollectionDataSource-Protocol.h>
#import <PhotosUI/PUOneUpAssetTransitionViewController-Protocol.h>
#import <PhotosUI/PUOneUpPhotosSharingTransitionViewController-Protocol.h>
#import <PhotosUI/PUPhotoViewContentHelperDelegate-Protocol.h>
#import <PhotosUI/PUPhotosSharingCollectionViewLayoutDelegate-Protocol.h>
#import <PhotosUI/PUPhotosSharingTransitionViewController-Protocol.h>
#import <PhotosUI/PUScrollViewSpeedometerDelegate-Protocol.h>
#import <PhotosUI/PXPhotoLibraryUIChangeObserver-Protocol.h>
#import <PhotosUI/UICollectionViewDataSource-Protocol.h>
#import <PhotosUI/UICollectionViewDelegate-Protocol.h>
#import <PhotosUI/UIGestureRecognizerDelegate-Protocol.h>

@class NSIndexPath, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject, NSString, PHAsset, PHCachingImageManager, PHFetchResult, PUAssetTransitionInfo, PUPhotoSelectionManager, PUPhotosSharingCollectionViewLayout, PUPhotosSharingTransitionContext, PUPhotosSharingViewControllerSpec, PUScrollViewSpeedometer, PXAssetBadgeManager, PXPhotosDataSource, UICollectionView, UICollectionViewLayout, UITapGestureRecognizer;
@protocol OS_os_log, PUCarouselSharingViewControllerDelegate;

@interface PUCarouselSharingViewController : UIViewController <UIGestureRecognizerDelegate, UICollectionViewDataSource, UICollectionViewDelegate, PUPhotosSharingCollectionViewLayoutDelegate, PUScrollViewSpeedometerDelegate, PXPhotoLibraryUIChangeObserver, PUPhotoViewContentHelperDelegate, PUPhotosSharingTransitionViewController, PHAssetCollectionDataSource, PUOneUpPhotosSharingTransitionViewController, PUOneUpAssetTransitionViewController>
{
    PUScrollViewSpeedometer *_speedometer;	// 8 = 0x8
    NSMutableDictionary *_resultsForAssetCollection;	// 16 = 0x10
    NSMutableDictionary *_assetItemsByAssetIdentifier;	// 24 = 0x18
    NSMapTable *_indexPathsByOptionView;	// 32 = 0x20
    UITapGestureRecognizer *_tapGestureRecognizer;	// 40 = 0x28
    NSIndexPath *_inFlightReferenceIndexPath;	// 48 = 0x30
    _Bool _shouldScrollToSelection;	// 56 = 0x38
    _Bool _inFlightRotation;	// 57 = 0x39
    _Bool _shouldPlayVitalityHintAfterViewDidAppear;	// 58 = 0x3a
    _Bool _readyForInteraction;	// 59 = 0x3b
    _Bool _sendAsOriginals;	// 60 = 0x3c
    _Bool __viewInSyncWithModel;	// 61 = 0x3d
    _Bool __loopingPlaybackAllowed;	// 62 = 0x3e
    PHFetchResult *_photoCollectionsFetchResult;	// 64 = 0x40
    PUPhotoSelectionManager *_photoSelectionManager;	// 72 = 0x48
    id <PUCarouselSharingViewControllerDelegate> _delegate;	// 80 = 0x50
    PUPhotosSharingViewControllerSpec *_spec;	// 88 = 0x58
    UICollectionView *_mainCollectionView;	// 96 = 0x60
    PUPhotosSharingCollectionViewLayout *_mainCollectionViewLayout;	// 104 = 0x68
    PHCachingImageManager *_cachingImageManager;	// 112 = 0x70
    NSMutableSet *__preheatedAssets;	// 120 = 0x78
    UICollectionViewLayout *__transitionLayout;	// 128 = 0x80
    PUPhotosSharingTransitionContext *_photosSharingTransitionContext;	// 136 = 0x88
    PUAssetTransitionInfo *_assetTransitionInfo;	// 144 = 0x90
    PUAssetTransitionInfo *_leadingAssetTransitionInfo;	// 152 = 0x98
    PUAssetTransitionInfo *_trailingAssetTransitionInfo;	// 160 = 0xa0
    PHAsset *__lastKnownReferenceAsset;	// 168 = 0xa8
    NSIndexPath *__lastKnownReferenceIndexPath;	// 176 = 0xb0
    PXAssetBadgeManager *__badgeManager;	// 184 = 0xb8
    CDUnknownBlockType __pptOnDidEndScrollingBlock;	// 192 = 0xc0
    NSMutableArray *__photoViewLoaderBlocks;	// 200 = 0xc8
    NSMutableArray *__livePhotoViewLoaderBlocks;	// 208 = 0xd0
    PXPhotosDataSource *_photosDataSource;	// 216 = 0xd8
    struct CGRect __previousPreheatRect;	// 224 = 0xe0
}

- (void).cxx_destruct;	// IMP=0x0000000000371b97
@property(retain, nonatomic) PXPhotosDataSource *photosDataSource; // @synthesize photosDataSource=_photosDataSource;
@property(readonly, nonatomic) NSMutableArray *_livePhotoViewLoaderBlocks; // @synthesize _livePhotoViewLoaderBlocks=__livePhotoViewLoaderBlocks;
@property(readonly, nonatomic) NSMutableArray *_photoViewLoaderBlocks; // @synthesize _photoViewLoaderBlocks=__photoViewLoaderBlocks;
@property(copy, nonatomic, setter=_pptSetOnDidEndScrollingBlock:) CDUnknownBlockType _pptOnDidEndScrollingBlock; // @synthesize _pptOnDidEndScrollingBlock=__pptOnDidEndScrollingBlock;
@property(readonly, nonatomic) PXAssetBadgeManager *_badgeManager; // @synthesize _badgeManager=__badgeManager;
@property(nonatomic, getter=_isLoopingPlaybackAllowed, setter=_setLoopingPlaybackAllowed:) _Bool _loopingPlaybackAllowed; // @synthesize _loopingPlaybackAllowed=__loopingPlaybackAllowed;
@property(retain, nonatomic, setter=_setLastKnownReferenceIndexPath:) NSIndexPath *_lastKnownReferenceIndexPath; // @synthesize _lastKnownReferenceIndexPath=__lastKnownReferenceIndexPath;
@property(retain, nonatomic, setter=_setLastKnownReferenceAsset:) PHAsset *_lastKnownReferenceAsset; // @synthesize _lastKnownReferenceAsset=__lastKnownReferenceAsset;
@property(retain, nonatomic) PUAssetTransitionInfo *trailingAssetTransitionInfo; // @synthesize trailingAssetTransitionInfo=_trailingAssetTransitionInfo;
@property(retain, nonatomic) PUAssetTransitionInfo *leadingAssetTransitionInfo; // @synthesize leadingAssetTransitionInfo=_leadingAssetTransitionInfo;
@property(retain, nonatomic) PUAssetTransitionInfo *assetTransitionInfo; // @synthesize assetTransitionInfo=_assetTransitionInfo;
@property(retain, nonatomic) PUPhotosSharingTransitionContext *photosSharingTransitionContext; // @synthesize photosSharingTransitionContext=_photosSharingTransitionContext;
@property(retain, nonatomic, setter=_setTransitionLayout:) UICollectionViewLayout *_transitionLayout; // @synthesize _transitionLayout=__transitionLayout;
@property(retain, nonatomic, setter=_setPreheatedAssets:) NSMutableSet *_preheatedAssets; // @synthesize _preheatedAssets=__preheatedAssets;
@property(nonatomic, setter=_setPreviousPreheatRect:) struct CGRect _previousPreheatRect; // @synthesize _previousPreheatRect=__previousPreheatRect;
@property(readonly, nonatomic) PHCachingImageManager *cachingImageManager; // @synthesize cachingImageManager=_cachingImageManager;
@property(nonatomic, getter=_isViewInSyncWithModel, setter=_setViewInSyncWithModel:) _Bool _viewInSyncWithModel; // @synthesize _viewInSyncWithModel=__viewInSyncWithModel;
@property(retain, nonatomic, setter=_setMainCollectionViewLayout:) PUPhotosSharingCollectionViewLayout *mainCollectionViewLayout; // @synthesize mainCollectionViewLayout=_mainCollectionViewLayout;
@property(retain, nonatomic, setter=_setMainCollectionView:) UICollectionView *mainCollectionView; // @synthesize mainCollectionView=_mainCollectionView;
@property(retain, nonatomic) PUPhotosSharingViewControllerSpec *spec; // @synthesize spec=_spec;
@property(nonatomic) _Bool sendAsOriginals; // @synthesize sendAsOriginals=_sendAsOriginals;
@property(nonatomic, getter=isReadyForInteraction) _Bool readyForInteraction; // @synthesize readyForInteraction=_readyForInteraction;
@property(nonatomic) __weak id <PUCarouselSharingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PUPhotoSelectionManager *photoSelectionManager; // @synthesize photoSelectionManager=_photoSelectionManager;
@property(readonly, nonatomic) PHFetchResult *photoCollectionsFetchResult; // @synthesize photoCollectionsFetchResult=_photoCollectionsFetchResult;
@property(readonly, nonatomic) NSObject<OS_os_log> *sharingLog;
- (void)photoViewContentHelper:(id)arg1 livePhotoWillBeginPlaybackWithStyle:(long long)arg2;	// IMP=0x0000000000371887
- (void)oneUpAssetTransition:(id)arg1 requestTransitionContextWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000371566
- (id)_badgeTransitionInfosForCell:(id)arg1;	// IMP=0x0000000000370f7d
- (id)adjacentVisibleAssetsTransitionInfos;	// IMP=0x0000000000370a03
- (id)referenceAssetTransitionInfo;	// IMP=0x0000000000370756
- (struct CGRect)oneUpAssetTransitionAssetFinalFrame:(id)arg1;	// IMP=0x0000000000370696
- (struct CGRect)_frameAtIndexPath:(id)arg1 inView:(id)arg2;	// IMP=0x000000000037055d
- (void)scrollViewSpeedometer:(id)arg1 regimeDidChange:(long long)arg2 from:(long long)arg3;	// IMP=0x00000000003704d3
- (_Bool)prepareForDismissingForced:(_Bool)arg1;	// IMP=0x000000000037047e
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x00000000003702a8
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x00000000003702a0
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x00000000003701d4
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;	// IMP=0x0000000000370188
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x000000000037016b
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x000000000037014e
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x000000000036fd27
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x000000000036fd0a
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x000000000036fc5b
- (void)layout:(id)arg1 collectionView:(id)arg2 itemAtIndexPath:(id)arg3 didChangeToVisibleFrame:(struct CGRect)arg4;	// IMP=0x000000000036fc55
- (double)layout:(id)arg1 collectionView:(id)arg2 bottomBadgeInsetforItemAtIndexPath:(id)arg3;	// IMP=0x000000000036fb9c
- (struct CGSize)layout:(id)arg1 collectionView:(id)arg2 sizeForBadgeViewOfKind:(id)arg3 forItemAtIndexPath:(id)arg4;	// IMP=0x000000000036f9de
- (struct CGSize)layout:(id)arg1 collectionView:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x000000000036f9c9
- (id)layout:(id)arg1 collectionView:(id)arg2 referenceIndexPathWithOffsetX:(double *)arg3;	// IMP=0x000000000036f9b7
- (void)collectionView:(id)arg1 didEndDisplayingSupplementaryView:(id)arg2 forElementOfKind:(id)arg3 atIndexPath:(id)arg4;	// IMP=0x000000000036f952
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x000000000036f805
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000000036f7fd
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x000000000036f6ca
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000000036f64c
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x000000000036f637
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x000000000036f625
- (void)setHideCellForCurrentReferenceAsset:(_Bool)arg1;	// IMP=0x000000000036f4fc
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x000000000036f3b1
- (void)viewDidLayoutSubviews;	// IMP=0x000000000036f2b7
- (void)viewWillLayoutSubviews;	// IMP=0x000000000036f22f
- (void)viewDidLoad;	// IMP=0x000000000036eeee
- (id)_firstSelectedIndexPath;	// IMP=0x000000000036ede0
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000036ed64
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000036ed23
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000036eca0
- (void)_updateMainViewAnimated:(_Bool)arg1;	// IMP=0x000000000036e3f3
- (void)_processCollectionListChangeNotifications:(id)arg1 singleCollectionNotifications:(id)arg2 needsReloadData:(_Bool)arg3;	// IMP=0x000000000036e197
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;	// IMP=0x000000000036db62
- (id)prepareForPhotoLibraryChange:(id)arg1;	// IMP=0x000000000036db5a
- (id)ppt_scrollView;	// IMP=0x000000000036db48
- (void)ppt_faultInScollViewContentSize;	// IMP=0x000000000036dab1
- (_Bool)ppt_scrollToAssetAtRelativeIndex:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000036d95f
- (struct CGRect)frameForBadgeOfKind:(id)arg1 forItemFrame:(struct CGRect)arg2 atIndexPath:(id)arg3;	// IMP=0x000000000036d6ff
- (void)_updatePreheatedAssets;	// IMP=0x000000000036cbe5
- (void)_resetPreheating;	// IMP=0x000000000036cb7e
- (id)_optionViewAtIndexPath:(id)arg1 forCollectionView:(id)arg2;	// IMP=0x000000000036caa2
- (id)_selectionViewAtIndexPath:(id)arg1 forCollectionView:(id)arg2;	// IMP=0x000000000036c904
- (void)setPhotosSharingTransitionLayout:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000036c816
- (void)_updateCellAtIndexPath:(id)arg1 withTransitionInfo:(id)arg2;	// IMP=0x000000000036c518
- (void)_updateAssetTransitionInfo:(id)arg1;	// IMP=0x000000000036c282
- (void)setOneUpPhotosSharingTransitionInfo:(id)arg1;	// IMP=0x000000000036c11b
- (void)setOneUpPhotosSharingTransitionContext:(id)arg1;	// IMP=0x000000000036beb8
- (id)transitionCollectionView;	// IMP=0x000000000036bc4d
@property(readonly, nonatomic) PHAsset *currentAsset;
- (id)currentIndexPath;	// IMP=0x000000000036ba4d
- (void)_setLastKnownReferenceAsset:(id)arg1 indexPath:(id)arg2;	// IMP=0x000000000036b9a4
- (void)_updateLastKnownReferenceIndexPath;	// IMP=0x000000000036b8ee
- (id)_validIndexPathFromIndexPath:(id)arg1;	// IMP=0x000000000036b780
- (void)_getMainCollectionViewFrame:(struct CGRect *)arg1 collectionViewLayoutInsets:(struct UIEdgeInsets *)arg2;	// IMP=0x000000000036b6df
- (struct CGRect)_collectionViewContentFrame;	// IMP=0x000000000036b65a
- (void)_handleTapInMainCollectionView:(id)arg1;	// IMP=0x000000000036b5a3
- (void)_handleTapAtIndexPath:(id)arg1;	// IMP=0x000000000036b417
- (void)_playLivePhotoHintIfNeededAtIndexPath:(id)arg1;	// IMP=0x000000000036b222
- (void)_arrowKey:(id)arg1;	// IMP=0x000000000036b05b
- (void)_handleSelectionOption:(id)arg1;	// IMP=0x000000000036ada5
@property(readonly, nonatomic) NSString *localizedSelectionTitle;
- (void)_updateOptionView:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x000000000036ab67
- (void)deselectItemAtIndexPath:(id)arg1;	// IMP=0x000000000036ab4d
- (void)selectItemAtIndexPath:(id)arg1;	// IMP=0x000000000036ab30
- (_Bool)isItemAtIndexPathSelected:(id)arg1;	// IMP=0x000000000036aa77
- (_Bool)_isAnyAssetSelected;	// IMP=0x000000000036aa1e
- (void)_setSelected:(_Bool)arg1 atIndexPath:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000000036a7a9
- (void)_replaceActivityAssetItem:(id)arg1 withAssetItem:(id)arg2 notifyDelegate:(_Bool)arg3;	// IMP=0x000000000036a5df
- (void)_removeActivityAssetItem:(id)arg1;	// IMP=0x000000000036a50e
- (void)_addActivityAssetItem:(id)arg1;	// IMP=0x000000000036a499
- (id)_updatedActivityAssetItemsForAssets:(id)arg1;	// IMP=0x000000000036a1d8
- (id)currentActivityAssetItems;	// IMP=0x000000000036a14f
- (id)_activityAssetItemForAsset:(id)arg1 createIfNecessary:(_Bool)arg2;	// IMP=0x0000000000369fe9
- (void)_handlePhotoViewLoaderBlocks;	// IMP=0x0000000000369d07
- (void)_playVitalityHintAfterViewDidAppear;	// IMP=0x0000000000369c88
- (id)assetsInAssetCollection:(id)arg1;	// IMP=0x00000000003696ba
@property(readonly, nonatomic) PHFetchResult *assetCollectionsFetchResult;
- (void)_updateVisibleCellBadges;	// IMP=0x00000000003694f2
- (void)_updateAdditionalContentForVisibleCells;	// IMP=0x000000000036923a
- (void)_updateVisibleCells;	// IMP=0x000000000036908b
- (id)_indexPathOfAsset:(id)arg1 sectionHint:(long long)arg2;	// IMP=0x0000000000368e3f
- (id)_assetAtIndexPath:(id)arg1;	// IMP=0x0000000000368b78
- (id)_photoCollectionAtIndex:(long long)arg1;	// IMP=0x0000000000368b19
- (unsigned long long)_indexForPhotoCollection:(id)arg1;	// IMP=0x0000000000368aa2
- (long long)_numberOfItemsInSection:(long long)arg1;	// IMP=0x0000000000368a2e
- (long long)_numberOfSections;	// IMP=0x00000000003689ea
- (id)_indexPathInCollectionView:(id)arg1 closestToContentOffsetX:(double)arg2;	// IMP=0x0000000000368674
- (id)_indexPathInCollectionView:(id)arg1 closestToPoint:(struct CGPoint)arg2;	// IMP=0x000000000036834f
- (id)_indexPathOfCenterVisibleItemInCollectionView:(id)arg1;	// IMP=0x00000000003682c5
- (void)_pageToIndexPath:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000368219
- (void)_updateCell:(id)arg1 forItemAtIndexPath:(id)arg2;	// IMP=0x0000000000367df9
- (void)_handleAnimatedImageResult:(id)arg1 forCell:(id)arg2 asset:(id)arg3 tag:(long long)arg4;	// IMP=0x0000000000367d1f
- (void)_handleLoopingVideoRequestResult:(id)arg1 forCell:(id)arg2 asset:(id)arg3 tag:(long long)arg4;	// IMP=0x0000000000367c25
- (void)_handleLivePhotoRequestResult:(id)arg1 forCell:(id)arg2 tag:(long long)arg3;	// IMP=0x00000000003679f2
- (void)_handleSchedulingLivePhotoRequestResult:(id)arg1 forCell:(id)arg2 tag:(long long)arg3;	// IMP=0x0000000000367856
- (void)_handleStillPhotoRequestResult:(id)arg1 forCell:(id)arg2 tag:(long long)arg3;	// IMP=0x0000000000367797
- (void)_handleSchedulingStillPhotoRequestResult:(id)arg1 forCell:(id)arg2 tag:(long long)arg3;	// IMP=0x00000000003675fb
- (void)_updateAdditionalContentForAsset:(id)arg1 cell:(id)arg2;	// IMP=0x0000000000366eaf
- (void)_handleStillImageRequestResult:(id)arg1 info:(id)arg2 forCell:(id)arg3 indexPath:(id)arg4;	// IMP=0x0000000000366c9a
- (void)_updatePhotoForAsset:(id)arg1 cell:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x0000000000366a1b
- (double)_horizontalOffsetInCollectionView:(id)arg1 forCenteringOnItemAtIndexPath:(id)arg2;	// IMP=0x0000000000366959
- (struct CGSize)_sizeForItemAtIndexPath:(id)arg1;	// IMP=0x0000000000366515
- (void)_getFirstValidIndexPath:(id *)arg1 lastValidIndexPath:(id *)arg2;	// IMP=0x00000000003663d5
- (void)_updateInterfaceForModelReloadAnimated:(_Bool)arg1;	// IMP=0x000000000036636b
- (_Bool)_shouldShowAsset:(id)arg1;	// IMP=0x0000000000366356
- (void)dealloc;	// IMP=0x000000000036622c
- (id)initWithPhotoCollectionsFetchResult:(id)arg1 assetsFetchResultsByAssetCollection:(id)arg2 selection:(id)arg3;	// IMP=0x0000000000365ebd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

