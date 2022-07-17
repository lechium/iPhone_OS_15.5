//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsCore/FCAssetHandleDelegate-Protocol.h>
#import <NewsCore/FCCacheCoordinatorDelegate-Protocol.h>
#import <NewsCore/FCCacheFlushing-Protocol.h>

@class FCAssetStore, FCCacheCoordinator, FCKeyValueStore, FCMapTable, FCNetworkBehaviorMonitor, NFUnfairLock, NSString, NSURL;
@protocol FCAVAssetFactoryType, FCAssetKeyManagerType, OS_dispatch_queue;

@interface FCAssetManager : NSObject <FCAssetHandleDelegate, FCCacheCoordinatorDelegate, FCCacheFlushing>
{
    _Bool _shouldUseSecureConnectionForCKAssetDownloads;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSString *_parentDirectory;	// 24 = 0x18
    FCKeyValueStore *_keyValueStore;	// 32 = 0x20
    FCAssetStore *_assetStore;	// 40 = 0x28
    FCCacheCoordinator *_cacheCoordinator;	// 48 = 0x30
    FCMapTable *_assetHandles;	// 56 = 0x38
    NFUnfairLock *_assetHandlesLock;	// 64 = 0x40
    FCNetworkBehaviorMonitor *_networkBehaviorMonitor;	// 72 = 0x48
    id <FCAssetKeyManagerType> _keyManager;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_initQueue;	// 88 = 0x58
    NSURL *_directoryURLForCachedAssets;	// 96 = 0x60
    id <FCAVAssetFactoryType> _avAssetFactory;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0000000000287f10
- (void)enableFlushingWithFlushingThreshold:(unsigned long long)arg1;	// IMP=0x00000000002878a9
- (void)d_resetAssetHandle:(id)arg1;	// IMP=0x000000000028766d
- (void)saveWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000002875fc
- (void)cacheCoordinator:(id)arg1 flushKeysWithWriteLock:(id)arg2;	// IMP=0x000000000028734a
- (unsigned long long)cacheCoordinatorCurrentSizeWithReadLock:(id)arg1;	// IMP=0x0000000000287015
- (id)contentArchiveForAssetHandle:(id)arg1;	// IMP=0x0000000000285f46
- (id)operationToFetchDataProviderForAssetHandle:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000285794
- (id)interestTokenForAssetURLs:(id)arg1;	// IMP=0x00000000002856ca
- (id)importAsset:(id)arg1 remoteURL:(id)arg2 fileURL:(id)arg3;	// IMP=0x0000000000285016
- (id)assetHandleForURL:(id)arg1 prefetchedFileURL:(id)arg2 importMethod:(long long)arg3 lifetimeHint:(long long)arg4;	// IMP=0x000000000028481a
- (id)assetHandleForCKAssetURLString:(id)arg1 prefetchedData:(id)arg2 unzipIfNeeded:(_Bool)arg3 lifetimeHint:(long long)arg4;	// IMP=0x0000000000284392
- (id)assetHandleForCKAssetURL:(id)arg1 lifetimeHint:(long long)arg2;	// IMP=0x000000000028432d
- (id)assetHandleForCKAssetURLString:(id)arg1 lifetimeHint:(long long)arg2;	// IMP=0x00000000002842ca
- (id)assetHandleForURL:(id)arg1 lifetimeHint:(long long)arg2;	// IMP=0x00000000002833d2
- (id)initWithName:(id)arg1 directory:(id)arg2 keyManager:(id)arg3 avAssetFactory:(id)arg4 networkBehaviorMonitor:(id)arg5;	// IMP=0x0000000000282fa3
- (id)init;	// IMP=0x0000000000282e5e
- (id)assetHandleForRecordID:(id)arg1 field:(long long)arg2 lifetimeHint:(long long)arg3 contentDatabase:(id)arg4;	// IMP=0x0000000000137dc0
- (void)t_save;	// IMP=0x0000000000287fa6
- (id)assetHandleForResourceID:(id)arg1 lifetimeHint:(long long)arg2 contentContext:(id)arg3;	// IMP=0x00000000002a62fa
- (id)assetHandleForResourceID:(id)arg1 contentContext:(id)arg2;	// IMP=0x00000000002a62e3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
