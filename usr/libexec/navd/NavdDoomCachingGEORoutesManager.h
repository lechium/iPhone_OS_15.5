//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, NavdDoomGEORoutesManager;

@interface NavdDoomCachingGEORoutesManager : NSObject
{
    _Bool _readOnly;	// 8 = 0x8
    NavdDoomGEORoutesManager *_manager;	// 16 = 0x10
    NSMutableDictionary *_cache;	// 24 = 0x18
    NSString *_cachePath;	// 32 = 0x20
    double _waypointExpirationInterval;	// 40 = 0x28
    double _routeCacheExpirationInterval;	// 48 = 0x30
}

+ (id)defaultFileURL;	// IMP=0x00200000000138e4
+ (id)defaultPath;	// IMP=0x00100000000138c4
- (void).cxx_destruct;	// IMP=0x00200000000168d0
@property(nonatomic) double routeCacheExpirationInterval; // @synthesize routeCacheExpirationInterval=_routeCacheExpirationInterval;
@property(nonatomic) double waypointExpirationInterval; // @synthesize waypointExpirationInterval=_waypointExpirationInterval;
@property(copy, nonatomic) NSString *cachePath; // @synthesize cachePath=_cachePath;
@property(retain, nonatomic) NSMutableDictionary *cache; // @synthesize cache=_cache;
@property(retain, nonatomic) NavdDoomGEORoutesManager *manager; // @synthesize manager=_manager;
- (_Bool)requestWaypointForMapsSuggestionsEntry:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000016459
- (_Bool)requestRouteFrom:(id)arg1 to:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000001612f
- (id)loggingStringForObject:(id)arg1;	// IMP=0x0010000000015d93
- (void)setReadOnly:(_Bool)arg1;	// IMP=0x0010000000015d8a
- (void)touchAllCachedItems;	// IMP=0x001000000001591b
- (void)setExpirationInterval:(double)arg1;	// IMP=0x00100000000158db
- (_Bool)hasExpiredItems;	// IMP=0x0010000000015420
- (void)pruneExpiredItems;	// IMP=0x0010000000014e3b
- (id)cachedWaypointForEntry:(id)arg1;	// IMP=0x0010000000014ad5
- (void)setCachedWaypoint:(id)arg1 forEntry:(id)arg2;	// IMP=0x0010000000014780
- (id)keyForEntry:(id)arg1;	// IMP=0x001000000001476b
- (id)cachedRoutesCacheForOrigin:(id)arg1 destination:(id)arg2;	// IMP=0x0010000000014338
- (void)setCachedRouteCache:(id)arg1 forOrigin:(id)arg2 destination:(id)arg3;	// IMP=0x0010000000013fdc
- (id)keyForOrigin:(id)arg1 destination:(id)arg2;	// IMP=0x0010000000013f48
- (_Bool)isCachedItemValidWithType:(id)arg1 andCacheDate:(id)arg2;	// IMP=0x0010000000013ebc
- (id)minimumDateForCachedObjectOfType:(id)arg1;	// IMP=0x0010000000013e3f
- (_Bool)saveCacheToFile;	// IMP=0x0010000000013c32
- (void)loadCacheFromFile;	// IMP=0x0010000000013aa9
- (id)init;	// IMP=0x0010000000013a30
- (id)initWithRoutesManager:(id)arg1 cachePath:(id)arg2;	// IMP=0x0010000000013947

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

