//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSDevice, IDSService, NSMutableArray, NSMutableDictionary, NSSet, NSString, NSXPCListener, WCDFirstUnlockManager, WCDPairedSyncManager, WCDPrivateClient;
@protocol CLManagerInterface;

@interface WatchConnectivityDaemon : NSObject
{
    NSXPCListener *_xpcPrivateListener;	// 8 = 0x8
    WCDPrivateClient *_privateClient;	// 16 = 0x10
    WCDFirstUnlockManager *_firstUnlockManager;	// 24 = 0x18
    WCDPairedSyncManager *_pairedSyncManager;	// 32 = 0x20
    NSXPCListener *_xpcListener;	// 40 = 0x28
    NSMutableDictionary *_communicationIdentifierToClient;	// 48 = 0x30
    NSMutableDictionary *_sendIdentifierToHandler;	// 56 = 0x38
    NSMutableDictionary *_pendingMessageRequests;	// 64 = 0x40
    NSMutableArray *_readyBlocks;	// 72 = 0x48
    NSMutableDictionary *_coreLocationAssertions;	// 80 = 0x50
    NSMutableDictionary *_companionAppAssertions;	// 88 = 0x58
    NSSet *_counterpartClientCommunicationIdentifiers;	// 96 = 0x60
    id <CLManagerInterface> _locationManager;	// 104 = 0x68
    NSString *_idsServiceIdentifier;	// 112 = 0x70
    NSString *_idsInsecureServiceIdentifier;	// 120 = 0x78
    IDSService *_idsService;	// 128 = 0x80
    IDSService *_insecureIDSService;	// 136 = 0x88
}

