//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NearbyInteraction/UWBSessionDelegateProxyProtocol-Protocol.h>

@class NICarKeyEventNotifier, NIConfiguration, NIDevicePresenceNotifier, NIDiscoveryToken, NIExportedObjectForwarder, NIServerConnection, NSDictionary, NSError, NSString, NSUUID;
@protocol NIInternalSessionDelegate, NISessionDelegate, OS_dispatch_queue, OS_os_log;

@interface NISession : NSObject <UWBSessionDelegateProxyProtocol>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    struct mutex _mutex;	// 16 = 0x10
    NSUUID *_internalID;	// 80 = 0x50
    NIServerConnection *_connection;	// 88 = 0x58
    NIExportedObjectForwarder *_exportedObjectForwarder;	// 96 = 0x60
    NIConfiguration *_currentConfiguration;	// 104 = 0x68
    struct vector<UWBSessionInterruptionBookkeeping, std::allocator<UWBSessionInterruptionBookkeeping>> _interruptions;	// 112 = 0x70
    struct atomic<bool> _readyForCallbacks;	// 136 = 0x88
    NSObject<OS_os_log> *_log;	// 144 = 0x90
    double _startTime;	// 152 = 0x98
    double _duration;	// 160 = 0xa0
    _Bool _updatedNearbyObjects;	// 168 = 0xa8
    long long _motionState;	// 176 = 0xb0
    NICarKeyEventNotifier *_carKeyEventNotifier;	// 184 = 0xb8
    unsigned long long _connectionOptions;	// 192 = 0xc0
    struct atomic<bool> _isObserverSession;	// 200 = 0xc8
    NIDevicePresenceNotifier *_devicePresenceNotifier;	// 208 = 0xd0
    int _internalState;	// 216 = 0xd8
    id <NISessionDelegate> _delegate;	// 224 = 0xe0
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 232 = 0xe8
    NSError *_invalidationError;	// 240 = 0xf0
    NSDictionary *_activationResponse;	// 248 = 0xf8
    id <NIInternalSessionDelegate> _internalDelegate;	// 256 = 0x100
}

