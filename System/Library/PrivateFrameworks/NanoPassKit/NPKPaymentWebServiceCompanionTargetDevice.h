//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NanoPassKit/IDSServiceDelegate-Protocol.h>
#import <NanoPassKit/NPKCompanionPasscodeChangeCoordinatorDelegate-Protocol.h>
#import <NanoPassKit/PKPaymentWebServiceArchiver-Protocol.h>
#import <NanoPassKit/PKPaymentWebServiceTargetDeviceProtocol-Protocol.h>

@class IDSService, NPKCompanionAgentConnection, NPKSubcredentialInvitationCoordinator, NPKTapToRadarManager, NPKTargetDeviceAssertionManager, NRActiveDeviceAssertion, NSMutableDictionary, NSString, PUConnection;
@protocol NPKCompanionPasscodeChangeCoordinatorProtocol, NPKPaymentWebServiceCompanionTargetDeviceDelegate, OS_dispatch_queue;

@interface NPKPaymentWebServiceCompanionTargetDevice : NSObject <IDSServiceDelegate, NPKCompanionPasscodeChangeCoordinatorDelegate, PKPaymentWebServiceTargetDeviceProtocol, PKPaymentWebServiceArchiver>
{
    id <NPKPaymentWebServiceCompanionTargetDeviceDelegate> _delegate;	// 8 = 0x8
    unsigned long long _context;	// 16 = 0x10
    IDSService *_provisioningService;	// 24 = 0x18
    NPKCompanionAgentConnection *_companionAgentConnection;	// 32 = 0x20
    NSMutableDictionary *_outstandingRequests;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_internalQueue;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_responseQueue;	// 56 = 0x38
    NRActiveDeviceAssertion *_provisioningActiveDeviceAssertion;	// 64 = 0x40
    NPKTargetDeviceAssertionManager *_remoteDeviceAssertionManager;	// 72 = 0x48
    NPKTapToRadarManager *_manager;	// 80 = 0x50
    id <NPKCompanionPasscodeChangeCoordinatorProtocol> _passcodeChangeCoordinator;	// 88 = 0x58
    id _passcodeUpgradeFlowController;	// 96 = 0x60
    NPKSubcredentialInvitationCoordinator *_subcredentialInvitationCoordinator;	// 104 = 0x68
    PUConnection *_passcodeConnection;	// 112 = 0x70
}

