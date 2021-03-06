//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/CLLocationManagerDelegate-Protocol.h>
#import <PassKitCore/PKAccountServiceObserver-Protocol.h>
#import <PassKitCore/PKPaymentServiceDelegate-Protocol.h>
#import <PassKitCore/PKPaymentWebServiceDelegate-Protocol.h>

@class CIDVUIProofingFlowManager, CLLocationManager, NSArray, NSData, NSExtension, NSHashTable, NSMutableArray, NSMutableSet, NSSet, NSString, NSTimer, PKAccountService, PKAddPaymentPassRequestConfiguration, PKPaymentCloudStoreZoneCreationManager, PKPaymentCredential, PKPaymentEligibilityResponse, PKPaymentPass, PKPaymentProvisioningControllerCredentialQueue, PKPaymentProvisioningResponse, PKPaymentRequirementsResponse, PKPaymentService, PKPaymentSetupMoreInfoItem, PKPaymentSetupProductModel, PKPaymentWebService;
@protocol OS_dispatch_queue, OS_dispatch_source, PKCloudStoreCoordinatorDelegate;

@interface PKPaymentProvisioningController : NSObject <CLLocationManagerDelegate, PKPaymentServiceDelegate, PKAccountServiceObserver, PKPaymentWebServiceDelegate>
{
    NSMutableSet *_tasks;	// 8 = 0x8
    NSTimer *_descriptionTimer;	// 16 = 0x10
    NSMutableArray *_associatedCredentials;	// 24 = 0x18
    _Bool _provisioningUserInterfaceIsVisible;	// 32 = 0x20
    _Bool _proxyTargetDeviceWebServiceInUse;	// 33 = 0x21
    NSString *_provisioningNonce;	// 40 = 0x28
    PKPaymentCredential *_currentCredential;	// 48 = 0x30
    PKAddPaymentPassRequestConfiguration *_currentAddPaymentPassRequestConfiguration;	// 56 = 0x38
    NSHashTable *_delegates;	// 64 = 0x40
    struct os_unfair_lock_s _delegatesLock;	// 72 = 0x48
    NSSet *_supportedFeatureIdentifierStrings;	// 80 = 0x50
    NSSet *_supportedFeatureIdentifierStringsForAccountProvisioning;	// 88 = 0x58
    NSMutableSet *_analyticsFeaturesToReport;	// 96 = 0x60
    unsigned long long _targetDeviceSupportsTypeF;	// 104 = 0x68
    PKPaymentSetupMoreInfoItem *_marketExpressInfoItem;	// 112 = 0x70
    CLLocationManager *_locationManager;	// 120 = 0x78
    NSObject<OS_dispatch_source> *_locationTimer;	// 128 = 0x80
    CDUnknownBlockType _locationCompletion;	// 136 = 0x88
    PKPaymentService *_paymentService;	// 144 = 0x90
    unsigned long long _backgroundTaskIdentifier;	// 152 = 0x98
    long long _provisioningStatusCount;	// 160 = 0xa0
    NSObject<OS_dispatch_queue> *_updateQueue;	// 168 = 0xa8
    NSSet *_featuresDidBeginReporting;	// 176 = 0xb0
    NSData *_externalizedAuth;	// 184 = 0xb8
    PKAccountService *_accountService;	// 192 = 0xc0
    NSMutableArray *_preflighUpdateHandlers;	// 200 = 0xc8
    _Bool _isPreflighting;	// 208 = 0xd0
    unsigned long long _isTargetUserUnder13;	// 216 = 0xd8
    _Bool _preflightedAccounts;	// 224 = 0xe0
    _Bool _preflightedApplications;	// 225 = 0xe1
    NSArray *_accounts;	// 232 = 0xe8
    PKPaymentCloudStoreZoneCreationManager *_zoneCreationManager;	// 240 = 0xf0
    _Bool _isProvisioningForAltAccount;	// 248 = 0xf8
    _Bool _expressModeSetupOptional;	// 249 = 0xf9
    _Bool _AMPEnrollmentAvailable;	// 250 = 0xfa
    NSString *_productIdentifier;	// 256 = 0x100
    id <PKCloudStoreCoordinatorDelegate> _cloudStoreCoordinator;	// 264 = 0x108
    NSString *_referrerIdentifier;	// 272 = 0x110
    unsigned long long _isCurrentUserUnder13;	// 280 = 0x118
    PKPaymentWebService *_webService;	// 288 = 0x120
    long long _state;	// 296 = 0x128
    NSString *_localizedProgressDescription;	// 304 = 0x130
    unsigned long long _preflightRequirements;	// 312 = 0x138
    NSArray *_purchaseCredentials;	// 320 = 0x140
    NSExtension *_provisioningExtension;	// 328 = 0x148
    NSArray *_provisioningExtensionCredentials;	// 336 = 0x150
    PKPaymentProvisioningControllerCredentialQueue *_credentialProvisioningQueue;	// 344 = 0x158
    PKPaymentSetupProductModel *_paymentSetupProductModel;	// 352 = 0x160
    PKPaymentRequirementsResponse *_requirementsResponse;	// 360 = 0x168
    PKPaymentEligibilityResponse *_eligibilityResponse;	// 368 = 0x170
    PKPaymentProvisioningResponse *_provisioningResponse;	// 376 = 0x178
    PKPaymentPass *_provisionedPass;	// 384 = 0x180
    NSArray *_moreInfoItems;	// 392 = 0x188
    NSSet *_automaticExpressModes;	// 400 = 0x190
    NSArray *_allowedPaymentNetworks;	// 408 = 0x198
    NSSet *_requiredTransitNetworkIdentifiers;	// 416 = 0x1a0
    NSSet *_allowedFeatureIdentifiers;	// 424 = 0x1a8
    NSSet *_allowedProductIdentifiers;	// 432 = 0x1b0
    CIDVUIProofingFlowManager *_identityProofingManager;	// 440 = 0x1b8
    CDUnknownBlockType _identityProofingManagerCompletionHandler;	// 448 = 0x1c0
}

