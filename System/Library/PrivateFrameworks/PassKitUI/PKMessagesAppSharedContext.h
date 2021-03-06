//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKPaymentDataProviderDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSPointerArray, NSString, PKPaymentDefaultDataProvider, PKPeerPaymentMessagesAppViewController, PKTransactionSource;

@interface PKMessagesAppSharedContext : NSObject <PKPaymentDataProviderDelegate>
{
    NSPointerArray *_weakBubbleAppControllers;	// 8 = 0x8
    NSMutableArray *_pendingPrimaryHandlers;	// 16 = 0x10
    PKPaymentDefaultDataProvider *_paymentServiceDataProvider;	// 24 = 0x18
    PKTransactionSource *_transactionSource;	// 32 = 0x20
    NSMutableDictionary *_externalizedControllerStateStore;	// 40 = 0x28
    PKPeerPaymentMessagesAppViewController *_primaryAppController;	// 48 = 0x30
}

+ (id)sharedContext;	// IMP=0x00000000000e58aa
- (void).cxx_destruct;	// IMP=0x00000000000e742e
@property(readonly, nonatomic) __weak PKPeerPaymentMessagesAppViewController *primaryAppController; // @synthesize primaryAppController=_primaryAppController;
- (void)transactionSourceIdentifier:(id)arg1 didReceiveTransaction:(id)arg2;	// IMP=0x00000000000e7199
@property(readonly, copy) NSString *description;
- (void)_purgeOldCacheEntries;	// IMP=0x00000000000e6880
- (id)_urlForMessageIdentifier:(id)arg1;	// IMP=0x00000000000e6695
- (id)_sharedDirectoryPath;	// IMP=0x00000000000e6647
- (id)_directoryPath;	// IMP=0x00000000000e65f9
- (void)removeExternalizedControllerStateDataForMessage:(id)arg1;	// IMP=0x00000000000e6433
- (id)externalizedControllerStateForMessage:(id)arg1;	// IMP=0x00000000000e6286
- (void)persistExternalizedControllerState:(id)arg1 forMessage:(id)arg2;	// IMP=0x00000000000e60b1
- (void)_withPrimaryAppController:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e6031
- (void)handlePaymentRequestMessage:(id)arg1 sender:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000e5f1d
- (void)revealPrimaryAppController:(id)arg1;	// IMP=0x00000000000e5e4a
@property(readonly, copy, nonatomic) NSArray *bubbleAppControllers;
- (void)_registerAppViewController:(id)arg1;	// IMP=0x00000000000e5ab6
- (id)init;	// IMP=0x00000000000e593b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

