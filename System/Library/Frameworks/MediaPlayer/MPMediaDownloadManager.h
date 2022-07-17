//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface MPMediaDownloadManager : NSObject
{
}

+ (id)sharedManager;	// IMP=0x00000000000055ad
- (void)downloadLibraryWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000559d
- (id)downloadForIdentifierSet:(id)arg1 downloadState:(long long *)arg2;	// IMP=0x0000000000005595
- (id)activeDownloadForStoreID:(long long)arg1;	// IMP=0x000000000000558d
- (id)activeDownloadForMediaItemPersistentID:(long long)arg1;	// IMP=0x0000000000005585
- (_Bool)hasActiveDownloads;	// IMP=0x000000000000557d
@property(readonly, nonatomic) long long activeDownloadsCount;
- (void)cancelDownloads:(id)arg1;	// IMP=0x000000000000556f
- (void)sendKeepLocalStatusChanged:(long long)arg1 forLibraryIdentifier:(long long)arg2 entityType:(long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000005559
- (void)enqueueAssetForDownload:(long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000005543
@property(readonly, nonatomic) NSArray *allMediaDownloadLibraryIdentifiers;
- (void)prioritizeDownload:(long long)arg1;	// IMP=0x0000000000005524
- (void)removeObserver:(id)arg1;	// IMP=0x000000000000551e
- (void)addObserver:(id)arg1;	// IMP=0x0000000000005518
- (id)_init;	// IMP=0x00000000000054e9
- (id)init;	// IMP=0x00000000000054a7

@end
