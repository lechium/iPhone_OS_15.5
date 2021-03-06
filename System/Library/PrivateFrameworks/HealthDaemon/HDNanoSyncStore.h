//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDSyncStore-Protocol.h>
#import <HealthDaemon/NRDevicePropertyObserver-Protocol.h>

@class HDNanoPairingEntity, HDNanoSyncRestoreSession, HDProfile, HKNanoSyncPairedDeviceInfo, IDSDevice, NRDevice, NSArray, NSDate, NSError, NSMutableArray, NSMutableDictionary, NSSet, NSString, NSUUID;
@protocol HDNanoSyncStoreDelegate;

@interface HDNanoSyncStore : NSObject <NRDevicePropertyObserver, HDSyncStore>
{
    HDProfile *_profile;	// 8 = 0x8
    NSString *_remoteSystemBuildVersion;	// 16 = 0x10
    NSString *_remoteProductType;	// 24 = 0x18
    HDNanoPairingEntity *_pairingEntity;	// 32 = 0x20
    NSMutableDictionary *_pendingRequestContexts;	// 40 = 0x28
    int _protocolVersion;	// 48 = 0x30
    _Bool _active;	// 52 = 0x34
    _Bool _invalidated;	// 53 = 0x35
    NSMutableArray *_incomingSyncObserverTimers;	// 56 = 0x38
    NSUUID *_lastIncompleteIncomingSyncUUID;	// 64 = 0x40
    NSDate *_lastIncompleteIncomingSyncDate;	// 72 = 0x48
    NSDate *_lastCompleteIncomingSyncDate;	// 80 = 0x50
    NSError *_lastCompleteIncomingSyncError;	// 88 = 0x58
    NSMutableDictionary *_expectedSequenceNumbers;	// 96 = 0x60
    NSArray *_orderedSyncEntities;	// 104 = 0x68
    _Bool _isTinkerPairing;	// 112 = 0x70
    _Bool _master;	// 113 = 0x71
    _Bool _needsSyncOnUnlock;	// 114 = 0x72
    IDSDevice *_identityServicesDevice;	// 120 = 0x78
    NRDevice *_nanoRegistryDevice;	// 128 = 0x80
    id <HDNanoSyncStoreDelegate> _delegate;	// 136 = 0x88
    long long _restoreState;	// 144 = 0x90
    HDNanoSyncRestoreSession *_restoreSession;	// 152 = 0x98
    NSSet *_obliteratedDatabaseUUIDs;	// 160 = 0xa0
}

