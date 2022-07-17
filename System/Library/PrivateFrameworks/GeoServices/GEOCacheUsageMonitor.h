//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface GEOCacheUsageMonitor : NSObject
{
    NSMutableDictionary *_typeToHits;	// 8 = 0x8
    NSMutableDictionary *_typeToMisses;	// 16 = 0x10
    NSMutableDictionary *_tileCacheHitData;	// 24 = 0x18
    NSMutableDictionary *_tileCacheMissData;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_timer;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_isolationQueue;	// 48 = 0x30
}

+ (id)sharedMonitor;	// IMP=0x00000000007fd406
- (void).cxx_destruct;	// IMP=0x00000000007feab6
- (void)_flush;	// IMP=0x00000000007fe3ee
- (void)flush;	// IMP=0x00000000007fe38d
- (void)recordTileCacheMissForReason:(unsigned char)arg1 missType:(int)arg2 tileKey:(const struct _GEOTileKey *)arg3 loadError:(id)arg4;	// IMP=0x00000000007fe19e
- (void)recordTileCacheMissForReason:(unsigned char)arg1 missType:(int)arg2 tileKey:(const struct _GEOTileKey *)arg3 tileSizeInBytes:(unsigned int)arg4 httpStatus:(unsigned int)arg5;	// IMP=0x00000000007fdfda
- (void)recordTileCacheHitForReason:(unsigned char)arg1 tileSource:(unsigned char)arg2 tileKey:(const struct _GEOTileKey *)arg3 tileSizeInBytes:(unsigned int)arg4;	// IMP=0x00000000007fde1f
- (void)_recordTileCacheEventWithKey:(id)arg1 cacheEventDict:(id)arg2 tileSizeInBytes:(unsigned int)arg3 error:(id)arg4;	// IMP=0x00000000007fdc85
- (void)recordCacheMissForType:(int)arg1;	// IMP=0x00000000007fd993
- (void)recordCacheHitForType:(int)arg1;	// IMP=0x00000000007fd6a1
- (void)_startTimerIfNecessary;	// IMP=0x00000000007fd5fb
- (void)dealloc;	// IMP=0x00000000007fd5bc
- (id)init;	// IMP=0x00000000007fd511

@end
