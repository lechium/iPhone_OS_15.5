//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitCore/PDXPCService.h>

@class NSString;
@protocol NPDCompanionAgentClientDataSource, NPDCompanionAgentClientDelegate;

@interface NPDCompanionAgentClient : PDXPCService
{
    id <NPDCompanionAgentClientDataSource> _dataSource;	// 8 = 0x8
    id <NPDCompanionAgentClientDelegate> _delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000031a40
@property(nonatomic) __weak id <NPDCompanionAgentClientDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <NPDCompanionAgentClientDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)_removePendingAppleCardNotification;	// IMP=0x0010000000031893
- (void)_updateLocalCommutePlanReminderForCommutePlan:(id)arg1 pass:(id)arg2;	// IMP=0x00100000000315dd
- (void)_updateLocalBalanceReminderForBalance:(id)arg1 pass:(id)arg2;	// IMP=0x00100000000312fc
- (id)_commutePlanReminderIdentifierWithCommutePlan:(id)arg1 pass:(id)arg2;	// IMP=0x00100000000311ea
- (void)_applyIngestionDateToPass:(id)arg1;	// IMP=0x00100000000310eb
- (void)_selectNewDefaultCardForUserAfterDeletionOfDefaultCardWithUniqueID:(id)arg1;	// IMP=0x0010000000030a02
- (void)handlePeerPaymentTermsAndConditionsRequestFromGizmo;	// IMP=0x0010000000030805
- (void)trustedDeviceEnrollmentSignatureWithAccountDSID:(id)arg1 sessionData:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000304e9
- (void)presentStandaloneTransaction:(long long)arg1 forPassUniqueIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000003027e
- (void)markPendingTransactionAsProcessedForPassWithUniqueID:(id)arg1;	// IMP=0x001000000003020c
- (void)fetchPendingTransactionForPassWithUniqueID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000030186
- (void)noteForegroundVerificationObserverActive:(_Bool)arg1;	// IMP=0x001000000003005d
- (void)startBackgroundVerificationObserverForPass:(id)arg1 verificationMethod:(id)arg2;	// IMP=0x001000000002feef
- (void)setCommutePlanReminder:(id)arg1 forCommutePlan:(id)arg2 pass:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000002fac2
- (void)commutePlanReminderForCommutePlan:(id)arg1 pass:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x001000000002f990
- (void)setBalanceReminder:(id)arg1 forBalance:(id)arg2 pass:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000002f4b6
- (void)balanceReminderForBalance:(id)arg1 pass:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x001000000002f362
- (void)balancesForPaymentPassWithUniqueIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002f207
- (void)transitStateWithPassUniqueIdentifier:(id)arg1 paymentApplication:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000002f089
- (void)deletePaymentTransactionWithIdentifier:(id)arg1 fromDeviceWithPairingID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000002ec5a
- (void)transactionsForTransactionSourceIdentifiers:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 startDate:(id)arg4 endDate:(id)arg5 orderedByDate:(long long)arg6 limit:(long long)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x001000000002e690
- (void)markAllAppletsForDeletionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000002e600
- (void)initiateLostModeExitAuthWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000002e24f
- (void)deviceIDSIdentifierWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000002e0a6
- (void)passesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000002dc8b
- (void)countOfPassesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000002db04
- (void)updateSettings:(unsigned long long)arg1 forPassWithUniqueID:(id)arg2;	// IMP=0x001000000002da33
- (void)peerPaymentAccountForPairingID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002d7dc
- (void)setPeerPaymentAccount:(id)arg1 forPairingID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000002d72e
- (void)sharedPeerPaymentWebServiceContextForPairingID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002d503
- (void)setSharedPeerPaymentWebServiceContext:(id)arg1 forPairingID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000002d460
- (void)sharedPaymentWebServiceContextForPairingID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002d44a
- (void)setSharedPaymentWebServiceContext:(id)arg1 forPairingID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000002d437
- (void)handlePendingiCloudSignoutWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000002d431
- (void)handlePendingUnpairingWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000002d42b
- (void)redownloadAllPaymentPassesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000002d425
- (void)initiateConsistencyCheckWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000002d41f
- (void)setDefaultPaymentApplication:(id)arg1 forPassWithUniqueID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000002cd15
- (void)defaultPaymentApplicationForPassWithUniqueID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002cb81
- (_Bool)_isPassQualifiedToBeDefaultWithUniqueID:(id)arg1;	// IMP=0x001000000002c93b
- (void)willPassWithUniqueIdentifierAutomaticallyBecomeDefault:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002c88d
- (id)_defaultCard;	// IMP=0x001000000002c7a9
- (void)defaultCard:(CDUnknownBlockType)arg1;	// IMP=0x001000000002c744
- (void)setDefaultCard:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002c284
- (_Bool)_isGizmoConnected;	// IMP=0x001000000002c1cc
- (void)removePaymentPassWithUniqueID:(id)arg1 forPairingID:(id)arg2 waitForConfirmation:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000002b23b
- (void)savePaymentPassAtURL:(id)arg1 withUniqueID:(id)arg2 forPairingID:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000002ab2f
- (void)credentialedPassUniqueIDsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000002a622
- (void)paymentPassWithPairedTerminalIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002a0a3
- (void)paymentPassWithDeviceAccountIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000029bd2
- (void)paymentPassesWithPrimaryAccountIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002969f
- (id)paymentPassWithUniqueID:(id)arg1;	// IMP=0x001000000002921e
- (void)paymentPassWithUniqueID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000291ad
- (void)paymentPassUniqueIDsExcludingDeactivated:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000028e01
- (void)registerDeviceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000028c9e
- (void)noteProvisioningPreflightCompleteWithSuccess:(_Bool)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000028a7d
- (void)beginProvisioningFromWatchOfferForPaymentPass:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000286b4
- (void)handleProvisioningErrorForAccountIdentifier:(id)arg1 error:(id)arg2;	// IMP=0x0010000000028155
- (void)handleDeviceUnlockedForPendingProvisioningRequestFromGizmo;	// IMP=0x00100000000279c4
- (void)provisionPassForRemoteCredentialWithType:(long long)arg1 andIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000027898
- (void)provisionPassForAccountIdentifier:(id)arg1 makeDefault:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000026dfb
- (void)noteWatchOfferDisplayedForPaymentPassWithUniqueID:(id)arg1;	// IMP=0x0010000000026cce
- (void)connect;	// IMP=0x0010000000026cc8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

