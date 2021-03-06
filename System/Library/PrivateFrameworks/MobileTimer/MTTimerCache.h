//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MTTimer, NSMutableArray;

@interface MTTimerCache : NSObject
{
    _Bool _needsUpdate;	// 8 = 0x8
    struct os_unfair_lock_s _cacheLock;	// 12 = 0xc
    CDUnknownBlockType _updateBlock;	// 16 = 0x10
    NSMutableArray *_orderedTimers;	// 24 = 0x18
    MTTimer *_nextTimer;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000661f9
@property(nonatomic) struct os_unfair_lock_s cacheLock; // @synthesize cacheLock=_cacheLock;
@property(nonatomic) _Bool needsUpdate; // @synthesize needsUpdate=_needsUpdate;
@property(retain, nonatomic) MTTimer *nextTimer; // @synthesize nextTimer=_nextTimer;
@property(retain, nonatomic) NSMutableArray *orderedTimers; // @synthesize orderedTimers=_orderedTimers;
@property(copy, nonatomic) CDUnknownBlockType updateBlock; // @synthesize updateBlock=_updateBlock;
- (void)getCachedTimersSyncWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000006616f
- (void)getCachedTimersWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000006615b
- (void)_getCachedTimersWithCompletion:(CDUnknownBlockType)arg1 doSynchronous:(_Bool)arg2;	// IMP=0x0000000000065af6
- (_Bool)_isUpdateNeeded;	// IMP=0x0000000000065a3b
- (void)markNeedsUpdate;	// IMP=0x00000000000659e1
- (void)_withLock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000659a4
- (id)initWithUpdateBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000658e3

@end

