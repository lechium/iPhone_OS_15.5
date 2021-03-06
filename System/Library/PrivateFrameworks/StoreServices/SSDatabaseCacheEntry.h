//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SSPersistentCache;

@interface SSDatabaseCacheEntry
{
    SSPersistentCache *_persistentCache;	// 8 = 0x8
}

+ (id)allPropertyKeys;	// IMP=0x000000000015630e
+ (id)databaseTable;	// IMP=0x0000000000156301
+ (unsigned long long)_fetchPersistentID:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0000000000156134
- (id)description;	// IMP=0x00000000001560d9
- (id)dataBlob:(_Bool *)arg1;	// IMP=0x0000000000155f7e
- (void)setPersistentCache:(id)arg1;	// IMP=0x0000000000155f40
- (void)dealloc;	// IMP=0x0000000000155efe
- (id)initWithLookupKey:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0000000000155e95

@end

