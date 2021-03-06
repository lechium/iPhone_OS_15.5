//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLSAbstractAsset, NSDate, NSError, NSMutableSet, NSOperationQueue, NSProgress, NSSet, NSString, NSURL, PDCKUploadAssetsOperation, PDClassKitServiceOperations, PDDatabase;

@interface PDFileSyncAgent : NSObject
{
    struct os_unfair_recursive_lock_s _lock;	// 8 = 0x8
    CLSAbstractAsset *_asset;	// 16 = 0x10
    unsigned long long _uploadState;	// 24 = 0x18
    _Bool _observingDriveUploadProgress;	// 32 = 0x20
    id _driveUploadProgressSubscriber;	// 40 = 0x28
    NSProgress *_uploadProgress;	// 48 = 0x30
    NSError *_uploadError;	// 56 = 0x38
    _Bool _addedToFilePresenter;	// 64 = 0x40
    NSError *_sharingError;	// 72 = 0x48
    NSMutableSet *_uploadObservers;	// 80 = 0x50
    NSMutableSet *_downloadObservers;	// 88 = 0x58
    PDCKUploadAssetsOperation *_assetsOperation;	// 96 = 0x60
    PDDatabase *_database;	// 104 = 0x68
    NSDate *_lastDBUpdate;	// 112 = 0x70
    PDClassKitServiceOperations *_assetDownloadOperations;	// 120 = 0x78
}

+ (_Bool)removeItemAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x002000000013a3cb
+ (_Bool)isUploaded:(id)arg1;	// IMP=0x001000000013694d
+ (_Bool)isUbiquitousURL:(id)arg1;	// IMP=0x00100000001368d9
+ (id)draftsURL:(id *)arg1;	// IMP=0x00100000001367f6
+ (id)documentsURL:(id *)arg1;	// IMP=0x0010000000136713
+ (id)ubiquitousContainerURL:(id *)arg1;	// IMP=0x001000000013653c
- (void).cxx_destruct;	// IMP=0x0020000000142d3e
@property(retain, nonatomic) CLSAbstractAsset *asset; // @synthesize asset=_asset;
- (void)fetchCloudKitStreamingURLWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001420e8
- (void)downloadCloudKitThumbnailWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001412c8
- (void)downloadCloudKitPrimaryFileWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000140331
- (_Bool)cacheThumbnailAssetURLFromCKRecord:(id)arg1 usingAsset:(id)arg2 error:(id *)arg3;	// IMP=0x000000000013fee5
- (_Bool)cacheAssetURLFromCKRecord:(id)arg1 usingAsset:(id)arg2 error:(id *)arg3;	// IMP=0x001000000013faa3
- (_Bool)updateAssetIfExists:(id)arg1;	// IMP=0x001000000013f9a7
- (void)presentedItemDidChangeUbiquityAttributes:(id)arg1;	// IMP=0x001000000013f35a
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x001000000013f143
- (void)removeFromFilePresenter;	// IMP=0x001000000013f09e
- (void)addToFilePresenter;	// IMP=0x001000000013eeb0
@property(readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property(readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property(readonly, copy) NSURL *presentedItemURL;
- (void)createiCloudDriveCKShare:(CDUnknownBlockType)arg1;	// IMP=0x001000000013e4bd
- (void)queued_stopObservingiCloudDriveUploadProgress;	// IMP=0x001000000013e30d
- (void)queued_startObservingiCloudDriveUploadProgress;	// IMP=0x001000000013dbcc
- (id)copyToiCloudDrive;	// IMP=0x001000000013d1ca
- (void)uploadToCloudKitContentStore;	// IMP=0x001000000013c5e9
- (id)copyAssetToCloudKitContentStoreCache:(id)arg1;	// IMP=0x001000000013b2f6
- (id)moveDownloadedAssetThumbnailFileToContentStoreCacheForAsset:(id)arg1;	// IMP=0x001000000013ac2d
- (id)moveDownloadedAssetFileToContentStoreCacheForAsset:(id)arg1;	// IMP=0x001000000013a53f
- (void)notifyUploadCompleted;	// IMP=0x0010000000139e97
- (void)notifyUploadProgress;	// IMP=0x0010000000139e31
- (void)insertStagedAssetInDBToBeginUploading;	// IMP=0x0010000000139d68
- (void)insertOrUpdateAssetInDBWithCoalescing:(_Bool)arg1;	// IMP=0x0010000000139c64
- (void)uploadStateChanged:(unsigned long long)arg1;	// IMP=0x0010000000138c49
- (void)startStateMachine;	// IMP=0x0010000000138c35
- (void)deleteBackingStoreWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000013825f
- (id)uploadAfterValidatingURLWithAuditToken:(CDStruct_6ad76789)arg1;	// IMP=0x0010000000137eea
- (void)queued_notifyDownloadCompleted:(_Bool)arg1 error:(id)arg2;	// IMP=0x0010000000137c3b
- (void)queued_notifyDownloadProgressFraction:(double)arg1 error:(id)arg2;	// IMP=0x0010000000137948
- (void)queued_notifyUploadCompleted:(_Bool)arg1 url:(id)arg2 thumbnailURL:(id)arg3 relativePathWithinContainer:(id)arg4 ubiquitousContainerName:(id)arg5 brItemID:(id)arg6 brOwnerName:(id)arg7 brZoneName:(id)arg8 brShareName:(id)arg9 fractionUploaded:(double)arg10 isTemporary:(_Bool)arg11 isStaged:(_Bool)arg12 error:(id)arg13;	// IMP=0x00100000001373ca
- (void)queued_notifyUploadProgressFraction:(double)arg1 error:(id)arg2;	// IMP=0x00100000001370a7
- (id)downloadObservers;	// IMP=0x0010000000137059
- (id)uploadObservers;	// IMP=0x001000000013700b
- (void)removeDownloadObservers:(id)arg1;	// IMP=0x0010000000136f7b
- (void)removeDownloadObserver:(id)arg1;	// IMP=0x0010000000136eeb
- (void)addDownloadObserver:(id)arg1;	// IMP=0x0010000000136e89
- (void)removeUploadObservers:(id)arg1;	// IMP=0x0010000000136df6
- (void)removeUploadObserver:(id)arg1;	// IMP=0x0010000000136d63
- (void)addUploadObserver:(id)arg1;	// IMP=0x0010000000136ce9
- (void)unlock;	// IMP=0x0010000000136cdb
- (void)lock;	// IMP=0x0010000000136ccb
- (id)initWithAsset:(id)arg1 database:(id)arg2;	// IMP=0x0010000000136bde

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSURL *primaryPresentedItemURL;
@property(readonly) Class superclass;

@end

