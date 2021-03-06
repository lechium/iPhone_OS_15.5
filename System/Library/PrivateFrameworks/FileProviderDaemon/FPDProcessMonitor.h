//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCountedSet, NSMutableDictionary, NSMutableSet, NSSet, RBSProcessMonitor;
@protocol FPDProcessMonitorDelegate, OS_dispatch_queue;

@interface FPDProcessMonitor : NSObject
{
    NSObject<OS_dispatch_queue> *_notificationQueue;	// 8 = 0x8
    RBSProcessMonitor *_monitor;	// 16 = 0x10
    NSMutableDictionary *_bundleIDForPID;	// 24 = 0x18
    NSCountedSet *_bundleIDs;	// 32 = 0x20
    NSCountedSet *_pids;	// 40 = 0x28
    NSMutableSet *_foregroundBundleIDs;	// 48 = 0x30
    NSSet *_excludedBundleIDs;	// 56 = 0x38
    id <FPDProcessMonitorDelegate> _delegate;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000019b4e
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue; // @synthesize notificationQueue=_notificationQueue;
@property __weak id <FPDProcessMonitorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)invalidate;	// IMP=0x0000000000019967
- (void)removePIDToObserve:(int)arg1;	// IMP=0x00000000000198f9
- (void)_removePIDToObserve:(int)arg1;	// IMP=0x0000000000019660
- (void)addPIDToObserve:(int)arg1;	// IMP=0x00000000000195f2
- (void)process:(int)arg1 didBecomeForeground:(_Bool)arg2;	// IMP=0x00000000000193bc
- (void)_addPIDToObserve:(int)arg1;	// IMP=0x0000000000019177
- (void)_invalidate;	// IMP=0x0000000000019145
- (void)_stopMonitoringPID:(int)arg1;	// IMP=0x0000000000019133
- (void)_startMonitoringAndSendInitialNotificationForPID:(int)arg1;	// IMP=0x0000000000018fe7
- (id)_bundleIDForPID:(int)arg1;	// IMP=0x0000000000018eed
- (void)_updateMonitoredBundleIDs;	// IMP=0x0000000000018e76
- (void)_createMonitor;	// IMP=0x0000000000018de6
- (void)_configureAppMonitor:(id)arg1;	// IMP=0x0000000000018b28
- (void)_handleProcessStateUpdate:(id)arg1;	// IMP=0x0000000000018a69
- (_Bool)_isProcessForeground:(id)arg1;	// IMP=0x00000000000189e1
- (_Bool)isForeground;	// IMP=0x0000000000018985
- (id)prettyDescription;	// IMP=0x000000000001880c
- (id)description;	// IMP=0x0000000000018784
- (id)initWithExcludedBundleIDs:(id)arg1;	// IMP=0x00000000000185e4

@end

