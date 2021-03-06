//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SUAssetSupport : NSObject
{
}

+ (id)OSVersionComponent:(unsigned long long)arg1 osVersion:(id)arg2;	// IMP=0x0000000000009173
+ (id)minorOSVersion:(id)arg1;	// IMP=0x0000000000009152
+ (_Bool)updateIsPreCRelease:(id)arg1;	// IMP=0x0000000000009111
+ (id)assetDownloadOptionsFromMetadata:(id)arg1 descriptor:(id)arg2 priority:(int)arg3 forBrain:(_Bool)arg4;	// IMP=0x0000000000008ede
+ (id)assetDownloadOptionsForDocumentation;	// IMP=0x0000000000008d88
+ (id)defaultAssetDownloadOptionsWithPriority:(int)arg1;	// IMP=0x0000000000008d29
+ (id)getInstalledDocumentationAssetFromSoftwareUpdateAssetIfExists:(id)arg1;	// IMP=0x0000000000008c0c
+ (id)getLocalDefaultSoftwareUpdateAssetIfExistsWithReleaseDate:(id *)arg1;	// IMP=0x0000000000008ba8
+ (id)getLocalDefaultSoftwareUpdateAssetIfExists;	// IMP=0x0000000000008b94
+ (void)purgeMSUUpdate:(CDUnknownBlockType)arg1;	// IMP=0x0000000000008b8e
+ (id)queryMetaDataOfType:(id)arg1 WithFilter:(id)arg2 installedOnly:(_Bool)arg3 error:(id *)arg4;	// IMP=0x0000000000008889
+ (id)copySuAssetInstalledExactlyMatchingDescriptor:(id)arg1;	// IMP=0x000000000000886c
+ (id)copySuAssetInCatalogMatchingDescriptor:(id)arg1;	// IMP=0x0000000000008855
+ (id)copySuAssetInCatalogMatchingDescriptor:(id)arg1 exactAssetIdMatch:(_Bool)arg2 installedOnly:(_Bool)arg3;	// IMP=0x0000000000008645
+ (id)filterSuAssets:(id)arg1 MatchingDescriptor:(id)arg2;	// IMP=0x00000000000080ac
+ (id)findExactMatchInAssets:(id)arg1 forAssetId:(id)arg2;	// IMP=0x0000000000007f09
+ (id)findAssetWithMatcher:(id)arg1 localSearch:(_Bool)arg2 releaseDate:(id *)arg3 error:(id *)arg4;	// IMP=0x0000000000007ae1
+ (id)copyInstalledAssets;	// IMP=0x00000000000079e3
+ (id)copySUAssetForAssetID:(id)arg1;	// IMP=0x0000000000007782
+ (void)setSUFilters:(id)arg1;	// IMP=0x000000000000751e
+ (void)setAssetQueryFilters:(id)arg1;	// IMP=0x000000000000717d
+ (id)findAssetWithMatcher:(id)arg1 localSearch:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0000000000007165
+ (id)_gestaltValueForKey:(struct __CFString *)arg1;	// IMP=0x000000000000714e
+ (long long)requestCatalogDownload:(id)arg1;	// IMP=0x0000000000007143
+ (void)cleanupAllSoftwareUpdateAndRelatedAssets;	// IMP=0x00000000000070c9
+ (void)cleanupAllSoftwareUpdateAssets;	// IMP=0x0000000000007081
+ (void)_cleanupAllAssetsOfType:(id)arg1;	// IMP=0x0000000000006ecc
+ (void)cleanupAllInstalledAssets:(CDUnknownBlockType)arg1;	// IMP=0x0000000000006df9
+ (void)_queue_cleanupAllInstalledAssetsOfType:(id)arg1;	// IMP=0x0000000000006c30
+ (id)tryCreateDocumentationFromDocumentationAsset:(id)arg1;	// IMP=0x0000000000006a73
+ (id)tryCreateDescriptorFromSoftwareUpdateAsset:(id)arg1 withReleaseDate:(id)arg2;	// IMP=0x0000000000005cae

@end