+ (id)orderedSyncEntitiesForProfile:(id)arg1 protocolVersion:(int)arg2 companion:(_Bool)arg3;	// IMP=0x000000000067ca24
+ (id)nanoSyncStoreWithProfile:(id)arg1 device:(id)arg2 delegate:(id)arg3 tinkerPaired:(_Bool)arg4;	// IMP=0x000000000067a216
- (void).cxx_destruct;	// IMP=0x000000000067d40e
@property(nonatomic) _Bool needsSyncOnUnlock; // @synthesize needsSyncOnUnlock=_needsSyncOnUnlock;
@property(readonly, copy, nonatomic) NSSet *obliteratedDatabaseUUIDs; // @synthesize obliteratedDatabaseUUIDs=_obliteratedDatabaseUUIDs;
@property(readonly, nonatomic) HDNanoSyncRestoreSession *restoreSession; // @synthesize restoreSession=_restoreSession;
@property(readonly, nonatomic) long long restoreState; // @synthesize restoreState=_restoreState;
@property(nonatomic) __weak id <HDNanoSyncStoreDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, getter=isMaster) _Bool master; // @synthesize master=_master;
- (id)diagnosticDescription;	// IMP=0x000000000067cdb6
@property(readonly, copy) NSString *description;
- (void)device:(id)arg1 propertyDidChange:(id)arg2 fromValue:(id)arg3;	// IMP=0x000000000067cc7d
- (void)setExpectedSequenceNumber:(long long)arg1 forSyncEntityClass:(Class)arg2;	// IMP=0x000000000007fcce
- (long long)expectedSequenceNumberForSyncEntityClass:(Class)arg1;	// IMP=0x000000000007c69a
- (_Bool)shouldEnforceSequenceOrdering;	// IMP=0x000000000007c692
- (_Bool)shouldContinueAfterAnchorValidationError:(id)arg1;	// IMP=0x000000000067cc75
- (_Bool)supportsSpeculativeChangesForSyncEntityClass:(Class)arg1;	// IMP=0x000000000067cc3e
- (id)syncEntityDependenciesForSyncEntity:(Class)arg1;	// IMP=0x0000000000046cfc
- (_Bool)canRecieveSyncObjectsForEntityClass:(Class)arg1;	// IMP=0x000000000067ca1c
- (_Bool)enforceSyncEntityOrdering;	// IMP=0x0000000000046c1f
- (id)orderedSyncEntities;	// IMP=0x0000000000046c27
- (id)syncStoreDefaultSourceBundleIdentifier;	// IMP=0x000000000007e663
- (id)databaseIdentifier;	// IMP=0x000000000067c9c7
- (id)syncStoreIdentifier;	// IMP=0x000000000001e633
- (long long)syncEpoch;	// IMP=0x000000000067c9bf
- (long long)syncProvenance;	// IMP=0x0000000000047094
- (_Bool)validatePairingUUIDsWithIncomingMessage:(id)arg1;	// IMP=0x0000000000055107
- (void)removeExpiredIncomingSyncObservers;	// IMP=0x000000000067c759
- (void)addIncomingSyncObserverWithTimeout:(double)arg1 timeoutHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000067c447
- (void)didReceiveRequestWithChangeSet:(id)arg1;	// IMP=0x0000000000067ed4
- (void)removePendingRequestContextForUUID:(id)arg1;	// IMP=0x000000000067c431
- (id)pendingRequestContextForUUID:(id)arg1;	// IMP=0x000000000067c41b
- (void)addPendingRequestContext:(id)arg1 forUUID:(id)arg2;	// IMP=0x000000000067c405
- (void)configureOutgoingResponse:(id)arg1;	// IMP=0x0000000000068f7a
- (id)createRequestWithMessageID:(unsigned short)arg1;	// IMP=0x0000000000048dd0
- (_Bool)resetProvenanceWithError:(id *)arg1;	// IMP=0x000000000067c38a
@property(readonly, nonatomic, getter=isRestoreComplete) _Bool restoreComplete;
- (void)finishRestoreSessionWithError:(id)arg1;	// IMP=0x000000000067c32e
- (id)beginRestoreSessionWithUUID:(id)arg1 timeout:(double)arg2 timeoutHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000067bfeb
@property(copy, nonatomic) NSUUID *persistentUUID;
@property(copy, nonatomic) NSUUID *healthUUID;
@property(readonly, getter=isAltAccount) _Bool altAccount;
@property(readonly, getter=isActive) _Bool active;
@property(readonly) long long syncStoreType;
@property(readonly) int protocolVersion;
@property(readonly) NSDate *lastInactiveDate;
@property(readonly, copy) NSString *deviceName;
@property(readonly, copy) NSString *sourceBundleIdentifier;
@property(readonly, copy) NSString *remoteProductType;
@property(readonly, copy) NSString *remoteSystemBuildVersion;
@property(readonly) NSUUID *nanoRegistryUUID;
@property(readonly) IDSDevice *device;
@property(readonly, copy) HKNanoSyncPairedDeviceInfo *deviceInfo;
- (id)profile;	// IMP=0x000000000067bca0
- (void)prepareForObliteration;	// IMP=0x000000000067baf6
@property(readonly, getter=isInvalidated) _Bool invalidated;
- (void)invalidate;	// IMP=0x000000000067b83e
- (id)nanoSyncStoreForProtocolVersion:(int)arg1;	// IMP=0x000000000067b786
- (void)dealloc;	// IMP=0x000000000067a167

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

