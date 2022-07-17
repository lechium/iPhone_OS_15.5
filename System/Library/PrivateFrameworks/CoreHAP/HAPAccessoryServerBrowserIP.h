//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPAccessoryServerNotification-Protocol.h>
#import <CoreHAP/HAPPowerManagerProtocol-Protocol.h>
#import <CoreHAP/HMFTimerDelegate-Protocol.h>

@class HAPPowerManager, HAPWACAccessoryBrowser, HMFTimer, NSArray, NSMutableSet, NSObject, NSString;
@protocol HAPAccessoryServerBrowserDelegate, OS_dispatch_queue;

@interface HAPAccessoryServerBrowserIP <HMFTimerDelegate, HAPPowerManagerProtocol, HAPAccessoryServerNotification>
{
    struct BonjourBrowser *_bonjourBrowser;	// 16 = 0x10
    NSMutableSet *_discoveredAccessoryServers;	// 24 = 0x18
    id <HAPAccessoryServerBrowserDelegate> _delegate;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 40 = 0x28
    NSMutableSet *_pendingBonjourEvents;	// 48 = 0x30
    HMFTimer *_bonjourEventTimer;	// 56 = 0x38
    HAPWACAccessoryBrowser *_hapWACBrowser;	// 64 = 0x40
    HAPPowerManager *_powerManager;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000000fbaf9
@property(retain, nonatomic) HAPPowerManager *powerManager; // @synthesize powerManager=_powerManager;
@property(retain, nonatomic) HAPWACAccessoryBrowser *hapWACBrowser; // @synthesize hapWACBrowser=_hapWACBrowser;
@property(retain, nonatomic) HMFTimer *bonjourEventTimer; // @synthesize bonjourEventTimer=_bonjourEventTimer;
@property(retain, nonatomic) NSMutableSet *pendingBonjourEvents; // @synthesize pendingBonjourEvents=_pendingBonjourEvents;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak id <HAPAccessoryServerBrowserDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableSet *discoveredAccessoryServers; // @synthesize discoveredAccessoryServers=_discoveredAccessoryServers;
- (void)unitTest_handleBonjourBrowserEvent:(unsigned int)arg1 eventInfo:(id)arg2;	// IMP=0x00000000000fb9dc
- (id)serverWithIdentifier:(id)arg1;	// IMP=0x00000000000fb809
- (void)_timerDidExpire:(id)arg1;	// IMP=0x00000000000fb2e5
- (void)timerDidFire:(id)arg1;	// IMP=0x00000000000fb247
- (void)devicePowerStateChanged:(unsigned long long)arg1;	// IMP=0x00000000000fb1ac
- (int)_purgePendingBonjourEvents:(id)arg1 withProcessing:(_Bool)arg2;	// IMP=0x00000000000fac85
- (void)processPendingBonjourRemoveEventsForDeviceID:(id)arg1;	// IMP=0x00000000000fabd4
- (int)_processPendingBonjourEvent:(id)arg1;	// IMP=0x00000000000fabbd
- (void)_pendBonjourEvent:(id)arg1;	// IMP=0x00000000000faae7
- (void)_pendBonjourRemoveEvent:(id)arg1;	// IMP=0x00000000000fa595
- (_Bool)_delegateRespondsToSelector:(SEL)arg1;	// IMP=0x00000000000fa4e9
- (void)_setReachability:(_Bool)arg1 forServer:(id)arg2;	// IMP=0x00000000000fa3a8
- (void)_invalidateAccessoryServers:(_Bool)arg1;	// IMP=0x00000000000fa18f
- (int)_server:(id *)arg1 forBonjourDevice:(id)arg2;	// IMP=0x00000000000f9e88
- (void)_handleBonjourRemoveWithEventInfo:(id)arg1;	// IMP=0x00000000000f9c5c
- (void)indicateNotificationFromServer:(id)arg1 notifyType:(unsigned long long)arg2 withDictionary:(id)arg3;	// IMP=0x00000000000f9b74
- (void)_doReachabilityUpdateForServer:(id)arg1 withDictionary:(id)arg2;	// IMP=0x00000000000f98e1
- (void)_invalidateAndRemoveAccessoryServer:(id)arg1;	// IMP=0x00000000000f9629
- (void)_handleBonjourAddOrUpdateWithEventInfo:(id)arg1;	// IMP=0x00000000000f91e7
- (void)_handleBonjourBrowserEvent:(unsigned int)arg1 eventInfo:(id)arg2;	// IMP=0x00000000000f8c98
- (void)_matchAccessoryServerWithSetupID:(id)arg1 serverIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000f88fd
- (void)matchAccessoryServerWithSetupID:(id)arg1 serverIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000f87f3
- (void)processPendingBonjourRemoveEvents:(id)arg1;	// IMP=0x00000000000f8742
- (void)discoverAccessoryServerWithIdentifier:(id)arg1;	// IMP=0x00000000000f8691
- (void)notifyDelegatesOfWACCompletionWithIdentifier:(id)arg1 error:(id)arg2;	// IMP=0x00000000000f868b
- (id)wacBrowser;	// IMP=0x00000000000f8679
- (id)visible2Pt4Networks;	// IMP=0x00000000000f8629
- (void)stopDiscoveringWACAccessoryServersWithInvalidation:(_Bool)arg1;	// IMP=0x00000000000f8623
- (void)stopDiscoveringAccessoryServers;	// IMP=0x00000000000f85b2
- (void)startDiscoveringAirPlayAccessoriesWithDelegate:(id)arg1;	// IMP=0x00000000000f85ac
- (void)startDiscoveringWACAccessoryServerWithIdentifier:(id)arg1;	// IMP=0x00000000000f85a6
- (void)startDiscoveringWACAccessoryServers;	// IMP=0x00000000000f85a0
- (void)startDiscoveringAccessoryServers;	// IMP=0x00000000000f852f
- (void)setDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x00000000000f8453
- (int)_initializeAndStartBonjourBrowser;	// IMP=0x00000000000f833e
- (long long)linkType;	// IMP=0x00000000000f8333
- (id)initWithQueue:(id)arg1;	// IMP=0x00000000000f8208

// Remaining properties
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly, copy) NSString *shortDescription;
@property(readonly) Class superclass;

@end
