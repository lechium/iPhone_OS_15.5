//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSFileManager, NSString;

@interface PLPhotoLibraryPathManagerUBF
{
    NSString *_databaseDirectory;	// 8 = 0x8
    NSString *_searchDatabaseDirectory;	// 16 = 0x10
    NSString *_originalsDirectory;	// 24 = 0x18
    NSString *_privateDirectory;	// 32 = 0x20
    NSString *_privateCacheDirectory;	// 40 = 0x28
    NSString *_scopesBaseDirectory;	// 48 = 0x30
    NSString *_scopesPhotoCloudSharingDirectory;	// 56 = 0x38
    NSString *_scopesPhotoCloudSharingDataDirectory;	// 64 = 0x40
    NSString *_scopesPhotoCloudSharingMetadataDirectory;	// 72 = 0x48
    NSString *_scopesPhotoCloudSharingCacheDirectory;	// 80 = 0x50
    NSString *_scopesSyndicationDirectory;	// 88 = 0x58
    NSString *_scopesMomentSharedDirectory;	// 96 = 0x60
    NSString *_resourcesDirectory;	// 104 = 0x68
    NSString *_journalsDirectory;	// 112 = 0x70
    NSString *_rendersDirectory;	// 120 = 0x78
    NSString *_derivativesDirectory;	// 128 = 0x80
    NSString *_derivativesThumbsDirectory;	// 136 = 0x88
    NSString *_derivativesMasterThumbsDirectory;	// 144 = 0x90
    NSString *_resourcesCPLDataDirectory;	// 152 = 0x98
    NSString *_resourcesPhotoStreamsDataDirectory;	// 160 = 0xa0
    NSString *_resourcesProjectsDataDirectory;	// 168 = 0xa8
    NSString *_resourcesProjectsLegacyDirectory;	// 176 = 0xb0
    NSString *_resourcesAnalyticsDirectory;	// 184 = 0xb8
    NSString *_resourcesPartialVideoDirectory;	// 192 = 0xc0
    NSString *_externalDirectory;	// 200 = 0xc8
    NSString *_internalDirectory;	// 208 = 0xd0
    NSFileManager *_fm;	// 216 = 0xd8
}

- (void).cxx_destruct;	// IMP=0x000000000001fe45
- (_Bool)ensureFileProviderSyncExclusionAttributeIsSetWithError:(id *)arg1;	// IMP=0x000000000001fe3d
- (_Bool)updateTimeMachineExclusionAttributeForExcludePath:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001fcf8
- (id)_scopedInternalPathManagerWithBundleScope:(unsigned short)arg1;	// IMP=0x000000000001fb90
- (id)assetMainFilePathWithDirectory:(id)arg1 filename:(id)arg2 bundleScope:(unsigned short)arg3;	// IMP=0x000000000001f894
- (id)assetAbbreviatedMetadataDirectoryForDirectory:(id)arg1 type:(unsigned char)arg2 bundleScope:(unsigned short)arg3;	// IMP=0x000000000001f7e6
- (_Bool)isDeviceRestoreSupported;	// IMP=0x000000000001f7de
- (void)obtainAccessAndWaitWithFileWithIdentifier:(id)arg1 mode:(unsigned char)arg2 toURLWithHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000001f56f
- (void)setExtendedAttributesWithIdentifier:(id)arg1 andURL:(id)arg2;	// IMP=0x000000000001f1e0
- (void)setExtendedAttributesWithIdentifier:(id)arg1;	// IMP=0x000000000001f171
- (id)readOnlyUrlWithIdentifier:(id)arg1;	// IMP=0x000000000001f15f
- (id)urlWithIdentifier:(id)arg1;	// IMP=0x000000000001eef5
- (_Bool)shouldUseFileIdentifierForBundleScope:(unsigned short)arg1;	// IMP=0x000000000001eeed
- (void)enumerateBundleScopesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000001ed6f
- (unsigned char)photoLibraryPathTypeForBundleScope:(unsigned short)arg1;	// IMP=0x000000000001ed4e
- (id)syncInfoPath;	// IMP=0x000000000001ed2a
- (id)pathToAssetsToAlbumsMapping;	// IMP=0x000000000001ed06
- (id)internalDirectoryWithSubType:(unsigned char)arg1 additionalPathComponents:(id)arg2;	// IMP=0x000000000001eb7f
- (id)externalDirectoryWithSubType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3;	// IMP=0x000000000001ea26
- (id)privateCacheDirectoryWithSubType:(unsigned char)arg1;	// IMP=0x000000000001e949
- (id)privateDirectoryWithSubType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3;	// IMP=0x000000000001e80d
- (id)extendedPathsWithError:(id *)arg1;	// IMP=0x000000000001e4cc
- (id)corePathsWithError:(id *)arg1 directDatabaseAccess:(_Bool)arg2 limitedLibrary:(_Bool)arg3;	// IMP=0x000000000001e25b
- (_Bool)createPathsForNewLibrariesWithError:(id *)arg1;	// IMP=0x000000000001dbe3
- (id)pathsForExternalWriters;	// IMP=0x000000000001daed
- (id)pathsForPermissionCheck;	// IMP=0x000000000001d9f3
- (id)pathsForClientAccess:(id)arg1;	// IMP=0x000000000001d117
- (id)photoDirectoryWithType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3;	// IMP=0x000000000001d088
- (id)photosDatabasePath;	// IMP=0x000000000001d064
- (id)addToPath:(id)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3;	// IMP=0x000000000001cec0
- (id)convertPhotoLibraryPathType:(unsigned char)arg1;	// IMP=0x000000000001cc83
- (id)_externalDirectoryWithBundleIdentifier:(id)arg1 createIfNeeded:(_Bool)arg2;	// IMP=0x000000000001cb11
- (id)basePrivateDirectoryPath;	// IMP=0x000000000001ca47
- (id)initWithLibraryURL:(id)arg1 bundleScope:(unsigned short)arg2;	// IMP=0x000000000001c31e

@end

