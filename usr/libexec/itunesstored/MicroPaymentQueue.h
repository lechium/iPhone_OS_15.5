//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSManagedObjectID, NSMutableArray;
@protocol OS_dispatch_queue;

@interface MicroPaymentQueue : NSObject
{
    NSManagedObjectID *_activePaymentID;	// 8 = 0x8
    long long _aliveState;	// 16 = 0x10
    long long _changeSetCount;	// 24 = 0x18
    NSMutableArray *_clients;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 40 = 0x28
    _Bool _observingNetworkChanges;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_purchaseActionsDBQueue;	// 56 = 0x38
}

+ (id)paymentQueue;	// IMP=0x004000000003529b
- (void)_startFirstReadyPayment;	// IMP=0x002000000003f088
- (void)_setActivePaymentID:(id)arg1;	// IMP=0x001000000003efe0
- (void)_sendPurchaseIntentsForApp:(id)arg1 storeKitClient:(id)arg2 force:(_Bool)arg3;	// IMP=0x001000000003ea50
- (id)_newPaymentQueueClientWithMessage:(id)arg1 connection:(id)arg2 parameter:(const char *)arg3;	// IMP=0x001000000003e9ca
- (id)_firstReadyPaymentInContext:(id)arg1;	// IMP=0x001000000003e890
- (void)_finishPaymentOperationForPaymentID:(id)arg1 result:(_Bool)arg2 error:(id)arg3;	// IMP=0x001000000003e7a2
- (void)_enumerateDownloadsForIdentifiers:(id)arg1 context:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000003e4d2
- (void)_dispatchAsync:(CDUnknownBlockType)arg1;	// IMP=0x001000000003e40e
- (id)_copyDownloadsIDsFromMessage:(id)arg1 key:(const char *)arg2;	// IMP=0x001000000003e309
- (id)_clients;	// IMP=0x001000000003d7f3
- (id)_clientForPayment:(id)arg1;	// IMP=0x001000000003d7a7
- (id)_clientForObjectID:(id)arg1;	// IMP=0x001000000003d5ee
- (id)_clientForConnection:(id)arg1 paymentQueueClient:(id)arg2;	// IMP=0x001000000003d3f6
- (id)_beginManagedContextSession;	// IMP=0x001000000003d272
- (void)_refreshDidFinishNotification:(id)arg1;	// IMP=0x001000000003d210
- (void)_networkTypeChanged:(id)arg1;	// IMP=0x001000000003d125
- (void)_clientDisconnectNotification:(id)arg1;	// IMP=0x001000000003ce59
- (_Bool)_inAppReviewEnabled;	// IMP=0x001000000003ce1c
- (void)resetInAppReviewRequestsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000003cbac
- (void)updateInAppReviewRequestWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000003c85e
- (id)_inAppReviewRequestConstants;	// IMP=0x001000000003c5d8
- (void)addInAppReviewRequestWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000003bec9
- (void)getPromotedIAPInfoInternalWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000003b937
- (void)setPromotedIAPVisibilityWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000003b20b
- (void)getPromotedIAPVisibilityWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000003ac2e
- (void)setPromotedIAPOrderWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000003a464
- (void)getPromotedIAPOrderWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000039e63
- (void)updateDeferredPaymentWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000000394cb
- (void)startDownloadsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000000393d2
- (void)resumeDownloadsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000000392d9
- (void)restoreCompletedTransactionsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000000391e7
- (void)registerClientWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000038ea9
- (void)productsRequestWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000038e62
- (void)pauseDownloadsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000038d69
- (void)installSheetStateUpdatedWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000038cd7
- (void)getTransactionsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000038b5a
- (void)finishPaymentWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000038a81
- (void)forceSandboxWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000038961
- (void)connectedAppEnteredForegroundWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000038723
- (void)checkQueueForClientWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000038657
- (void)cancelRequestWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000003861f
- (void)cancelDownloadsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000038526
- (void)addPurchaseIntentWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000000383b0
- (void)addPaymentWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000000381f5
- (void)updateWithPurchaseResponse:(id)arg1;	// IMP=0x0010000000037d18
- (void)startFirstReadyPayment;	// IMP=0x0010000000037cb6
- (void)start;	// IMP=0x0010000000037c4b
- (void)observeXPCServer:(id)arg1;	// IMP=0x00100000000379b1
- (void)notifyClientsOfExternalPropertyChanges:(id)arg1 ofDownloadID:(long long)arg2;	// IMP=0x00100000000376a4
- (void)finishDownloadsWithIdentifiers:(id)arg1;	// IMP=0x0010000000036727
- (void)failDownloadsWithIdentifiers:(id)arg1;	// IMP=0x0010000000035e50
- (void)checkQueueForClientWithIdentifier:(id)arg1 URLBagContext:(id)arg2;	// IMP=0x00100000000359cd
- (void)addPurchaseIntentWithProductIdentifier:(id)arg1 productName:(id)arg2 appBundleId:(id)arg3 appName:(id)arg4;	// IMP=0x0010000000035318
- (void)dealloc;	// IMP=0x00100000000351cb
- (id)init;	// IMP=0x00100000000350c8

@end

