//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NPDCompanionPaymentPassDatabase, NPKPaymentWebServiceCompanionTargetDevice, NPSDomainAccessor, NSArray, NSHashTable, NSString, PKAccountProvisioningController, PKPaymentVerificationObserver, PKPaymentWebService;
@protocol NPKRemoteAdminConnectionServiceAgentDelegate, OS_dispatch_queue;

@interface NPKRemoteAdminConnectionServiceAgent : NSObject
{
    int _lockStateToken;	// 8 = 0x8
    NSArray *_secureElementApplets;	// 16 = 0x10
    PKPaymentWebService *_webService;	// 24 = 0x18
    id <NPKRemoteAdminConnectionServiceAgentDelegate> _delegate;	// 32 = 0x20
    NPKPaymentWebServiceCompanionTargetDevice *_targetDevice;	// 40 = 0x28
    NPDCompanionPaymentPassDatabase *_companionPaymentPassDatabase;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_secureElementAppletsQueue;	// 56 = 0x38
    NSArray *_secureElementIDs;	// 64 = 0x40
    NPSDomainAccessor *_domainAccessor;	// 72 = 0x48
    PKPaymentVerificationObserver *_verificationObserver;	// 80 = 0x50
    NSHashTable *_verificationForegroundObservers;	// 88 = 0x58
    PKAccountProvisioningController *_accountProvisioningController;	// 96 = 0x60
    CDUnknownBlockType _accountPassProvisionCompletion;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x002000000003c74d
@property(copy, nonatomic) CDUnknownBlockType accountPassProvisionCompletion; // @synthesize accountPassProvisionCompletion=_accountPassProvisionCompletion;
@property(retain, nonatomic) PKAccountProvisioningController *accountProvisioningController; // @synthesize accountProvisioningController=_accountProvisioningController;
@property(retain, nonatomic) NSHashTable *verificationForegroundObservers; // @synthesize verificationForegroundObservers=_verificationForegroundObservers;
@property(retain, nonatomic) PKPaymentVerificationObserver *verificationObserver; // @synthesize verificationObserver=_verificationObserver;
@property(retain, nonatomic) NPSDomainAccessor *domainAccessor; // @synthesize domainAccessor=_domainAccessor;
@property(nonatomic) int lockStateToken; // @synthesize lockStateToken=_lockStateToken;
@property(retain, nonatomic) NSArray *secureElementIDs; // @synthesize secureElementIDs=_secureElementIDs;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *secureElementAppletsQueue; // @synthesize secureElementAppletsQueue=_secureElementAppletsQueue;
@property(retain) NPDCompanionPaymentPassDatabase *companionPaymentPassDatabase; // @synthesize companionPaymentPassDatabase=_companionPaymentPassDatabase;
@property(retain, nonatomic) NPKPaymentWebServiceCompanionTargetDevice *targetDevice; // @synthesize targetDevice=_targetDevice;
@property(nonatomic) __weak id <NPKRemoteAdminConnectionServiceAgentDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PKPaymentWebService *webService; // @synthesize webService=_webService;
- (void)accountProvisioningController:(id)arg1 displayableError:(id)arg2;	// IMP=0x001000000003c4c3
- (void)accountProvisioningControllerUpdatedState:(id)arg1;	// IMP=0x001000000003c395
- (void)requestAutomaticProvisioningForCompanionPaymentPass:(id)arg1;	// IMP=0x001000000003c323
- (void)provisionPassForRemoteCredentialWithType:(long long)arg1 andIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000003c1e4
- (void)provisionPassForAccountIdentifier:(id)arg1 makeDefault:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000003b77c
- (void)_handleMigrationReregisterTask;	// IMP=0x001000000003b1e6
- (void)_scheduleMigrationReregisterForDate:(id)arg1;	// IMP=0x001000000003b022
- (void)_checkCompanionMigrationReregistrationState;	// IMP=0x001000000003ac11
- (void)_setupBackgroundWebServiceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000003aacb
- (void)handleCompanionPeerPaymentRegistration;	// IMP=0x001000000003aa8e
- (void)handleGizmoAddedPaymentPass:(id)arg1;	// IMP=0x001000000003aa19
- (id)sharedPaymentWebServiceContext;	// IMP=0x001000000003a916
- (void)handleUpdatedSharedPaymentWebServiceContext:(id)arg1;	// IMP=0x001000000003a7f6
- (void)noteForegroundVerificationObserverActive:(_Bool)arg1 withObserver:(id)arg2;	// IMP=0x001000000003a6d6
- (void)noteForegroundVerificationObserverActive:(_Bool)arg1;	// IMP=0x001000000003a6c1
- (void)verificationObserverDidTimeout:(id)arg1;	// IMP=0x001000000003a551
- (void)verificationObserver:(id)arg1 didObserveVerificationCode:(id)arg2;	// IMP=0x001000000003a0dc
- (void)setCommutePlanReminder:(id)arg1 forCommutePlan:(id)arg2 pass:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000003a015
- (void)commutePlanReminderForCommutePlan:(id)arg1 pass:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000039f7b
- (void)balanceReminderForBalance:(id)arg1 pass:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000039ee1
- (void)setBalanceReminder:(id)arg1 forBalance:(id)arg2 pass:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000039e1a
- (void)markAllAppletsForDeletionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000039da8
- (void)handleDeletePaymentTransactionWithIdentifier:(id)arg1 passUniqueIdentifier:(id)arg2;	// IMP=0x0010000000039d22
- (void)retrieveTransactionsForPassWithUniqueID:(id)arg1;	// IMP=0x0010000000039cb0
- (void)_scheduleConsistencyCheck:(id)arg1 pluggedIn:(_Bool)arg2 backoffLevel:(id)arg3;	// IMP=0x00100000000398e7
- (void)revokeCredentialsWithIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000039861
- (void)registerCredentialsWithIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000397db
@property(retain, nonatomic) NSArray *secureElementApplets; // @synthesize secureElementApplets=_secureElementApplets;
- (id)paymentApplications;	// IMP=0x0010000000039374
- (void)handleRequestedActions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000038ef7
- (_Bool)shouldStartConsistencyCheck;	// IMP=0x0010000000038e58
- (void)scheduleConsistencyCheck:(id)arg1 pluggedIn:(_Bool)arg2 backoffLevel:(id)arg3;	// IMP=0x0010000000038e46
- (void)deviceStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000038957
- (id)paymentPasses;	// IMP=0x00100000000387a4
- (void)didDownloadPaymentPass:(id)arg1;	// IMP=0x0010000000038390
- (_Bool)synchronizeWithTSM;	// IMP=0x0010000000037c7b
- (void)handlePendingiCloudSignoutWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000003784e
- (void)handlePendingUnpairingWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000037786
- (void)deprovisionPass:(id)arg1;	// IMP=0x00100000000374f7
- (void)handleCompanionMigration;	// IMP=0x001000000003749a
- (void)handlePaymentOptionsDefaultsChanged;	// IMP=0x0010000000037488
- (void)handlePreferredAID:(id)arg1 forPassWithUniqueID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000373ee
- (void)handleDeletionForPaymentPass:(id)arg1 uniqueID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000037354
- (void)deleteCardsWithAIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000370c1
- (void)dumpRemoteLogsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000036f0e
- (void)redownloadAllPaymentPassesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000036d48
- (void)performConsistencyCheckWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000036824
- (void)initiateConsistencyCheckWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000003678a
- (void)_handleCompanionPaymentPassDatabaseChanged:(id)arg1;	// IMP=0x0010000000036726
- (void)performScheduledActivityWithIdentifier:(id)arg1 activityCriteria:(id)arg2;	// IMP=0x00100000000365a3
- (void)connect;	// IMP=0x0010000000036404
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000000362a3
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;	// IMP=0x0010000000036159
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;	// IMP=0x001000000003608a
- (void)_unregisterWebServiceWithDiagnosticReason:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000358fb
- (void)updateRegionSupportIfNecessary;	// IMP=0x00100000000357c0
- (void)_savePaymentWebServiceBackgroundContext;	// IMP=0x001000000003563d
- (void)_savePaymentWebServiceContext;	// IMP=0x00100000000354ba
- (void)_updatePassWithTypeIdentifier:(id)arg1;	// IMP=0x001000000003535d
- (void)paymentWebService:(id)arg1 willCreateSessionWithConfiguration:(id)arg2;	// IMP=0x00100000000352a2
- (void)paymentWebService:(id)arg1 didRegisterCredentialWithIdentifier:(id)arg2 response:(id)arg3 error:(id)arg4;	// IMP=0x00100000000351d3
- (void)paymentWebServiceBackgroundSessionDidBecomeInvalid:(id)arg1;	// IMP=0x00100000000350d3
- (void)paymentWebService:(id)arg1 didDownloadSerialNumbersForInstalledPasses:(id)arg2 inRegion:(id)arg3;	// IMP=0x00100000000349bd
- (void)paymentWebService:(id)arg1 didDownloadPassRemoteAssets:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000034756
- (void)paymentWebService:(id)arg1 didDownloadPass:(id)arg2;	// IMP=0x001000000003425d
- (void)startBackgroundVerificationObserverForPass:(id)arg1 verificationMethod:(id)arg2;	// IMP=0x0010000000034124
- (void)checkCompanionPeerPaymentRegistrationState;	// IMP=0x00100000000340e7
- (void)handleDownloadAllPaymentPasses;	// IMP=0x0010000000034058
- (void)handleUpdatedPeerPaymentWebServiceContext:(id)arg1 account:(id)arg2;	// IMP=0x0010000000033f65
- (void)_handleKeybagStatusChanged;	// IMP=0x0010000000033eef
- (void)sendPaymentOptionsDefaultsToWatch;	// IMP=0x0010000000033e6a
- (void)showPaymentSetupForAppDisplayName:(id)arg1;	// IMP=0x0010000000033df8
- (void)sendWebServiceContextToWatch;	// IMP=0x0010000000033d6b
- (void)handlePaymentWebServiceContextFromWatch:(id)arg1;	// IMP=0x0010000000033be4
- (void)setNewAuthRandom:(CDUnknownBlockType)arg1;	// IMP=0x0010000000033b35
- (void)archiveWebServiceBackgroundContext:(id)arg1;	// IMP=0x0010000000033a93
- (void)archiveWebServiceContext:(id)arg1;	// IMP=0x00100000000339f1
- (void)handlePreferredAID:(id)arg1 forPassWithUniqueID:(id)arg2;	// IMP=0x0010000000033805
- (void)handleUpdatePaymentPassWithTypeIdentifier:(id)arg1;	// IMP=0x001000000003371c
- (void)handlePushToken:(id)arg1;	// IMP=0x001000000003327e
- (void)handleCredentialsUpdate:(id)arg1 forUniqueID:(id)arg2;	// IMP=0x00100000000331ec
- (void)handleBalanceReminderUpdate:(id)arg1 balance:(id)arg2 forUniqueID:(id)arg3;	// IMP=0x0010000000033148
- (void)handleBalanceUpdate:(id)arg1 forUniqueID:(id)arg2;	// IMP=0x00100000000330b6
- (void)_handleUpdatedTransitAppletState:(id)arg1 forPassWithUniqueID:(id)arg2;	// IMP=0x0010000000033024
- (void)handleRemoveTransactionsWithIdentifiers:(id)arg1;	// IMP=0x0010000000032eba
- (void)handleAppletState:(id)arg1 forUniqueID:(id)arg2;	// IMP=0x0010000000032ea1
- (void)handlePaymentTransactions:(id)arg1 appletStates:(id)arg2 forUniqueIDs:(id)arg3;	// IMP=0x00100000000325af
- (void)handlePreconditionNotMetWithUniqueIDs:(id)arg1 preconditionDescription:(id)arg2 shouldUnregister:(_Bool)arg3;	// IMP=0x00100000000321a7
- (void)remoteAdminAvailabilityRequest:(id)arg1;	// IMP=0x0010000000032110
- (void)remoteAdminPerformRequest:(id)arg1;	// IMP=0x0010000000032079
- (void)dealloc;	// IMP=0x001000000003202d
- (id)initWithCompanionPaymentPassDatabase:(id)arg1;	// IMP=0x0010000000031a6d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
