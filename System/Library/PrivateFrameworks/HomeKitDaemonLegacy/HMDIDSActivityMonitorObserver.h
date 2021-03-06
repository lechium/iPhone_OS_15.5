//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>
#import <HomeKitDaemonLegacy/IDSActivityMonitorListenerDelegate-Protocol.h>

@class HMDIDSActivityMonitor, NSMutableDictionary, NSString;
@protocol HMDIDSActivityMonitorObserverRegistrationManager, NSLocking;

@interface HMDIDSActivityMonitorObserver : NSObject <IDSActivityMonitorListenerDelegate, HMFLogging>
{
    id <NSLocking> _lock;	// 8 = 0x8
    HMDIDSActivityMonitor *_activityMonitor;	// 16 = 0x10
    NSMutableDictionary *_subactivityToDelegatesMap;	// 24 = 0x18
    id <HMDIDSActivityMonitorObserverRegistrationManager> _dataSource;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x00000000007ce98b
- (void).cxx_destruct;	// IMP=0x00000000007ce94d
@property(retain) id <HMDIDSActivityMonitorObserverRegistrationManager> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly) NSMutableDictionary *subactivityToDelegatesMap; // @synthesize subactivityToDelegatesMap=_subactivityToDelegatesMap;
@property(readonly) HMDIDSActivityMonitor *activityMonitor; // @synthesize activityMonitor=_activityMonitor;
- (id)logIdentifier;	// IMP=0x00000000007ce8b2
- (void)activityMonitor:(id)arg1 didReceiveActivityUpdate:(id)arg2;	// IMP=0x00000000007ce482
- (void)stopObservingPresenceForDevice:(id)arg1;	// IMP=0x00000000007ce406
- (void)startObservingPresenceForDevice:(id)arg1;	// IMP=0x00000000007ce2a8
- (void)removeObserver:(id)arg1 forSubActivity:(id)arg2;	// IMP=0x00000000007ce1aa
- (void)addObserver:(id)arg1 forSubActivity:(id)arg2;	// IMP=0x00000000007ce03c
- (void)configureWithDataSource:(id)arg1;	// IMP=0x00000000007cdfb7
- (id)initWithActivityMonitor:(id)arg1;	// IMP=0x00000000007cdeee

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

