//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFNetServiceBrowserDelegate-Protocol.h>
#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>

@class HMFTimer, HMFUnfairLock, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HMDBonjourBrowserHelper : HMFObject <HMFNetServiceBrowserDelegate, HMFTimerDelegate>
{
    unsigned long long _state;	// 8 = 0x8
    double _browsingInterval;	// 16 = 0x10
    double _browsingPeriodicity;	// 24 = 0x18
    HMFUnfairLock *_lock;	// 32 = 0x20
    HMFTimer *_timer;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_workQueue;	// 48 = 0x30
    NSArray *_serviceTypes;	// 56 = 0x38
    NSMutableArray *_browsers;	// 64 = 0x40
    NSDictionary *_latestDiscoveredServices;	// 72 = 0x48
    NSMutableDictionary *_internalDiscoveredServices;	// 80 = 0x50
    NSMutableArray *_browsingCompletions;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000007aa195
@property(retain, nonatomic) NSMutableArray *browsingCompletions; // @synthesize browsingCompletions=_browsingCompletions;
@property(retain, nonatomic) NSMutableDictionary *internalDiscoveredServices; // @synthesize internalDiscoveredServices=_internalDiscoveredServices;
@property(retain, nonatomic) NSDictionary *latestDiscoveredServices; // @synthesize latestDiscoveredServices=_latestDiscoveredServices;
@property(retain, nonatomic) NSMutableArray *browsers; // @synthesize browsers=_browsers;
@property(retain, nonatomic) NSArray *serviceTypes; // @synthesize serviceTypes=_serviceTypes;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) HMFTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) HMFUnfairLock *lock; // @synthesize lock=_lock;
@property(nonatomic) double browsingPeriodicity; // @synthesize browsingPeriodicity=_browsingPeriodicity;
@property(nonatomic) double browsingInterval; // @synthesize browsingInterval=_browsingInterval;
- (void)netServiceBrowser:(id)arg1 didStopBrowsingWithError:(id)arg2;	// IMP=0x00000000007a9e72
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2;	// IMP=0x00000000007a9d94
- (void)netServiceBrowser:(id)arg1 didAddService:(id)arg2;	// IMP=0x00000000007a9cb6
- (void)timerDidFire:(id)arg1;	// IMP=0x00000000007a9be7
- (void)_updateTimerWithTimeout:(double)arg1;	// IMP=0x00000000007a9a84
- (void)_removeBrowser:(id)arg1;	// IMP=0x00000000007a99b9
- (void)_addBrowser:(id)arg1;	// IMP=0x00000000007a98ee
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, nonatomic, getter=isStarted) _Bool started;
- (unsigned long long)discoveredServicesCountForServiceType:(id)arg1;	// IMP=0x00000000007a94d6
- (void)_stopBrowsers;	// IMP=0x00000000007a8fdc
- (void)stop;	// IMP=0x00000000007a8f6b
- (_Bool)_startBrowsers;	// IMP=0x00000000007a8b2c
- (void)startWithBrowsingCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000007a8a7b
- (id)initWithServicesOfTypes:(id)arg1 browsingTimeInterval:(double)arg2 browsingPeriodicity:(double)arg3 workQueue:(id)arg4;	// IMP=0x00000000007a87e0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

