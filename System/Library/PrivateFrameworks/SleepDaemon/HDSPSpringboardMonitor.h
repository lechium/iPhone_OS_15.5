//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HKSPObserverSet;

@interface HDSPSpringboardMonitor : NSObject
{
    _Bool _isAppleWatch;	// 8 = 0x8
    _Bool _springboardStarted;	// 9 = 0x9
    int _notifyToken;	// 12 = 0xc
    struct os_unfair_lock_s _springboardStartedLock;	// 16 = 0x10
    HKSPObserverSet *_observers;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000006f71f
@property(readonly, nonatomic) HKSPObserverSet *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) struct os_unfair_lock_s springboardStartedLock; // @synthesize springboardStartedLock=_springboardStartedLock;
@property(readonly, nonatomic) _Bool springboardStarted; // @synthesize springboardStarted=_springboardStarted;
@property(readonly, nonatomic) int notifyToken; // @synthesize notifyToken=_notifyToken;
@property(readonly, nonatomic) _Bool isAppleWatch; // @synthesize isAppleWatch=_isAppleWatch;
- (void)_stopMonitoring;	// IMP=0x000000000006f5e3
- (void)_checkAndNotify;	// IMP=0x000000000006f4bd
- (void)_startMonitoring;	// IMP=0x000000000006f298
- (void)removeObserver:(id)arg1;	// IMP=0x000000000006f24a
- (void)addObserver:(id)arg1;	// IMP=0x000000000006f1fc
- (void)dealloc;	// IMP=0x000000000006f1be
- (id)_processName;	// IMP=0x000000000006f19e
- (_Bool)_checkSpringBoardStarted;	// IMP=0x000000000006f045
@property(readonly, nonatomic) _Bool isSpringboardStarted;
- (void)_withLock:(CDUnknownBlockType)arg1;	// IMP=0x000000000006ef4d
- (id)initWithCallbackScheduler:(id)arg1 isAppleWatch:(_Bool)arg2;	// IMP=0x000000000006edd3

@end

