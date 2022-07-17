//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class ErrorModeView, GEOMapItemPhotoOptions, LoadingModeView, MKMapItem, NSArray, NSLayoutConstraint, NSString, UGCPhotoAlbumFilterView, UGCPhotoDownloadManager, UGCPhotoFeedHeaderView, UGCPhotoViewerDataSource, UICollectionView, UICollectionViewDiffableDataSource;
@protocol UGCMorePhotosFeedViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface UGCMorePhotosFeedViewController : UIViewController
{
    UICollectionViewDiffableDataSource *_diffableDataSource;	// 8 = 0x8
    UICollectionView *_collectionView;	// 16 = 0x10
    UGCPhotoFeedHeaderView *_headerGradientView;	// 24 = 0x18
    UGCPhotoAlbumFilterView *_albumFilterView;	// 32 = 0x20
    UGCPhotoDownloadManager *_photoDownloadManager;	// 40 = 0x28
    UGCPhotoViewerDataSource *_dataProvider;	// 48 = 0x30
    NSLayoutConstraint *_gradientHeightConstraint;	// 56 = 0x38
    _Bool _hasPerformedInitialLoad;	// 64 = 0x40
    _Bool _shouldCancelImageDownloads;	// 65 = 0x41
    NSString *_downloadToken;	// 72 = 0x48
    unsigned long long _startingImageIndex;	// 80 = 0x50
    unsigned long long _selectedAlbumIndex;	// 88 = 0x58
    MKMapItem *_mapItem;	// 96 = 0x60
    id <UGCMorePhotosFeedViewControllerDelegate> _delegate;	// 104 = 0x68
    NSArray *_photoList;	// 112 = 0x70
    LoadingModeView *_loadingModeView;	// 120 = 0x78
    ErrorModeView *_errorModeView;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x0020000000753bed
@property(readonly, nonatomic) _Bool shouldCancelImageDownloads; // @synthesize shouldCancelImageDownloads=_shouldCancelImageDownloads;
@property(readonly, nonatomic) ErrorModeView *errorModeView; // @synthesize errorModeView=_errorModeView;
@property(readonly, nonatomic) LoadingModeView *loadingModeView; // @synthesize loadingModeView=_loadingModeView;
@property(copy, nonatomic) NSArray *photoList; // @synthesize photoList=_photoList;
@property(nonatomic) __weak id <UGCMorePhotosFeedViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
@property(nonatomic) unsigned long long selectedAlbumIndex; // @synthesize selectedAlbumIndex=_selectedAlbumIndex;
@property(nonatomic) unsigned long long startingImageIndex; // @synthesize startingImageIndex=_startingImageIndex;
- (void)photoAlbumFilterView:(id)arg1 didChangeWithIndex:(unsigned long long)arg2;	// IMP=0x00100000007538fb
- (void)photoViewerDataSourceDidUpdate:(id)arg1 withError:(id)arg2;	// IMP=0x00100000007538c1
- (void)photoViewerDataSourceDidUpdate:(id)arg1;	// IMP=0x00100000007536c1
- (id)imageViewForIndex:(unsigned long long)arg1;	// IMP=0x0010000000753630
- (void)_handleScrollDown;	// IMP=0x0010000000753619
- (void)_handleScrollUp;	// IMP=0x0010000000753602
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x00100000007535a1
- (void)_captureUserAction:(int)arg1 value:(id)arg2;	// IMP=0x001000000075357d
- (void)_captureUserAction:(int)arg1 index:(unsigned long long)arg2;	// IMP=0x001000000075351c
- (void)_captureUserAction:(int)arg1;	// IMP=0x0010000000753508
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x00100000007533d4
- (void)_updateSnapshotForCurrentState;	// IMP=0x0010000000753219
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x0010000000753001
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x0010000000752f8f
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 itemIdentifier:(id)arg3;	// IMP=0x00100000007529d4
- (id)keyCommands;	// IMP=0x001000000075292f
- (void)photoFeedHeaderView:(id)arg1 selectedAddPhotoWithPresentationOptions:(id)arg2;	// IMP=0x00100000007528b8
- (void)_doneButtonPressed;	// IMP=0x001000000075282e
- (void)photoFeedHeaderView:(id)arg1 selectedDoneWithPresentationOptions:(id)arg2;	// IMP=0x001000000075281c
- (double)_scaledGradientHeight;	// IMP=0x00100000007527f7
- (void)_updatePlaceNameForTitle;	// IMP=0x00100000007525f6
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x001000000075241e
- (id)_thumbnailGalleryLayout;	// IMP=0x00100000007523bb
- (id)initWithMapItem:(id)arg1;	// IMP=0x0010000000752293
- (void)_attachErrorView;	// IMP=0x0010000000752172
- (void)viewDidLoad;	// IMP=0x0010000000750c9f
@property(readonly, nonatomic) _Bool supportsPhotoAlbums;
@property(readonly, nonatomic) _Bool shouldShowAddPhotosButton;
@property(readonly, nonatomic) _Bool shouldShowFloatingButtons;
@property(readonly, nonatomic) GEOMapItemPhotoOptions *thumbnailOptionsForMorePhotosFeed;
@property(readonly, nonatomic) NSString *downloadToken; // @synthesize downloadToken=_downloadToken;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