+ (_Bool)isSupported;	// IMP=0x0000000000002941
+ (void)_queryAndCacheCapabilities;	// IMP=0x0000000000001e5f
+ (_Bool)_supportedPlatform:(id)arg1;	// IMP=0x0000000000001dfd
+ (id)_createOneShotConnectionAndResume:(_Bool)arg1;	// IMP=0x0000000000001d0d
+ (id)deviceCapabilities;	// IMP=0x0000000000001735
+ (void)setCachedPlatformCapabilities:(id)arg1;	// IMP=0x0000000000001721
+ (id)cachedPlatformCapabilities;	// IMP=0x0000000000001710
+ (id)observerSession;	// IMP=0x00000000000072e3
- (id).cxx_construct;	// IMP=0x0000000000006be4
- (void).cxx_destruct;	// IMP=0x0000000000006b14
@property __weak id <NIInternalSessionDelegate> internalDelegate; // @synthesize internalDelegate=_internalDelegate;
@property(retain) NSDictionary *activationResponse; // @synthesize activationResponse=_activationResponse;
@property(retain) NSError *invalidationError; // @synthesize invalidationError=_invalidationError;
@property int internalState; // @synthesize internalState=_internalState;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak id <NISessionDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_getSessionFailureError;	// IMP=0x00000000000069aa
- (void)_notifyDidInvalidateWithError:(id)arg1;	// IMP=0x000000000000681f
- (id)_verifyError:(id)arg1;	// IMP=0x000000000000664c
- (void)_handleCommandUnsupportedPlatform;	// IMP=0x00000000000065d7
- (void)_notifySessionHasFailed;	// IMP=0x0000000000006577
- (void)_performBlockOnDelegateQueue:(CDUnknownBlockType)arg1 ifRespondsToSelector:(SEL)arg2 evenIfNotRunning:(_Bool)arg3;	// IMP=0x00000000000064a0
- (void)_performBlockOnDelegateQueue:(CDUnknownBlockType)arg1 ifRespondsToSelector:(SEL)arg2;	// IMP=0x000000000000648a
- (void)_handlePauseSessionSuccess;	// IMP=0x00000000000063ec
- (void)_handlePauseSessionError:(id)arg1;	// IMP=0x000000000000631a
- (void)_handleRunSessionSuccess;	// IMP=0x00000000000061d2
- (void)_handleRunSessionError:(id)arg1;	// IMP=0x00000000000060e8
- (void)_handleActivationSuccess:(id)arg1;	// IMP=0x0000000000005e9e
- (void)_handleActivationError:(id)arg1;	// IMP=0x0000000000005dcd
- (void)_invalidateInternalOnConnectionQueue:(_Bool)arg1;	// IMP=0x0000000000005c56
- (void)_pauseInternalOnConnectionQueue:(_Bool)arg1;	// IMP=0x0000000000005a97
- (void)_reinterruptSessionWithCachedInterruption;	// IMP=0x0000000000005992
- (void)_interruptSessionWithInternalReason:(long long)arg1 onConnectionQueue:(_Bool)arg2 cachedInterruption:(_Bool)arg3;	// IMP=0x00000000000057b3
- (void)_invalidateSessionInternalWithError:(id)arg1;	// IMP=0x000000000000574b
- (void)didUpdateAlgorithmState:(id)arg1 forObject:(id)arg2;	// IMP=0x000000000000560d
- (void)didGenerateShareableConfigurationData:(id)arg1 forObject:(id)arg2;	// IMP=0x0000000000005477
- (void)didUpdateHealthStatus:(long long)arg1;	// IMP=0x00000000000053c1
- (void)relayDCKMessage:(id)arg1;	// IMP=0x00000000000052ae
- (void)didUpdateMotionState:(long long)arg1;	// IMP=0x0000000000005270
- (void)object:(id)arg1 didUpdateRegion:(id)arg2 previousRegion:(id)arg3;	// IMP=0x0000000000005064
- (void)didDiscoverNearbyObject:(id)arg1;	// IMP=0x0000000000004f4b
- (void)uwbSessionInterruptionReasonEnded:(long long)arg1 timestamp:(double)arg2;	// IMP=0x0000000000004961
- (void)uwbSessionInterruptedWithReason:(long long)arg1 timestamp:(double)arg2;	// IMP=0x00000000000045ef
- (void)uwbSessionDidInvalidateWithError:(id)arg1;	// IMP=0x000000000000459c
- (void)uwbSessionDidFailWithError:(id)arg1;	// IMP=0x00000000000044d7
- (void)uwbSystemDidChangeState:(unsigned long long)arg1;	// IMP=0x0000000000004424
- (void)didUpdateNearbyObjects:(id)arg1;	// IMP=0x0000000000004302
- (void)didRemoveNearbyObjects:(id)arg1 withReason:(unsigned long long)arg2;	// IMP=0x0000000000003fcb
- (id)_synchronousRemoteObject;	// IMP=0x0000000000003fb5
- (id)_remoteObject;	// IMP=0x0000000000003f9f
- (void)_serverConnectionInterrupted;	// IMP=0x0000000000003ea0
- (void)_serverConnectionInvalidated;	// IMP=0x0000000000003e36
- (void)_activateAsync;	// IMP=0x0000000000003d14
- (void)_activateSyncOnConnectionQueue;	// IMP=0x0000000000003b0b
- (void)_activate:(_Bool)arg1;	// IMP=0x0000000000003ae9
- (void)setConfigurationForTesting:(id)arg1;	// IMP=0x0000000000003ad8
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000003579
- (void)invalidate;	// IMP=0x0000000000003513
- (void)pause;	// IMP=0x00000000000033ff
- (void)runWithConfiguration:(id)arg1;	// IMP=0x0000000000002c3a
- (id)init;	// IMP=0x0000000000002c25
- (_Bool)_isInternalClient;	// IMP=0x0000000000002b01
@property(readonly, copy, nonatomic) NIDiscoveryToken *discoveryToken;
@property(readonly, copy, nonatomic) NIConfiguration *configuration;
- (void)_submitErrorMetric:(id)arg1;	// IMP=0x00000000000023eb
- (void)_logDurationAndSubmit:(_Bool)arg1;	// IMP=0x0000000000002271
- (void)_logTime;	// IMP=0x00000000000020de
- (id)_initAndConnectToServerWithOptions:(unsigned long long)arg1;	// IMP=0x00000000000018d4
@property(readonly) long long motionState;
- (void)_removeRegionPredicate:(id)arg1;	// IMP=0x0000000000007255
- (void)_addRegionPredicate:(id)arg1;	// IMP=0x00000000000071c7
- (void)_removeObject:(id)arg1;	// IMP=0x0000000000006eee
- (void)_addObject:(id)arg1;	// IMP=0x0000000000006c15
@property(readonly) NICarKeyEventNotifier *carKeyEventNotifier;
@property(readonly, getter=isRangingLimitExceeded) _Bool rangingLimitExceeded;
@property long long rangingPriorityPolicy;
- (id)_setDebugURSK:(id)arg1 transactionIdentifier:(unsigned int)arg2;	// IMP=0x00000000000084e4
- (id)deleteURSKs;	// IMP=0x0000000000008351
- (void)processBluetoothEventWithType:(long long)arg1 btcClockTicks:(unsigned long long)arg2;	// IMP=0x00000000000081f6
- (void)processDCKMessage:(id)arg1 responseCallback:(CDUnknownBlockType)arg2;	// IMP=0x0000000000007c33
- (id)_setURSKTTL:(unsigned long long)arg1;	// IMP=0x0000000000008d0b
@property(readonly) NIDevicePresenceNotifier *devicePresenceNotifier;
- (void)_provideTruthTag:(id)arg1;	// IMP=0x000000000000905f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

