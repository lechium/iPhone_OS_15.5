//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PLDiskSpaceManagement : NSObject
{
}

+ (long long)_processCloudSharedAsset:(id)arg1 shouldFreeSpace:(_Bool)arg2;	// IMP=0x0000000000029ddc
+ (unsigned long long)_scanAndDeleteCacheFilesInDirectory:(id)arg1 shouldFreeSpace:(_Bool)arg2 bytesToPurge:(unsigned long long)arg3;	// IMP=0x0000000000029820
+ (unsigned long long)_scanFilesInPhotoLibrary:(id)arg1 fromPhotoMetadataDirectoryShouldFreeSpace:(_Bool)arg2 bytesToPurge:(unsigned long long)arg3 skipAssets:(id)arg4;	// IMP=0x0000000000028f95
+ (unsigned long long)_scanFilesInPhotoLibrary:(id)arg1 fromCloudSharingCacheDataDirectoryShouldFreeSpace:(_Bool)arg2 bytesToPurge:(unsigned long long)arg3;	// IMP=0x0000000000028ecf
+ (unsigned long long)_scanFilesInPhotoLibrary:(id)arg1 fromReimportPhotoCloudSharingDataDirectoryShouldFreeSpace:(_Bool)arg2 bytesToPurge:(unsigned long long)arg3;	// IMP=0x0000000000028e0e
+ (unsigned long long)performCloudSharingSpaceManagementWithBytesToPurge:(unsigned long long)arg1 shouldFreeSpace:(_Bool)arg2 shouldKeepRecentlyViewedAssets:(_Bool)arg3 fromPhotoLibrary:(id)arg4;	// IMP=0x0000000000028c55

@end
