//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServices/PLResourceDataStore-Protocol.h>

@class NSArray, NSObject, NSString, PLLazyObject, PLPhotoLibraryPathManager, PLThumbnailIndexes, PLThumbnailManager;
@protocol NSObject, OS_dispatch_source;

@interface PLThumbnailResourceDataStore <PLResourceDataStore>
{
    PLThumbnailIndexes *_thumbnailIndexes;	// 8 = 0x8
    PLLazyObject *_lazyThumbnailManager;	// 16 = 0x10
    PLLazyObject *_lazyThumbnailFormats;	// 24 = 0x18
    PLLazyObject *_lazyThumbnailFormatsByTableType;	// 32 = 0x20
    NSArray *_overridenThumbnailFormats;	// 40 = 0x28
    struct os_unfair_lock_s _observersLock;	// 48 = 0x30
    NSObject<OS_dispatch_source> *_configWatcherSource;	// 56 = 0x38
    id <NSObject> _clientBackgroundTransitionObserverToken;	// 64 = 0x40
}

+ (_Bool)resourceIsSquare:(id)arg1;	// IMP=0x00000000000e432b
+ (unsigned short)keyLengthWithDataPreview:(unsigned char)arg1;	// IMP=0x00000000000e4320
+ (id)supportedRecipes;	// IMP=0x00000000000e4313
+ (unsigned short)storeClassID;	// IMP=0x00000000000e4308
+ (id)_tableFormatsByTableTypeFromFormats:(id)arg1;	// IMP=0x00000000000e3fc5
- (void).cxx_destruct;	// IMP=0x00000000000e3d48
@property(readonly) PLThumbnailIndexes *thumbnailIndexes; // @synthesize thumbnailIndexes=_thumbnailIndexes;
- (_Bool)thumbnailForKey:(id)arg1 matchesAssetID:(id)arg2;	// IMP=0x00000000000e3c68
- (struct CGImage *)newTableThumbImageForKey:(id)arg1;	// IMP=0x00000000000e3b41
- (id)thumbnailFormatsByTableType;	// IMP=0x00000000000e3b24
@property(readonly) NSArray *thumbnailFormats;
@property(readonly) PLThumbnailManager *thumbnailManager;
- (_Bool)videoResource:(id)arg1 matchesOrExceedsQualityLevel:(unsigned int)arg2;	// IMP=0x00000000000e3ab7
- (id)requestLocalAvailabilityChange:(short)arg1 forResource:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000e3a33
- (_Bool)storeExternalResource:(id)arg1 forAsset:(id)arg2 inContext:(id)arg3 options:(id)arg4 error:(id *)arg5 resultingResource:(id *)arg6;	// IMP=0x00000000000e3a2b
- (_Bool)canStoreExternalResource:(id)arg1;	// IMP=0x00000000000e3a23
- (id)updateDerivativeResourcesForAsset:(id)arg1 forLifecycleEvent:(unsigned int)arg2;	// IMP=0x00000000000e3a0a
- (id)virtualResourcesForAsset:(id)arg1;	// IMP=0x00000000000e3064
- (id)resourceURLForKey:(id)arg1;	// IMP=0x00000000000e2fe7
- (id)resourceDataForKey:(id)arg1 assetID:(id)arg2;	// IMP=0x00000000000e2f6a
- (id)keyFromKeyStruct:(const void *)arg1;	// IMP=0x00000000000e2f34
- (id)descriptionForSubtype:(long long)arg1;	// IMP=0x00000000000e2f27
- (id)name;	// IMP=0x00000000000e2f1a
- (void)dealloc;	// IMP=0x00000000000e2e74
- (id)initWithPathManager:(id)arg1;	// IMP=0x00000000000e2af1
- (void)overrideThumbnailFormatsWithFormatIDs:(id)arg1;	// IMP=0x00000000000e28bc
- (void)invalidateThumbnailManager;	// IMP=0x00000000000e2858
- (id)_makeThumbnailManager;	// IMP=0x00000000000e2733
- (void)_installBackgroundWatcher;	// IMP=0x00000000000e25ee
- (void)_stopWatchingThumbnailConfigFile;	// IMP=0x00000000000e2596
- (void)_startWatchingThumbnailConfigFile;	// IMP=0x00000000000e22f2
- (struct PLImageTableEntryFooter_s *)_tableFooterForKey:(id)arg1;	// IMP=0x00000000000e21a6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) PLPhotoLibraryPathManager *pathManager;
@property(readonly) Class superclass;

@end

