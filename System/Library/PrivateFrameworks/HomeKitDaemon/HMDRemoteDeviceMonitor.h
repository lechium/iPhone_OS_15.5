//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDIDSActivityMonitorObserverDelegate-Protocol.h>
#import <HomeKitDaemon/HMDRemoteDeviceMonitorFactory-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFNetMonitorDelegate-Protocol.h>
#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>
#import <HomeKitDaemon/IDSAccountDelegate-Protocol.h>
#import <HomeKitDaemon/IDSAccountRegistrationDelegate-Protocol.h>
#import <HomeKitDaemon/IDSServiceDelegate-Protocol.h>

@class HMDAccountRegistry, HMDAppleAccountManager, HMDIDSActivityMonitorObserver, HMDRemoteAccountManager, HMFMessageTransport, HMFNetMonitor, HMFTimer, IDSAccount, IDSService, NSArray, NSMapTable, NSObject, NSOperationQueue, NSString;
@protocol HMDRemoteDeviceMonitorFactory, HMFLocking, OS_dispatch_queue;

@interface HMDRemoteDeviceMonitor : HMFObject <HMFLogging, HMFTimerDelegate, IDSServiceDelegate, IDSAccountDelegate, IDSAccountRegistrationDelegate, HMDIDSActivityMonitorObserverDelegate, HMFNetMonitorDelegate, HMDRemoteDeviceMonitorFactory>
{
    id <HMFLocking> _lock;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSOperationQueue *_operationQueue;	// 24 = 0x18
    _Bool _reachable;	// 32 = 0x20
    _Bool _started;	// 33 = 0x21
    HMDAccountRegistry *_accountRegistry;	// 40 = 0x28
    IDSService *_service;	// 48 = 0x30
    HMFMessageTransport *_transport;	// 56 = 0x38
    IDSAccount *_iCloudAccount;	// 64 = 0x40
    HMDIDSActivityMonitorObserver *_activityObserver;	// 72 = 0x48
    HMDAppleAccountManager *_accountManager;	// 80 = 0x50
    HMDRemoteAccountManager *_remoteAccountManager;	// 88 = 0x58
    HMFNetMonitor *_netMonitor;	// 96 = 0x60
    id <HMDRemoteDeviceMonitorFactory> _factory;	// 104 = 0x68
    NSMapTable *_deviceInformationByDevice;	// 112 = 0x70
    HMFTimer *_deviceHealthTimer;	// 120 = 0x78
    HMFTimer *_initialDeviceHealthTimer;	// 128 = 0x80
}

+ (id)logCategory;	// IMP=0x00000000009921a6
+ (id)pingMessageForDevice:(id)arg1 timeout:(double)arg2 restriction:(unsigned long long)arg3;	// IMP=0x0000000000992058
- (void).cxx_destruct;	// IMP=0x000000000098d50b
@property(readonly, nonatomic) HMDAccountRegistry *accountRegistry; // @synthesize accountRegistry=_accountRegistry;
- (void)observer:(id)arg1 didUpdateDevice:(id)arg2 isOnline:(_Bool)arg3;	// IMP=0x000000000098d439
- (void)_handleIncomingMessageForDevice:(id)arg1;	// IMP=0x000000000098d26a
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x000000000098cfd8
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;	// IMP=0x000000000098cd61
- (void)account:(id)arg1 loginChanged:(id)arg2;	// IMP=0x000000000098cba3
- (void)account:(id)arg1 isActiveChanged:(_Bool)arg2;	// IMP=0x000000000098c9dd
- (void)timerDidFire:(id)arg1;	// IMP=0x000000000098bdc6
- (void)networkMonitorIsUnreachable:(id)arg1;	// IMP=0x000000000098bd74
- (void)networkMonitorIsReachable:(id)arg1;	// IMP=0x000000000098bd22
- (id)newConfirmationHandlerWithTimeout:(double)arg1 workQueue:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000000098bc76
- (id)newSendMessageOperationWithMessage:(id)arg1;	// IMP=0x000000000098bc0d
- (id)newDeviceMonitoringTimer;	// IMP=0x000000000098bbd3
- (id)newRepeatingDeviceHealthTimer;	// IMP=0x000000000098bba5
- (id)newInitialDeviceHealthTimer;	// IMP=0x000000000098ba8d
- (void)handleAccountRemoved:(id)arg1;	// IMP=0x000000000098b9fb
- (void)handleDeviceRemovedFromAccount:(id)arg1;	// IMP=0x000000000098b94b
- (void)handleCurrentDeviceUpdate:(id)arg1;	// IMP=0x000000000098b8b9
- (void)confirmDevice:(id)arg1 timeout:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000098b79e
- (void)_handleGlobalReachabilityChange;	// IMP=0x000000000098b11d
- (void)stopMonitoringDevice:(id)arg1;	// IMP=0x000000000098b086
- (void)startMonitoringDevice:(id)arg1 withInitialReachability:(id)arg2;	// IMP=0x000000000098afc8
@property(readonly) NSArray *unreachableDevices;
@property(readonly, getter=isReachable) _Bool reachable; // @synthesize reachable=_reachable;
- (void)start;	// IMP=0x000000000098ac46
- (void)dealloc;	// IMP=0x000000000098abd1
- (id)dumpState;	// IMP=0x000000000098a9ce
- (id)initWithAccountRegistry:(id)arg1 activityObserver:(id)arg2 queue:(id)arg3 service:(id)arg4 modernService:(id)arg5 transport:(id)arg6 accountManager:(id)arg7 remoteAccountManager:(id)arg8 netMonitor:(id)arg9 factory:(id)arg10;	// IMP=0x000000000098a5f4
- (id)initWithAccountRegistry:(id)arg1 transport:(id)arg2 activityObserver:(id)arg3;	// IMP=0x000000000098a219
- (id)init;	// IMP=0x000000000098a171

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
