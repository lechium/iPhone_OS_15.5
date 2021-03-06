//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface Pass
{
}

+ (id)_propertySettersForGroupingProfile;	// IMP=0x00400000000a8806
+ (id)_propertySettersForUpdateContext;	// IMP=0x00100000000a85ed
+ (id)_propertySettersForDisplayProfile;	// IMP=0x00100000000a8175
+ (id)_propertySettersForPass;	// IMP=0x00100000000a6a47
+ (id)_propertiesForPass;	// IMP=0x00100000000a6933
+ (id)_realPassInDatabase:(id)arg1 withProperties:(id)arg2 values:(id *)arg3 pID:(long long)arg4;	// IMP=0x00100000000a6488
+ (id)predicateForInMainStack;	// IMP=0x00100000000a63a9
+ (id)predicateForNotExpired;	// IMP=0x00100000000a62cd
+ (id)predicateForAssociatedAccountIdentifier:(id)arg1;	// IMP=0x00100000000a62aa
+ (id)predicateForIsCloudKitSecurelyArchived:(_Bool)arg1;	// IMP=0x00100000000a6174
+ (id)predicateForIsCloudKitArchived:(_Bool)arg1;	// IMP=0x00100000000a603e
+ (id)predicateForIssuerCountryCodes:(id)arg1;	// IMP=0x00100000000a601b
+ (id)predicateForSerialNumber:(id)arg1;	// IMP=0x00100000000a5ff8
+ (id)predicateForPassTypeIdentifier:(id)arg1;	// IMP=0x00100000000a5fd5
+ (id)predicateForStyle:(long long)arg1;	// IMP=0x00100000000a5f62
+ (id)predicateForProvisioningCredentialHash:(id)arg1;	// IMP=0x00100000000a5f3f
+ (id)predicateForUniqueIDs:(id)arg1;	// IMP=0x00100000000a5f1c
+ (id)predicateForUniqueID:(id)arg1;	// IMP=0x00100000000a5ef9
+ (id)predicateForValidStyle;	// IMP=0x00100000000a5ed2
+ (id)predicateForGroup:(id)arg1;	// IMP=0x00100000000a5e4b
+ (id)predicateForPassType:(id)arg1;	// IMP=0x00100000000a5dc4
+ (id)predicateForPrimaryAccountIdentifier:(id)arg1;	// IMP=0x00100000000a5da1
+ (id)predicateForPaymentApplicationIdentifier:(id)arg1 withSecureElementIdentifiers:(id)arg2;	// IMP=0x00100000000a5c74
+ (id)predicateForPaymentApplicationIdentifier:(id)arg1 withSecureElementIdentifier:(id)arg2;	// IMP=0x00100000000a5b48
+ (id)predicateForReaderIds:(id)arg1;	// IMP=0x00100000000a5af2
+ (id)predicateForTCIs:(id)arg1;	// IMP=0x00100000000a5acf
+ (id)predicateForPaymentType:(unsigned long long)arg1;	// IMP=0x00100000000a5a5c
+ (id)predicateForPaymentApplicationAppletDataFormatPrefix:(id)arg1;	// IMP=0x00100000000a5a39
+ (id)predicateForPaymentApplicationNetworks:(id)arg1;	// IMP=0x00100000000a5a16
+ (id)predicateForPaymentApplicationSupportsInAppPayment:(_Bool)arg1;	// IMP=0x00100000000a59a3
+ (id)predicateForPaymentApplicationSupportsContactlessPayment:(_Bool)arg1;	// IMP=0x00100000000a5930
+ (id)predicateForPrimaryPaymentApplication:(_Bool)arg1;	// IMP=0x00100000000a58b7
+ (id)predicateForPaymentApplicationStates:(id)arg1;	// IMP=0x00100000000a56bf
+ (id)predicateForPaymentApplicationState:(long long)arg1;	// IMP=0x00100000000a564c
+ (id)predicateForPaymentApplicationSecureElementIdentifier:(id)arg1;	// IMP=0x00100000000a5629
+ (id)predicateForPaymentApplicationSecureElementIdentifiers:(id)arg1;	// IMP=0x00100000000a5606
+ (id)predicateForNotificationService:(id)arg1;	// IMP=0x00100000000a557f
+ (id)predicateForAssociatedPassTypeIdentifierHash:(id)arg1;	// IMP=0x00100000000a555c
+ (id)predicateForPassTypeIdentifierHash:(id)arg1;	// IMP=0x00100000000a5539
+ (id)predicateForPaymentCardType:(long long)arg1;	// IMP=0x00100000000a54c6
+ (id)predicateForWebService:(id)arg1;	// IMP=0x00100000000a543f
+ (id)predicateForHasValidNFCPayload;	// IMP=0x00100000000a531f
+ (id)predicateForHasAnyWebService;	// IMP=0x00100000000a52ff
+ (id)predicateForTransactionSourceWithPID:(unsigned long long)arg1;	// IMP=0x00100000000a528c
+ (id)predicateForPersistentID:(long long)arg1;	// IMP=0x00100000000a5219
+ (id)queryWithDatabase:(id)arg1 group:(id)arg2;	// IMP=0x00100000000a4f22
+ (id)queryWithDatabase:(id)arg1 passType:(id)arg2;	// IMP=0x00100000000a4e96
+ (id)unsyncedSecurelyPassesInDatabase:(id)arg1;	// IMP=0x00100000000a4e0e
+ (id)unsyncedPassesInDatabase:(id)arg1;	// IMP=0x00100000000a4d86
+ (id)anyInDatabase:(id)arg1 withAssociatedAccountIdentifier:(id)arg2;	// IMP=0x00100000000a4c29
+ (id)anyInDatabase:(id)arg1 withPrimaryAccountIdentifier:(id)arg2;	// IMP=0x00100000000a4b9d
+ (id)anyInDatabase:(id)arg1 withApplicationIdentifier:(id)arg2 secureElementIdentifiers:(id)arg3;	// IMP=0x00100000000a4b0c
+ (id)anyInDatabase:(id)arg1 withApplicationIdentifier:(id)arg2 secureElementIdentifier:(id)arg3;	// IMP=0x00100000000a4a7b
+ (id)anyInDatabase:(id)arg1 withNotificationService:(id)arg2;	// IMP=0x00100000000a49ef
+ (id)anyInDatabase:(id)arg1 withWebService:(id)arg2 serialNumber:(id)arg3;	// IMP=0x00100000000a48c8
+ (id)anyInDatabase:(id)arg1 withPassType:(id)arg2 serialNumber:(id)arg3;	// IMP=0x00100000000a47a1
+ (id)anyInDatabase:(id)arg1 withGroup:(id)arg2;	// IMP=0x00100000000a4715
+ (id)anyInDatabase:(id)arg1 withWebService:(id)arg2;	// IMP=0x00100000000a4689
+ (id)anyInDatabase:(id)arg1 withPassType:(id)arg2;	// IMP=0x00100000000a45fd
+ (id)anyInDatabase:(id)arg1 withProvisioningCredentialHash:(id)arg2;	// IMP=0x00100000000a4571
+ (id)anyInDatabase:(id)arg1 withUniqueID:(id)arg2;	// IMP=0x00100000000a44e5
+ (id)anyInDatabase:(id)arg1 withTransactionSourcePID:(unsigned long long)arg2;	// IMP=0x00100000000a4459
+ (id)anyInDatabase:(id)arg1 withPersistentID:(long long)arg2;	// IMP=0x00100000000a43cd
+ (void)enumeratePassUniqueIDsAndTypesForQuery:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a4274
+ (void)enumeratePassesForQuery:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a40e0
+ (void)enumeratePassesAndGroupingProfilesForQuery:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a3e77
+ (void)enumerateOrganizationNamesForQuery:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a3d55
+ (void)enumerateUpdateContextsForQuery:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a3b69
+ (id)candidatePassesInDatabase:(id)arg1 matchingPredicate:(id)arg2;	// IMP=0x00100000000a27e2
+ (id)unexpiredSecureElementCardTypesInDatabase:(id)arg1;	// IMP=0x00100000000a25e5
+ (id)secureElementCardTypesInDatabase:(id)arg1;	// IMP=0x00100000000a23e4
+ (id)unexpiredPassStylesInDatabase:(id)arg1;	// IMP=0x00100000000a2165
+ (id)passStylesInDatabase:(id)arg1;	// IMP=0x00100000000a1f68
+ (id)passUniqueIDsInDatabase:(id)arg1 matchingPredicate:(id)arg2;	// IMP=0x00100000000a1dba
+ (id)passesInDatabase:(id)arg1 matchingPredicate:(id)arg2;	// IMP=0x00100000000a1d01
+ (id)_realPassesInDatabase:(id)arg1 predicate:(id)arg2 orderedBy:(id)arg3;	// IMP=0x00100000000a173a
+ (id)_realPassPredicateForPredicate:(id)arg1;	// IMP=0x00100000000a1612
+ (id)insertPass:(id)arg1 withPassType:(id)arg2 webService:(id)arg3 transactionService:(id)arg4 messageService:(id)arg5 daemonPassData:(id)arg6 inDatabase:(id)arg7;	// IMP=0x001000000009f431
+ (id)_updateDictionaryWithPass:(id)arg1;	// IMP=0x001000000009e83d
+ (id)_insertionDictionaryWithPass:(id)arg1 passType:(id)arg2;	// IMP=0x001000000009e64f
+ (void)addJoinClausesForProperty:(id)arg1 toJoins:(id)arg2;	// IMP=0x001000000009e24d
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x001000000009e169
+ (id)databaseTable;	// IMP=0x001000000009e15c
- (_Bool)deleteFromDatabase;	// IMP=0x00000000000a4fae
- (id)transactionSourceIdentifier;	// IMP=0x00100000000a3aa4
- (_Bool)auxiliaryCapabilityRegistered;	// IMP=0x00100000000a3a59
- (void)getPushRegistrationStatus:(unsigned long long *)arg1 date:(id *)arg2;	// IMP=0x00100000000a37fb
- (id)associatedApplicationIdentifiers;	// IMP=0x00100000000a37d1
- (id)associatedPassTypeIdentifiers;	// IMP=0x00100000000a37a7
- (id)relevantDate;	// IMP=0x00100000000a3759
- (id)primaryAccountIdentifier;	// IMP=0x00100000000a3740
- (unsigned long long)associatedAccountFeatureIdentifier;	// IMP=0x00100000000a366a
- (id)associatedAccountIdentifier;	// IMP=0x00100000000a3651
- (_Bool)hasAssociatedPeerPaymentAccount;	// IMP=0x00100000000a3606
- (id)authenticationToken;	// IMP=0x00100000000a35ed
- (id)serialNumber;	// IMP=0x00100000000a35d4
- (id)uniqueID;	// IMP=0x00100000000a35bb
- (_Bool)revoked;	// IMP=0x00100000000a3570
- (id)defaultPaymentApplication;	// IMP=0x00100000000a3493
- (id)group;	// IMP=0x00100000000a33b6
- (id)passNotificationServiceForType:(unsigned long long)arg1;	// IMP=0x00100000000a3376
- (id)passMessageService;	// IMP=0x00100000000a3299
- (id)passTransactionService;	// IMP=0x00100000000a31bc
- (id)messageService;	// IMP=0x00100000000a316c
- (id)transactionService;	// IMP=0x00100000000a311c
- (id)webService;	// IMP=0x00100000000a303f
- (unsigned long long)passFlavor;	// IMP=0x00100000000a2ff4
- (id)passType;	// IMP=0x00100000000a2f17
- (id)groupingProfile;	// IMP=0x00100000000a2dd8
- (id)updateContext;	// IMP=0x00100000000a2c99
- (id)pass;	// IMP=0x00100000000a2c87
- (id)_realPass;	// IMP=0x00100000000a1ace
- (_Bool)udpateWithAuxiliaryCapabilityRegistered:(_Bool)arg1;	// IMP=0x00100000000a15b1
- (void)updateWithIngestedDate:(id)arg1;	// IMP=0x00100000000a1598
- (void)updateWithRevocationStatus:(_Bool)arg1;	// IMP=0x00100000000a153e
- (void)updateWithGroup:(id)arg1;	// IMP=0x00100000000a14fa
- (void)updateWithAssociatedWebDomains:(id)arg1;	// IMP=0x00100000000a1440
- (void)updateWithAssociatedPassTypeIdentifiers:(id)arg1;	// IMP=0x00100000000a1386
- (void)updateWithAssociatedApplicationIdentifiers:(id)arg1;	// IMP=0x00100000000a12cc
- (void)updateWithSortingState:(long long)arg1 forSortingReason:(long long)arg2;	// IMP=0x00100000000a0cd4
- (void)_updateSortingStateIfNecessary;	// IMP=0x00100000000a0acb
- (void)_updateWithPassMessageService:(id)arg1;	// IMP=0x00100000000a0a87
- (void)_updateWithPassTransactionService:(id)arg1;	// IMP=0x00100000000a0a43
- (void)_updateWithMessageService:(id)arg1;	// IMP=0x00100000000a096f
- (void)_updateWithTransactionService:(id)arg1;	// IMP=0x00100000000a089b
- (void)updateWithAssociatedAccountIdentifier:(id)arg1;	// IMP=0x00100000000a0882
- (void)updateWithTransactionSourcePID:(long long)arg1;	// IMP=0x00100000000a0828
- (void)updateWithDefaultPaymentApplication:(id)arg1;	// IMP=0x00100000000a07e4
- (void)udpateWithCloudKitSecureMetadata:(id)arg1;	// IMP=0x00100000000a07cb
- (void)udpateWithIsCloudKitSecurelyArchived:(_Bool)arg1;	// IMP=0x00100000000a0771
- (void)udpateWithCloudKitMetadata:(id)arg1;	// IMP=0x00100000000a0758
- (void)udpateWithIsCloudKitArchived:(_Bool)arg1;	// IMP=0x00100000000a06fe
- (void)updateWithSecureElementPassFields:(id)arg1;	// IMP=0x00100000000a043f
- (void)updateWithPassTileDescriptors:(id)arg1;	// IMP=0x00100000000a0184
- (void)updateWithPaymentApplications:(id)arg1;	// IMP=0x00100000000a0105
- (void)_updateWithWebService:(id)arg1;	// IMP=0x00100000000a00c1
- (void)updateWithBeacons:(id)arg1;	// IMP=0x00100000000a0007
- (void)updateWithNFCPayload:(id)arg1;	// IMP=0x001000000009ff4e
- (void)updateTallCodeValueWithPass:(id)arg1;	// IMP=0x001000000009febe
- (void)updateBackgroundColorWithPass:(id)arg1;	// IMP=0x001000000009fdc6
- (void)updateLocationsWithPass:(id)arg1;	// IMP=0x001000000009fb33
- (void)updateWithLastModifiedSource:(long long)arg1;	// IMP=0x001000000009fa71
- (void)updateWithLastModifiedTag:(id)arg1;	// IMP=0x001000000009fa58
- (void)updateWithPushRegistrationStatus:(long long)arg1 date:(id)arg2;	// IMP=0x001000000009f93c
- (void)updateWithPass:(id)arg1 webService:(id)arg2 transactionSevice:(id)arg3 messageService:(id)arg4 daemonPassData:(id)arg5;	// IMP=0x001000000009f540
- (id)initWithPass:(id)arg1 passType:(id)arg2 webService:(id)arg3 transactionService:(id)arg4 messageService:(id)arg5 daemonPassData:(id)arg6 inDatabase:(id)arg7;	// IMP=0x001000000009f2fd

@end

