//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface IMRecentItemsList : NSObject
{
    NSObject<OS_dispatch_queue> *_diskWritingQueue;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x0000000000039e81
- (id)_guidForFileURL:(id)arg1;	// IMP=0x000000000003cc43
- (void)_updateRecentsCache:(id)arg1 forDomain:(id)arg2;	// IMP=0x000000000003cb42
- (id)_recentsCacheForDomain:(id)arg1;	// IMP=0x000000000003ca42
- (id)_buildLRUCacheUsingArray:(id)arg1 forDomain:(id)arg2;	// IMP=0x000000000003c593
- (void)_removeRecentDataPayloadEntryFromDisk:(id)arg1 forDomain:(id)arg2;	// IMP=0x000000000003c44f
- (void)_saveRecentDataPayloadEntryToDisk:(id)arg1 forDomain:(id)arg2;	// IMP=0x000000000003c2ad
- (void)_removeRecentDataPayloadEntry:(id)arg1 forDomain:(id)arg2;	// IMP=0x000000000003c029
- (void)addRecentItemAtFileURL:(id)arg1 GUID:(id)arg2 infoDictionary:(id)arg3 forDomain:(id)arg4;	// IMP=0x000000000003bc3c
- (void)_addRecentDataPayloadEntry:(id)arg1 toDomain:(id)arg2;	// IMP=0x000000000003b5be
- (void)fetchRecentItemsForDomain:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000003ad35
- (void)fetchRecentStickersWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000003a64e
- (void)addRecentItemWithData:(id)arg1 GUID:(id)arg2 infoDictionary:(id)arg3 forDomain:(id)arg4;	// IMP=0x000000000003a4c8
- (void)deleteRecentsInFirstLaunch;	// IMP=0x000000000003a441
- (void)deleteAllRecentItemsForDomain:(id)arg1;	// IMP=0x000000000003a332
- (void)deleteRecentItemWithData:(id)arg1 GUID:(id)arg2 forDomain:(id)arg3;	// IMP=0x000000000003a274
- (void)deleteRecentItemWithFileURL:(id)arg1 GUID:(id)arg2 forDomain:(id)arg3;	// IMP=0x000000000003a0f6
- (void)dispatchCacheUpdateWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000003a046
- (long long)cacheSizeForDomain:(id)arg1;	// IMP=0x0000000000039f63
- (void)dealloc;	// IMP=0x0000000000039f14
- (id)init;	// IMP=0x0000000000039ec6

@end
