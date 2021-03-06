//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GameController/GCFrontmostApplicationObserverDelegate-Protocol.h>

@class BKSApplicationStateMonitor, NSMapTable, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface GCApplicationStateMonitor : NSObject <GCFrontmostApplicationObserverDelegate>
{
    BKSApplicationStateMonitor *_bksStateMonitor;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSMapTable *_pidToObservers;	// 24 = 0x18
    NSMapTable *_observerToPIDs;	// 32 = 0x20
    NSMutableDictionary *_pidToBundleIdentifier;	// 40 = 0x28
    NSMutableDictionary *_pidToCanReceiveEvents;	// 48 = 0x30
    int _frontmostApplication;	// 56 = 0x38
}

+ (id)sharedInstance;	// IMP=0x00000000000165df
- (void).cxx_destruct;	// IMP=0x00000000000187d8
@property(nonatomic) int frontmostApplication; // @synthesize frontmostApplication=_frontmostApplication;
- (void)dealloc;	// IMP=0x0000000000018784
- (void)onFrontmostApplicationChanged:(int)arg1;	// IMP=0x000000000001833b
- (void)updateInterestedBundleIDs;	// IMP=0x0000000000017e82
- (void)removeObserver:(id)arg1 forProcessIdentifier:(int)arg2;	// IMP=0x00000000000178d0
- (void)removeObserver:(id)arg1;	// IMP=0x000000000001759c
- (void)addObserver:(id)arg1 forProcessIdentifier:(int)arg2;	// IMP=0x0000000000016c48
- (void)initializeStateMonitor;	// IMP=0x000000000001678f
- (void)initializeForegroundMonitor;	// IMP=0x0000000000016789
- (id)init;	// IMP=0x000000000001668a
- (void)removeApplicationFromCanReceiveEventsMonitoring:(int)arg1;	// IMP=0x0000000000018c12
- (void)setApplicationCanReceiveEvents:(_Bool)arg1 forPID:(int)arg2;	// IMP=0x00000000000188de
- (_Bool)applicationCanReceiveEvents:(int)arg1;	// IMP=0x000000000001882c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

