//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface NSBackgroundActivityScheduler : NSObject
{
    id _private1;	// 8 = 0x8
    id _private2;	// 16 = 0x10
    id _private3;	// 24 = 0x18
    long long _flags;	// 32 = 0x20
    struct os_unfair_lock_s _invalidateLock;	// 40 = 0x28
}

@property(readonly) _Bool shouldDefer;
- (void)invalidate;	// IMP=0x000000000012b43a
- (void)scheduleWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000012af20
- (void)_updateCriteriaForCompletedActivity:(id)arg1;	// IMP=0x000000000012aeb8
- (void)_updateCriteria:(id)arg1;	// IMP=0x000000000012abf0
- (void)_setAdditionalXPCActivityProperties:(id)arg1;	// IMP=0x000000000012abac
@property CDUnknownBlockType checkInHandler;
@property double delay;
@property(getter=isPreregistered) _Bool preregistered;
@property double tolerance;
@property double interval;
@property(getter=_isAppRefresh) _Bool _appRefresh;
@property _Bool repeats;
@property long long qualityOfService;
@property(readonly, copy) NSString *identifier;
- (void)dealloc;	// IMP=0x000000000012a8a7
- (id)initWithIdentifier:(id)arg1;	// IMP=0x000000000012a7d0
- (id)init;	// IMP=0x000000000012a79c

@end

