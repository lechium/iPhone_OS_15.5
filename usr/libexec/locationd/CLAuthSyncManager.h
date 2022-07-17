//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class CLSettingsMirror, IDSService, MISSING_TYPE, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, NSUUID, PSYServiceSyncSession, PSYSyncCoordinator, SYService;
@protocol CLClientManagerPublicProtocol;

@interface CLAuthSyncManager : CLIntersiloService
{
    _Bool _shouldConfirmHandlingPairingNotification;	// 8 = 0x8
    MISSING_TYPE *_shouldConfirmHandlingQuickSwitchNotification;	// 9 = 0x9
    _Bool _shouldSendMoreDataInCurrentSyncSession;	// 10 = 0xa
    _Bool _resetRecoveryMode;	// 11 = 0xb
    _Bool _recoverySyncInProgress;	// 12 = 0xc
    _Bool _isThereAWatch;	// 13 = 0xd
    _Bool _isCorrectiveCompensationSupported;	// 14 = 0xe
    _Bool _isDeviceNearbyAndConnected;	// 15 = 0xf
    _Bool _isQuickSwitchModeOn;	// 16 = 0x10
    _Bool _isConflictResolutionMode;	// 17 = 0x11
    _Bool _currentSyncSessionCollidedWithResetSync;	// 18 = 0x12
    _Bool _isQuickSwitchInProgress;	// 19 = 0x13
    unsigned int _watchProductVersion;	// 20 = 0x14
    id <CLClientManagerPublicProtocol> _clientManager;	// 24 = 0x18
    NSString *_fullPathForSyncState;	// 32 = 0x20
    SYService *_syncService;	// 40 = 0x28
    IDSService *_idsService;	// 48 = 0x30
    NSMutableArray *_fullSyncObjectsInCompanionQueue;	// 56 = 0x38
    NSMutableArray *_fullSyncObjectsInGizmoQueue;	// 64 = 0x40
    NSMutableArray *_deltaSyncObjectsInCompanionQueue;	// 72 = 0x48
    NSMutableArray *_deltaSyncObjectsInGizmoQueue;	// 80 = 0x50
    NSMutableArray *_gizmoDeltaSyncObjects;	// 88 = 0x58
    NSMutableArray *_gizmoDeltaSyncObjectsWaitingForAck;	// 96 = 0x60
    NSMutableArray *_notificationsInCompanionQueue;	// 104 = 0x68
    NSMutableArray *_notificationsInGizmoQueue;	// 112 = 0x70
    NSDictionary *_preDaytonaMapping;	// 120 = 0x78
    NSUUID *_activePairingID;	// 128 = 0x80
    NSUUID *_pairedDeviceUUID;	// 136 = 0x88
    NSMutableDictionary *_authSyncStoreState;	// 144 = 0x90
    NSMutableArray *_fullSyncClientsList;	// 152 = 0x98
    NSMutableDictionary *_reunionSyncListPaths;	// 160 = 0xa0
    NSMutableDictionary *_reunionSyncLists;	// 168 = 0xa8
    double _syncSessionRetryInterval;	// 176 = 0xb0
    long long _numberOfConsecutiveSyncSessionRetries;	// 184 = 0xb8
    PSYServiceSyncSession *_activeWatchSyncSession;	// 192 = 0xc0
    PSYSyncCoordinator *_syncCoordinator;	// 200 = 0xc8
    CLSettingsMirror *_settings;	// 208 = 0xd0
    unsigned long long _syncRestriction;	// 216 = 0xd8
}

