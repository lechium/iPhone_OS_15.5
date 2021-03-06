//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <InstallCoordination/IXCoordinatorWithPlaceholderPromise-Protocol.h>

@class IXAppInstallCoordinatorSeed, LSApplicationRecord, NSArray, NSError, NSString, NSUUID;
@protocol IXAppInstallCoordinatorObserver, OS_dispatch_queue;

@interface IXAppInstallCoordinator : NSObject <IXCoordinatorWithPlaceholderPromise>
{
    _Bool _complete;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
    unsigned long long _errorSourceIdentifier;	// 24 = 0x18
    unsigned long long _observersCalled;	// 32 = 0x20
    id <IXAppInstallCoordinatorObserver> _observer;	// 40 = 0x28
    IXAppInstallCoordinatorSeed *_seed;	// 48 = 0x30
    LSApplicationRecord *_completedApplicationRecord;	// 56 = 0x38
}

+ (_Bool)refreshContainerTypes:(unsigned long long)arg1 forBundleID:(id)arg2 reason:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000011865
+ (_Bool)refreshDataContainerForBundleID:(id)arg1 reason:(id)arg2 error:(id *)arg3;	// IMP=0x000000000001112e
+ (void)setRemovability:(unsigned long long)arg1 forAppWithBundleID:(id)arg2 byClient:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000010d83
+ (void)setRemovability:(unsigned long long)arg1 forAppWithBundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000010d68
+ (void)removabilityForAppWithBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000109df
+ (unsigned long long)removabilityForAppWithBundleID:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000105a4
+ (void)revertAppWithBundleID:(id)arg1 completionWithApplicationRecord:(CDUnknownBlockType)arg2;	// IMP=0x0000000000010323
+ (void)revertAppWithBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000010279
+ (_Bool)revertAppWithBundleID:(id)arg1 resultingApplicationRecord:(id *)arg2 error:(id *)arg3;	// IMP=0x000000000000ff4a
+ (_Bool)revertAppWithBundleID:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000ff33
+ (void)uninstallAppWithBundleID:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000f747
+ (_Bool)uninstallAppWithBundleID:(id)arg1 options:(id)arg2 disposition:(unsigned long long *)arg3 error:(id *)arg4;	// IMP=0x000000000000efd5
+ (void)uninstallAppWithBundleID:(id)arg1 requestUserConfirmation:(_Bool)arg2 waitForDeletion:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000000edee
+ (_Bool)uninstallAppWithBundleID:(id)arg1 requestUserConfirmation:(_Bool)arg2 waitForDeletion:(_Bool)arg3 error:(id *)arg4;	// IMP=0x000000000000ecc4
+ (void)uninstallAppWithBundleID:(id)arg1 requestUserConfirmation:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000ecac
+ (_Bool)uninstallAppWithBundleID:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000ec92
+ (void)prioritizeCoordinatorForAppWithBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000eac1
+ (_Bool)prioritizeCoordinatorForAppWithBundleID:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000e844
+ (void)resumeCoordinatorForAppWithBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000e66e
+ (_Bool)resumeCoordinatorForAppWithBundleID:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000e3ef
+ (void)pauseCoordinatorForAppWithBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000e216
+ (_Bool)pauseCoordinatorForAppWithBundleID:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000df94
+ (void)cancelCoordinatorsForAppsWithBundleIDs:(id)arg1 withReason:(id)arg2 client:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000000dd66
+ (_Bool)cancelCoordinatorsForAppsWithBundleIDs:(id)arg1 withReason:(id)arg2 client:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x000000000000da88
+ (void)cancelCoordinatorForAppWithBundleID:(id)arg1 withReason:(id)arg2 client:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000000d85a
+ (_Bool)cancelCoordinatorForAppWithBundleID:(id)arg1 withReason:(id)arg2 client:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x000000000000d452
+ (_Bool)_synchronouslyEnumerateCoordinatorsForIntent:(unsigned long long)arg1 error:(id *)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000000c6de
+ (void)_asynchronouslyEnumerateCoordinatorsForIntent:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000000ad2c
+ (Class)classForIntent:(unsigned long long)arg1;	// IMP=0x000000000000abf4
+ (void)enumerateCoordinatorsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000000abdd
+ (_Bool)enumerateCoordinatorsWithError:(id *)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000000abc3
+ (_Bool)enumerateCoordinatorsWithBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;	// IMP=0x000000000000aba8
+ (id)existingCoordinatorForAppWithBundleID:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000ab7d
+ (id)coordinatorForAppWithBundleID:(id)arg1 withClientID:(unsigned long long)arg2 createIfNotExisting:(_Bool)arg3 created:(_Bool *)arg4 error:(id *)arg5;	// IMP=0x000000000000aad4
+ (id)_coordinatorForAppWithBundleID:(id)arg1 withClientID:(unsigned long long)arg2 intent:(unsigned long long)arg3 createIfNotExisting:(_Bool)arg4 requireMatchingIntent:(_Bool)arg5 created:(_Bool *)arg6 error:(id *)arg7;	// IMP=0x0000000000009f38
+ (void)_validatePreconditionForIntent:(unsigned long long)arg1 matchesCurrentInstallStateForBundleID:(id)arg2;	// IMP=0x00000000000098d0
+ (_Bool)modifiesLocalLaunchServicesDatabase;	// IMP=0x00000000000098c8
+ (_Bool)skipIntentValidation;	// IMP=0x00000000000098bc
+ (void)setSkipIntentValidation:(_Bool)arg1;	// IMP=0x00000000000098b0
+ (id)_coordinatorForAppWithBundleID:(id)arg1 withClientID:(unsigned long long)arg2 intent:(unsigned long long)arg3 createIfNotExisting:(_Bool)arg4 created:(_Bool *)arg5 error:(id *)arg6;	// IMP=0x0000000000009885
+ (_Bool)setTestModeForIdentifierPrefix:(id)arg1 testMode:(unsigned long long)arg2;	// IMP=0x000000000002226d
+ (_Bool)setTestModeForIdentifierPrefix:(id)arg1 testMode:(unsigned long long)arg2 testSpecificValidationData:(id)arg3;	// IMP=0x0000000000021f3f
+ (_Bool)setTestingEnabled:(_Bool)arg1;	// IMP=0x0000000000021c40
+ (_Bool)postNSCurrentLocaleDidChangeNotification;	// IMP=0x0000000000021903
+ (int)daemonPid;	// IMP=0x0000000000021667
+ (_Bool)killDaemonForTesting;	// IMP=0x0000000000020bb7
+ (_Bool)purgeAllCoordinatorsAndPromisesForCreator:(unsigned long long)arg1;	// IMP=0x00000000000208da
+ (void)installApplication:(id)arg1 toTargetDirectory:(id)arg2 consumeSource:(_Bool)arg3 shouldOverrideGatekeeper:(_Bool)arg4 options:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0000000000035db7
+ (void)installApplication:(id)arg1 toURL:(id)arg2 consumeSource:(_Bool)arg3 shouldOverrideGatekeeper:(_Bool)arg4 options:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0000000000035c65
+ (void)installApplication:(id)arg1 toTargetDirectory:(id)arg2 consumeSource:(_Bool)arg3 options:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000035b13
+ (void)installApplication:(id)arg1 toURL:(id)arg2 consumeSource:(_Bool)arg3 options:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000000359c1
+ (void)installApplication:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000359a4
+ (void)installApplication:(id)arg1 consumeSource:(_Bool)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000035992
+ (void)_beginInstallForURL:(id)arg1 consumeSource:(_Bool)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000034b2e
+ (id)_coordinatorForBundleID:(id)arg1 created:(_Bool *)arg2 error:(id *)arg3;	// IMP=0x0000000000034a2d
+ (void)demoteAppToPlaceholderWithBundleID:(id)arg1 forReason:(unsigned long long)arg2 waitForDeletion:(_Bool)arg3 ignoreRemovability:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000000004599f
+ (_Bool)demoteAppToPlaceholderWithBundleID:(id)arg1 forReason:(unsigned long long)arg2 waitForDeletion:(_Bool)arg3 ignoreRemovability:(_Bool)arg4 error:(id *)arg5;	// IMP=0x0000000000045774
+ (void)demoteAppToPlaceholderWithBundleID:(id)arg1 forReason:(unsigned long long)arg2 waitForDeletion:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000045752
+ (_Bool)demoteAppToPlaceholderWithBundleID:(id)arg1 forReason:(unsigned long long)arg2 waitForDeletion:(_Bool)arg3 error:(id *)arg4;	// IMP=0x0000000000045503
+ (_Bool)demoteAppToPlaceholderWithBundleID:(id)arg1 forReason:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00000000000454eb
+ (void)_demoteAppToPlaceholderWithBundleID:(id)arg1 forReason:(unsigned long long)arg2 waitForDeletion:(_Bool)arg3 ignoreRemovability:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000044548
- (void).cxx_destruct;	// IMP=0x000000000002089e
@property(readonly, nonatomic) LSApplicationRecord *completedApplicationRecord; // @synthesize completedApplicationRecord=_completedApplicationRecord;
@property(readonly, nonatomic) IXAppInstallCoordinatorSeed *seed; // @synthesize seed=_seed;
- (oneway void)_clientDelegate_didUpdateProgress:(double)arg1 forPhase:(unsigned long long)arg2 overallProgress:(double)arg3;	// IMP=0x000000000002037d
- (oneway void)_clientDelegate_didCancelWithError:(id)arg1 client:(unsigned long long)arg2;	// IMP=0x000000000001fc6d
- (oneway void)_clientDelegate_didCompleteForApplicationRecord:(id)arg1;	// IMP=0x000000000001f648
- (oneway void)_clientDelegate_placeholderDidInstallForApplicationRecord:(id)arg1;	// IMP=0x000000000001f03a
- (oneway void)_clientDelegate_shouldBeginRestoringUserData;	// IMP=0x000000000001ebcd
- (oneway void)_clientDelegate_promiseDidBeginFulfillmentWithIdentifier:(unsigned long long)arg1;	// IMP=0x000000000001e48f
- (oneway void)_clientDelegate_shouldPause;	// IMP=0x000000000001e0c9
- (oneway void)_clientDelegate_shouldResume;	// IMP=0x000000000001dd03
- (oneway void)_clientDelegate_shouldPrioritize;	// IMP=0x000000000001d93d
- (oneway void)_clientDelegate_didRegisterForObservation;	// IMP=0x000000000001d4ca
@property(readonly, nonatomic) unsigned int creatorEUID; // @dynamic creatorEUID;
@property(readonly, nonatomic) unsigned long long creatorIdentifier; // @dynamic creatorIdentifier;
@property(readonly, nonatomic) NSUUID *uniqueIdentifier; // @dynamic uniqueIdentifier;
@property(readonly, copy, nonatomic) NSString *bundleID; // @dynamic bundleID;
@property(readonly, nonatomic) unsigned long long coordinationState;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001cf00
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *descriptionWithRemoteState;
@property(readonly, copy) NSString *description;
- (_Bool)prioritizeWithError:(id *)arg1;	// IMP=0x000000000001c896
- (_Bool)isPaused:(_Bool *)arg1 withError:(id *)arg2;	// IMP=0x000000000001c5ac
- (_Bool)resumeWithError:(id *)arg1;	// IMP=0x000000000001c30d
- (_Bool)pauseWithError:(id *)arg1;	// IMP=0x000000000001c06b
@property(nonatomic) __weak id <IXAppInstallCoordinatorObserver> observer; // @synthesize observer=_observer;
@property(nonatomic) unsigned long long observersCalled; // @synthesize observersCalled=_observersCalled;
- (void)_onObserverCalloutQueue_handleObserverForCompletedCoordinator:(id)arg1 completedApplicationRecord:(id)arg2 error:(id)arg3 client:(unsigned long long)arg4;	// IMP=0x000000000001b2fc
@property(nonatomic, getter=isComplete) _Bool complete; // @synthesize complete=_complete;
- (void)setComplete:(_Bool)arg1 forApplicationRecord:(id)arg2;	// IMP=0x000000000001b195
@property(nonatomic) unsigned long long errorSourceIdentifier; // @synthesize errorSourceIdentifier=_errorSourceIdentifier;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (_Bool)getShouldOverrideGatekeeperValue:(_Bool *)arg1 error:(id *)arg2;	// IMP=0x000000000001a16c
- (_Bool)setShouldOverrideGatekeeper:(_Bool)arg1 error:(id *)arg2;	// IMP=0x000000000001a0c4
- (id)managedInstallUUIDWithError:(id *)arg1;	// IMP=0x000000000001a01c
- (_Bool)setManagedInstallUUID:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000019f74
- (id)appQuitPromiseWithError:(id *)arg1;	// IMP=0x0000000000019ecc
- (_Bool)setAppQuitPromise:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000019e24
- (id)targetBundleURLWithError:(id *)arg1;	// IMP=0x0000000000019d7c
- (_Bool)setTargetBundleURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000019d65
- (_Bool)setTargetBundleURL:(id)arg1 preservingTargetBundleNameOnUpdate:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0000000000019cbd
- (id)installTargetDirectoryURLWithError:(id *)arg1;	// IMP=0x0000000000019c15
- (_Bool)setInstallTargetDirectoryURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000019b6d
- (id)deviceSecurityPromiseWithError:(id *)arg1;	// IMP=0x0000000000019532
- (_Bool)setDeviceSecurityPromise:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000019071
- (_Bool)setPreparationPromise:(id)arg1 withError:(id *)arg2;	// IMP=0x0000000000018bb0
- (id)preparationPromiseWithError:(id *)arg1;	// IMP=0x0000000000018575
- (id)userDataRestoreShouldBegin:(_Bool *)arg1;	// IMP=0x00000000000181d3
@property(readonly, nonatomic) _Bool hasUserDataPromise;
- (id)userDataPromiseWithError:(id *)arg1;	// IMP=0x0000000000017879
- (_Bool)setUserDataPromise:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000173b8
@property(readonly, nonatomic) _Bool hasInitialODRAssetPromises;
- (id)initialODRAssetPromisesWithError:(id *)arg1;	// IMP=0x0000000000016649
- (_Bool)setInitialODRAssetPromises:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001606f
- (unsigned long long)importanceWithError:(id *)arg1;	// IMP=0x0000000000015c8a
- (_Bool)setImportance:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x000000000001582d
@property(readonly, nonatomic) _Bool hasInstallOptions;
- (_Bool)setInstallOptions:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000014db1
- (unsigned long long)appAssetPromiseResponsibleClientWithError:(id *)arg1;	// IMP=0x0000000000014ac5
- (_Bool)setAppAssetPromiseResponsibleClient:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x0000000000014701
- (_Bool)appAssetPromiseHasBegunFulfillment:(_Bool *)arg1 error:(id *)arg2;	// IMP=0x0000000000014417
@property(readonly, nonatomic) _Bool hasAppAssetPromise;
- (id)appAssetPromiseWithError:(id *)arg1;	// IMP=0x0000000000013abd
- (_Bool)setAppAssetPromise:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000135fc
@property(readonly, nonatomic) _Bool hasPlaceholderPromise;
- (id)placeholderPromiseWithError:(id *)arg1;	// IMP=0x0000000000012c9f
- (_Bool)setPlaceholderPromise:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000122d3
- (_Bool)cancelForReason:(id)arg1 client:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000000011c12
- (void)cancelForReason:(id)arg1;	// IMP=0x0000000000011bf8
- (void)dealloc;	// IMP=0x00000000000097e9
- (void)_updateInitWithSeed:(id)arg1 notifyDaemon:(_Bool)arg2;	// IMP=0x0000000000009696
- (void)_conveyCurrentPriorityBoostReplacingExisting:(_Bool)arg1;	// IMP=0x0000000000009278
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *observerCalloutQueue;
- (id)initWithBundleID:(id)arg1 creator:(unsigned long long)arg2 intent:(unsigned long long)arg3;	// IMP=0x00000000000090cb
- (id)initWithSeed:(id)arg1;	// IMP=0x0000000000009060

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSArray *validInstallTypes; // @dynamic validInstallTypes;

@end

