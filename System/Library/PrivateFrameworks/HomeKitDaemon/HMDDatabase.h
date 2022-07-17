//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMBCloudDatabaseDelegate-Protocol.h>
#import <HomeKitDaemon/HMBLocalDatabaseDelegate-Protocol.h>
#import <HomeKitDaemon/HMDDatabase-Protocol.h>
#import <HomeKitDaemon/HMDDatabaseZoneDelegate-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMBCloudDatabase, HMBLocalDatabase, HMFUnfairLock, NSHashTable, NSMapTable, NSString;
@protocol HMMLogEventSubmitting;

@interface HMDDatabase : HMFObject <HMBLocalDatabaseDelegate, HMBCloudDatabaseDelegate, HMDDatabaseZoneDelegate, HMFLogging, HMDDatabase>
{
    _Bool _hasStarted;	// 8 = 0x8
    HMBLocalDatabase *_localDatabase;	// 16 = 0x10
    HMBCloudDatabase *_cloudDatabase;	// 24 = 0x18
    NSHashTable *_delegates;	// 32 = 0x20
    NSMapTable *_zoneDelegatesByLocalZone;	// 40 = 0x28
    HMFUnfairLock *_lock;	// 48 = 0x30
    id <HMMLogEventSubmitting> _logEventSubmitter;	// 56 = 0x38
}

+ (id)logCategory;	// IMP=0x000000000064887b
+ (id)cameraClipsDatabase;	// IMP=0x0000000000648818
+ (id)defaultDatabase;	// IMP=0x00000000006487b5
+ (void)registerQueries;	// IMP=0x000000000064875d
+ (id)defaultLocalDatabaseFileURL;	// IMP=0x00000000006486d7
- (void).cxx_destruct;	// IMP=0x0000000000647a0b
@property _Bool hasStarted; // @synthesize hasStarted=_hasStarted;
@property(readonly) id <HMMLogEventSubmitting> logEventSubmitter; // @synthesize logEventSubmitter=_logEventSubmitter;
@property(readonly) HMFUnfairLock *lock; // @synthesize lock=_lock;
@property(readonly) HMBCloudDatabase *cloudDatabase; // @synthesize cloudDatabase=_cloudDatabase;
@property(readonly) HMBLocalDatabase *localDatabase; // @synthesize localDatabase=_localDatabase;
- (id)logIdentifier;	// IMP=0x0000000000647917
- (void)cloudZone:(id)arg1 didChangeRebuildStatus:(id)arg2;	// IMP=0x000000000064781f
- (void)cloudZone:(id)arg1 didRemoveParticipantWithClientIdentifier:(id)arg2;	// IMP=0x000000000064773c
- (void)localZone:(id)arg1 didCompleteProcessingWithResult:(id)arg2;	// IMP=0x000000000064767c
- (void)cloudDatabase:(id)arg1 encounteredError:(id)arg2 withOperation:(id)arg3 onContainer:(id)arg4;	// IMP=0x000000000064759e
- (void)cloudDatabase:(id)arg1 encounteredError:(id)arg2 withOperation:(id)arg3 onZone:(id)arg4;	// IMP=0x00000000006474ed
- (void)cloudDatabase:(id)arg1 didReceiveMessageWithUserInfo:(id)arg2;	// IMP=0x0000000000647376
- (void)cloudDatabase:(id)arg1 didRemoveZoneWithID:(id)arg2;	// IMP=0x00000000006471ff
- (id)cloudDatabase:(id)arg1 willRemoveZoneWithID:(id)arg2;	// IMP=0x0000000000647022
- (void)cloudDatabase:(id)arg1 didCreateZoneWithID:(id)arg2;	// IMP=0x0000000000646eab
- (void)localDatabase:(id)arg1 willRemoveZoneWithID:(id)arg2;	// IMP=0x0000000000646d99
- (void)localDatabase:(id)arg1 detectedLocalCorruptionWithInfo:(id)arg2;	// IMP=0x0000000000646c87
- (_Bool)localDatabaseShouldLogPrivateInformation:(id)arg1;	// IMP=0x0000000000646c7d
- (id)mergedActionFutureForActionFutures:(id)arg1;	// IMP=0x0000000000646b23
- (void)performZoneDelegateCallback:(CDUnknownBlockType)arg1 forLocalZone:(id)arg2;	// IMP=0x00000000006468a1
- (void)removeZoneDelegate:(id)arg1 forLocalZone:(id)arg2;	// IMP=0x000000000064678e
- (void)addZoneDelegate:(id)arg1 forLocalZone:(id)arg2;	// IMP=0x000000000064667b
@property(readonly) NSMapTable *zoneDelegatesByLocalZone; // @synthesize zoneDelegatesByLocalZone=_zoneDelegatesByLocalZone;
- (void)performDelegateCallback:(CDUnknownBlockType)arg1;	// IMP=0x00000000006463d8
@property(readonly) NSHashTable *delegates; // @synthesize delegates=_delegates;
- (id)removeZonesWithID:(id)arg1 isPrivate:(_Bool)arg2;	// IMP=0x0000000000645e9b
- (id)zonesWithID:(id)arg1 isPrivate:(_Bool)arg2 shouldCreate:(_Bool)arg3 configuration:(id)arg4 delegate:(id)arg5 error:(id *)arg6;	// IMP=0x0000000000645981
- (id)acceptInvitation:(id)arg1;	// IMP=0x000000000064583e
- (id)removeLocalAndCloudDataForLocalZone:(id)arg1;	// IMP=0x0000000000645696
- (id)removeSharedZonesWithName:(id)arg1;	// IMP=0x0000000000645470
- (id)removePrivateZonesWithName:(id)arg1;	// IMP=0x0000000000645320
- (id)sharedZonesWithID:(id)arg1 configuration:(id)arg2 delegate:(id)arg3 error:(id *)arg4;	// IMP=0x000000000064518b
- (id)existingSharedZoneIDWithName:(id)arg1;	// IMP=0x0000000000644ea7
- (id)privateZonesWithName:(id)arg1 configuration:(id)arg2 delegate:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000644cfd
- (id)existingPrivateZonesWithName:(id)arg1 configuration:(id)arg2 delegate:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000644b56
- (id)unregisterSharedSubscriptionForExternalRecordType:(id)arg1;	// IMP=0x0000000000644a13
- (id)registerSharedSubscriptionForExternalRecordType:(id)arg1;	// IMP=0x00000000006448d0
- (void)start;	// IMP=0x000000000064465b
- (void)removeDelegate:(id)arg1;	// IMP=0x000000000064456d
- (void)addDelegate:(id)arg1;	// IMP=0x000000000064447f
- (id)initWithLocalDatabase:(id)arg1 cloudDatabase:(id)arg2 logEventSubmitter:(id)arg3;	// IMP=0x00000000006442eb
- (id)initWithFileURL:(id)arg1 cloudContainerIdentifier:(id)arg2 cloudContainerSourceApplicationBundleIdentifier:(id)arg3;	// IMP=0x0000000000643ef4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
