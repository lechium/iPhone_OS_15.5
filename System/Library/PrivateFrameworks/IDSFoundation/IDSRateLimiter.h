//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface IDSRateLimiter : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    long long _limit;	// 16 = 0x10
    double _timeLimit;	// 24 = 0x18
    NSMutableDictionary *_cacheMap;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000021890
@property(nonatomic) struct os_unfair_lock_s lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableDictionary *cacheMap; // @synthesize cacheMap=_cacheMap;
@property(nonatomic) double timeLimit; // @synthesize timeLimit=_timeLimit;
@property(nonatomic) long long limit; // @synthesize limit=_limit;
- (id)_unlockedDescription;	// IMP=0x00000000000217e6
- (id)description;	// IMP=0x0000000000021720
- (void)cleanupExpiredItems;	// IMP=0x0000000000021152
- (double)timeToUnderLimit:(id)arg1;	// IMP=0x0000000000020f5a
- (void)clearAllItems;	// IMP=0x0000000000020e4b
- (void)clearItem:(id)arg1;	// IMP=0x0000000000020d13
- (void)noteItem:(id)arg1;	// IMP=0x0000000000020b25
- (_Bool)underLimitForItem:(id)arg1;	// IMP=0x0000000000020969
- (id)initWithLimit:(long long)arg1 timeLimit:(double)arg2;	// IMP=0x0000000000020856

@end
