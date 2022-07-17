//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSRecursiveLock;

@interface PXLRUMemoryCache : NSObject
{
    unsigned long long _numberOfSlots;	// 8 = 0x8
    NSMapTable *_cacheDictionary;	// 16 = 0x10
    NSRecursiveLock *_recursiveLock;	// 24 = 0x18
    struct _PXLRUMemoryCacheList *_leastRecentUsedList;	// 32 = 0x20
    NSMapTable *_leastRecentUsedDictionary;	// 40 = 0x28
}

@property(nonatomic) unsigned long long numberOfSlots; // @synthesize numberOfSlots=_numberOfSlots;
- (id)description;	// IMP=0x00000000004e867c
- (void)evictSlots:(unsigned long long)arg1;	// IMP=0x00000000004e85ee
- (void)removeAllObjects;	// IMP=0x00000000004e8542
- (void)removeObjectForKey:(id)arg1;	// IMP=0x00000000004e84ba
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;	// IMP=0x00000000004e84a8
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000004e8326
- (id)allKeys;	// IMP=0x00000000004e82c8
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x00000000004e82b6
- (id)objectForKey:(id)arg1;	// IMP=0x00000000004e820f
@property(readonly, nonatomic) unsigned long long currentUsedSlots;
- (void)_removeListElement:(struct _PXLRUMemoryCacheListElement *)arg1;	// IMP=0x00000000004e809e
- (void)_promoteListElement:(struct _PXLRUMemoryCacheListElement *)arg1;	// IMP=0x00000000004e8036
- (void)dealloc;	// IMP=0x00000000004e7f55
- (id)init;	// IMP=0x00000000004e7e81

@end
