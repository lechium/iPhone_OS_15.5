//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MigratorODRTask
{
}

- (void)_swapKeysInDictionary:(id)arg1 usingMapping:(id)arg2;	// IMP=0x00400000001c0b92
- (_Bool)_importMemoryEntity:(id)arg1 usingDatastore:(id)arg2;	// IMP=0x00100000001c08ea
- (_Bool)_importManifestForBundleID:(id)arg1 usingConnection:(id)arg2 andDatabaseStore:(id)arg3;	// IMP=0x00100000001c03e8
- (_Bool)_importDownloadedAssetPacksWithManifestID:(id)arg1 andBundleID:(id)arg2 usingConnection:(id)arg3 andDatabaseStore:(id)arg4;	// IMP=0x00100000001bf8bd
- (void)_importBundleTagManifest:(id)arg1 withApplication:(id)arg2 andDatabaseStore:(id)arg3;	// IMP=0x00100000001bf7e0
- (id)_allIDsWithDownloadedAssetPacksUsingConnection:(id)arg1;	// IMP=0x00100000001bf5ab
- (void)main;	// IMP=0x00100000001bee46
- (id)migratorType;	// IMP=0x00100000001bee35
- (id)copyConfiguration;	// IMP=0x00100000001bee0d
- (id)initWithConfiguration:(id)arg1;	// IMP=0x00100000001bedde

@end