- (void).cxx_destruct;	// IMP=0x000000000024abec
@property(copy, nonatomic) CDUnknownBlockType identityProofingManagerCompletionHandler; // @synthesize identityProofingManagerCompletionHandler=_identityProofingManagerCompletionHandler;
@property(retain, nonatomic) CIDVUIProofingFlowManager *identityProofingManager; // @synthesize identityProofingManager=_identityProofingManager;
@property(retain, nonatomic) NSSet *allowedProductIdentifiers; // @synthesize allowedProductIdentifiers=_allowedProductIdentifiers;
@property(retain, nonatomic) NSSet *allowedFeatureIdentifiers; // @synthesize allowedFeatureIdentifiers=_allowedFeatureIdentifiers;
@property(retain, nonatomic) NSSet *requiredTransitNetworkIdentifiers; // @synthesize requiredTransitNetworkIdentifiers=_requiredTransitNetworkIdentifiers;
@property(retain, nonatomic) NSArray *allowedPaymentNetworks; // @synthesize allowedPaymentNetworks=_allowedPaymentNetworks;
@property(readonly, nonatomic, getter=isAMPEnrollmentAvailable) _Bool AMPEnrollmentAvailable; // @synthesize AMPEnrollmentAvailable=_AMPEnrollmentAvailable;
@property(readonly, nonatomic) NSSet *automaticExpressModes; // @synthesize automaticExpressModes=_automaticExpressModes;
@property(readonly, nonatomic, getter=isExpressModeSetupOptional) _Bool expressModeSetupOptional; // @synthesize expressModeSetupOptional=_expressModeSetupOptional;
@property(readonly, nonatomic) NSArray *moreInfoItems; // @synthesize moreInfoItems=_moreInfoItems;
@property(readonly, nonatomic) PKPaymentPass *provisionedPass; // @synthesize provisionedPass=_provisionedPass;
@property(readonly, nonatomic) PKPaymentProvisioningResponse *provisioningResponse; // @synthesize provisioningResponse=_provisioningResponse;
@property(readonly, nonatomic) PKPaymentEligibilityResponse *eligibilityResponse; // @synthesize eligibilityResponse=_eligibilityResponse;
@property(readonly, nonatomic) PKPaymentRequirementsResponse *requirementsResponse; // @synthesize requirementsResponse=_requirementsResponse;
@property(readonly, nonatomic) PKPaymentSetupProductModel *paymentSetupProductModel; // @synthesize paymentSetupProductModel=_paymentSetupProductModel;
@property(readonly, nonatomic) PKPaymentProvisioningControllerCredentialQueue *credentialProvisioningQueue; // @synthesize credentialProvisioningQueue=_credentialProvisioningQueue;
@property(readonly, copy, nonatomic) NSArray *provisioningExtensionCredentials; // @synthesize provisioningExtensionCredentials=_provisioningExtensionCredentials;
@property(readonly, nonatomic) NSExtension *provisioningExtension; // @synthesize provisioningExtension=_provisioningExtension;
@property(readonly, copy, nonatomic) NSArray *purchaseCredentials; // @synthesize purchaseCredentials=_purchaseCredentials;
@property(readonly, copy, nonatomic) NSArray *associatedCredentials; // @synthesize associatedCredentials=_associatedCredentials;
@property(readonly, nonatomic) unsigned long long preflightRequirements; // @synthesize preflightRequirements=_preflightRequirements;
@property(readonly, copy, nonatomic) NSString *localizedProgressDescription; // @synthesize localizedProgressDescription=_localizedProgressDescription;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) PKPaymentWebService *webService; // @synthesize webService=_webService;
@property(readonly, nonatomic) unsigned long long isCurrentUserUnder13; // @synthesize isCurrentUserUnder13=_isCurrentUserUnder13;
@property(nonatomic) _Bool isProvisioningForAltAccount; // @synthesize isProvisioningForAltAccount=_isProvisioningForAltAccount;
@property(copy, nonatomic) NSString *referrerIdentifier; // @synthesize referrerIdentifier=_referrerIdentifier;
@property(retain, nonatomic) id <PKCloudStoreCoordinatorDelegate> cloudStoreCoordinator; // @synthesize cloudStoreCoordinator=_cloudStoreCoordinator;
- (void)deleteCredential:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000024a557
- (void)_addAssociatedCredential:(id)arg1;	// IMP=0x000000000024a541
- (void)_updateLocalizedProgressAndInvalidateTimer;	// IMP=0x000000000024a4d0
- (void)paymentWebService:(id)arg1 didCompleteTSMConnectionForTaskID:(unsigned long long)arg2;	// IMP=0x000000000024a3a0
- (void)paymentWebService:(id)arg1 didQueueTSMConnectionForTaskID:(unsigned long long)arg2;	// IMP=0x000000000024a1dd
- (void)featureApplicationChanged:(id)arg1;	// IMP=0x0000000000249ce5
- (void)featureApplicationRemoved:(id)arg1;	// IMP=0x000000000024981f
- (void)featureApplicationAdded:(id)arg1;	// IMP=0x0000000000249325
- (void)_reloadSetupProducts;	// IMP=0x000000000024928d
- (void)accountRemoved:(id)arg1;	// IMP=0x0000000000249123
- (void)accountAdded:(id)arg1;	// IMP=0x0000000000248fb9
- (id)displayableErrorForProvisioningError:(id)arg1;	// IMP=0x0000000000248e85
- (id)displayableErrorForError:(id)arg1;	// IMP=0x0000000000248dc8
- (id)_displayableErrorOverrideForUnderlyingError:(id)arg1;	// IMP=0x0000000000248b76
- (id)_paymentPassWithPaymentMethodType:(unsigned long long)arg1;	// IMP=0x000000000024886c
- (id)passesWithPaymentMethodType:(unsigned long long)arg1;	// IMP=0x000000000024885a
- (_Bool)hasDebitPaymentPass;	// IMP=0x000000000024880d
- (_Bool)hasCreditPaymentPass;	// IMP=0x00000000002487c0
- (_Bool)hasPaymentPass;	// IMP=0x00000000002486ec
- (id)provisioningTracker;	// IMP=0x00000000002486b6
- (void)handleOptionalExpressModeSetupDidFinishForPass:(id)arg1 withExpressModes:(id)arg2 provisioningTracker:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000024831c
- (void)finishOptionalExpressModeSetupForPass:(id)arg1 withProvisioningTracker:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000247fbf
- (void)makePaymentPassDefault:(id)arg1;	// IMP=0x0000000000247e4c
- (_Bool)willPassWithUniqueIdentifierAutomaticallyBecomeDefault:(id)arg1;	// IMP=0x0000000000247d6b
- (void)_endRequiringUpgradedPasscodeIfNecessary;	// IMP=0x0000000000247cc5
- (void)_startRequiringUpgradedPasscodeWithPasscodeMeetsPolicy:(_Bool)arg1;	// IMP=0x0000000000247c18
- (void)passcodeUpgradeCompleted:(_Bool)arg1;	// IMP=0x0000000000247b33
- (void)preflightPasscodeUpgradeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000002476e8
@property(readonly, nonatomic, getter=isPasscodeUpgradeRequired) _Bool passcodeUpgradeRequired;
@property(readonly, copy, nonatomic) NSArray *allCredentials;
- (id)associatedCredentialsForDefaultBehaviour;	// IMP=0x0000000000247336
- (void)removeDelegate:(id)arg1;	// IMP=0x00000000002472dc
- (void)addDelegate:(id)arg1;	// IMP=0x0000000000247282
- (void)_downloadMoreInfoItemURLs:(id)arg1 withMetadata:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000002469bd
- (_Bool)_isProvisioningPaymentAccount;	// IMP=0x000000000024697d
- (void)noteProvisioningUserInterfaceDidDisappear;	// IMP=0x0000000000246909
- (void)noteProvisioningUserInterfaceDidAppear;	// IMP=0x00000000002468b6
- (_Bool)provisioningUserInterfaceIsVisible;	// IMP=0x00000000002468ad
- (void)_setLocalizedProgressDescription:(id)arg1;	// IMP=0x000000000024680f
- (void)_handleProvisioningError:(id)arg1 forRequest:(id)arg2 pass:(id)arg3;	// IMP=0x0000000000246446
- (void)_passAlreadyProvisioned;	// IMP=0x0000000000246392
- (void)_provisioningNonceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000245fd2
- (void)removeProvisionedPass;	// IMP=0x0000000000245e59
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;	// IMP=0x0000000000245b3e
- (_Bool)_isValidLocation:(id)arg1;	// IMP=0x0000000000245a7e
- (void)_loadMoreInfoItemForMarket:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000245845
- (void)_startLocationSearchWithTimeout:(double)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000245251
- (void)provisionHomeKeyCredential:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000244af2
- (void)_verifyPassIsSupportedForExpressInLocalMarket:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000024401b
- (void)_ingestPaymentPass:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000002425ce
- (void)_deletePaymentPass:(id)arg1;	// IMP=0x000000000024254f
- (void)_requestProvisioning:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002411d0
- (void)ingestPaymentPassForCredential:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000240f43
- (id)_localizedProgressDescriptionForEnablingCard;	// IMP=0x0000000000240e50
- (void)_noteProvisioningDidEnd;	// IMP=0x0000000000240be5
- (void)_noteProvisioningDidBegin;	// IMP=0x000000000024095e
- (void)requestProvisioning:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000240005
- (void)requestProvisioning:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000023ff54
- (_Bool)hasExternalizedAuth;	// IMP=0x000000000023ff34
- (void)storeExternalizedAuth:(id)arg1;	// IMP=0x000000000023ff20
- (void)requestExternalizedAuthForWatchWithVisibleViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000023fb5b
- (void)_updateProvisioningRequestForEnableRequirements:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000023e0d4
- (void)resolveProvisioningForCredential:(id)arg1;	// IMP=0x000000000023e029
- (void)declineTerms;	// IMP=0x000000000023df16
- (void)acceptTerms;	// IMP=0x000000000023de50
- (void)_requestEligibility:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000023d956
- (void)requestEligibility:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000023d474
- (void)resolveRequirementsUsingAlreadyProvisionedRemoteCredential:(id)arg1;	// IMP=0x000000000023d3d9
- (void)resolveLocalEligibilityRequirementsForAppleBalanceCredential:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000023ceb4
- (_Bool)setState:(long long)arg1 forCredential:(id)arg2;	// IMP=0x000000000023ccca
- (void)resolveRequirementsForIssuerProvisioningExtensionCredential:(id)arg1;	// IMP=0x000000000023cb69
- (void)resolveRequirementsForShareableCredential:(id)arg1;	// IMP=0x000000000023ca08
- (void)resolveRequirementsUsingProvisioningMethodMetadata:(id)arg1;	// IMP=0x000000000023c982
- (void)resolveRequirementsUsingProduct:(id)arg1;	// IMP=0x000000000023c8fc
@property(readonly, copy, nonatomic) NSString *productIdentifier; // @synthesize productIdentifier=_productIdentifier;
- (void)resolveAmbiguousRequirementsWithProductIdentifier:(id)arg1;	// IMP=0x000000000023c815
- (void)_requestRequirements:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000023c3d8
- (void)requestRequirements:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000023c2b3
- (void)_queryEligibilityForCredential:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000023c084
- (void)_queryRequirementsForCredential:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000023bd41
- (id)_filterPaymentSetupProducts:(id)arg1;	// IMP=0x000000000023b567
- (id)_filteredPaymentSetupProductSections:(id)arg1;	// IMP=0x000000000023b172
- (void)_setupAccountCredentialForProvisioning:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000023aa8c
- (void)setupAccountCredentialForProvisioning:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000023a67a
- (void)setupProductForProvisioning:(id)arg1 includePurchases:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000238e3c
- (void)requestPurchasesForProduct:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002380f1
- (void)requestProvisioningMethodMetadataForProduct:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000237c7a
- (id)_mockBrowseBanksResponse;	// IMP=0x0000000000237c17
- (void)provisioningExtensionProductsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000236f9c
- (void)_browsableBanksWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000236cf6
- (void)_updatePaymentSetupProductModelExtensionsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000236bae
- (void)updatePaymentSetupProductModelWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000235d6f
- (void)cachedPaymentSetupProductModelWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000023501f
- (void)_informDelegatesOfAccountsUpdated;	// IMP=0x0000000000234e13
- (void)_preflightRequirementsUpdated:(unsigned long long)arg1 displayableError:(id)arg2;	// IMP=0x0000000000234bd0
- (void)_metadataUpdatedOnCredenitals;	// IMP=0x00000000002349e2
- (void)_informDelegatesOfPaymentPassUpdateOnCredential:(id)arg1;	// IMP=0x00000000002347ad
- (void)_downloadRemoteAssetsForPaymentPass:(id)arg1 paymentCredential:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000023452c
- (void)_updateCredentialWithPaymentPassAssets:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000023429e
- (void)_updateCredentialWithPaymentPass:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000233dc9
- (void)_associateCredential:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002339c7
- (_Bool)_credentialIsValidForSetupConfiguration:(id)arg1;	// IMP=0x00000000002337c3
- (_Bool)_hasSetupConfiguration;	// IMP=0x0000000000233768
- (void)_associateCredentials:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000232d2b
- (void)associateCredentials:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000232c76
- (void)updateRemoteCredentials:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000231d0f
- (void)_updateAllAssoicatedCredentialsMetadataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000002317dd
- (void)retrieveAllAvailableCredentials:(CDUnknownBlockType)arg1;	// IMP=0x000000000023117b
- (_Bool)_featureApplicationInValidStateToPresent:(id)arg1;	// IMP=0x0000000000231151
- (id)_accountsForFeatureIdentifier:(unsigned long long)arg1;	// IMP=0x0000000000231085
- (void)_setupAccounts;	// IMP=0x0000000000230c53
- (void)_setupFeatureApplications:(id)arg1;	// IMP=0x000000000023059a
- (id)_fetchOrCreateProductsForIdentifier:(unsigned long long)arg1;	// IMP=0x0000000000230426
- (void)retrieveAccountCredentials:(CDUnknownBlockType)arg1;	// IMP=0x000000000022ff1e
- (id)_supportedFeatureIdentifierStringsForAccountProvisioning;	// IMP=0x000000000022fbd3
- (id)_supportedFeatureIdentifierStrings;	// IMP=0x000000000022f92f
- (void)retrieveRemoteCredentials:(CDUnknownBlockType)arg1;	// IMP=0x000000000022e7b7
- (void)performDeviceCheckInIfNeeded:(CDUnknownBlockType)arg1;	// IMP=0x000000000022e4ff
- (id)_doesDisplayableErrorConstitutePreflightFailure:(id)arg1;	// IMP=0x000000000022e43c
- (void)_updatePreflightRequirement:(unsigned long long)arg1 displayableError:(id)arg2;	// IMP=0x000000000022e1b5
- (void)preflightWithRequirements:(unsigned long long)arg1 update:(CDUnknownBlockType)arg2;	// IMP=0x000000000022c73d
- (void)preflightWithRequirements:(unsigned long long)arg1 completionRequirements:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000022c5a1
- (void)preflightWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000022c531
- (void)validatePreconditionsRegisterAndAssociateRemoteCredentials:(CDUnknownBlockType)arg1;	// IMP=0x000000000022c487
- (void)validatePreconditionsAndRegister:(CDUnknownBlockType)arg1;	// IMP=0x000000000022c32c
- (void)registerDevice:(CDUnknownBlockType)arg1;	// IMP=0x000000000022bef6
- (void)validatePreconditions:(CDUnknownBlockType)arg1;	// IMP=0x000000000022b9e2
- (void)_setState:(long long)arg1 notify:(_Bool)arg2;	// IMP=0x000000000022b969
- (void)resetForNewProvisioning;	// IMP=0x000000000022b776
- (void)reset;	// IMP=0x000000000022b742
- (long long)_defaultResetState;	// IMP=0x000000000022b73a
- (void)_beginReportingIfNecessary;	// IMP=0x000000000022b45e
- (void)_endSessionIfNecessary;	// IMP=0x000000000022b2c3
- (void)dealloc;	// IMP=0x000000000022b1ca
- (id)initWithWebService:(id)arg1 paymentSetupRequest:(id)arg2;	// IMP=0x000000000022af13
- (id)initWithWebService:(id)arg1;	// IMP=0x000000000022abb3
@property(readonly, nonatomic) _Bool suppressDefaultCardholderNameField;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

