//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/PKAccountServiceExportedInterface-Protocol.h>

@class NSHashTable, PKXPCService;
@protocol OS_dispatch_queue;

@interface PKAccountService : NSObject <PKAccountServiceExportedInterface>
{
    PKXPCService *_remoteService;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_replyQueue;	// 16 = 0x10
    struct os_unfair_lock_s _lockObservers;	// 24 = 0x18
    NSHashTable *_observers;	// 32 = 0x20
    long long _accountChangedNotificationSuspensionCount;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x0000000000410efa
- (void).cxx_destruct;	// IMP=0x000000000041d38d
- (void)physicalCardsChanged:(id)arg1 forAccountIdentifier:(id)arg2;	// IMP=0x000000000041d27b
- (void)accountUsersChanged:(id)arg1 forAccountIdentifier:(id)arg2;	// IMP=0x000000000041d169
- (void)didUpdatePaymentFundingSources:(id)arg1 accountIdentifier:(id)arg2;	// IMP=0x000000000041d057
- (void)scheduledPaymentsChangedForAccountIdentifier:(id)arg1;	// IMP=0x000000000041cf77
- (void)statementsChangedForAccountIdentifier:(id)arg1;	// IMP=0x000000000041ce97
- (void)accountRemoved:(id)arg1;	// IMP=0x000000000041cdb7
- (void)accountChanged:(id)arg1;	// IMP=0x000000000041ccd7
- (void)accountAdded:(id)arg1;	// IMP=0x000000000041cbf7
- (void)_accessObserversWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000041ca03
- (void)unregisterObserver:(id)arg1;	// IMP=0x000000000041c9aa
- (void)registerObserver:(id)arg1;	// IMP=0x000000000041c951
- (void)updateWalletBadgeCountWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000041c71a
- (void)triggerCloudStoreZoneCreationForAccount:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000041c4ca
- (void)validateAppleBalanceSecurityRequirementsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000041c268
- (void)attemptAppleStoredValueSetupWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000041c016
- (void)attemptAppleBalanceSetupWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000041bdc4
- (void)accountPendingFamilyMembersForAccountIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000041bb84
- (void)didAddAccountPendingFamilyMembers:(id)arg1;	// IMP=0x000000000041bae9
- (void)updateSharedAccountCloudStoreWithAccountIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000041b8a9
- (void)sharedAccountCloudStoreWithAccountIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000041b693
- (void)exportTransactionDataForAccountIdentifier:(id)arg1 withFileFormat:(id)arg2 beginDate:(id)arg3 endDate:(id)arg4 productTimeZone:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x000000000041b3e3
- (void)markUserViewedIntroduction:(_Bool)arg1 forInstallmentIdentifiers:(id)arg2 accountIdentifier:(id)arg3;	// IMP=0x000000000041b180
- (void)updateScheduledPaymentsWithAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000041aee6
- (void)scheduledPaymentsWithAccountIdentifier:(id)arg1 includeFailedRecurringPayments:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000041aecb
- (void)scheduledPaymentsWithAccountIdentifier:(id)arg1 includeFailedRecurringPayments:(_Bool)arg2 allowFetchFromServer:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000041ac1a
- (void)billPaymentSelectedSuggestedAmountDataEventsForAccountIdentifier:(id)arg1 withStartDate:(id)arg2 endDate:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000041a92f
- (void)billPaymentSelectedSuggestedAmountDataEventsForAccountIdentifier:(id)arg1 withStatementIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000041a676
- (void)activatePhysicalCard:(id)arg1 withActivationCode:(id)arg2 forFeatureIdentifier:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000041a3d7
- (void)physicalCardForFeatureIdentifier:(unsigned long long)arg1 activationCode:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000041a160
- (void)inactivePhysicalCardForFeatureIdentifier:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000419f01
- (void)activateBroadwayPhysicalCardWithActivationCode:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000419cb1
- (void)completePhysicalCardActionRequest:(id)arg1 withSignature:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000004199b4
- (void)beginPhysicalCardAction:(id)arg1 onPhysicalCardWithIdentifier:(id)arg2 forAccountWithIdentifier:(id)arg3 accountUserAltDSID:(id)arg4 deviceMetadata:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00000000004195de
- (void)completePhysicalCardRequest:(id)arg1 withSignature:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000004192e1
- (void)beginPhysicalCardRequestWithOrder:(id)arg1 forAccountWithIdentifier:(id)arg2 accountUserAltDSID:(id)arg3 deviceMetadata:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000418f2c
- (void)physicalCardsForAccountWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000418cfe
- (void)noteSecurityCodeActivityWithAction:(long long)arg1 forSecurityCodeIdentifier:(id)arg2 forVirtualCardIdentifier:(id)arg3 forAccountIdentifier:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000418a02
- (void)virtualCardsInKeychainWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000004187ae
- (void)writeVirtualCardToKeychain:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000418583
- (void)fetchKeychainCredentialForVirtualCardIdentifier:(id)arg1 forAccountIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000004182f8
- (void)noteVirtualCardAutoFilledBySafari:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000041808d
- (void)cardCredentialsForVirtualCard:(id)arg1 authorization:(id)arg2 action:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000417dc4
- (void)updateVirtualCardsWithAccountIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000417ae7
- (void)performVirtualCardAction:(long long)arg1 forVirtualCardIdentifier:(id)arg2 forAccountIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000004177db
- (void)createVirtualCard:(long long)arg1 forAccountIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000004174f4
- (void)lastRedemptionEventToPeerPaymentForAccountIdentifier:(id)arg1 altDSID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000041723a
- (void)creditStatementsForAccountIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000416fa0
- (void)insertEvents:(id)arg1 withAccountidentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000416d15
- (void)deleteEventsWithAccountIdentifier:(id)arg1 excludingTypes:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000416a8a
- (void)deleteEventWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000041681f
- (void)deleteEventsWithAccountIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000004165b4
- (void)eventsForAccountIdentifier:(id)arg1 types:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 orderedByDate:(long long)arg5 limit:(unsigned long long)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x00000000004162b0
- (void)eventsForAccountIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000416016
- (void)updateLastUsedInAppFundingSource:(id)arg1 accountIdentifier:(id)arg2;	// IMP=0x0000000000415f82
- (void)lastUsedInAppFundingSourceForAccountIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000415cf4
- (void)updateUserInfoForAccountIdentifier:(id)arg1 contact:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000415a28
- (void)userInfoForAccountIdentifier:(id)arg1 forceFetch:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000415776
- (void)performAccountAction:(id)arg1 withAccountIdentifier:(id)arg2 accountUserAltDSID:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000041547c
- (void)termsWithIdentifier:(id)arg1 accepted:(_Bool)arg2 withAccountIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000004152d0
- (void)defaultAccountForFeature:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000415161
- (void)updatePaymentFundingSourcesForAccountIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000414ec7
- (void)paymentFundingSourceForIdentifier:(id)arg1 accountIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000414c3a
- (void)paymentFundingSourcesForAccountIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000004149cd
- (void)insertDailyCashNotificationForAccountIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000414762
- (void)insertSummaryNotificationForAccountIdentifier:(id)arg1 summaryType:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000004144ed
- (void)scheduleSetupReminderForAccountWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000414310
- (void)insertOrUpdateLocalAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000004140a3
- (void)deleteLocalAccountWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000413e38
- (void)deleteAccountWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000413bcd
- (void)updateAccountUserNotificationSettings:(id)arg1 forAccountUserWithAltDSID:(id)arg2 forAccountWithIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000004138e1
- (void)updateAccountUserPreferences:(id)arg1 forAccountUserWithAltDSID:(id)arg2 forAccountWithIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000004135f5
- (void)deleteAccountUserWithAltDSID:(id)arg1 forAccountWithIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000041336a
- (void)accountUsersForAccountWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000004130fd
- (void)updateAccountUsersForAccountWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000412e63
- (void)updateAccountWithIdentifier:(id)arg1 extended:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000412bc1
- (void)updateAccountWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000412925
- (void)accountForPassWithUniqueID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000412697
- (void)accountWithVirtualCardIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000004123dc
- (void)accountWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000412121
- (void)updateMockAccountWithAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000411eb4
- (void)updateAccountsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000411c33
- (void)accountsWithPassLocallyProvisionedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000004119a2
- (void)accountsForProvisioningWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000004116ce
- (void)accountsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000041143d
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000411427
- (id)_remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000411411
- (CDUnknownBlockType)errorHandlerForMethod:(SEL)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000004111ad
- (void)_accountsChanged:(id)arg1;	// IMP=0x0000000000411153
- (void)dealloc;	// IMP=0x00000000004110de
- (id)init;	// IMP=0x0000000000410f7f

@end

