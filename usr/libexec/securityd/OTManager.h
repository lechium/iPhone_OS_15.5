//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKContainer, CKKSAccountStateTracker, CKKSLockStateTracker, CKKSReachabilityTracker, CKKSViewManager, MISSING_TYPE, NSMutableDictionary, NSString, NSXPCListener, OTRamp;
@protocol NSXPCProxyCreating, OS_dispatch_queue, OTAuthKitAdapter, OTDeviceInformationAdapter, OTPersonaAdapter, OTSOSAdapter, OTTooManyPeersAdapter, OctagonFollowUpControllerProtocol;

__attribute__((visibility("hidden")))
@interface OTManager : NSObject
{
    _Bool _sosEnabledForPlatform;	// 8 = 0x8
    id <NSXPCProxyCreating> _cuttlefishXPCConnection;	// 16 = 0x10
    id <OTSOSAdapter> _sosAdapter;	// 24 = 0x18
    id <OTAuthKitAdapter> _authKitAdapter;	// 32 = 0x20
    id <OTDeviceInformationAdapter> _deviceInformationAdapter;	// 40 = 0x28
    CKKSLockStateTracker *_lockStateTracker;	// 48 = 0x30
    CKKSAccountStateTracker *_accountStateTracker;	// 56 = 0x38
    CKKSReachabilityTracker *_reachabilityTracker;	// 64 = 0x40
    CKContainer *_cloudKitContainer;	// 72 = 0x48
    CKKSViewManager *_viewManager;	// 80 = 0x50
    NSXPCListener *_listener;	// 88 = 0x58
    OTRamp *_gbmidRamp;	// 96 = 0x60
    OTRamp *_gbserialRamp;	// 104 = 0x68
    OTRamp *_gbAgeRamp;	// 112 = 0x70
    id <OctagonFollowUpControllerProtocol> _cdpd;	// 120 = 0x78
    NSMutableDictionary *_contexts;	// 128 = 0x80
    NSMutableDictionary *_clients;	// 136 = 0x88
    NSObject<OS_dispatch_queue> *_queue;	// 144 = 0x90
    id <OTTooManyPeersAdapter> _tooManyPeersAdapter;	// 152 = 0x98
    id <OTPersonaAdapter> _personaAdapter;	// 160 = 0xa0
    Class _apsConnectionClass;	// 168 = 0xa8
    Class _escrowRequestClass;	// 176 = 0xb0
    Class _notifierClass;	// 184 = 0xb8
    Class _loggerClass;	// 192 = 0xc0
}

