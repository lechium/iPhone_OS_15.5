//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Trial/TRIFactorLevelCaching-Protocol.h>

@class _PASLock, _PASSimpleCoalescingTimer;

@interface TRIPruningFactorLevelCache : NSObject <TRIFactorLevelCaching>
{
    _PASLock *_lock;	// 8 = 0x8
    _PASSimpleCoalescingTimer *_pruningTimer;	// 16 = 0x10
    double _pruningDelaySeconds;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000001a079
- (id)factorLevelCurrentlyCachedForFactorName:(id)arg1;	// IMP=0x0000000000019ec7
- (void)pruneSynchronously;	// IMP=0x0000000000019d2f
- (void)_populateCacheForRequiredKey:(id)arg1 guardedData:(id)arg2;	// IMP=0x00000000000198fb
- (void)enumerateFactorLevelsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000194ca
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x0000000000019014
- (id)initWithPruningDelaySeconds:(double)arg1 loadFactorLevels:(CDUnknownBlockType)arg2;	// IMP=0x0000000000018e13
- (id)init;	// IMP=0x0000000000018e0d

@end
