//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOTileCache;
@protocol OS_dispatch_source;

@interface GEOTilePool : NSObject
{
    NSObject<OS_dispatch_source> *_memoryNotificationEventSource;	// 8 = 0x8
    struct _GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0UL, 0UL, geo::GEOGenericContainerLockingTag, detail::_default_pointer_type> _pool;	// 16 = 0x10
    struct _GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0UL, 0UL, geo::GEOGenericContainerLockingTag, detail::_default_pointer_type> _decodedPool;	// 176 = 0xb0
    GEOTileCache *_cache;	// 336 = 0x150
}

- (id).cxx_construct;	// IMP=0x0000000001112a83
- (void).cxx_destruct;	// IMP=0x00000000011129b9
- (void)_receivedMemoryNotification;	// IMP=0x0000000001112938
- (void)_enteredBackground:(id)arg1;	// IMP=0x0000000001112926
@property unsigned long long maxCost;
@property unsigned long long maxCapacity;
- (_Bool)containsKey:(const struct _GEOTileKey *)arg1 cost:(unsigned long long *)arg2;	// IMP=0x000000000111250a
- (void)removeTilesMatchingPredicate:(CDUnknownBlockType)arg1;	// IMP=0x00000000011120cc
- (void)enumerate:(CDUnknownBlockType)arg1;	// IMP=0x0000000001111ecd
- (void)removeAllObjects;	// IMP=0x0000000001111d96
- (void)removeTilesWithKeys:(id)arg1;	// IMP=0x0000000001111953
- (void)removeTileForKey:(const struct _GEOTileKey *)arg1;	// IMP=0x00000000011118e1
- (void)setTile:(id)arg1 forKey:(const struct _GEOTileKey *)arg2 cost:(unsigned long long)arg3;	// IMP=0x000000000111151e
- (id)tileForKey:(const struct _GEOTileKey *)arg1;	// IMP=0x0000000001111345
- (id)init;	// IMP=0x000000000111132e
- (id)initWithSideCacheEnabled:(_Bool)arg1;	// IMP=0x0000000001111080
@property(readonly, nonatomic) unsigned long long currentCost;
@property(readonly, nonatomic) unsigned long long currentCount;

@end

