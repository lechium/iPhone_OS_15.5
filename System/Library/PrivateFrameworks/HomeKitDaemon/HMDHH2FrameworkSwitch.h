//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMBCloudDatabaseDelegate-Protocol.h>
#import <HomeKitDaemon/HMBCloudZoneDelegate-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class CKContainer, HMBCloudDatabase, HMDHomeManager, HMFUnfairLock, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HMDHH2FrameworkSwitch : HMFObject <HMFLogging, HMBCloudDatabaseDelegate, HMBCloudZoneDelegate>
{
    HMFUnfairLock *_lock;	// 8 = 0x8
    _Bool _autoFrameworkSwitch;	// 16 = 0x10
    _Bool _isTapToSetupOngoing;	// 17 = 0x11
    HMBCloudDatabase *_cloudDatabaseToDetectHH2Zone;	// 24 = 0x18
    CKContainer *_containerToCheckCloudKitReachability;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_callbackQueueToCheckCloudKitReachability;	// 40 = 0x28
    CDUnknownBlockType _completionBlockToBeCalledBeforeSwitchingFramework;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_workQueue;	// 56 = 0x38
    HMDHomeManager *_homeManager;	// 64 = 0x40
}

+ (id)logCategory;	// IMP=0x00000000007dd05a
+ (void)switchToHH2AndRelaunchHomed;	// IMP=0x00000000007dcf5b
+ (void)switchBackToHH1AndRelaunch;	// IMP=0x00000000007dcf19
+ (void)switchBackToHH1AndRelaunchDueToHH2MigrationFailed;	// IMP=0x00000000007dce40
+ (void)switchBackToHH1AndDoNotLaunchDueToPrimaryAccountRemoval;	// IMP=0x00000000007dcd65
+ (void)relaunchHomed:(CDUnknownBlockType)arg1;	// IMP=0x00000000007dcb6b
+ (void)setHH2EnablementPreferenceKey:(_Bool)arg1;	// IMP=0x00000000007dca3c
- (void).cxx_destruct;	// IMP=0x00000000007db8cd
@property(nonatomic) __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(copy, nonatomic) CDUnknownBlockType completionBlockToBeCalledBeforeSwitchingFramework; // @synthesize completionBlockToBeCalledBeforeSwitchingFramework=_completionBlockToBeCalledBeforeSwitchingFramework;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueueToCheckCloudKitReachability; // @synthesize callbackQueueToCheckCloudKitReachability=_callbackQueueToCheckCloudKitReachability;
@property(retain, nonatomic) CKContainer *containerToCheckCloudKitReachability; // @synthesize containerToCheckCloudKitReachability=_containerToCheckCloudKitReachability;
@property(retain, nonatomic) HMBCloudDatabase *cloudDatabaseToDetectHH2Zone; // @synthesize cloudDatabaseToDetectHH2Zone=_cloudDatabaseToDetectHH2Zone;
@property(nonatomic) _Bool isTapToSetupOngoing; // @synthesize isTapToSetupOngoing=_isTapToSetupOngoing;
@property(nonatomic) _Bool autoFrameworkSwitch; // @synthesize autoFrameworkSwitch=_autoFrameworkSwitch;
- (void)handleTapToSetupFinished:(id)arg1;	// IMP=0x00000000007db6f9
- (void)waitForCloudKitAccountToBeAvailable;	// IMP=0x00000000007db688
- (_Bool)areCloudKitServersReachable;	// IMP=0x00000000007db139
- (void)removeHH2SentinelZoneWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000007dac7f
- (void)waitForHH2SentinelZoneToBeRemoved;	// IMP=0x00000000007dabd6
- (_Bool)_areWeRunningInRightEnvironment;	// IMP=0x00000000007da9c8
- (void)makeSureWeAreRunningInRightEnvironment;	// IMP=0x00000000007da7b5
- (void)cloudDatabase:(id)arg1 didCreateZoneWithID:(id)arg2;	// IMP=0x00000000007da65c
- (_Bool)checkExistenceOfHH2SentinelZone;	// IMP=0x00000000007da398
- (_Bool)waitForHH2SentinelZoneToBeCreated:(double)arg1;	// IMP=0x00000000007da0bf
- (void)createHH2SentinelZoneWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000007d9d9d
- (void)performInitialSync:(CDUnknownBlockType)arg1;	// IMP=0x00000000007d9abd
- (_Bool)waitForHH2SentinelZoneToBeFetchedFromCloud;	// IMP=0x00000000007d9873
- (void)forceFetchAllCloudZones;	// IMP=0x00000000007d9716
- (void)performInitialSyncAndSwitchFrameworkIfRequired;	// IMP=0x00000000007d96ca
- (void)createHH2CloudDatabaseAndStartSyncing;	// IMP=0x00000000007d93bf
- (id)initWithAutoSwitch:(_Bool)arg1 callBeforeFrameworkSwitch:(CDUnknownBlockType)arg2 homeManager:(id)arg3;	// IMP=0x00000000007d91e4
- (id)initWithAutoSwitchDisabledWithHomeManager:(id)arg1;	// IMP=0x00000000007d91cb
- (id)initWithAutoSwitchEnabledWithHomeManager:(id)arg1 callBeforeFrameworkSwitchCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000007d91b1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
