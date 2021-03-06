//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUI/PUAssetActionManagerDelegate-Protocol.h>
#import <PhotosUI/PUAssetsDataSourceManagerDelegate-Protocol.h>
#import <PhotosUI/PULoadingStatusManagerDelegate-Protocol.h>
#import <PhotosUI/PXAssetEditOperationManagerObserver-Protocol.h>

@class NSString, PUAssetActionManager, PUAssetsDataSourceManager, PUBrowsingViewModel, PUContentTileProvider, PULoadingStatusManager, PUMediaProvider, PUOneUpMergedVideoProvider, PUTileAnimator, PXAssetEditOperationManager, PXGestureProvider, PXPhotosDetailsContext;
@protocol PXAssetImportStatusManager;

@interface PUBrowsingSession : NSObject <PUAssetsDataSourceManagerDelegate, PUAssetActionManagerDelegate, PULoadingStatusManagerDelegate, PXAssetEditOperationManagerObserver>
{
    PUAssetsDataSourceManager *_dataSourceManager;	// 8 = 0x8
    PUMediaProvider *_mediaProvider;	// 16 = 0x10
    PUAssetActionManager *_actionManager;	// 24 = 0x18
    PUBrowsingViewModel *_viewModel;	// 32 = 0x20
    PUContentTileProvider *_contentTileProvider;	// 40 = 0x28
    PULoadingStatusManager *_loadingStatusManager;	// 48 = 0x30
    id <PXAssetImportStatusManager> _importStatusManager;	// 56 = 0x38
    PXPhotosDetailsContext *_photosDetailsContext;	// 64 = 0x40
    PXGestureProvider *_gestureProvider;	// 72 = 0x48
    PUOneUpMergedVideoProvider *_mergedVideoProvider;	// 80 = 0x50
    PXAssetEditOperationManager *_editOperationManager;	// 88 = 0x58
    PUTileAnimator *_tileAnimator;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000000000c3898
@property(retain, nonatomic) PUTileAnimator *tileAnimator; // @synthesize tileAnimator=_tileAnimator;
@property(readonly, nonatomic) PXAssetEditOperationManager *editOperationManager; // @synthesize editOperationManager=_editOperationManager;
@property(readonly, nonatomic) PUOneUpMergedVideoProvider *mergedVideoProvider; // @synthesize mergedVideoProvider=_mergedVideoProvider;
@property(readonly, nonatomic) PXGestureProvider *gestureProvider; // @synthesize gestureProvider=_gestureProvider;
@property(readonly, nonatomic) PXPhotosDetailsContext *photosDetailsContext; // @synthesize photosDetailsContext=_photosDetailsContext;
@property(readonly, nonatomic) id <PXAssetImportStatusManager> importStatusManager; // @synthesize importStatusManager=_importStatusManager;
@property(readonly, nonatomic) PULoadingStatusManager *loadingStatusManager; // @synthesize loadingStatusManager=_loadingStatusManager;
@property(retain, nonatomic) PUContentTileProvider *contentTileProvider; // @synthesize contentTileProvider=_contentTileProvider;
@property(retain, nonatomic) PUBrowsingViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(readonly, nonatomic) PUAssetActionManager *actionManager; // @synthesize actionManager=_actionManager;
@property(retain, nonatomic) PUMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property(readonly, nonatomic) PUAssetsDataSourceManager *dataSourceManager; // @synthesize dataSourceManager=_dataSourceManager;
- (void)configureTilingView:(id)arg1;	// IMP=0x00000000000c3711
- (void)assetEditOperationManager:(id)arg1 didChangeEditOperationStatusForAsset:(id)arg2 context:(void *)arg3;	// IMP=0x00000000000c356b
- (void)assetEditOperationManager:(id)arg1 didChangeEditOperationsPerformedOnAsset:(id)arg2 context:(void *)arg3;	// IMP=0x00000000000c3320
- (void)loadingStatusManager:(id)arg1 didUpdateLoadingStatus:(id)arg2 forItem:(id)arg3;	// IMP=0x00000000000c31d5
- (id)assetActionManagerCurrentAssetsDataSource:(id)arg1;	// IMP=0x00000000000c3185
- (id)assetsDataSourceManagerInterestingAssetReferences:(id)arg1;	// IMP=0x00000000000c3135
- (void)assetsDataSourceManager:(id)arg1 didChangeAssetsDataSource:(id)arg2;	// IMP=0x00000000000c2fef
- (id)initWithDataSourceManager:(id)arg1 actionManager:(id)arg2 mediaProvider:(id)arg3 photosDetailsContext:(id)arg4 lowMemoryMode:(_Bool)arg5 gestureProvider:(id)arg6 importStatusManager:(id)arg7;	// IMP=0x00000000000c29da
- (id)initWithDataSourceManager:(id)arg1 actionManager:(id)arg2 mediaProvider:(id)arg3 photosDetailsContext:(id)arg4 lowMemoryMode:(_Bool)arg5;	// IMP=0x00000000000c29ae
- (id)initWithDataSourceManager:(id)arg1 actionManager:(id)arg2 mediaProvider:(id)arg3;	// IMP=0x00000000000c2989
- (id)init;	// IMP=0x00000000000c28f2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

