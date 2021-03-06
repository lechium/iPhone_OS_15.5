//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, PDDatabaseManager, PDNetworkTaskManager, PDPaymentWebServiceCoordinator, PDPushNotificationManager;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface PDAuxiliaryCapabilityManager : NSObject
{
    PDDatabaseManager *_databaseManager;	// 8 = 0x8
    PDPaymentWebServiceCoordinator *_webServiceCoordinator;	// 16 = 0x10
    PDPushNotificationManager *_pushNotificationManager;	// 24 = 0x18
    PDNetworkTaskManager *_taskManager;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_criticalPushReliabilityTimer;	// 40 = 0x28
    NSString *_pushPendingBarcodeIdentifier;	// 48 = 0x30
    _Bool _criticalPushReliabilityEnabled;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_queue;	// 64 = 0x40
    NSMutableDictionary *_isRegisteringAuxiliaryCapabilityForPass;	// 72 = 0x48
    NSMutableDictionary *_auxiliaryRegisterCompletionHandlersForPass;	// 80 = 0x50
    NSMutableDictionary *_isFetchingBarcodesForPass;	// 88 = 0x58
    NSMutableDictionary *_hasPendingHighPriorityFetchForPass;	// 96 = 0x60
    NSMutableDictionary *_fetchBarcodeCompletionHandlersForPass;	// 104 = 0x68
    NSMutableDictionary *_barcodeDecryptionAuthTokenForPass;	// 112 = 0x70
    NSMutableDictionary *_retrieveDecryptedBarcodeCompletionHandlersForPass;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x00200000002c2112
- (void)_signData:(id)arg1 withDeviceAccountIdentifier:(id)arg2 sessionExchangeToken:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000002c1c17
- (void)_performDeviceSignatureWithData:(id)arg1 forPass:(id)arg2 sessionExchangeToken:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000002c1755
- (id)_publicKeyHashForCertificateType:(long long)arg1 deviceAccountIdentifier:(id)arg2;	// IMP=0x00100000002c16b8
- (id)_keychainItemIdentifierForKeyDataWithCertificateType:(long long)arg1 deviceAccountIdentifier:(id)arg2;	// IMP=0x00100000002c1637
- (id)_keychainItemIdentifierForCertificateType:(long long)arg1 withDeviceAccountIdentifier:(id)arg2;	// IMP=0x00100000002c15b6
- (id)_wrapperWithIdentifier:(id)arg1;	// IMP=0x00100000002c152e
- (void)_removeCertificateForDeviceAccountIdentifier:(id)arg1 withCertificateType:(long long)arg2;	// IMP=0x00100000002c1478
- (id)_fetchKeyDataForDeviceAccountIdentifier:(id)arg1 withCertificateType:(long long)arg2;	// IMP=0x00100000002c13e5
- (id)_fetchCertificatesForDeviceAccountIdentifier:(id)arg1 withCertificateType:(long long)arg2;	// IMP=0x00100000002c11ca
- (id)_storeCertificates:(id)arg1 withCertificateType:(long long)arg2 forDeviceAccountIdentifier:(id)arg3;	// IMP=0x00100000002c0fc5
- (id)_validateAndStoreCertificateChain:(id)arg1 withCertificateType:(long long)arg2 forPass:(id)arg3;	// IMP=0x00100000002c0ca4
- (void)task:(id)arg1 encounteredWarnings:(id)arg2;	// IMP=0x00100000002c0bff
- (void)task:(id)arg1 encounteredError:(id)arg2;	// IMP=0x00100000002c053f
- (void)taskFailed:(id)arg1;	// IMP=0x00100000002c04ac
- (void)taskSucceeded:(id)arg1;	// IMP=0x00100000002c0419
- (void)task:(id)arg1 willRetryAfterMinimumDelay:(double)arg2;	// IMP=0x00100000002c036f
- (void)task:(id)arg1 gotResult:(id)arg2;	// IMP=0x00100000002c0284
- (void)_updateBackgroundFetchScheduledActivityIfNecessary;	// IMP=0x00100000002c010a
- (void)_unscheduleBackgroundFetchForPassUniqueID:(id)arg1;	// IMP=0x00100000002c0034
- (void)_scheduleBackgroundFetchForPassUniqueID:(id)arg1 withBackgroundFetchType:(long long)arg2;	// IMP=0x00100000002bfe51
- (void)_setupBarcodeFetchScheduleIfNecessaryForPass:(id)arg1;	// IMP=0x00100000002bfbe6
- (void)performScheduledActivityWithIdentifier:(id)arg1 activityCriteria:(id)arg2;	// IMP=0x00100000002bf865
- (void)_submitBarcodePaymentEvent:(id)arg1 forPass:(id)arg2 sessionExchangeToken:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x00100000002bf2e1
- (void)_disableCriticalPushReliability;	// IMP=0x00100000002bf285
- (void)_enableCriticalPushReliabilityForBarcodeCredential:(id)arg1;	// IMP=0x00100000002bf12f
- (unsigned long long)_estimatedNumberOfBarcodesRequiredPerDayForPass:(id)arg1;	// IMP=0x00100000002bef06
- (unsigned long long)_barcodeCountLowWatermarkForPass:(id)arg1;	// IMP=0x00100000002beeae
- (unsigned long long)_numberOfBarcodesToFetchForPass:(id)arg1 fetchReason:(long long)arg2;	// IMP=0x00100000002bed60
- (void)_decryptBarcodeCredential:(id)arg1 forPass:(id)arg2 authorization:(id)arg3 sessionExchangeToken:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000002beb01
- (id)_handleFetchBarcodeResponse:(id)arg1 forPass:(id)arg2 outStoredBarcodeCount:(unsigned long long *)arg3;	// IMP=0x00100000002be66d
- (void)_retrieveDecryptedBarcodeCredentialForPass:(id)arg1 authorization:(id)arg2 sessionExchangeToken:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x00100000002bd99f
- (void)_fetchBarcodesForPass:(id)arg1 fetchReason:(long long)arg2 sessionExchangeToken:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x00100000002bcae0
- (id)_handleAuxiliaryCapabilityRegistrationResponse:(id)arg1 forPass:(id)arg2;	// IMP=0x00100000002bc88d
- (void)_registerAuxiliaryCapabilityForPass:(id)arg1 sessionExchangeToken:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00100000002bc2c7
- (void)_forceReregisterAuxiliaryCapabilityForPass:(id)arg1 sessionExchangeToken:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00100000002bc17c
- (void)transactionSourceIdentifier:(id)arg1 didReceiveTransaction:(id)arg2 oldTransaction:(id)arg3;	// IMP=0x00100000002bc06d
- (void)nukeTasks;	// IMP=0x00100000002bc057
- (void)passWillBeRemoved:(id)arg1;	// IMP=0x00100000002bbe07
- (void)passAddedOrUpdated:(id)arg1;	// IMP=0x00100000002bbbf5
- (void)submitBarcodePaymentEvent:(id)arg1 forPassUniqueIdentifier:(id)arg2 sessionExchangeToken:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x00100000002bba4e
- (void)submitBarcodePaymentEvent:(id)arg1 forPassUniqueIdentifier:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00100000002bba36
- (void)performDeviceSignatureWithData:(id)arg1 forPassUniqueIdentifier:(id)arg2 sessionExchangeToken:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x00100000002bb925
- (void)invalidateCertificatesForPassUniqueIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002bb776
- (void)invalidateCertificateOfType:(long long)arg1 forPassUniqueIdentifier:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00100000002bb5fc
- (void)retrievePINEncryptionCertificateForPassUniqueIdentifier:(id)arg1 sessionExchangeToken:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00100000002badf8
- (void)retrievePINEncryptionCertificateForPassUniqueIdentifier:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002bade1
- (void)retrieveDecryptedBarcodeCredentialForPassUniqueIdentifier:(id)arg1 authorization:(id)arg2 sessionExchangeToken:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x00100000002babde
- (void)retrieveDecryptedBarcodeCredentialForPassUniqueIdentifier:(id)arg1 authorization:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00100000002babc6
- (void)fetchBarcodesForPassUniqueIdentifier:(id)arg1 sessionExchangeToken:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00100000002baa4f
- (void)registerAuxiliaryCapabilityForPassUniqueIdentifier:(id)arg1 sessionExchangeToken:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00100000002ba8db
- (id)initWithDatabaseManager:(id)arg1 paymentWebServiceCoordinator:(id)arg2 pushNotificationManager:(id)arg3;	// IMP=0x00100000002ba718

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

