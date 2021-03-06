//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PHImportServiceImporterDelegate-Protocol.h>
#import <PhotosUICore/PHImportSourceObserver-Protocol.h>
#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXImportAssetsDataSourceManagerDelegate-Protocol.h>
#import <PhotosUICore/PXMutableImportController-Protocol.h>

@class NSArray, NSMutableDictionary, NSMutableSet, NSObject, NSProgress, NSString, NSTimer, PHAssetCollection, PHImportSource, PHPhotoLibrary, PXImportAssetsDataSourceManager, PXImportDeleteAction, PXImportMediaLoadingCoordinator, PXImportMediaProvider, PXImportSessionInfo, PXPowerController, PXSectionedSelectionManager, PXSelectionSnapshot;
@protocol OS_dispatch_queue, PXImportControllerTopLevelCompletionDelegate;

@interface PXImportController <PXImportAssetsDataSourceManagerDelegate, PXMutableImportController, PHImportServiceImporterDelegate, PHImportSourceObserver, PXChangeObserver>
{
    NSArray *_lastSelectedModels;	// 8 = 0x8
    _Bool _loadingContent;	// 16 = 0x10
    _Bool _hasLoadedInitialBatchOfAssets;	// 17 = 0x11
    _Bool _loadingInitialBatchOfAssets;	// 18 = 0x12
    _Bool _userRequiredToTrustHostOnSourceDevice;	// 19 = 0x13
    _Bool _importingAssets;	// 20 = 0x14
    _Bool _deletingAssets;	// 21 = 0x15
    _Bool _alreadyImportedItemsSelectable;	// 22 = 0x16
    _Bool _hasLoadedAssets;	// 23 = 0x17
    _Bool _hasReceivedImportSourceAssetChanges;	// 24 = 0x18
    _Bool _isLoadingInitialBatchOfAssets;	// 25 = 0x19
    unsigned short _imageFormat;	// 26 = 0x1a
    unsigned int _importAssetsPowerAssertionIdentifier;	// 28 = 0x1c
    unsigned int _deleteAssetsPowerAssertionIdentifier;	// 32 = 0x20
    unsigned int _loadAssetsPowerAssertionIdentifier;	// 36 = 0x24
    PHImportSource *_importSource;	// 40 = 0x28
    PHPhotoLibrary *_photoLibrary;	// 48 = 0x30
    NSObject<PXImportControllerTopLevelCompletionDelegate> *_importCompletionDelegate;	// 56 = 0x38
    PXImportMediaProvider *_importMediaProvider;	// 64 = 0x40
    PXImportAssetsDataSourceManager *_dataSourceManager;	// 72 = 0x48
    PXImportSessionInfo *_importSessionInfo;	// 80 = 0x50
    NSProgress *_importProgress;	// 88 = 0x58
    PHAssetCollection *_importDestinationAlbum;	// 96 = 0x60
    PXImportDeleteAction *_deleteAction;	// 104 = 0x68
    PXSectionedSelectionManager *_selectionManager;	// 112 = 0x70
    NSTimer *_initialBatchOfAssetsTimer;	// 120 = 0x78
    NSMutableDictionary *_sharedViewModelsById;	// 128 = 0x80
    NSObject<OS_dispatch_queue> *_sharedViewModelsUpdateQueue;	// 136 = 0x88
    NSMutableSet *_otherDataSourceManagers;	// 144 = 0x90
    NSObject<OS_dispatch_queue> *_otherDataSourceManagersQueue;	// 152 = 0x98
    PXPowerController *_powerController;	// 160 = 0xa0
    NSTimer *_assetLoadingPowerAssertionTimer;	// 168 = 0xa8
    CDUnknownBlockType _importCompletionHandler;	// 176 = 0xb0
    CDUnknownBlockType _deleteCompletionHandler;	// 184 = 0xb8
    PXSelectionSnapshot *_lastSelectionSnapshot;	// 192 = 0xc0
    PXImportMediaLoadingCoordinator *_mediaLoadingCoordinator;	// 200 = 0xc8
}