+ (id)sharedDaemon;	// IMP=0x0020000000011e88
- (void).cxx_destruct;	// IMP=0x002000000001f25c
@property(readonly) IDSService *insecureIDSService; // @synthesize insecureIDSService=_insecureIDSService;
@property(readonly) IDSService *idsService; // @synthesize idsService=_idsService;
@property(readonly) NSString *idsInsecureServiceIdentifier; // @synthesize idsInsecureServiceIdentifier=_idsInsecureServiceIdentifier;
@property(readonly) NSString *idsServiceIdentifier; // @synthesize idsServiceIdentifier=_idsServiceIdentifier;
@property(retain, nonatomic) id <CLManagerInterface> locationManager; // @synthesize locationManager=_locationManager;
- (id)createCLInUseTimerForIdentifier:(id)arg1;	// IMP=0x001000000001f071
- (void)releaseCLInUseAssertionForIdentifier:(id)arg1;	// IMP=0x001000000001ef09
- (void)setCLTransientAuthorization:(id)arg1 withCoreLocationData:(id)arg2;	// IMP=0x001000000001ec0c
- (void)flushReadyBlocks;	// IMP=0x001000000001ead5
- (void)service:(id)arg1 context:(id)arg2 performBlockWhenReady:(CDUnknownBlockType)arg3;	// IMP=0x001000000001e985
- (void)performBlockWhenReady:(CDUnknownBlockType)arg1;	// IMP=0x001000000001e8b5
- (void)persistAppContext:(id)arg1 applicationInfo:(id)arg2 pairingID:(id)arg3;	// IMP=0x001000000001e570
- (void)storeComplicationUserInfoTransfer:(id)arg1 applicationInfo:(id)arg2 pairingID:(id)arg3;	// IMP=0x001000000001ddad
- (id)moveUserInfoToClientInbox:(id)arg1 applicationInfo:(id)arg2 pairingID:(id)arg3 userInfoIdentifier:(id)arg4;	// IMP=0x001000000001d6cb
- (id)moveFileToClientInbox:(id)arg1 applicationInfo:(id)arg2 pairingID:(id)arg3 fileIdentifier:(id)arg4 userInfoData:(id)arg5 error:(id *)arg6;	// IMP=0x001000000001ccef
- (void)notifyDuetOfPendingContentForCompanionAppID:(id)arg1 forComplication:(_Bool)arg2;	// IMP=0x001000000001cce9
- (void)duetIdentifiersForCompanionAppID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000001ca85
- (id)applicationInfoForCommunicationID:(id)arg1;	// IMP=0x001000000001c9d5
- (id)WCErrorForIDSError:(id)arg1;	// IMP=0x001000000001c5f9
- (id)pairingIDForIDSUniqueDeviceID:(id)arg1;	// IMP=0x001000000001c385
- (id)dataFromUUIDString:(id)arg1;	// IMP=0x001000000001c2b4
- (const char *)descriptionFromPayloadSendType:(unsigned short)arg1;	// IMP=0x001000000001c28f
- (void)updateClientWithValues:(id)arg1;	// IMP=0x001000000001c1c6
- (void)updateAllClientsWithValues;	// IMP=0x001000000001c088
- (id)createBackgroundAssertionTimerForIdentifier:(id)arg1;	// IMP=0x001000000001be7a
- (void)handleAquiredAssertion:(id)arg1 identifier:(id)arg2;	// IMP=0x001000000001bb78
- (void)cleanUpProcessAssertionForIdentifier:(id)arg1;	// IMP=0x001000000001b9ab
- (void)acquireBackgroundAssertionForIdentifier:(id)arg1;	// IMP=0x001000000001b71a
- (void)launchCompanionAppID:(id)arg1 isInUse:(_Bool)arg2 coreLocationData:(id)arg3;	// IMP=0x001000000001b285
@property(readonly) IDSDevice *activeIDSDevice;
- (void)service:(id)arg1 didSwitchActivePairedDevice:(id)arg2 acknowledgementBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000001b070
- (void)updateActiveDeviceConnectedForService:(id)arg1;	// IMP=0x001000000001afe9
- (void)service:(id)arg1 devicesChanged:(id)arg2;	// IMP=0x001000000001af21
- (void)service:(id)arg1 connectedDevicesChanged:(id)arg2;	// IMP=0x001000000001ae59
- (void)service:(id)arg1 account:(id)arg2 incomingResourceAtURL:(id)arg3 metadata:(id)arg4 fromID:(id)arg5 context:(id)arg6;	// IMP=0x001000000001aa87
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x0010000000019cd9
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5 context:(id)arg6;	// IMP=0x0010000000019671
- (void)persistUserInfoTransferResult:(id)arg1 pairingID:(id)arg2 applicationInfo:(id)arg3 identifier:(id)arg4;	// IMP=0x0010000000019146
- (_Bool)userInfoExistsForPairingID:(id)arg1 identifier:(id)arg2 applicationInfo:(id)arg3;	// IMP=0x0010000000018fa7
- (_Bool)notifyIfUserInfoTransferWithCommunicationID:(id)arg1 pairingID:(id)arg2 sendID:(id)arg3 success:(_Bool)arg4 error:(id)arg5;	// IMP=0x0010000000018cd7
- (id)complicationUserInfoPathInDataContainer:(id)arg1 pairingID:(id)arg2;	// IMP=0x0010000000018af1
- (void)handleIncomingUserInfoURL:(id)arg1 communicationID:(id)arg2 pairingID:(id)arg3 sendID:(id)arg4;	// IMP=0x0010000000018857
- (void)transferUserInfo:(id)arg1 withMetadata:(id)arg2 identifier:(id)arg3 clientID:(id)arg4 clientPairingID:(id)arg5 errorHandler:(CDUnknownBlockType)arg6;	// IMP=0x00100000000181b6
- (_Bool)errorIfPreconditionsNotSatisfiedWithClientPairingID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000018063
- (void)handleIncomingUserInfoTransferProto:(id)arg1 communicationID:(id)arg2 pairingID:(id)arg3 sendID:(id)arg4;	// IMP=0x0010000000017d6a
- (_Bool)sendComplicationUserInfo:(id)arg1 clientID:(id)arg2 clientPairingID:(id)arg3 identifier:(id)arg4 errorHandler:(CDUnknownBlockType)arg5;	// IMP=0x001000000001782e
- (_Bool)notifyIfFileTransferWithCommunicationID:(id)arg1 pairingID:(id)arg2 sendID:(id)arg3 success:(_Bool)arg4 error:(id)arg5;	// IMP=0x0010000000017662
- (void)persistFileTransferResult:(id)arg1 pairingID:(id)arg2 applicationInfo:(id)arg3 identifier:(id)arg4;	// IMP=0x0010000000017120
- (_Bool)fileTransferExistsForPairingID:(id)arg1 identifier:(id)arg2 applicationInfo:(id)arg3;	// IMP=0x0010000000016f81
- (void)handleIncomingFileURL:(id)arg1 communicationID:(id)arg2 pairingID:(id)arg3 sendID:(id)arg4 metadata:(id)arg5;	// IMP=0x0010000000016ba8
- (void)cancelSendWithIdentifier:(id)arg1;	// IMP=0x0010000000016a7b
- (void)transferFile:(id)arg1 withMetadata:(id)arg2 identifier:(id)arg3 forClient:(id)arg4 errorHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000016234
- (void)updateApplicationContext:(id)arg1 clientID:(id)arg2 clientPairingID:(id)arg3 errorHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000015df7
- (void)dequeuePendingMessagesForCommunicationID:(id)arg1;	// IMP=0x0010000000015ab7
- (void)handleIncomingRequest:(id)arg1 withCommunicationID:(id)arg2 isInUse:(_Bool)arg3 coreLocationData:(id)arg4;	// IMP=0x001000000001579c
- (void)sendMessage:(id)arg1 withIdentifier:(id)arg2 isResponse:(_Bool)arg3 clientID:(id)arg4 clientPairingID:(id)arg5 errorHandler:(CDUnknownBlockType)arg6;	// IMP=0x001000000001504d
- (void)handlePairedSyncComplicationsStartedAck:(id)arg1 identifier:(id)arg2;	// IMP=0x0010000000014fc8
- (void)sendPairedSyncForComplicationsStartedAckWithIdentifier:(id)arg1 success:(_Bool)arg2;	// IMP=0x0010000000014f45
- (void)privateClientConnectTimerFired;	// IMP=0x0010000000014f3f
- (void)forgetClientConnectTimer;	// IMP=0x0010000000014f39
- (void)handlePairedSyncComplicationsStartedWithIdentifier:(id)arg1;	// IMP=0x0010000000014f33
- (void)sendPairedSyncForComplicationsStartedWithIdentifier:(id)arg1;	// IMP=0x0010000000014bd8
- (void)sendFirstUnlockAck:(id)arg1;	// IMP=0x0010000000014924
- (void)sendFirstUnlockRequest:(id)arg1;	// IMP=0x0010000000014670
- (void)sendFirstUnlockState:(id)arg1;	// IMP=0x00100000000143bc
- (void)dequeuePendingComplicationPings;	// IMP=0x00100000000143b6
- (void)handleComplicationPingForCommunicationIdentifier:(id)arg1;	// IMP=0x00100000000143b0
- (void)addCounterpartClientCommunicationIdentifier:(id)arg1;	// IMP=0x00100000000142ab
- (void)handleInstalledAppsChangedMessage;	// IMP=0x00100000000142a5
- (void)sendInstalledAppsChangedMessage;	// IMP=0x0010000000013f99
- (void)handleDaemonClientsInformation:(id)arg1;	// IMP=0x0010000000013d79
- (void)sendDaemonClientsInformation;	// IMP=0x0010000000013d36
- (void)handleCounterpartDaemonDidStart;	// IMP=0x0010000000013cf3
- (void)sendDaemonDidStart;	// IMP=0x0010000000013a2c
- (void)systemObserverUpdatingInstalledApps;	// IMP=0x00100000000139b4
- (void)systemObserverAppDidTerminateForBundleID:(id)arg1;	// IMP=0x00100000000138ba
- (void)systemObserverInstalledApplicationsChanged;	// IMP=0x0010000000013726
- (void)systemObserverActiveDeviceSwitchStarted;	// IMP=0x001000000001370c
- (void)systemObserverInitialSetUpComplete;	// IMP=0x00100000000136de
- (void)clientReachabilityDidChange:(id)arg1;	// IMP=0x001000000001364e
- (void)clientXPCConnectionDidDisconnect:(id)arg1;	// IMP=0x00100000000134ab
- (void)dequeueContentForClient:(id)arg1;	// IMP=0x00100000000133bd
- (_Bool)privateListenerShouldAcceptNewConnection:(id)arg1;	// IMP=0x00100000000131f3
- (id)createNewClientObjectWithCommunicationID:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000013093
- (_Bool)listenerShouldAcceptNewConnection:(id)arg1;	// IMP=0x0010000000012e01
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0010000000012d5b
- (void)loadPersistedClients;	// IMP=0x00100000000126e6
@property(readonly) NSString *state;
- (id)init;	// IMP=0x0010000000011f0d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

