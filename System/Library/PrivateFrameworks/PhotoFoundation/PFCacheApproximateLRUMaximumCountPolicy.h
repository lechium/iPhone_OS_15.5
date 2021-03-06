//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject;
@protocol OS_dispatch_queue;

@interface PFCacheApproximateLRUMaximumCountPolicy
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    unsigned long long _maximumCount;	// 16 = 0x10
    unsigned int _seed;	// 24 = 0x18
    unsigned long long _tick;	// 32 = 0x20
    unsigned long long _tickMaximum;	// 40 = 0x28
    unsigned long long _considerationCount;	// 48 = 0x30
    id *_considerationKeys;	// 56 = 0x38
}

+ (id)policyWithMaximumCount:(unsigned long long)arg1;	// IMP=0x000000000002a5e0
- (void).cxx_destruct;	// IMP=0x000000000002a55f
- (id)description;	// IMP=0x000000000002a517
- (id)willAddOrReplaceEntry:(id)arg1 add:(_Bool)arg2 contents:(id)arg3;	// IMP=0x000000000002a34f
- (void)_rebuildConsiderationKeys:(id)arg1;	// IMP=0x000000000002a072
- (void)didRemoveAllCacheEntries;	// IMP=0x000000000002a000
- (void)didRemoveCacheEntry:(id)arg1;	// IMP=0x0000000000029f9e
- (void)didAddCacheEntry:(id)arg1;	// IMP=0x0000000000029f8d
- (void)didGetCacheEntry:(id)arg1;	// IMP=0x0000000000029ed9
- (id)cacheEntryWithKey:(id)arg1 value:(id)arg2;	// IMP=0x0000000000029e45
- (unsigned long long)capacityHint;	// IMP=0x0000000000029e34
- (void)dealloc;	// IMP=0x0000000000029db0
- (id)initWithMaximumCount:(unsigned long long)arg1;	// IMP=0x0000000000029d15

@end