+ (id)importFilesAtURLs:(id)arg1 photoLibrary:(id)arg2 collection:(id)arg3 checkDuplicates:(_Bool)arg4 referenced:(_Bool)arg5 delegate:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;	// IMP=0x0000000000759960
+ (void)favoriteAssetsFromImportResults:(id)arg1 photoLibrary:(id)arg2;	// IMP=0x0000000000759827
+ (id)itemsConstrainedByAvailableDiskSpaceFromItems:(id)arg1 additionalBytesRequired:(inout long long *)arg2;	// IMP=0x000000000075946d
+ (long long)diskSpaceRequiredToImportItems:(id)arg1;	// IMP=0x00000000007592b5
+ (id)assetsForModels:(id)arg1;	// IMP=0x00000000007590f0
+ (id)importOperationQueue;	// IMP=0x00000000007590c0
- (void).cxx_destruct;	// IMP=0x0000000000756d64
@property(readonly, nonatomic) PXImportMediaLoadingCoordinator *mediaLoadingCoordinator; // @synthesize mediaLoadingCoordinator=_mediaLoadingCoordinator;
@property(retain, nonatomic) PXSelectionSnapshot *lastSelectionSnapshot; // @synthesize lastSelectionSnapshot=_lastSelectionSnapshot;
@property(copy, nonatomic) CDUnknownBlockType deleteCompletionHandler; // @synthesize deleteCompletionHandler=_deleteCompletionHandler;
@property(copy, nonatomic) CDUnknownBlockType importCompletionHandler; // @synthesize importCompletionHandler=_importCompletionHandler;
@property(retain, nonatomic) NSTimer *assetLoadingPowerAssertionTimer; // @synthesize assetLoadingPowerAssertionTimer=_assetLoadingPowerAssertionTimer;
@property(nonatomic) unsigned int loadAssetsPowerAssertionIdentifier; // @synthesize loadAssetsPowerAssertionIdentifier=_loadAssetsPowerAssertionIdentifier;
@property(nonatomic) unsigned int deleteAssetsPowerAssertionIdentifier; // @synthesize deleteAssetsPowerAssertionIdentifier=_deleteAssetsPowerAssertionIdentifier;
@property(nonatomic) unsigned int importAssetsPowerAssertionIdentifier; // @synthesize importAssetsPowerAssertionIdentifier=_importAssetsPowerAssertionIdentifier;
@property(retain, nonatomic) PXPowerController *powerController; // @synthesize powerController=_powerController;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *otherDataSourceManagersQueue; // @synthesize otherDataSourceManagersQueue=_otherDataSourceManagersQueue;
@property(readonly, nonatomic) NSMutableSet *otherDataSourceManagers; // @synthesize otherDataSourceManagers=_otherDataSourceManagers;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *sharedViewModelsUpdateQueue; // @synthesize sharedViewModelsUpdateQueue=_sharedViewModelsUpdateQueue;
@property(readonly, nonatomic) NSMutableDictionary *sharedViewModelsById; // @synthesize sharedViewModelsById=_sharedViewModelsById;
@property(retain, nonatomic) NSTimer *initialBatchOfAssetsTimer; // @synthesize initialBatchOfAssetsTimer=_initialBatchOfAssetsTimer;
@property(nonatomic) _Bool isLoadingInitialBatchOfAssets; // @synthesize isLoadingInitialBatchOfAssets=_isLoadingInitialBatchOfAssets;
@property(readonly, nonatomic, getter=isLoadingInitialBatchOfAssets) _Bool loadingInitialBatchOfAssets; // @synthesize loadingInitialBatchOfAssets=_loadingInitialBatchOfAssets;
@property(nonatomic) _Bool hasReceivedImportSourceAssetChanges; // @synthesize hasReceivedImportSourceAssetChanges=_hasReceivedImportSourceAssetChanges;
@property(nonatomic) _Bool hasLoadedAssets; // @synthesize hasLoadedAssets=_hasLoadedAssets;
@property(nonatomic) _Bool alreadyImportedItemsSelectable; // @synthesize alreadyImportedItemsSelectable=_alreadyImportedItemsSelectable;
@property(readonly, nonatomic) PXSectionedSelectionManager *selectionManager; // @synthesize selectionManager=_selectionManager;
@property(retain, nonatomic) PXImportDeleteAction *deleteAction; // @synthesize deleteAction=_deleteAction;
@property(readonly, nonatomic, getter=isDeletingAssets) _Bool deletingAssets; // @synthesize deletingAssets=_deletingAssets;
@property(retain, nonatomic) PHAssetCollection *importDestinationAlbum; // @synthesize importDestinationAlbum=_importDestinationAlbum;
@property(retain, nonatomic) NSProgress *importProgress; // @synthesize importProgress=_importProgress;
@property(retain, nonatomic) PXImportSessionInfo *importSessionInfo; // @synthesize importSessionInfo=_importSessionInfo;
@property(readonly, nonatomic, getter=isImportingAssets) _Bool importingAssets; // @synthesize importingAssets=_importingAssets;
@property(nonatomic, getter=isUserRequiredToTrustHostOnSourceDevice) _Bool userRequiredToTrustHostOnSourceDevice; // @synthesize userRequiredToTrustHostOnSourceDevice=_userRequiredToTrustHostOnSourceDevice;
@property(nonatomic) _Bool hasLoadedInitialBatchOfAssets; // @synthesize hasLoadedInitialBatchOfAssets=_hasLoadedInitialBatchOfAssets;
@property(readonly, nonatomic, getter=isLoadingContent) _Bool loadingContent; // @synthesize loadingContent=_loadingContent;
@property(readonly, nonatomic) PXImportAssetsDataSourceManager *dataSourceManager; // @synthesize dataSourceManager=_dataSourceManager;
@property(readonly, nonatomic) PXImportMediaProvider *importMediaProvider; // @synthesize importMediaProvider=_importMediaProvider;
@property(nonatomic) __weak NSObject<PXImportControllerTopLevelCompletionDelegate> *importCompletionDelegate; // @synthesize importCompletionDelegate=_importCompletionDelegate;
@property(readonly, nonatomic) unsigned short imageFormat; // @synthesize imageFormat=_imageFormat;
@property(readonly, nonatomic) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(readonly, nonatomic) PHImportSource *importSource; // @synthesize importSource=_importSource;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x0000000000756655
- (void)assetLoadingPowerAssertionTimerFired;	// IMP=0x00000000007565a8
- (void)stopTimedAssetsLoadingPowerAssertion;	// IMP=0x0000000000756436
- (void)restartTimedAssetsLoadingPowerAssertion;	// IMP=0x00000000007561d3
- (void)stopObservingImportProgress;	// IMP=0x000000000075618c
- (void)startObservingImportProgress;	// IMP=0x0000000000756145
- (void)sendActionProgress:(double)arg1;	// IMP=0x00000000007560f9
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000756064
- (id)selectedItems;	// IMP=0x0000000000755bb6
- (void)deselectItem:(id)arg1;	// IMP=0x0000000000755911
- (void)selectItem:(id)arg1;	// IMP=0x0000000000755641
- (void)setSelected:(_Bool)arg1 forItems:(id)arg2;	// IMP=0x00000000007551fb
- (void)finishDeletingItems;	// IMP=0x0000000000755103
- (void)deleteItems:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000754c97
- (void)setDeletingAssets:(_Bool)arg1;	// IMP=0x0000000000754c6f
- (void)completedImportRecord:(id)arg1;	// IMP=0x0000000000754af2
- (void)finishImportingWithResults:(id)arg1;	// IMP=0x0000000000754446
- (void)stopImport;	// IMP=0x00000000007542aa
- (void)importItems:(id)arg1 configuration:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000753abf
- (void)setImportingAssets:(_Bool)arg1;	// IMP=0x0000000000753a97
- (id)viewModelMapForImportAssetsDataSourceManager:(id)arg1;	// IMP=0x0000000000753959
- (void)removeDataSourceManager:(id)arg1;	// IMP=0x00000000007538a7
- (id)createDataSourceManager;	// IMP=0x00000000007537ab
- (void)userHasTrustedHostForImportSource:(id)arg1;	// IMP=0x0000000000753792
- (void)userRequiredToTrustHostForImportSource:(id)arg1;	// IMP=0x0000000000753779
- (void)nameDidChangeForImportSource:(id)arg1;	// IMP=0x000000000075372d
- (void)capabilitiesDidChangeForImportSource:(id)arg1;	// IMP=0x00000000007536e1
- (long long)importAsset:(id)arg1 asDuplicateOfLibraryAsset:(id)arg2 applyToAll:(_Bool *)arg3;	// IMP=0x00000000007536d9
- (void)importSource:(id)arg1 didDeleteAsset:(id)arg2;	// IMP=0x00000000007536d3
- (void)importSource:(id)arg1 didUpdateAsset:(id)arg2 propertyMask:(unsigned short)arg3;	// IMP=0x00000000007536cd
- (void)importSource:(id)arg1 didRemoveAssets:(id)arg2;	// IMP=0x00000000007531a2
- (void)importSource:(id)arg1 didAddAssets:(id)arg2;	// IMP=0x0000000000752fc3
- (void)startInitialBatchOfAssetsTimerWithTimeout:(double)arg1;	// IMP=0x0000000000752e76
- (void)handleImportSourceModifiedAssets;	// IMP=0x0000000000752e05
- (void)loadAssets;	// IMP=0x0000000000752af4
- (void)setLoadingInitialBatchOfAssets:(_Bool)arg1;	// IMP=0x0000000000752acc
- (void)setLoadingContent:(_Bool)arg1;	// IMP=0x0000000000752a7c
- (id)mutableChangeObject;	// IMP=0x0000000000752a73
- (void)performChanges:(CDUnknownBlockType)arg1;	// IMP=0x0000000000752a44
- (void)dealloc;	// IMP=0x00000000007529be
- (void)shutdown;	// IMP=0x0000000000752977
- (id)initWithImportSource:(id)arg1 photoLibrary:(id)arg2 imageFormat:(unsigned short)arg3;	// IMP=0x0000000000752582

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

