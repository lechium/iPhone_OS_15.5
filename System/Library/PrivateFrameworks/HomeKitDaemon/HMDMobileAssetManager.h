//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSBackgroundActivityScheduler;
@protocol HMDMobileAssetManagerDelegate, OS_dispatch_queue;

@interface HMDMobileAssetManager : NSObject
{
    _Bool _indexDownloaded;	// 8 = 0x8
    id <HMDMobileAssetManagerDelegate> _delegate;	// 16 = 0x10
    NSBackgroundActivityScheduler *_scheduler;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_workQueue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000069708
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) NSBackgroundActivityScheduler *scheduler; // @synthesize scheduler=_scheduler;
@property _Bool indexDownloaded; // @synthesize indexDownloaded=_indexDownloaded;
@property(nonatomic) __weak id <HMDMobileAssetManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_handleMetadataAssetUpdated;	// IMP=0x00000000000693bd
- (void)_downloadCatalogAndUpdateMetadataIfAble;	// IMP=0x00000000000692fd
- (void)_updateMetadata;	// IMP=0x0000000000068ac6
- (void)_installAvailableAsset:(id)arg1 version:(unsigned long long)arg2;	// IMP=0x00000000000687c4
- (void)_downloadNewAsset:(id)arg1 availableVersion:(unsigned long long)arg2 newVersion:(unsigned long long)arg3;	// IMP=0x00000000000685af
- (void)handleMetadataAssetUpdated;	// IMP=0x000000000006849c
- (void)purgeAllInstalledAssets;	// IMP=0x0000000000068166
- (id)init;	// IMP=0x0000000000067f54

@end

