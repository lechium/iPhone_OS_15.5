//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXMutableAssetsDataSourceManager-Protocol.h>
#import <PhotosUICore/PXPhotosDataSourceChangeObserver-Protocol.h>

@class NSNumber, NSObject, NSPredicate, NSString, PHPhotoLibrary, PXPhotoKitAssetsDataSource, PXPhotosDataSource;
@protocol OS_dispatch_queue, PXPhotosDataSourceProvider;

@interface PXPhotoKitAssetsDataSourceManager <PXPhotosDataSourceChangeObserver, PXMutableAssetsDataSourceManager>
{
    PXPhotosDataSource *_photosDataSource;	// 8 = 0x8
    NSNumber *_backgroundFetchOriginSection;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_initialDataSourceLoadingQueue;	// 24 = 0x18
    NSString *_localizedLoadingInitialDataSourceMessage;	// 32 = 0x20
    _Bool __isLoadingInitialPhotosDataSource;	// 40 = 0x28
    id <PXPhotosDataSourceProvider> _photosDataSourceProvider;	// 48 = 0x30
}

+ (id)dataSourceManagerForConfiguration:(id)arg1;	// IMP=0x00000000003de6ed
+ (_Bool)_includeUnsavedSyndicatedAssetsForAssetCollection:(id)arg1;	// IMP=0x00000000003de658
+ (id)dataSourceManagerForAssetCollection:(id)arg1 existingAssetsFetchResult:(id)arg2 existingKeyAssetsFetchResult:(id)arg3 fetchPropertySets:(id)arg4 basePredicate:(id)arg5 options:(unsigned long long)arg6;	// IMP=0x00000000003de1c8
+ (id)dataSourceManagerForAssetCollection:(id)arg1;	// IMP=0x00000000003de19e
+ (id)dataSourceManagerWithAssets:(id)arg1 containerTitle:(id)arg2 options:(unsigned long long)arg3;	// IMP=0x00000000003de02f
+ (id)dataSourceManagerWithAssets:(id)arg1;	// IMP=0x00000000003de018
+ (id)dataSourceManagerWithAsset:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x00000000003dde45
+ (id)dataSourceManagerWithAsset:(id)arg1;	// IMP=0x00000000003dde31
- (void).cxx_destruct;	// IMP=0x00000000003ddb95
@property(nonatomic, setter=_setLoadingInitialPhotosDataSource:) _Bool _isLoadingInitialPhotosDataSource; // @synthesize _isLoadingInitialPhotosDataSource=__isLoadingInitialPhotosDataSource;
@property(retain, nonatomic) id <PXPhotosDataSourceProvider> photosDataSourceProvider; // @synthesize photosDataSourceProvider=_photosDataSourceProvider;
- (void)_didFinishLoadingInitialPhotosDataSource;	// IMP=0x00000000003ddb14
- (void)photosDataSourceDidFinishBackgroundFetching:(id)arg1;	// IMP=0x00000000003ddac8
- (id)photosDataSourceInterestingAssetReferences:(id)arg1;	// IMP=0x00000000003dd9f9
- (void)photosDataSource:(id)arg1 didChange:(id)arg2;	// IMP=0x00000000003dd974
- (void)refreshResultsForAssetCollection:(id)arg1;	// IMP=0x00000000003dd902
- (void)stopExcludingAssets:(id)arg1;	// IMP=0x00000000003dd890
- (void)excludeAssetsAtIndexPaths:(id)arg1;	// IMP=0x00000000003dd81e
- (void)stopForceIncludingAllAssets;	// IMP=0x00000000003dd7e1
- (void)forceIncludeAssetsAtIndexPaths:(id)arg1;	// IMP=0x00000000003dd76f
- (id)localizedLoadingInitialDataSourceMessage;	// IMP=0x00000000003dd74a
- (id)localizedEmptyPlaceholderMessage;	// IMP=0x00000000003dd6d2
- (id)localizedEmptyPlaceholderTitle;	// IMP=0x00000000003dd65a
- (void)setFilteringDisabled:(_Bool)arg1 forAssetCollection:(id)arg2;	// IMP=0x00000000003dd5e2
- (void)setFilterPredicate:(id)arg1 provideIncrementalChangeDetailsForAssetCollections:(id)arg2;	// IMP=0x00000000003dd55c
@property(retain, nonatomic) NSPredicate *filterPredicate;
- (_Bool)supportsFiltering;	// IMP=0x00000000003dd4f0
- (_Bool)isBackgroundFetching;	// IMP=0x00000000003dd4ac
- (void)startBackgroundFetchIfNeeded;	// IMP=0x00000000003dd46f
@property(nonatomic) long long backgroundFetchOriginSection;
- (void)resumeChangeDeliveryAndBackgroundLoading:(id)arg1;	// IMP=0x00000000003dd3b1
- (id)pauseChangeDeliveryWithTimeout:(double)arg1 identifier:(id)arg2;	// IMP=0x00000000003dd394
- (_Bool)forceAccurateSection:(long long)arg1 andSectionsBeforeAndAfter:(long long)arg2;	// IMP=0x00000000003dd32c
- (_Bool)forceAccurateSectionsIfNeeded:(id)arg1;	// IMP=0x00000000003dd289
- (void)setCurationEnabled:(_Bool)arg1 forAssetCollection:(id)arg2;	// IMP=0x00000000003dd211
@property(readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property(retain, nonatomic) PXPhotosDataSource *photosDataSource;
- (void)setPhotosDataSource:(id)arg1 publishIntermediateEmptySnapshot:(_Bool)arg2;	// IMP=0x00000000003dd0d2
- (void)updateWithPhotosDataSource:(id)arg1 andDataSourceChange:(id)arg2;	// IMP=0x00000000003dd015
- (id)_createAssetsDataSourceWithPhotosDataSource:(id)arg1 withChange:(id)arg2;	// IMP=0x00000000003dcf59
- (id)createInitialDataSource;	// IMP=0x00000000003dcf1e
- (_Bool)isLoadingInitialDataSource;	// IMP=0x00000000003dcee5
- (void)_ensurePhotosDataSource;	// IMP=0x00000000003dccd8
- (void)dealloc;	// IMP=0x00000000003dcc8c
- (id)init;	// IMP=0x00000000003dcc12
- (id)initWithPhotosDataSourceProvider:(id)arg1;	// IMP=0x00000000003dcbaa
- (id)initWithPhotosDataSource:(id)arg1;	// IMP=0x00000000003dcb42

// Remaining properties
@property(readonly, nonatomic) PXPhotoKitAssetsDataSource *dataSource; // @dynamic dataSource;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

