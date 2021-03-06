//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSSet, NSString, PDDatabaseManager, PDNetworkTaskManager, PDPassTileManager, PDPaymentTransactionProcessor, PDPushNotificationManager, PDUserNotificationManager, PKSecureElement;

@interface PDNotificationServiceCoordinator : NSObject
{
    NSSet *_pushTopics;	// 8 = 0x8
    PDDatabaseManager *_databaseManager;	// 16 = 0x10
    PDUserNotificationManager *_userNotificationManager;	// 24 = 0x18
    PDPaymentTransactionProcessor *_paymentTransactionProcessor;	// 32 = 0x20
    PDPushNotificationManager *_pushNotificationManager;	// 40 = 0x28
    PKSecureElement *_secureElement;	// 48 = 0x30
    PDNetworkTaskManager *;	// 56 = 0x38
    NSMutableDictionary *_taskToHandlerMap;	// 64 = 0x40
    NSMutableDictionary *_taskToResponseMap;	// 72 = 0x48
    NSMutableDictionary *_taskToErrorMap;	// 80 = 0x50
    PDPassTileManager *_passTileManager;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x002000000006ebd4
@property(retain, nonatomic) PDPassTileManager *passTileManager; // @synthesize passTileManager=_passTileManager;
- (id)_partnerAccountIdentifierWithPaymentApplication:(id)arg1 passUniqueIdentifier:(id)arg2;	// IMP=0x001000000006ebb1
- (id)_dictionaryKeyForTask:(id)arg1;	// IMP=0x001000000006eb98
- (void)_invokeAndClearHandlerForTask:(id)arg1 withResult:(_Bool)arg2;	// IMP=0x001000000006eaec
- (void)_recalculatePushTopics;	// IMP=0x001000000006eaba
- (void)_cancelAllTasksForPaymentApplication:(id)arg1 notificationService:(id)arg2;	// IMP=0x001000000006e7b4
- (_Bool)_processMessageDictionary:(id)arg1 forPassUniqueIdentifier:(id)arg2 paymentApplication:(id)arg3 performTruncation:(_Bool)arg4;	// IMP=0x001000000006e6f3
- (_Bool)_processTransactionDictionary:(id)arg1 forPassUniqueIdentifier:(id)arg2 paymentApplication:(id)arg3 performTruncation:(_Bool)arg4 isInitialUpdate:(_Bool)arg5;	// IMP=0x001000000006e43d
- (_Bool)_validatePlanResult:(id)arg1;	// IMP=0x001000000006e2cd
- (_Bool)_validateBalanceResult:(id)arg1;	// IMP=0x001000000006e0f6
- (void)removeLowBalanceNotificationForBalance:(id)arg1 withPassUniqueIdentifier:(id)arg2;	// IMP=0x001000000006de4f
- (void)updateLowBalanceNotificationForBalance:(id)arg1 withPassUniqueIdentifier:(id)arg2;	// IMP=0x001000000006db22
- (void)sendLowBalanceNotificationForBalance:(id)arg1 withReminder:(id)arg2 passUniqueIdentifier:(id)arg3;	// IMP=0x001000000006d9b5
- (void)sendLowBalanceNotificationIfNecessaryForUpdatedBalances:(id)arg1 startingBalances:(id)arg2 passUniqueIdentifier:(id)arg3;	// IMP=0x001000000006d40c
- (void)_transactionAuthenticationTaskSucceeded:(id)arg1 withResponse:(id)arg2;	// IMP=0x001000000006d38a
- (void)_notificationUpdatesTaskSucceeded:(id)arg1 withResult:(id)arg2;	// IMP=0x001000000006bb1d
- (void)_registrationTaskSucceeded:(id)arg1 withAuthenticationToken:(id)arg2;	// IMP=0x001000000006b7f2
- (void)_clearStoredDataForPassUniqueIdentifier:(id)arg1 notificationService:(id)arg2;	// IMP=0x001000000006b5d6
- (void)_performDeregistrationForPassUniqueIdentifier:(id)arg1 paymentApplication:(id)arg2 notificationService:(id)arg3;	// IMP=0x001000000006b407
- (void)_performRegistrationTaskForPaymentApplication:(id)arg1 notificationService:(id)arg2 completionTask:(id)arg3;	// IMP=0x001000000006a83f
- (void)_performRegistrationForPassUniqueIdentifier:(id)arg1 paymentApplication:(id)arg2 notificationService:(id)arg3 isInitialRegistration:(_Bool)arg4;	// IMP=0x001000000006a5d9
- (void)_updateRegistrationStatusForPass:(id)arg1 notificationService:(id)arg2 requestedRegistrationStatus:(unsigned long long)arg3 refreshRegistrationIfPossible:(_Bool)arg4 requestUpdateWhenAlreadyRegistered:(_Bool)arg5;	// IMP=0x001000000006a160
- (void)_updateRegistrationStatusForPass:(id)arg1 notificationService:(id)arg2 requestedRegistrationStatus:(unsigned long long)arg3 refreshRegistrationIfPossible:(_Bool)arg4;	// IMP=0x001000000006a13e
- (void)submitTransactionAuthenticationResultsData:(id)arg1 signature:(id)arg2 forPass:(id)arg3 transactionServiceIdentifier:(id)arg4 notificationService:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0010000000069bbc
- (void)requestUpdatesFromNotificationService:(id)arg1 passUniqueIdenitifer:(id)arg2 forceUpdate:(_Bool)arg3;	// IMP=0x0010000000069774
- (void)requestUpdatesFromNotificationService:(id)arg1 passUniqueIdenitifer:(id)arg2;	// IMP=0x001000000006975f
- (void)taskRequestedReauthentication:(id)arg1;	// IMP=0x00100000000695bc
- (void)task:(id)arg1 encounteredWarnings:(id)arg2;	// IMP=0x00100000000694f1
- (void)task:(id)arg1 encounteredError:(id)arg2;	// IMP=0x00100000000693c2
- (void)taskFailed:(id)arg1;	// IMP=0x00100000000693ae
- (void)taskSucceeded:(id)arg1;	// IMP=0x0010000000069397
- (void)task:(id)arg1 willRetryAfterMinimumDelay:(double)arg2;	// IMP=0x00100000000692ba
- (void)task:(id)arg1 gotResult:(id)arg2;	// IMP=0x00100000000691b6
- (void)handleUpdateOfPass:(id)arg1 toPass:(id)arg2 oldNotificationService:(id)arg3 newNotificationService:(id)arg4;	// IMP=0x0010000000068fc7
- (void)handleDeletionOfPass:(id)arg1 withNotificationService:(id)arg2;	// IMP=0x0010000000068fac
- (void)handleInsertionOfPass:(id)arg1 withNotificationService:(id)arg2;	// IMP=0x0010000000068f91
- (void)handlePushDisabledForPass:(id)arg1 withNotificationService:(id)arg2;	// IMP=0x0010000000068f76
- (void)handlePushEnabledForPass:(id)arg1 withNotificationService:(id)arg2;	// IMP=0x0010000000068f4b
- (id)pushNotificationTopics;	// IMP=0x0010000000068d4d
- (void)handlePushNotificationForTopic:(id)arg1 userInfo:(id)arg2;	// IMP=0x0010000000068bc7
- (void)applyPushNotificationToken:(id)arg1;	// IMP=0x00100000000689b3
- (void)nukeTasks;	// IMP=0x0010000000068937
- (void)connect;	// IMP=0x00100000000688d2
- (void)dealloc;	// IMP=0x0010000000068875
- (id)initWithPushNotificationManager:(id)arg1 databaseManager:(id)arg2 userNotificationManager:(id)arg3 paymentTransactionProcessor:(id)arg4;	// IMP=0x001000000006870c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