+ (id)makeCKContainer:(id)arg1;	// IMP=0x0020000000058d63
+ (id)resetManager:(_Bool)arg1 to:(id)arg2;	// IMP=0x0010000000058c79
+ (id)manager;	// IMP=0x0010000000058bdb
- (void).cxx_destruct;	// IMP=0x0020000000054625
@property(nonatomic) _Bool sosEnabledForPlatform; // @synthesize sosEnabledForPlatform=_sosEnabledForPlatform;
@property(readonly) Class loggerClass; // @synthesize loggerClass=_loggerClass;
@property(readonly) Class notifierClass; // @synthesize notifierClass=_notifierClass;
@property(readonly) Class escrowRequestClass; // @synthesize escrowRequestClass=_escrowRequestClass;
@property(readonly) Class apsConnectionClass; // @synthesize apsConnectionClass=_apsConnectionClass;
@property(readonly) id <OTPersonaAdapter> personaAdapter; // @synthesize personaAdapter=_personaAdapter;
@property(readonly) id <OTTooManyPeersAdapter> tooManyPeersAdapter; // @synthesize tooManyPeersAdapter=_tooManyPeersAdapter;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain) NSMutableDictionary *clients; // @synthesize clients=_clients;
@property(retain) NSMutableDictionary *contexts; // @synthesize contexts=_contexts;
@property(retain, nonatomic) id <OctagonFollowUpControllerProtocol> cdpd; // @synthesize cdpd=_cdpd;
@property(retain, nonatomic) OTRamp *gbAgeRamp; // @synthesize gbAgeRamp=_gbAgeRamp;
@property(retain, nonatomic) OTRamp *gbserialRamp; // @synthesize gbserialRamp=_gbserialRamp;
@property(retain, nonatomic) OTRamp *gbmidRamp; // @synthesize gbmidRamp=_gbmidRamp;
@property(retain) NSXPCListener *listener; // @synthesize listener=_listener;
@property(retain) CKKSViewManager *viewManager; // @synthesize viewManager=_viewManager;
@property(readonly) CKContainer *cloudKitContainer; // @synthesize cloudKitContainer=_cloudKitContainer;
@property(retain) CKKSReachabilityTracker *reachabilityTracker; // @synthesize reachabilityTracker=_reachabilityTracker;
@property(retain) CKKSAccountStateTracker *accountStateTracker; // @synthesize accountStateTracker=_accountStateTracker;
@property(retain, nonatomic) CKKSLockStateTracker *lockStateTracker; // @synthesize lockStateTracker=_lockStateTracker;
@property(readonly) id <OTDeviceInformationAdapter> deviceInformationAdapter; // @synthesize deviceInformationAdapter=_deviceInformationAdapter;
@property(readonly) id <OTAuthKitAdapter> authKitAdapter; // @synthesize authKitAdapter=_authKitAdapter;
@property(readonly) id <OTSOSAdapter> sosAdapter; // @synthesize sosAdapter=_sosAdapter;
- (void)tlkRecoverabilityForEscrowRecordData:(id)arg1 contextID:(id)arg2 recordData:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0010000000054195
- (void)persistAccountSettings:(id)arg1 context:(id)arg2 setting:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0010000000053f5f
- (void)fetchAccountWideSettings:(id)arg1 contextID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000053d44
- (void)fetchAccountSettings:(id)arg1 contextID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000053b29
- (void)fetchTrustedSecureElementIdentities:(id)arg1 contextID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000005390e
- (void)removeLocalSecureElementIdentityPeerID:(id)arg1 contextID:(id)arg2 secureElementIdentityPeerID:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00100000000536d8
- (void)setLocalSecureElementIdentity:(id)arg1 contextID:(id)arg2 secureElementIdentity:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00100000000534a2
- (void)resetAccountCDPContents:(id)arg1 contextID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000005324e
- (void)fetchUserControllableViewsSyncStatus:(id)arg1 contextID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000052ff6
- (void)setUserControllableViewsSyncStatus:(id)arg1 contextID:(id)arg2 enabled:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0010000000052d94
- (void)invalidateEscrowCache:(id)arg1 contextID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000052abf
- (void)fetchEscrowRecords:(id)arg1 contextID:(id)arg2 forceFetch:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00100000000527e1
- (void)setCDPEnabled:(id)arg1 contextID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000052537
- (void)getCDPStatus:(id)arg1 contextID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000005227b
- (void)refetchCKKSPolicy:(id)arg1 contextID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000051fa6
- (void)tapToRadar:(id)arg1 description:(id)arg2 radar:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0010000000051ee2
- (void)postCDPFollowupResult:(_Bool)arg1 type:(id)arg2 error:(id)arg3 containerName:(id)arg4 contextName:(id)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x0010000000051cc8
- (void)waitForPriorityViewKeychainDataRecovery:(id)arg1 contextID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000051a06
- (void)waitForOctagonUpgrade:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000517c7
- (_Bool)allContextsPause:(unsigned long long)arg1;	// IMP=0x00100000000514f0
- (void)allContextsDisablePendingFlags;	// IMP=0x0010000000051350
- (void)allContextsHalt;	// IMP=0x0010000000051185
- (void)setSOSEnabledForPlatformFlag:(_Bool)arg1;	// IMP=0x0010000000051173
- (void)healthCheck:(id)arg1 context:(id)arg2 skipRateLimitingCheck:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0010000000050f31
- (void)xpc24HrNotification;	// IMP=0x0010000000050e9c
- (void)removeInheritanceKey:(id)arg1 contextID:(id)arg2 uuid:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0010000000050a75
- (void)preflightJoinWithInheritanceKey:(id)arg1 contextID:(id)arg2 inheritanceKey:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000005082a
- (void)joinWithInheritanceKey:(id)arg1 contextID:(id)arg2 inheritanceKey:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00100000000504ef
- (void)storeInheritanceKey:(id)arg1 contextID:(id)arg2 ik:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00100000000500d6
- (void)generateInheritanceKey:(id)arg1 contextID:(id)arg2 uuid:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000004fcb9
- (void)createInheritanceKey:(id)arg1 contextID:(id)arg2 uuid:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000004f89c
- (void)removeCustodianRecoveryKey:(id)arg1 contextID:(id)arg2 uuid:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000004f475
- (void)preflightJoinWithCustodianRecoveryKey:(id)arg1 contextID:(id)arg2 custodianRecoveryKey:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000004f22a
- (void)joinWithCustodianRecoveryKey:(id)arg1 contextID:(id)arg2 custodianRecoveryKey:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000004ef17
- (void)createCustodianRecoveryKey:(id)arg1 contextID:(id)arg2 uuid:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000004eafa
- (void)joinWithRecoveryKey:(id)arg1 contextID:(id)arg2 recoveryKey:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000004e675
- (void)createRecoveryKey:(id)arg1 contextID:(id)arg2 recoveryKey:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000004e105
- (id)cdpContextTypes;	// IMP=0x001000000004e0d5
- (void)setupAnalytics;	// IMP=0x001000000004df35
- (_Bool)ghostbustByAgeEnabled;	// IMP=0x001000000004dedf
- (_Bool)ghostbustBySerialEnabled;	// IMP=0x001000000004de89
- (MISSING_TYPE *)ghostbustByMidEnabled;	// IMP=0x001000000004de33
- (void)restore:(id)arg1 contextID:(id)arg2 bottleSalt:(id)arg3 entropy:(id)arg4 bottleID:(id)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x001000000004dae8
- (void)rpcVoucherWithConfiguration:(id)arg1 peerID:(id)arg2 permanentInfo:(id)arg3 permanentInfoSig:(id)arg4 stableInfo:(id)arg5 stableInfoSig:(id)arg6 reply:(CDUnknownBlockType)arg7;	// IMP=0x001000000004d719
- (void)rpcEpochWithConfiguration:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000004d3ea
- (void)rpcJoinWithConfiguration:(id)arg1 vouchData:(id)arg2 vouchSig:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000004d26a
- (void)rpcPrepareIdentityAsApplicantWithConfiguration:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000004cfc7
- (void)fetchEscrowContents:(id)arg1 contextID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000004cd68
- (void)fetchAllViableBottles:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000004cb0b
- (void)peerDeviceNamesByPeerID:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000004c978
- (void)removeFriendsInClique:(id)arg1 context:(id)arg2 peerIDs:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000004c6dd
- (void)leaveClique:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000004c476
- (void)establish:(id)arg1 context:(id)arg2 altDSID:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000004c1db
- (void)resetAndEstablish:(id)arg1 context:(id)arg2 altDSID:(id)arg3 resetReason:(long long)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x001000000004bf67
- (void)startOctagonStateMachine:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000004bd7c
- (void)status:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000004b9ca
- (void)fetchCliqueStatus:(id)arg1 context:(id)arg2 configuration:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000004b5db
- (void)fetchTrustStatus:(id)arg1 context:(id)arg2 configuration:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000004b33c
- (void)fetchEgoPeerID:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000004b0ce
- (void)clearAllContexts;	// IMP=0x001000000004b034
- (id)contextForContainerName:(id)arg1 contextID:(id)arg2 sosAdapter:(id)arg3 authKitAdapter:(id)arg4 tooManyPeersAdapter:(id)arg5 lockStateTracker:(id)arg6 accountStateTracker:(id)arg7 deviceInformationAdapter:(id)arg8;	// IMP=0x001000000004ad72
- (id)contextForContainerName:(id)arg1 contextID:(id)arg2;	// IMP=0x001000000004ac26
- (void)removeContextForContainerName:(id)arg1 contextID:(id)arg2;	// IMP=0x001000000004ab49
- (void)removeClientContextForContainerName:(id)arg1 clientName:(id)arg2;	// IMP=0x001000000004aa4b
- (id)clientStateMachineForContainerName:(id)arg1 contextID:(id)arg2 clientName:(id)arg3;	// IMP=0x001000000004a894
@property(retain) id <NSXPCProxyCreating> cuttlefishXPCConnection; // @synthesize cuttlefishXPCConnection=_cuttlefishXPCConnection;
- (void)octagonSigningPublicKey:(CDUnknownBlockType)arg1;	// IMP=0x00100000000496f0
- (void)octagonEncryptionPublicKey:(CDUnknownBlockType)arg1;	// IMP=0x0010000000049668
- (void)listOfEligibleBottledPeerRecords:(CDUnknownBlockType)arg1;	// IMP=0x00100000000495db
- (void)reset:(CDUnknownBlockType)arg1;	// IMP=0x0010000000049553
- (void)scrubBottledPeer:(id)arg1 bottleID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000494cd
- (void)restore:(id)arg1 dsid:(id)arg2 secret:(id)arg3 escrowRecordID:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x0010000000049404
- (void)launchBottledPeer:(id)arg1 bottleID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000049340
- (void)preflightBottledPeer:(id)arg1 dsid:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000004920f
- (void)handleIdentityChangeForSigningKey:(id)arg1 ForEncryptionKey:(id)arg2 ForPeerID:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0010000000049104
- (void)notifyIDMSTrustLevelChangeForContainer:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000048eba
- (void)signOut:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000048b86
- (void)signIn:(id)arg1 container:(id)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000004888f
- (_Bool)allowClientRPC:(id *)arg1;	// IMP=0x00100000000487a1
- (void)ensureRampsInitialized;	// IMP=0x001000000004844c
- (void)registerForCircleChangedNotifications;	// IMP=0x0010000000048362
- (void)moveToCheckTrustedStateForContainer:(id)arg1 context:(id)arg2;	// IMP=0x0010000000048318
- (_Bool)waitForReady:(id)arg1 context:(id)arg2 wait:(long long)arg3;	// IMP=0x00100000000482c5
- (void)initializeOctagon;	// IMP=0x00100000000481a9
- (id)initWithSOSAdapter:(id)arg1 lockStateTracker:(id)arg2 personaAdapter:(id)arg3 cloudKitClassDependencies:(id)arg4;	// IMP=0x0010000000047fc9
- (id)initWithSOSAdapter:(id)arg1 authKitAdapter:(id)arg2 tooManyPeersAdapter:(id)arg3 deviceInformationAdapter:(id)arg4 personaAdapter:(id)arg5 apsConnectionClass:(Class)arg6 escrowRequestClass:(Class)arg7 notifierClass:(Class)arg8 loggerClass:(Class)arg9 lockStateTracker:(id)arg10 reachabilityTracker:(id)arg11 cloudKitClassDependencies:(id)arg12 cuttlefishXPCConnection:(id)arg13 cdpd:(id)arg14;	// IMP=0x0010000000047ba9
- (id)init;	// IMP=0x00100000000479b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
