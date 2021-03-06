//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKSApplicationStateMonitor, EFObservable;
@protocol EFObserver, OS_dispatch_queue;

@interface MFAppStateMonitor : NSObject
{
    unsigned int _appState;	// 8 = 0x8
    BKSApplicationStateMonitor *_appStateMonitor;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    EFObservable<EFObserver> *_observable;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x0000000000044f48
- (void).cxx_destruct;	// IMP=0x0000000000045812
- (void)_updateApplicationState:(id)arg1 observer:(id)arg2;	// IMP=0x000000000004558a
@property(readonly, nonatomic, getter=isForeground) _Bool foreground;
@property(readonly, nonatomic) EFObservable *appStateObservable;
- (id)init;	// IMP=0x000000000004500f
- (void)dealloc;	// IMP=0x0000000000044fcd

@end