+ (id)bridgedClientInfoHTTPHeader;	// IMP=0x0000000000177ca4
- (void).cxx_destruct;	// IMP=0x00000000001cc3ca
@property(retain, nonatomic) PUConnection *passcodeConnection; // @synthesize passcodeConnection=_passcodeConnection;
@property(retain, nonatomic) NPKSubcredentialInvitationCoordinator *subcredentialInvitationCoordinator; // @synthesize subcredentialInvitationCoordinator=_subcredentialInvitationCoordinator;
@property(nonatomic) __weak id passcodeUpgradeFlowController; // @synthesize passcodeUpgradeFlowController=_passcodeUpgradeFlowController;
@property(retain, nonatomic) id <NPKCompanionPasscodeChangeCoordinatorProtocol> passcodeChangeCoordinator; // @synthesize passcodeChangeCoordinator=_passcodeChangeCoordinator;
@property(retain, nonatomic) NPKTapToRadarManager *manager; // @synthesize manager=_manager;
@property(retain, nonatomic) NPKTargetDeviceAssertionManager *remoteDeviceAssertionManager; // @synthesize remoteDeviceAssertionManager=_remoteDeviceAssertionManager;
@property(retain, nonatomic) NRActiveDeviceAssertion *provisioningActiveDeviceAssertion; // @synthesize provisioningActiveDeviceAssertion=_provisioningActiveDeviceAssertion;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *responseQueue; // @synthesize responseQueue=_responseQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property(retain, nonatomic) NSMutableDictionary *outstandingRequests; // @synthesize outstandingRequests=_outstandingRequests;
@property(retain, nonatomic) NPKCompanionAgentConnection *companionAgentConnection; // @synthesize companionAgentConnection=_companionAgentConnection;
@property(retain, nonatomic) IDSService *provisioningService; // @synthesize provisioningService=_provisioningService;
@property(nonatomic) unsigned long long context; // @synthesize context=_context;
@property(nonatomic) __weak id <NPKPaymentWebServiceCompanionTargetDeviceDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_statusUpdaterWithResponseClass:(Class)arg1 type:(unsigned short)arg2 responseIdentifier:(id)arg3;	// IMP=0x00000000001cbfc2
- (id)_categoryIdentifierForPass:(id)arg1;	// IMP=0x00000000001cbe6d
- (id)_expressModesFromExpressPassesInformation:(id)arg1;	// IMP=0x00000000001cbb7e
- (id)_expressPassesInformationFromDataArray:(id)arg1;	// IMP=0x00000000001cba43
- (_Bool)_deviceIsConnected;	// IMP=0x00000000001cb9cd
- (_Bool)deviceSupportTransitReminderSetting;	// IMP=0x00000000001cb956
- (_Bool)deviceSupportMultipleExpressPasses;	// IMP=0x00000000001cb8d5
- (id)_serialNumbersOfAllPairedDevices;	// IMP=0x00000000001cb798
- (id)_sendProtobuf:(id)arg1 responseExpected:(_Bool)arg2 extraOptions:(id)arg3 priority:(long long)arg4;	// IMP=0x00000000001cb51a
- (id)_sendProtobuf:(id)arg1 responseExpected:(_Bool)arg2 extraOptions:(id)arg3;	// IMP=0x00000000001cb502
- (id)_sendProtobuf:(id)arg1 responseExpected:(_Bool)arg2;	// IMP=0x00000000001cb4ed
- (id)_sendProtobuf:(id)arg1 responseIdentifier:(id)arg2;	// IMP=0x00000000001cb402
- (void)_trackOutstandingRequestWithMessageIdentifier:(id)arg1 completionHandler:(id)arg2 errorHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001cafe4
- (void)_invalidateAssertionOfType:(unsigned long long)arg1;	// IMP=0x00000000001cadf0
- (void)_acquireAssertionOfType:(unsigned long long)arg1;	// IMP=0x00000000001cacec
- (void)passcodeChangeCoordinator:(id)arg1 checkRemoteDeviceLockStateWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001cab4e
- (void)passcodeChangeCoordinator:(id)arg1 remoteDeviceShouldCancelPasscodeChangeWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001ca9b0
- (void)passcodeChangeCoordinator:(id)arg1 remoteDeviceShouldInitiatePasscodeChangeForType:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001ca7d8
- (void)serviceProviderDataForPassWithUniqueIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001ca017
- (void)serviceProviderDataForPassWithUniqueIdentifierResponse:(id)arg1;	// IMP=0x00000000001c989b
- (_Bool)areUnifiedAccessPassesSupported;	// IMP=0x00000000001c9824
- (void)addISO18013BlobsResponse:(id)arg1;	// IMP=0x00000000001c9292
- (void)addISO18013Blobs:(id)arg1 cardType:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001c883e
- (void)deleteKeyMaterialForSubCredentialId:(id)arg1;	// IMP=0x00000000001c84a8
- (void)generateSEEncryptionCertificateForSubCredentialIdResponse:(id)arg1;	// IMP=0x00000000001c7e76
- (void)generateSEEncryptionCertificateForSubCredentialId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001c768f
- (void)generateTransactionKeyWithParametersResponse:(id)arg1;	// IMP=0x00000000001c6f51
- (void)paymentWebService:(id)arg1 generateTransactionKeyWithParameters:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001c6733
- (void)requestAndStoreExternalizedAuthWithCompletionResponse:(id)arg1;	// IMP=0x00000000001c61a1
- (void)requestAndStoreExternalizedAuthWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001c5a21
- (void)generateISOEncryptionCertificateForSubCredentialIdResponse:(id)arg1;	// IMP=0x00000000001c5366
- (void)generateISOEncryptionCertificateForSubCredentialId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001c4b7b
- (void)signWithFidoKeyResponse:(id)arg1;	// IMP=0x00000000001c4549
- (void)signWithFidoKeyForRelyingParty:(id)arg1 relyingPartyAccountHash:(id)arg2 fidoKeyHash:(id)arg3 challenge:(id)arg4 publicKeyIdentifier:(id)arg5 externalizedAuth:(id)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x00000000001c3a8c
- (void)checkFidoKeyResponse:(id)arg1;	// IMP=0x00000000001c3586
- (void)checkFidoKeyPresenceForRelyingParty:(id)arg1 relyingPartyAccountHash:(id)arg2 fidoKeyHash:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000001c2e5c
- (void)createFidoKeyResponse:(id)arg1;	// IMP=0x00000000001c27a1
- (void)createFidoKeyForRelyingParty:(id)arg1 relyingPartyAccountHash:(id)arg2 challenge:(id)arg3 externalizedAuth:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000001c1e06
- (void)availableHomeKeyPassesResponse:(id)arg1;	// IMP=0x00000000001c133f
- (void)availableHomeKeyPassesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001c0c42
- (void)provisionHomeKeyPassForSerialNumbersResponse:(id)arg1;	// IMP=0x00000000001c017b
- (void)provisionHomeKeyPassForSerialNumbers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001bf9a2
- (void)featureApplicationsForAccountIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001bf432
- (void)featureApplicationsForAccountIdentifierResponse:(id)arg1;	// IMP=0x00000000001bee24
- (void)photosForFamilyMembersWithDSIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001be8af
- (void)photosForFamilyMembersWithDSIDsResponse:(id)arg1;	// IMP=0x00000000001be222
- (void)performDeviceRegistrationForReason:(id)arg1 brokerURL:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001bd609
- (void)paymentWebServiceRegisterResponse:(id)arg1;	// IMP=0x00000000001bcc34
- (void)familyMembersWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001bc844
- (void)requestAutomaticProvisioningForCompanionPaymentPass:(id)arg1;	// IMP=0x00000000001bc45a
- (void)paymentWebService:(id)arg1 passOwnershipTokenWithIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001bbdee
- (void)paymentWebServiceOwnershipTokenResponse:(id)arg1;	// IMP=0x00000000001bb74d
- (void)paymentWebService:(id)arg1 resumeRangingForPairedReaderIdentifier:(id)arg2;	// IMP=0x00000000001bb42a
- (void)paymentWebService:(id)arg1 pauseRangingForPairedReaderIdentifier:(id)arg2 durationInSeconds:(id)arg3;	// IMP=0x00000000001bafc7
- (void)presentStandaloneTransactionForPassUniqueIdentifierResponse:(id)arg1;	// IMP=0x00000000001baac1
- (void)_paymentWebService:(id)arg1 presentStandaloneTransaction:(long long)arg2 forPassUniqueIdentifier:(id)arg3 validUntilDate:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000001ba4a9
- (void)paymentWebService:(id)arg1 presentStandaloneTransaction:(long long)arg2 forPassUniqueIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000001b8f65
- (void)declineRelatedSharingInvitationsIfNecessaryResponse:(id)arg1;	// IMP=0x00000000001b8a5f
- (void)declineRelatedSharingInvitationsIfNecessaryRequest:(id)arg1;	// IMP=0x00000000001b8542
- (void)paymentWebService:(id)arg1 declineRelatedSharingInvitationsIfNecessary:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001b7f0e
- (void)handleCredentialsChange:(id)arg1;	// IMP=0x00000000001b7b2d
- (void)removeSharingInvitationResponse:(id)arg1;	// IMP=0x00000000001b7627
- (void)paymentWebService:(id)arg1 removeSharingInvitation:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001b6feb
- (void)revokeCredentialsResponse:(id)arg1;	// IMP=0x00000000001b6ae7
- (void)revokeCredentialsWithIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001b6506
- (void)registerCredentialsResponse:(id)arg1;	// IMP=0x00000000001b5bfa
- (void)registerCredentialsWithIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001b5543
- (void)updateSubcredentialMetadataResponse:(id)arg1;	// IMP=0x00000000001b4fec
- (void)paymentWebService:(id)arg1 updateMetadataOnPass:(id)arg2 withCredential:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000001b4a00
- (void)requestSubcredentialInvitationResponse:(id)arg1;	// IMP=0x00000000001b4487
- (void)paymentWebService:(id)arg1 requestSubcredentialInvitation:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001b3e5b
- (void)setAccountAttestationAnonymizationSaltResponse:(id)arg1;	// IMP=0x00000000001b38e2
- (void)paymentWebService:(id)arg1 setAccountAttestationAnonymizationSalt:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001b32f1
- (void)fetchOrInitializeAccountAttestationAnonymizationSaltRequest:(id)arg1;	// IMP=0x00000000001b2db3
- (void)accountAttestationAnonymizationSaltResponse:(id)arg1;	// IMP=0x00000000001b2781
- (void)paymentWebService:(id)arg1 accountAttestationAnonymizationSaltWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001b20c2
- (void)handleAcceptSubcredentialProvisioningRequest:(id)arg1;	// IMP=0x00000000001b1bc7
- (void)matchingCredentialOnDeviceResponse:(id)arg1;	// IMP=0x00000000001b157a
- (void)paymentWebService:(id)arg1 matchingInvitationOnDevice:(id)arg2 withTimeout:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000001b0f5b
- (void)acceptSubcredentialInvitationResponse:(id)arg1;	// IMP=0x00000000001b08ec
- (void)paymentWebService:(id)arg1 acceptSubcredentialInvitationWithIdentifier:(id)arg2 metadata:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000001b02b8
- (void)subcredentialInvitationsResponse:(id)arg1;	// IMP=0x00000000001afba7
- (void)paymentWebService:(id)arg1 subcredentialInvitationsWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001af6c0
- (void)canAcceptInvitationRequest:(id)arg1;	// IMP=0x00000000001af159
- (void)canAcceptInvitationResponse:(id)arg1;	// IMP=0x00000000001aebc7
- (void)paymentWebService:(id)arg1 canAcceptInvitation:(id)arg2 withCompletionV2:(CDUnknownBlockType)arg3;	// IMP=0x00000000001ae575
- (void)canAddSecureElementPassWithConfigurationResponse:(id)arg1;	// IMP=0x00000000001adf55
- (void)_canAddSecureElementPassWithConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001ad6ed
- (void)paymentWebService:(id)arg1 canAddSecureElementPassWithConfiguration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001acb7d
- (id)deviceIDSIdentifier;	// IMP=0x00000000001aca8b
- (_Bool)_isUnifiedAccessProvisioningSupported;	// IMP=0x00000000001aca14
- (_Bool)_isHomeKeyProvisioningSupported;	// IMP=0x00000000001aca0a
- (_Bool)_isSubcredentialProvisioningSupportedOverUWB;	// IMP=0x00000000001aca00
- (_Bool)_isSubcredentialProvisioningSupported;	// IMP=0x00000000001ac9f6
- (void)handleRemoteDevicePasscodeStateResponse:(id)arg1;	// IMP=0x00000000001ac3a8
- (void)fetchRemoteDevicePasscodeStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001abe67
- (void)endRequiringUpgradedPasscodeIfNecessary;	// IMP=0x00000000001abd4f
- (void)startRequiringUpgradedPasscodeWithPasscodeMeetsPolicy:(_Bool)arg1;	// IMP=0x00000000001abc37
- (void)handlePasscodeUpgradeFlowShouldExitRequest:(id)arg1;	// IMP=0x00000000001ab9a3
- (void)exitPasscodeUpgradeForPasscodeUpgradeFlowController:(id)arg1 withShouldContinue:(_Bool)arg2 error:(id)arg3;	// IMP=0x00000000001ab8f2
- (void)dismissRemoteDevicePasscodeUpgradePromptWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001ab3bd
- (void)handleRemoteDevicePasscodeUpgradePresentationPromptResponse:(id)arg1;	// IMP=0x00000000001aac23
- (void)presentRemoteDevicePasscodeUpgradePromptForChangeType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001aa5d2
- (void)handleApplyRestrictionsForPasscodeUpgradeFlowControllerResponse:(id)arg1;	// IMP=0x00000000001a9cbd
- (void)requestPasscodeUpgradeForPasscodeUpgradeFlowController:(id)arg1 withVisibleViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001a93c9
- (void)handleEnforceUpgradedPasscodePolicyResponse:(id)arg1;	// IMP=0x00000000001a8b88
- (void)enforceUpgradedPasscodePolicyWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001a8579
- (void)consistencyCheck;	// IMP=0x00000000001a853a
- (_Bool)willPassWithUniqueIdentifierAutomaticallyBecomeDefault:(id)arg1;	// IMP=0x00000000001a8366
- (void)paymentWebService:(id)arg1 requestPassUpgrade:(id)arg2 pass:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000001a8111
- (void)claimSecureElementForCurrentUserWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001a80f8
- (_Bool)paymentWebServiceSupportsPeerPaymentRegistration:(id)arg1;	// IMP=0x00000000001a8093
- (void)handleUpdatedPeerPaymentWebServiceContext:(id)arg1;	// IMP=0x00000000001a7e37
- (void)handleTransactionDefaultsNeededRequest:(id)arg1;	// IMP=0x00000000001a7d70
- (void)handleShowPaymentSetupRequest:(id)arg1;	// IMP=0x00000000001a7bf0
- (void)handleWebServiceContextNeededRequest:(id)arg1;	// IMP=0x00000000001a7b29
- (void)handleWebServiceContextDidChangeRequest:(id)arg1;	// IMP=0x00000000001a785f
- (void)handleCompanioniCloudSignout;	// IMP=0x00000000001a751f
- (void)handleCompanionPeerPaymentRegistration;	// IMP=0x00000000001a71ab
- (void)handleCompanionMigrationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001a6cf3
- (void)handleCompanionMigrationResponse:(id)arg1;	// IMP=0x00000000001a6378
- (void)sendWebServiceContextToWatch:(id)arg1;	// IMP=0x00000000001a5dd8
- (void)sendPaymentOptionsDefaultsToWatch;	// IMP=0x00000000001a5a57
- (id)_upgradeExpressAutomaticSelectionCriteriaRequestForPass:(id)arg1 deviceClass:(id)arg2 OSVersion:(id)arg3 SEID:(id)arg4;	// IMP=0x00000000001a53b4
- (id)_upgradeExpressAutomaticSelectionCriteriaRequestForPass:(id)arg1;	// IMP=0x00000000001a519b
- (id)_expressPassInformationWithPass:(id)arg1 upgradeRequst:(id)arg2;	// IMP=0x00000000001a4fce
- (void)paymentWebService:(id)arg1 canHandlePotentialExpressPass:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001a3e4d
- (void)_singleExpressTransitPassPaymentWebService:(id)arg1 handlePotentialExpressPassInformation:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001a326c
- (void)_multipleExpressTransitPassPaymentWebService:(id)arg1 handlePotentialExpressPassInformation:(id)arg2 upgradeRequest:(id)arg3 pass:(id)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000001a1f60
- (void)paymentWebService:(id)arg1 handlePotentialExpressPass:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001a18e5
- (_Bool)isGymKitEnabled;	// IMP=0x00000000001a18db
- (_Bool)supportsCredentialType:(long long)arg1;	// IMP=0x00000000001a18ce
- (_Bool)supportsExpressForAutomaticSelectionTechnologyType:(long long)arg1;	// IMP=0x00000000001a18c1
- (_Bool)felicaSecureElementIsAvailable;	// IMP=0x00000000001a18b9
- (void)checkCompanionPeerPaymentRegistrationState:(id)arg1;	// IMP=0x00000000001a1789
- (void)downloadAllPaymentPasses:(id)arg1;	// IMP=0x00000000001a1659
- (void)cloudStoreStatusWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001a120e
- (void)cloudStoreStatusResponse:(id)arg1;	// IMP=0x00000000001a0b0c
- (void)resetApplePayManateeViewWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001a06c3
- (void)resetApplePayManateeViewResponse:(id)arg1;	// IMP=0x00000000001a0084
- (void)checkTLKsMissingWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000019fc3b
- (void)checkTLKsMissingResponse:(id)arg1;	// IMP=0x000000000019f5f6
- (void)initializeCloudStoreIfNecessaryWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000019f1ad
- (void)initializeCloudStoreIfNecessaryWithHandlerResponse:(id)arg1;	// IMP=0x000000000019eb68
- (void)initializeCloudStoreIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000019e722
- (void)initializeCloudStoreIfNecessaryResponse:(id)arg1;	// IMP=0x000000000019e1ed
- (void)paymentWebService:(id)arg1 setDefaultPaymentPassUniqueIdentifier:(id)arg2;	// IMP=0x000000000019dfa8
- (void)performProductActionRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000019dad0
- (void)performProductActionResponse:(id)arg1;	// IMP=0x000000000019d2df
- (void)productsWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000019ca78
- (void)availableProductsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000019ca61
- (void)availableProductsResponse:(id)arg1;	// IMP=0x000000000019c270
- (void)performDeviceCheckInWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000019bcd8
- (void)performDeviceCheckInResponse:(id)arg1;	// IMP=0x000000000019b616
- (id)_deviceSupportedFeatureIdentifiers;	// IMP=0x000000000019b417
- (void)accountWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000019ae27
- (void)accountWithIdentifierResponse:(id)arg1;	// IMP=0x000000000019a790
- (void)paymentWebService:(id)arg1 updateAccountWithIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000019a2e3
- (void)updateAccountWithIdentifierResponse:(id)arg1;	// IMP=0x0000000000199be5
- (id)supportedFeatureIdentifiersForAccountProvisioningWithPaymentWebService:(id)arg1;	// IMP=0x0000000000199803
- (id)supportedFeatureIdentifiersWithPaymentWebService:(id)arg1;	// IMP=0x00000000001991d2
- (void)paymentWebService:(id)arg1 deviceMetadataWithFields:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000198a89
- (void)deviceMetadataResponse:(id)arg1;	// IMP=0x0000000000198483
- (void)provisionPassForRemoteCredentialWithType:(long long)arg1 andIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000197eb6
- (void)provisionPassForRemoteCredentialWithTypeAndIdentifierResponse:(id)arg1;	// IMP=0x00000000001977ea
- (void)triggerCloudStoreZoneCreationForAccount:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001971da
- (void)triggerCloudStoreZoneCreationForAccountResponse:(id)arg1;	// IMP=0x0000000000196cd4
- (void)updatedAccountsForProvisioningWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000019596d
- (_Bool)paymentWebServiceSupportsAccounts:(id)arg1;	// IMP=0x0000000000195664
- (void)handleDeviceUnlockedForPendingProvisioningRequest:(id)arg1;	// IMP=0x000000000019559d
- (void)handlePeerPaymentTermsAndConditionsAcceptanceRequest:(id)arg1;	// IMP=0x00000000001954d6
- (void)openURLWithRequest:(id)arg1;	// IMP=0x00000000001950a3
- (void)setPeerPaymentPreferences:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000194bd0
- (void)setPeerPaymentPreferencesResponse:(id)arg1;	// IMP=0x00000000001944d2
- (void)updatePeerPaymentAccountWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000019408c
- (void)updatePeerPaymentAccountResponse:(id)arg1;	// IMP=0x0000000000193b3a
- (void)provisionPeerPaymentPassWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001936f1
- (void)provisionPeerPaymentPassResponse:(id)arg1;	// IMP=0x0000000000193095
- (void)peerPaymentUnregisterWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000192c47
- (void)peerPaymentUnregisterResponse:(id)arg1;	// IMP=0x000000000019254e
- (void)peerPaymentRegisterWithURL:(id)arg1 forceReRegistration:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000192057
- (void)peerPaymentRegisterResponse:(id)arg1;	// IMP=0x00000000001918ab
- (void)cancelOutstandingRemotePassUpdateRequest:(id)arg1 pass:(id)arg2;	// IMP=0x00000000001914bc
- (void)remotePassUpgradeWithRequest:(id)arg1 pass:(id)arg2 requireAuthorization:(_Bool)arg3 notifyUserOnPairedDevice:(_Bool)arg4 updateBlock:(CDUnknownBlockType)arg5;	// IMP=0x0000000000190f01
- (void)remotePassUpgradeResponse:(id)arg1;	// IMP=0x000000000019057a
- (void)cancelOutstandingEnableServiceModeRequests;	// IMP=0x0000000000190295
- (void)enableServiceModeForPassWithUniqueIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000018fdd9
- (void)cancelOutstandingSetDefaultExpressPassRequestsWithExpressMode:(id)arg1;	// IMP=0x000000000018fa0a
- (void)enableServiceModeResponse:(id)arg1;	// IMP=0x000000000018f4d3
- (void)commutePlanReminderForCommutePlan:(id)arg1 pass:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000000018eee0
- (void)commutePlanReminderWithCommutePlanAndPassResponse:(id)arg1;	// IMP=0x000000000018e88d
- (void)setCommutePlanReminder:(id)arg1 forCommutePlan:(id)arg2 pass:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000018e25d
- (void)setCommutePlanReminderWithCommutePlanAndPassResponse:(id)arg1;	// IMP=0x000000000018dd25
- (void)balanceReminderForBalance:(id)arg1 pass:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000018d72e
- (void)balanceReminderWithBalanceAndPassResponse:(id)arg1;	// IMP=0x000000000018d0cc
- (void)setBalanceReminder:(id)arg1 forBalance:(id)arg2 pass:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000018ca23
- (void)setBalanceReminderWithBalanceAndPassResponse:(id)arg1;	// IMP=0x000000000018c4eb
- (void)handleBalanceReminderWithBalanceAndPassRequest:(id)arg1;	// IMP=0x000000000018c2aa
- (void)conflictingExpressPassIdentifiersForPassInformationResponse:(id)arg1;	// IMP=0x000000000018bb3d
- (void)conflictingExpressPassIdentifiersForPassInformation:(id)arg1 withReferenceExpressState:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000018b4e0
- (void)conflictingExpressPassIdentifiersForPassInformation:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000018b433
- (void)removeExpressPassWithUniqueIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000018aed9
- (void)removeExpressPassWithUniqueIdentifierResponse:(id)arg1;	// IMP=0x000000000018a841
- (void)removeExpressPassesWithCardType:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000018a33f
- (void)removeExpressPassesWithCardTypeResponse:(id)arg1;	// IMP=0x0000000000189d34
- (void)setExpressWithPassInformation:(id)arg1 requestAuthorization:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000018951a
- (void)setExpressPassResponse:(id)arg1;	// IMP=0x0000000000188d81
- (void)handleUpdatedAppletState:(id)arg1;	// IMP=0x0000000000188aff
- (void)handleDeletePaymentTransactionWithIdentifier:(id)arg1 passUniqueIdentifier:(id)arg2;	// IMP=0x00000000001887e4
- (void)retrieveTransactionsForPassWithUniqueID:(id)arg1;	// IMP=0x000000000018846a
- (void)handleRemovedTransaction:(id)arg1;	// IMP=0x00000000001882ea
- (void)handlePaymentTransactions:(id)arg1;	// IMP=0x0000000000187ac5
- (void)handleValueAddedServiceTransactions:(id)arg1;	// IMP=0x00000000001872a9
- (void)preconditionNotMet:(id)arg1;	// IMP=0x0000000000187094
- (void)updatePushToken:(id)arg1;	// IMP=0x0000000000186f14
- (void)updatePaymentPass:(id)arg1;	// IMP=0x0000000000186d73
- (void)handlePreferredAID:(id)arg1 forPassWithUniqueID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000186879
- (void)preferredAIDResponse:(id)arg1;	// IMP=0x0000000000186349
- (void)preferredAIDRequest:(id)arg1;	// IMP=0x00000000001860e8
- (void)handlePendingRemovalOfPaymentPass:(id)arg1 uniqueID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001859c5
- (void)pendingRemovalResponse:(id)arg1;	// IMP=0x000000000018548e
- (void)dumpLogsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001850cd
- (void)dumpLogsResponse:(id)arg1;	// IMP=0x0000000000184c9d
- (void)removeAIDsFromSecureElement:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000184882
- (void)secureElementRemoveAppletsResponse:(id)arg1;	// IMP=0x000000000018434a
- (void)secureElementAppletsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000183f89
- (void)secureElementGetAppletsResponse:(id)arg1;	// IMP=0x00000000001838f1
- (unsigned long long)secureElementOwnershipStateForCurrentUser;	// IMP=0x00000000001838e6
- (_Bool)claimSecureElementForCurrentUser;	// IMP=0x00000000001838de
- (void)downloadAllPaymentPassesForPaymentWebService:(id)arg1;	// IMP=0x00000000001836cb
- (void)paymentWebService:(id)arg1 removePass:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001835f1
- (void)paymentWebService:(id)arg1 addPaymentPass:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000183138
- (void)paymentWebService:(id)arg1 deleteApplicationWithAID:(id)arg2;	// IMP=0x0000000000182eca
- (id)deviceVersion;	// IMP=0x0000000000182e8b
- (id)osVersion;	// IMP=0x0000000000182e3a
- (id)deviceClass;	// IMP=0x0000000000182dfb
- (id)deviceName;	// IMP=0x0000000000182daa
- (id)deviceDescriptionForPaymentWebService:(id)arg1;	// IMP=0x0000000000182d59
- (id)paymentWebService:(id)arg1 supportedRegionFeatureOfType:(long long)arg2;	// IMP=0x0000000000182a16
- (int)registrationSupportedInCurrentRegionForWebService:(id)arg1;	// IMP=0x00000000001829ad
- (int)paymentSupportedInCurrentRegionForWebService:(id)arg1;	// IMP=0x0000000000182859
- (id)paymentWebService:(id)arg1 filterVerificationChannels:(id)arg2;	// IMP=0x0000000000182843
- (void)paymentWebServiceDidUpdateConfiguration:(id)arg1;	// IMP=0x0000000000182599
- (_Bool)_supportsFeaturesForWebService:(id)arg1;	// IMP=0x000000000018252f
- (id)_supportedRegionsForWebService:(id)arg1;	// IMP=0x00000000001824b9
- (void)paymentWebService:(id)arg1 didRegisterWithRegionMap:(id)arg2 primaryRegionTopic:(id)arg3;	// IMP=0x0000000000181e5a
- (void)paymentWebService:(id)arg1 didRegisterWithRegionMap:(id)arg2;	// IMP=0x0000000000181e45
- (void)didRegisterResponse:(id)arg1;	// IMP=0x000000000018190d
- (void)paymentWebService:(id)arg1 signData:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000181435
- (void)paymentWebService:(id)arg1 signData:(id)arg2 signatureEntanglementMode:(unsigned long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000180f4e
- (void)signDataResponse:(id)arg1;	// IMP=0x000000000018090c
- (id)trustedDeviceEnrollmentInfoForWebService:(id)arg1;	// IMP=0x000000000018064d
- (void)paymentWebService:(id)arg1 configurationDataWithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000018028c
- (void)configurationDataResponse:(id)arg1;	// IMP=0x000000000017fd08
- (void)paymentWebService:(id)arg1 provisioningDataIncludingDeviceMetadata:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000017f0b2
- (void)provisioningDataResponse:(id)arg1;	// IMP=0x000000000017eae5
- (void)_paymentWebService:(id)arg1 registrationDataWithAuthToken:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000017e550
- (void)paymentWebService:(id)arg1 registrationDataWithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000017e49b
- (void)renewAppleAccountWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000017e425
- (id)appleAccountInformation;	// IMP=0x000000000017e3ce
- (void)registrationDataResponse:(id)arg1;	// IMP=0x000000000017dc48
- (void)handleBalanceChange:(id)arg1;	// IMP=0x000000000017d8fe
- (void)markAllAppletsForDeletionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000017d53d
- (void)markAllAppletsForDeletionResponse:(id)arg1;	// IMP=0x000000000017ce33
- (void)paymentWebService:(id)arg1 queueConnectionToTrustedServiceManagerForPushTopic:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000000017ca36
- (void)queueTSMConnectionResponse:(id)arg1;	// IMP=0x000000000017c52e
- (void)paymentWebService:(id)arg1 setNewAuthRandom:(CDUnknownBlockType)arg2;	// IMP=0x000000000017c486
- (void)paymentWebService:(id)arg1 setNewAuthRandomIfNecessaryReturningPairingState:(CDUnknownBlockType)arg2;	// IMP=0x000000000017c2f4
- (void)setNewAuthRandomIfNecessaryAtBeginningOfProvisioningFlow:(CDUnknownBlockType)arg1;	// IMP=0x000000000017c24c
- (void)_setNewAuthRandomIfNecessaryReturningPairingState:(CDUnknownBlockType)arg1;	// IMP=0x000000000017c232
- (void)_getPairingInfoAndSetAuthRandomIfNotPaired:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000017be1d
- (void)getPairingInfoResponse:(id)arg1;	// IMP=0x000000000017b6f4
- (void)_setNewAuthRandomReturningPairingState:(CDUnknownBlockType)arg1;	// IMP=0x000000000017b2c8
- (void)setNewAuthRandomResponse:(id)arg1;	// IMP=0x000000000017ab47
- (void)paymentWebService:(id)arg1 validateAddBiometricPassPreconditionsWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000017a753
- (void)paymentWebService:(id)arg1 validateTransferPreconditionsWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000017a698
- (void)paymentWebService:(id)arg1 validateAddPreconditionsWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000017a426
- (_Bool)paymentWebService:(id)arg1 canProvisionPaymentPassWithPrimaryAccountIdentifier:(id)arg2;	// IMP=0x000000000017a080
- (id)paymentWebService:(id)arg1 passesOfType:(unsigned long long)arg2;	// IMP=0x0000000000179e47
- (_Bool)paymentWebService:(id)arg1 hasPassesOfType:(unsigned long long)arg2;	// IMP=0x0000000000179c5f
- (void)archiveBackgroundContext:(id)arg1;	// IMP=0x0000000000179b50
- (void)archiveContext:(id)arg1;	// IMP=0x0000000000179a12
- (void)setMaximumPaymentCards:(unsigned long long)arg1;	// IMP=0x0000000000179a05
- (unsigned long long)maximumPaymentCards;	// IMP=0x00000000001799fb
- (void)noteProvisioningUserInterfaceDidDisappear;	// IMP=0x0000000000179925
- (void)noteProvisioningUserInterfaceDidAppear;	// IMP=0x00000000001796b6
- (void)noteForegroundVerificationObserverActive:(_Bool)arg1;	// IMP=0x00000000001795b6
- (void)startBackgroundVerificationObserverForPass:(id)arg1 verificationMethod:(id)arg2;	// IMP=0x000000000017941d
- (void)noteProvisioningDidEnd;	// IMP=0x0000000000179376
- (void)noteProvisioningDidBegin;	// IMP=0x00000000001792cf
- (id)deviceRegion;	// IMP=0x00000000001792c5
- (id)bridgedClientInfo;	// IMP=0x00000000001792ab
- (id)secureElementIdentifiers;	// IMP=0x00000000001792a1
- (_Bool)supportsAutomaticPassPresentation;	// IMP=0x0000000000179299
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;	// IMP=0x0000000000178cf5
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x0000000000178b94
- (void)service:(id)arg1 devicesChanged:(id)arg2;	// IMP=0x0000000000178ac5
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;	// IMP=0x00000000001789f6
- (id)initWithContext:(unsigned long long)arg1 responseQueue:(id)arg2;	// IMP=0x0000000000177fe6
- (id)init;	// IMP=0x0000000000177fb4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

