//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SQLiteConnection;

@interface ODRDatabaseSession : NSObject
{
    SQLiteConnection *_connection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000008670
@property(readonly) SQLiteConnection *connection; // @synthesize connection=_connection;
- (id)_tagsWithPredicate:(id)arg1;	// IMP=0x00100000000084c9
- (id)_predicateForBundleID:(id)arg1 withPurgeability:(_Bool)arg2 lastUsedMoreThan:(id)arg3;	// IMP=0x001000000000822b
- (void)_enumerateAssetPacksMatchingPredicate:(id)arg1 orderingProperties:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000000080b6
- (void)_enumerateAssetPacksForBundleID:(id)arg1 withPurgeability:(_Bool)arg2 lastUsedMoreThan:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;	// IMP=0x0010000000007fc5
- (id)_assetPacksWithPredicate:(id)arg1 orderingProperties:(id)arg2;	// IMP=0x0010000000007e18
- (id)_assetPacksWithPredicate:(id)arg1;	// IMP=0x0010000000007e04
- (id)_assetPacksForBundleID:(id)arg1 withPurgeability:(_Bool)arg2 lastUsedMoreThan:(id)arg3;	// IMP=0x0010000000007d34
- (id)_assetPacksForBundleID:(id)arg1 onlyOnDevice:(_Bool)arg2;	// IMP=0x0010000000007c12
- (id)_assetDownloadsWithPredicate:(id)arg1;	// IMP=0x0010000000007a30
- (_Bool)validManifestExistsForApplication:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000078f9
- (id)totalSizeOfUnpurgeableAssetPacksForBundleID:(id)arg1;	// IMP=0x0010000000007797
- (id)totalSizeOfDownloadedAssetPacksForBundleID:(id)arg1;	// IMP=0x0010000000007642
- (id)tagWithName:(id)arg1 andBundleID:(id)arg2;	// IMP=0x00100000000074cc
- (id)tagsForBundleKey:(id)arg1;	// IMP=0x001000000000745c
- (id)tagsForApplication:(id)arg1;	// IMP=0x00100000000073bc
- (id)purgedAssetPacksWithReason:(long long)arg1 forApplication:(id)arg2;	// IMP=0x0010000000007233
- (id)purgeableAssetPacks;	// IMP=0x0010000000007217
- (long long)preflightApplication:(id)arg1;	// IMP=0x0010000000007004
- (id)nonPurgeableAssetPacks;	// IMP=0x0010000000006feb
- (id)missingPrefetchAssetPacksForApplication:(id)arg1;	// IMP=0x0010000000006e19
- (id)missingInitialAssetPacksForApplication:(id)arg1;	// IMP=0x0010000000006c8e
- (id)manifestForAdamID:(id)arg1;	// IMP=0x0010000000006b66
- (id)manifestForApplication:(id)arg1;	// IMP=0x001000000000692a
- (void)enumeratePurgeableAssetPacksUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000000690b
- (void)enumerateAssetPacksForBundleID:(id)arg1 withPurgeability:(_Bool)arg2 lastUsedMoreThan:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;	// IMP=0x00100000000068f9
- (id)downloadedAssetPacksForBundleID:(id)arg1;	// IMP=0x00100000000068e2
- (id)assetPacksWithTagNames:(id)arg1 forApplication:(id)arg2;	// IMP=0x0010000000006543
- (id)assetPacksWithLocalURL:(id)arg1;	// IMP=0x001000000000647a
- (id)assetPacksWithDownloadRequestUUIDs;	// IMP=0x001000000000640d
- (id)assetPackWithBundleKey:(id)arg1;	// IMP=0x0010000000006369
- (id)assetPacksForBundleID:(id)arg1 withPurgeability:(_Bool)arg2 lastUsedMoreThan:(id)arg3;	// IMP=0x0010000000006357
- (id)assetPacksForApplication:(id)arg1;	// IMP=0x00100000000062f3
- (id)assetDownloadsForCoordinatorID:(id)arg1 ofType:(long long)arg2;	// IMP=0x001000000000618c
- (id)assetDownloadsForCoordinatorID:(id)arg1;	// IMP=0x001000000000611c
- (id)assetDownloadWithBundleID:(id)arg1 andBundleKey:(id)arg2;	// IMP=0x0010000000005fa6
- (id)assetDownloadsWithBundleID:(id)arg1;	// IMP=0x0010000000005f28
- (id)appBundleIDToBundlePathMapping;	// IMP=0x0010000000005f0f
- (_Bool)applicationNeedsRepair:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000005cb3
- (id)allBundleIDs;	// IMP=0x0010000000005aef
- (id)allAssetDownloads;	// IMP=0x0010000000005adb
- (id)initWithConnection:(id)arg1;	// IMP=0x0010000000005a70

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