+ (_Bool)isSupported;	// IMP=0x00200000003a4254
+ (id)getSilo;	// IMP=0x00100000003a41f8
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000003a41df
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000003a4182
@property(nonatomic) unsigned long long syncRestriction; // @synthesize syncRestriction=_syncRestriction;
@property(retain, nonatomic) CLSettingsMirror *settings; // @synthesize settings=_settings;
@property(retain, nonatomic) PSYSyncCoordinator *syncCoordinator; // @synthesize syncCoordinator=_syncCoordinator;
@property(retain, nonatomic) PSYServiceSyncSession *activeWatchSyncSession; // @synthesize activeWatchSyncSession=_activeWatchSyncSession;
@property(nonatomic) long long numberOfConsecutiveSyncSessionRetries; // @synthesize numberOfConsecutiveSyncSessionRetries=_numberOfConsecutiveSyncSessionRetries;
@property(nonatomic) double syncSessionRetryInterval; // @synthesize syncSessionRetryInterval=_syncSessionRetryInterval;
@property(nonatomic) _Bool isQuickSwitchInProgress; // @synthesize isQuickSwitchInProgress=_isQuickSwitchInProgress;
@property(retain, nonatomic) NSMutableDictionary *reunionSyncLists; // @synthesize reunionSyncLists=_reunionSyncLists;
@property(retain, nonatomic) NSMutableDictionary *reunionSyncListPaths; // @synthesize reunionSyncListPaths=_reunionSyncListPaths;
@property(retain, nonatomic) NSMutableArray *fullSyncClientsList; // @synthesize fullSyncClientsList=_fullSyncClientsList;
@property(retain, nonatomic) NSMutableDictionary *authSyncStoreState; // @synthesize authSyncStoreState=_authSyncStoreState;
@property(nonatomic) unsigned int watchProductVersion; // @synthesize watchProductVersion=_watchProductVersion;
@property(retain, nonatomic) NSUUID *pairedDeviceUUID; // @synthesize pairedDeviceUUID=_pairedDeviceUUID;
@property(retain, nonatomic) NSUUID *activePairingID; // @synthesize activePairingID=_activePairingID;
@property(nonatomic) _Bool currentSyncSessionCollidedWithResetSync; // @synthesize currentSyncSessionCollidedWithResetSync=_currentSyncSessionCollidedWithResetSync;
@property(nonatomic) _Bool isConflictResolutionMode; // @synthesize isConflictResolutionMode=_isConflictResolutionMode;
@property(nonatomic) _Bool isQuickSwitchModeOn; // @synthesize isQuickSwitchModeOn=_isQuickSwitchModeOn;
@property(nonatomic) _Bool isDeviceNearbyAndConnected; // @synthesize isDeviceNearbyAndConnected=_isDeviceNearbyAndConnected;
@property(nonatomic) _Bool isCorrectiveCompensationSupported; // @synthesize isCorrectiveCompensationSupported=_isCorrectiveCompensationSupported;
@property(nonatomic) _Bool isThereAWatch; // @synthesize isThereAWatch=_isThereAWatch;
@property(nonatomic) _Bool recoverySyncInProgress; // @synthesize recoverySyncInProgress=_recoverySyncInProgress;
@property(nonatomic) _Bool resetRecoveryMode; // @synthesize resetRecoveryMode=_resetRecoveryMode;
@property(nonatomic) _Bool shouldSendMoreDataInCurrentSyncSession; // @synthesize shouldSendMoreDataInCurrentSyncSession=_shouldSendMoreDataInCurrentSyncSession;
@property(nonatomic) _Bool shouldConfirmHandlingQuickSwitchNotification; // @synthesize shouldConfirmHandlingQuickSwitchNotification=_shouldConfirmHandlingQuickSwitchNotification;
@property(nonatomic) _Bool shouldConfirmHandlingPairingNotification; // @synthesize shouldConfirmHandlingPairingNotification=_shouldConfirmHandlingPairingNotification;
@property(retain, nonatomic) NSDictionary *preDaytonaMapping; // @synthesize preDaytonaMapping=_preDaytonaMapping;
@property(retain, nonatomic) NSMutableArray *notificationsInGizmoQueue; // @synthesize notificationsInGizmoQueue=_notificationsInGizmoQueue;
@property(retain, nonatomic) NSMutableArray *notificationsInCompanionQueue; // @synthesize notificationsInCompanionQueue=_notificationsInCompanionQueue;
@property(retain, nonatomic) NSMutableArray *gizmoDeltaSyncObjectsWaitingForAck; // @synthesize gizmoDeltaSyncObjectsWaitingForAck=_gizmoDeltaSyncObjectsWaitingForAck;
@property(retain, nonatomic) NSMutableArray *gizmoDeltaSyncObjects; // @synthesize gizmoDeltaSyncObjects=_gizmoDeltaSyncObjects;
@property(retain, nonatomic) NSMutableArray *deltaSyncObjectsInGizmoQueue; // @synthesize deltaSyncObjectsInGizmoQueue=_deltaSyncObjectsInGizmoQueue;
@property(retain, nonatomic) NSMutableArray *deltaSyncObjectsInCompanionQueue; // @synthesize deltaSyncObjectsInCompanionQueue=_deltaSyncObjectsInCompanionQueue;
@property(retain, nonatomic) NSMutableArray *fullSyncObjectsInGizmoQueue; // @synthesize fullSyncObjectsInGizmoQueue=_fullSyncObjectsInGizmoQueue;
@property(retain, nonatomic) NSMutableArray *fullSyncObjectsInCompanionQueue; // @synthesize fullSyncObjectsInCompanionQueue=_fullSyncObjectsInCompanionQueue;
@property(retain) IDSService *idsService; // @synthesize idsService=_idsService;
@property(retain, nonatomic) SYService *syncService; // @synthesize syncService=_syncService;
@property(retain, nonatomic) NSString *fullPathForSyncState; // @synthesize fullPathForSyncState=_fullPathForSyncState;
@property(retain, nonatomic) id <CLClientManagerPublicProtocol> clientManager; // @synthesize clientManager=_clientManager;
- (void)refreshSettings;	// IMP=0x00100000003b4573
- (void)supportsMigrationSync;	// IMP=0x00100000003b456d
- (void)syncCoordinatorDidChangeSyncRestriction:(id)arg1;	// IMP=0x00100000003b426e
- (void)syncCoordinator:(id)arg1 didInvalidateSyncSession:(id)arg2;	// IMP=0x00100000003b4055
- (void)syncCoordinator:(id)arg1 beginSyncSession:(id)arg2;	// IMP=0x00100000003b3bce
- (id)service:(id)arg1 willPreferSession:(id)arg2 overSession:(id)arg3;	// IMP=0x00100000003b3911
- (_Bool)syncSession:(id)arg1 resetDataStoreWithError:(id *)arg2;	// IMP=0x00100000003b38da
- (void)syncSession:(id)arg1 didEndWithError:(id)arg2;	// IMP=0x00100000003b3055
- (void)syncSession:(id)arg1 applyChanges:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000003b2bec
- (unsigned int)syncSession:(id)arg1 enqueueChanges:(CDUnknownBlockType)arg2 error:(id *)arg3;	// IMP=0x00100000003b19ff
- (void)service:(id)arg1 encounteredError:(id)arg2 context:(id)arg3;	// IMP=0x00100000003b190a
- (void)service:(id)arg1 sessionEnded:(id)arg2 error:(id)arg3;	// IMP=0x00100000003b168c
- (_Bool)service:(id)arg1 startSession:(id)arg2 error:(id *)arg3;	// IMP=0x00100000003b0c04
- (void)service:(id)arg1 didSwitchFromPairingID:(id)arg2 toPairingID:(id)arg3;	// IMP=0x00100000003b0530
- (void)service:(id)arg1 willSwitchFromPairingID:(id)arg2 toPairingID:(id)arg3;	// IMP=0x00100000003b0442
- (void)service:(id)arg1 nearbyDevicesChanged:(id)arg2;	// IMP=0x00100000003b0109
- (void)considerPerformingAForcedFullSync;	// IMP=0x00100000003afbdb
- (void)watchNeedsDeltaSync:(id)arg1;	// IMP=0x00100000003afa4f
- (void)watchNeedsFullSync:(id)arg1;	// IMP=0x00100000003af66d
- (void)deleteObject:(id)arg1 withSyncSessionReason:(id)arg2;	// IMP=0x00100000003af2de
- (void)addObject:(id)arg1 withSyncSessionReason:(id)arg2;	// IMP=0x00100000003aef12
- (void)sendNotification:(int)arg1;	// IMP=0x00100000003aeb58
- (void)sendGlobalAuthStatus:(int)arg1;	// IMP=0x00100000003ae70b
- (void)applyDeleteMessage:(id)arg1;	// IMP=0x00100000003ae567
- (void)applyUpdateMessage:(id)arg1;	// IMP=0x00100000003ae1ba
- (void)applyAddMessage:(id)arg1;	// IMP=0x00100000003ad281
- (void)applySyncMessage:(id)arg1;	// IMP=0x00100000003ad236
- (id)translatedKeyForSimulator:(id)arg1;	// IMP=0x00100000003ad22d
- (void)reunionSyncDidComplete:(id)arg1;	// IMP=0x00100000003ad10b
- (void)deltaSyncDidComplete:(id)arg1;	// IMP=0x00100000003aca85
- (void)fullSyncDidComplete;	// IMP=0x00100000003ac28a
- (void)handleError:(id)arg1 inSyncSession:(id)arg2;	// IMP=0x00100000003ab5db
- (void)updateRetrySyncInterval:(id)arg1;	// IMP=0x00100000003ab4a3
- (void)endPairedSyncSessionWithError:(id)arg1;	// IMP=0x00100000003ab396
- (_Bool)isResetNotificationQueued;	// IMP=0x00100000003ab2a1
- (id)getTranslatedGizmoKeyForCompanionClient:(id)arg1;	// IMP=0x00100000003ab160
- (void)translateCompanionSyncAuthObjectsInPlace:(id)arg1;	// IMP=0x00100000003aae46
- (id)migrationSyncResetVersionNumbersNotification;	// IMP=0x00100000003aadbe
- (id)resetAsNotifcation;	// IMP=0x00100000003aad39
- (id)locationServicesToggleAsNotification;	// IMP=0x00100000003aaaec
- (id)getFullSyncObjects;	// IMP=0x00100000003aa67c
- (_Bool)shouldSendResetNotificationDuringMigrationSyncIgnoringCache:(_Bool)arg1;	// IMP=0x00100000003aa54b
- (void)prepareToDoMigrationSync;	// IMP=0x00100000003aa40f
- (void)prepareToDoReunionSync;	// IMP=0x00100000003aa1b6
- (void)prepareToDoFullSync;	// IMP=0x00100000003aa01d
- (void)handleUnpairing;	// IMP=0x00100000003a9f23
- (void)handlePairing;	// IMP=0x00100000003a9db0
- (void)handleZeroActiveWatch;	// IMP=0x00100000003a9bdb
- (void)updateActivePairedDeviceInfo;	// IMP=0x00100000003a98ae
- (void)checkResetNotificationStatus;	// IMP=0x00100000003a9126
- (void)checkAllNotificationStatuses;	// IMP=0x00100000003a9114
- (void)checkSyncStoreStateAftreRestrictionChange;	// IMP=0x00100000003a906f
- (void)checkSyncStoreStateAfterQuickSwitch;	// IMP=0x00100000003a9003
- (void)checkSyncStoreStateAfterBoot;	// IMP=0x00100000003a8edb
- (void)checkSyncStoreStateWhenDevicesConnectAfterDisconnection;	// IMP=0x00100000003a88dc
- (void)checkSyncStoreStateOnCompanion;	// IMP=0x00100000003a82fd
- (void)checkSyncStoreState;	// IMP=0x00100000003a812d
- (void)resetSyncStateKeysRetainingResetKeys:(_Bool)arg1;	// IMP=0x00100000003a7e48
- (void)updateSyncStoreStateForVersionedKey:(id)arg1 withUpdateReason:(id)arg2;	// IMP=0x00100000003a78e0
- (void)updateSyncStoreState:(id)arg1;	// IMP=0x00100000003a7657
- (void)createSyncStoreState;	// IMP=0x00100000003a6e6c
- (void)clearReunionSyncList;	// IMP=0x00100000003a6cb5
- (void)syncReunionSyncList;	// IMP=0x00100000003a671e
- (void)updateReunionSyncListsWithAuthSyncMessageKey:(id)arg1;	// IMP=0x00100000003a602e
- (void)updateQuickSwitchMode;	// IMP=0x00100000003a5875
- (void)handleQuickSwitch;	// IMP=0x00100000003a55cc
- (void)watchMigrationDidEnd;	// IMP=0x00100000003a53e8
- (void)watchMigrationDidStart;	// IMP=0x00100000003a52f4
- (void)deviceDidChangeCapabilitiesDarwinNotification;	// IMP=0x00100000003a51c4
- (void)deviceDidUnpairNotification:(id)arg1;	// IMP=0x00100000003a51b2
- (void)deviceDidPairNotification:(id)arg1;	// IMP=0x00100000003a51a0
- (_Bool)isWatchBuildVersionPriorTo:(unsigned int)arg1;	// IMP=0x00100000003a508d
@property(nonatomic, getter=isPairedSyncSessionActive, setter=setPairedSyncSessionActive:) _Bool pairedSyncSessionActive;
- (void)endService;	// IMP=0x00100000003a4d90
- (void)beginService;	// IMP=0x00100000003a463e
- (void)setSilo:(id)arg1;	// IMP=0x00100000003a4322
- (id)init;	// IMP=0x00100000003a42e5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
