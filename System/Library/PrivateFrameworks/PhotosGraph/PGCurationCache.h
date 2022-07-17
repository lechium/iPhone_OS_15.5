//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaMiningKit/CLSDBCache.h>

@interface PGCurationCache : CLSDBCache
{
}

+ (id)defaultCacheName;	// IMP=0x000000000019f7e4
- (void)_invalidateCacheForMomentsWithUUIDs:(id)arg1;	// IMP=0x000000000019e86e
- (void)_invalidateCacheForMomentWithUUID:(id)arg1 precision:(unsigned long long)arg2;	// IMP=0x000000000019e7a8
- (void)_invalidateCacheForMomentWithUUID:(id)arg1;	// IMP=0x000000000019e6e8
- (void)_setProperties:(id)arg1 forCurationObjectWithEntityName:(id)arg2 momentUUID:(id)arg3 precision:(unsigned long long)arg4 predicate:(id)arg5;	// IMP=0x000000000019e599
- (id)_fetchCurationObjectForEntityName:(id)arg1 predicate:(id)arg2;	// IMP=0x000000000019e42c
- (void)_setCuratedKeyAsset:(id)arg1 forMomentUUID:(id)arg2 options:(id)arg3;	// IMP=0x000000000019dbb6
- (id)_curatedKeyAssetIdentifierforMomentUUID:(id)arg1 options:(id)arg2;	// IMP=0x000000000019d68d
- (void)_setCuratedAssets:(id)arg1 forMomentUUID:(id)arg2 options:(id)arg3;	// IMP=0x000000000019d477
- (id)_curatedAssetIdentifiersforMomentUUID:(id)arg1 options:(id)arg2;	// IMP=0x000000000019d197
- (id)curatedKeyAssetIdentifierForMoment:(id)arg1 options:(id)arg2;	// IMP=0x000000000019d0e2
- (id)curatedKeyAssetIdentifierForCollectionUUID:(id)arg1 options:(id)arg2;	// IMP=0x000000000019d0d0
- (void)setCuratedKeyAsset:(id)arg1 forCollectionUUID:(id)arg2 options:(id)arg3;	// IMP=0x000000000019d0be
- (id)curatedAssetIdentifiersForMoment:(id)arg1 options:(id)arg2;	// IMP=0x000000000019d009
- (void)setCuratedAssets:(id)arg1 forMoment:(id)arg2 options:(id)arg3;	// IMP=0x000000000019cf50
- (void)setCuratedKeyAsset:(id)arg1 forMoment:(id)arg2 options:(id)arg3;	// IMP=0x000000000019ce97
- (void)invalidateCacheForMomentUUIDs:(id)arg1;	// IMP=0x000000000019ce85
- (void)invalidateCacheForMomentUUID:(id)arg1 precision:(unsigned long long)arg2;	// IMP=0x000000000019ce73
- (void)invalidateCacheForMomentUUID:(id)arg1;	// IMP=0x000000000019ce61
- (id)dataModelName;	// IMP=0x000000000019ce54
- (id)initAtURL:(id)arg1;	// IMP=0x000000000019cde4

@end
