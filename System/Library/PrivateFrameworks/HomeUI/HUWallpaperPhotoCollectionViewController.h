//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewController.h>

#import <HomeUI/PHPhotoLibraryChangeObserver-Protocol.h>

@class HUWallpaperPhotoCollectionFlowLayout, NAFuture, NSString, PHCachingImageManager, PHFetchResult;
@protocol HUWallpaperPhotoCollectionViewControllerDelegate;

@interface HUWallpaperPhotoCollectionViewController : UICollectionViewController <PHPhotoLibraryChangeObserver>
{
    _Bool _initialScrollToBottom;	// 8 = 0x8
    id <HUWallpaperPhotoCollectionViewControllerDelegate> _delegate;	// 16 = 0x10
    long long _assetCollectionSubtype;	// 24 = 0x18
    HUWallpaperPhotoCollectionFlowLayout *_flowLayout;	// 32 = 0x20
    PHCachingImageManager *_imageManager;	// 40 = 0x28
    PHFetchResult *_assetsFetchResult;	// 48 = 0x30
    NAFuture *_imageDownloadFuture;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000041fb06
@property(nonatomic) _Bool initialScrollToBottom; // @synthesize initialScrollToBottom=_initialScrollToBottom;
@property(retain, nonatomic) NAFuture *imageDownloadFuture; // @synthesize imageDownloadFuture=_imageDownloadFuture;
@property(retain, nonatomic) PHFetchResult *assetsFetchResult; // @synthesize assetsFetchResult=_assetsFetchResult;
@property(retain, nonatomic) PHCachingImageManager *imageManager; // @synthesize imageManager=_imageManager;
@property(nonatomic) __weak HUWallpaperPhotoCollectionFlowLayout *flowLayout; // @synthesize flowLayout=_flowLayout;
@property(readonly, nonatomic) long long assetCollectionSubtype; // @synthesize assetCollectionSubtype=_assetCollectionSubtype;
@property(readonly, nonatomic) __weak id <HUWallpaperPhotoCollectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)imageFutureForAsset:(id)arg1 cloudAllowed:(_Bool)arg2;	// IMP=0x000000000041f7c6
- (void)photoLibraryDidChange:(id)arg1;	// IMP=0x000000000041f652
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000000041eeb1
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x000000000041ecfc
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000000041e985
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x000000000041e941
- (void)viewDidLayoutSubviews;	// IMP=0x000000000041e837
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000041e7cd
- (void)viewDidLoad;	// IMP=0x000000000041e55a
- (void)dealloc;	// IMP=0x000000000041e4e5
- (id)initWithTitle:(id)arg1 fetchResult:(id)arg2 assetCollectionSubtype:(long long)arg3 delegate:(id)arg4;	// IMP=0x000000000041e29f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
