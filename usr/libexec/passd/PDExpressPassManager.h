//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSHashTable, NSSet, NSString, PDAppletSubcredentialManager, PDAssertionManager, PDDatabaseManager, PDNotificationStreamManager, PDRemoteInterfacePresenter, PKSecureElement;
@protocol OS_dispatch_queue;

@interface PDExpressPassManager : NSObject
{
    PDDatabaseManager *_databaseManager;	// 8 = 0x8
    PDAssertionManager *_assertionManager;	// 16 = 0x10
    PKSecureElement *_secureElement;	// 24 = 0x18
    PDRemoteInterfacePresenter *_remoteInterfacePresenter;	// 32 = 0x20
    PDNotificationStreamManager *_notificationStreamManager;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_accessQueue;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_replyQueue;	// 56 = 0x38
    _Atomic _Bool _setup;	// 64 = 0x40
    _Bool _expressModesEnableable;	// 65 = 0x41
    NSDictionary *_expressState;	// 72 = 0x48
    struct os_unfair_lock_s _lock;	// 80 = 0x50
    long long _outstandingExpressType;	// 88 = 0x58
    _Bool _outstandingExpressTypeProcessing;	// 96 = 0x60
    NSString *_outstandingExpressApplicationIdentifier;	// 104 = 0x68
    NSString *_outstandingPassUniqueIdentifier;	// 112 = 0x70
    NSSet *_outstandingExpressECP2TCIs;	// 120 = 0x78
    unsigned long long _lastReceivedExpressTransactionEvents;	// 128 = 0x80
    long long _outstandingStandAloneTransactionType;	// 136 = 0x88
    struct os_unfair_lock_s _observersLock;	// 144 = 0x90
    NSHashTable *_observers;	// 152 = 0x98
    PDAppletSubcredentialManager *_subcredentialManager;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x0020000000121541
@property(retain, nonatomic) PDAppletSubcredentialManager *subcredentialManager; // @synthesize subcredentialManager=_subcredentialManager;
- (void)assertionManager:(id)arg1 didInvalidateAssertion:(id)arg2;	// IMP=0x001000000012151a
- (void)assertionManager:(id)arg1 didAcquireAssertion:(id)arg2;	// IMP=0x0010000000121514
- (_Bool)allowAcquisitionOfAssertionOfType:(unsigned long long)arg1;	// IMP=0x001000000012150c
- (_Bool)interestedInAssertionOfType:(unsigned long long)arg1;	// IMP=0x00100000001214f2
- (void)handleNotificationWithName:(id)arg1 event:(id)arg2 forStream:(long long)arg3;	// IMP=0x00100000001214d7
- (id)createCurrentNotificationRegistrationState;	// IMP=0x001000000012147e
- (void)performScheduledActivityWithIdentifier:(id)arg1 activityCriteria:(id)arg2;	// IMP=0x0010000000121478
- (void)receivedSecureExpressTransactionEvent:(id)arg1;	// IMP=0x00100000001205b1
- (void)carKeyDidUnlockWithAppletIdentifier:(id)arg1 keyIdentifier:(id)arg2;	// IMP=0x0010000000120504
- (void)carKeyDidLockWithAppletIdentifier:(id)arg1 keyIdentifier:(id)arg2;	// IMP=0x0010000000120485
- (void)handleStandaloneTransactionWithCredentialIdentifier:(id)arg1 appletIdentifier:(id)arg2 transactionType:(long long)arg3;	// IMP=0x0010000000120135
- (void)secureElementRadioStateChanged;	// IMP=0x001000000012012f
- (void)secureElementExpressConfigurationDidFail;	// IMP=0x00100000001200ce
- (void)secureElementDidRunScriptsFromTSM;	// IMP=0x00100000001200bc
- (void)secureElementExpressConfigurationNeedsUpdate;	// IMP=0x00100000001200aa
- (void)outstandingExpressTransactionStateWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000011ff56
- (void)unregisterObserver:(id)arg1;	// IMP=0x001000000011fde9
- (void)registerObserver:(id)arg1;	// IMP=0x001000000011fd8a
- (void)removeExpressPassWithUniqueIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000011f074
- (void)removeExpressPassesWithCardType:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000011ee0a
- (void)setExpressWithPassInformation:(id)arg1 credential:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000011e932
- (void)conflictingExpressPassIdentifiersForPassInformation:(id)arg1 withReferenceExpressState:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000011e6e5
- (void)conflictingExpressPassIdentifiersForPassInformation:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000011e469
- (id)expressPassesInformation;	// IMP=0x001000000011e38c
- (void)expressPassesInformationWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000011e22e
- (void)expressPassesInformationWithAutomaticSelectionTechnologyType:(long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000011dda5
- (void)expressPassesInformationWithCardType:(long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000011db57
- (void)expressPassInformationWithPassUniqueIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000011d96f
- (void)isPassExpressWithPassUniqueIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000011d7aa
- (void)processPaymentApplicationsUpdateFromPriorPaymentApplications:(id)arg1 toPaymentApplications:(id)arg2 forPassUniqueIdentifier:(id)arg3;	// IMP=0x001000000011d4ec
- (void)resetExpressPasses;	// IMP=0x001000000011d2bf
- (void)sanitizeExpressPasses;	// IMP=0x001000000011d25e
- (void)stopExpressModes;	// IMP=0x001000000011d1ff
- (void)startExpressModes;	// IMP=0x001000000011d157
- (id)initWithDatabaseManager:(id)arg1 assertionManager:(id)arg2 secureElement:(id)arg3 remoteInterfacePresenter:(id)arg4 notificationStreamManager:(id)arg5 isFirstUnlockedLaunchForBoot:(_Bool)arg6;	// IMP=0x001000000011cc96
- (id)init;	// IMP=0x001000000011cc88

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
