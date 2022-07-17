//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface CKDPCSMemoryCache : NSObject
{
    unsigned long long _maxEntries;	// 8 = 0x8
    double _minAge;	// 16 = 0x10
    NSMutableDictionary *_cacheEntries;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_accessQueue;	// 32 = 0x20
    double _oldestCacheEntry;	// 40 = 0x28
    unsigned long long _memoryCacheRequestCount;	// 48 = 0x30
    unsigned long long _memoryCacheHitCount;	// 56 = 0x38
    unsigned long long _memoryCacheHighwaterCount;	// 64 = 0x40
    unsigned long long _memoryCacheDeleteCount;	// 72 = 0x48
    unsigned long long _memoryCacheUpdateCount;	// 80 = 0x50
    unsigned long long _memoryCacheEvictCount;	// 88 = 0x58
}

+ (void)registerEvictionTimer;	// IMP=0x000000000004865e
+ (void)stopEvictionTimer;	// IMP=0x0000000000048591
+ (void)startEvictionTimer;	// IMP=0x00000000000484c4
+ (void)runMemoryCacheEvictionInAllCaches;	// IMP=0x0000000000048286
+ (void)setupMemoryNotifications;	// IMP=0x00000000000481f9
+ (void)initialize;	// IMP=0x00000000000481b2
- (void).cxx_destruct;	// IMP=0x000000000004a0b0
@property unsigned long long memoryCacheEvictCount; // @synthesize memoryCacheEvictCount=_memoryCacheEvictCount;
@property unsigned long long memoryCacheUpdateCount; // @synthesize memoryCacheUpdateCount=_memoryCacheUpdateCount;
@property unsigned long long memoryCacheDeleteCount; // @synthesize memoryCacheDeleteCount=_memoryCacheDeleteCount;
@property unsigned long long memoryCacheHighwaterCount; // @synthesize memoryCacheHighwaterCount=_memoryCacheHighwaterCount;
@property unsigned long long memoryCacheHitCount; // @synthesize memoryCacheHitCount=_memoryCacheHitCount;
@property unsigned long long memoryCacheRequestCount; // @synthesize memoryCacheRequestCount=_memoryCacheRequestCount;
@property double oldestCacheEntry; // @synthesize oldestCacheEntry=_oldestCacheEntry;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
@property(retain, nonatomic) NSMutableDictionary *cacheEntries; // @synthesize cacheEntries=_cacheEntries;
@property(nonatomic) double minAge; // @synthesize minAge=_minAge;
@property(nonatomic) unsigned long long maxEntries; // @synthesize maxEntries=_maxEntries;
- (id)CKStatusReportArray;	// IMP=0x0000000000049d37
- (_Bool)hasStatusToReport;	// IMP=0x0000000000049d1e
- (unsigned long long)_cacheCount;	// IMP=0x0000000000049bcd
- (void)clearCache;	// IMP=0x0000000000049a33
- (void)runCacheEviction;	// IMP=0x0000000000049973
- (void)setPCSData:(id)arg1 forItemID:(id)arg2 databaseScope:(long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000049554
- (void)getPCSDataFromCacheForID:(id)arg1 databaseScope:(long long)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000049108
- (void)_lockedEvictEntriesFromCache;	// IMP=0x000000000004897e
- (id)init;	// IMP=0x0000000000048864

@end
