//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, ODRDatabaseChangeset, SQLiteConnection;

@interface ODRDatabaseTransaction
{
    ODRDatabaseChangeset *_changeset;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000005d567
- (id)_manifestEntityForManifest:(id)arg1;	// IMP=0x001000000005d2fc
- (id)_existingStorageIDForBundleID:(id)arg1;	// IMP=0x001000000005d226
- (_Bool)_deleteTagsMatchingPredicate:(id)arg1;	// IMP=0x001000000005d0d2
- (_Bool)_deleteAssetPacksMatchingPredicate:(id)arg1;	// IMP=0x001000000005ceb9
- (id)_assetPackEntityForBundleID:(id)arg1 bundleKey:(id)arg2;	// IMP=0x001000000005cc9a
- (id)_assetPackEntityForAssetPack:(id)arg1;	// IMP=0x001000000005cb80
- (_Bool)updateManifest:(id)arg1 forApplication:(id)arg2 verifyContentHashes:(_Bool)arg3;	// IMP=0x001000000005c24f
- (_Bool)updateManifest:(id)arg1 bundleTagManifest:(id)arg2 forApplication:(id)arg3 verifyContentHashes:(_Bool)arg4;	// IMP=0x001000000005bf38
- (_Bool)updateEntity:(id)arg1;	// IMP=0x001000000005be35
- (_Bool)updateBundleTagManifest:(id)arg1 forApplication:(id)arg2;	// IMP=0x001000000005b7ea
- (_Bool)updateAssetDownloadSizeForDownload:(id)arg1;	// IMP=0x001000000005b6e4
- (_Bool)updateAsset:(id)arg1;	// IMP=0x001000000005b61c
- (_Bool)resetStateForApplication:(id)arg1;	// IMP=0x001000000005b403
- (_Bool)purgeAllTagsForApplication:(id)arg1;	// IMP=0x001000000005b1ea
- (_Bool)purgeAllAssetPacksForApplication:(id)arg1 withReason:(long long)arg2;	// IMP=0x001000000005aea2
- (_Bool)markAssetDownloadAsPaused:(_Bool)arg1 download:(id)arg2;	// IMP=0x001000000005ae07
- (_Bool)mapBundleID:(id)arg1 toBundlePath:(id)arg2;	// IMP=0x001000000005aadd
- (_Bool)importAssetDownload:(id)arg1;	// IMP=0x001000000005a85f
- (_Bool)importAppReviewManifest:(id)arg1 bundleID:(id)arg2 logKey:(id)arg3;	// IMP=0x001000000005a63b
- (_Bool)deleteMappingForBundleID:(id)arg1;	// IMP=0x001000000005a633
- (_Bool)deleteManifestForApplication:(id)arg1;	// IMP=0x001000000005a3ae
- (_Bool)deleteAssetDownload:(id)arg1;	// IMP=0x001000000005a25e

// Remaining properties
@property(readonly) SQLiteConnection *connection;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
