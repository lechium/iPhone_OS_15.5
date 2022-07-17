//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDIDSActivityMonitorBroadcasterPushTokenDataSourceDelegate-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>

@class HMDIDSActivityMonitor, HMFTimer, NSString;
@protocol HMDIDSActivityMonitorBroadcasterPushTokenDataSource, OS_dispatch_queue;

@interface HMDIDSActivityMonitorBroadcaster : NSObject <HMFLogging, HMFTimerDelegate, HMDIDSActivityMonitorBroadcasterPushTokenDataSourceDelegate>
{
    HMFTimer *_debounceTimer;	// 8 = 0x8
    HMDIDSActivityMonitor *_activityMonitor;	// 16 = 0x10
    id <HMDIDSActivityMonitorBroadcasterPushTokenDataSource> _dataSource;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x00000000008736f3
- (void).cxx_destruct;	// IMP=0x00000000008736b5
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain) id <HMDIDSActivityMonitorBroadcasterPushTokenDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly) HMDIDSActivityMonitor *activityMonitor; // @synthesize activityMonitor=_activityMonitor;
- (id)logIdentifier;	// IMP=0x000000000087360b
- (void)dataSourceDidUpdate:(id)arg1;	// IMP=0x00000000008734d8
- (void)timerDidFire:(id)arg1;	// IMP=0x00000000008731bf
- (void)configureWithDataSource:(id)arg1;	// IMP=0x0000000000873032
- (void)configureWithQueue:(id)arg1;	// IMP=0x0000000000872ea2
- (id)initWithActivityMonitor:(id)arg1;	// IMP=0x0000000000872d99
- (id)initWithActivityMonitor:(id)arg1 timer:(id)arg2;	// IMP=0x0000000000872cec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
