//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CARObserverHashTable, NSMutableSet;
@protocol OS_dispatch_queue, OS_nw_path, OS_nw_path_monitor;

@interface CARNetworkPathMonitor : NSObject
{
    _Bool _networkReachable;	// 8 = 0x8
    _Bool _networkPathMonitorActive;	// 9 = 0x9
    long long _networkPath;	// 16 = 0x10
    NSObject<OS_nw_path_monitor> *_pathMonitor;	// 24 = 0x18
    NSObject<OS_nw_path> *_currentPath;	// 32 = 0x20
    NSMutableSet *_activeAssertions;	// 40 = 0x28
    CARObserverHashTable *_observers;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_workQueue;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000022791
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain) CARObserverHashTable *observers; // @synthesize observers=_observers;
@property(nonatomic) _Bool networkPathMonitorActive; // @synthesize networkPathMonitorActive=_networkPathMonitorActive;
@property(readonly, nonatomic) NSMutableSet *activeAssertions; // @synthesize activeAssertions=_activeAssertions;
@property(retain, nonatomic) NSObject<OS_nw_path> *currentPath; // @synthesize currentPath=_currentPath;
@property(retain, nonatomic) NSObject<OS_nw_path_monitor> *pathMonitor; // @synthesize pathMonitor=_pathMonitor;
@property(nonatomic) long long networkPath; // @synthesize networkPath=_networkPath;
@property(nonatomic, getter=isNetworkReachable) _Bool networkReachable; // @synthesize networkReachable=_networkReachable;
- (id)description;	// IMP=0x00100000000223c7
- (void)_networkPathUpdated:(id)arg1;	// IMP=0x0010000000022185
- (void)_stopNetworkPathMonitorNow;	// IMP=0x00100000000220f9
- (void)_startNetworkPathMonitorNow;	// IMP=0x0010000000021df8
- (void)removeObserver:(id)arg1;	// IMP=0x0010000000021d86
- (void)addObserver:(id)arg1;	// IMP=0x0010000000021d14
- (void)stopNetworkPathMonitorWithIdentifier:(id)arg1;	// IMP=0x0010000000021b7a
- (void)startNetworkPathMonitorWithIdentifier:(id)arg1;	// IMP=0x0010000000021a2c
- (void)dealloc;	// IMP=0x00100000000219ab
- (id)init;	// IMP=0x001000000002187c

@end
