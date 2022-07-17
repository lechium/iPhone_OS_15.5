//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MSConversation, NPKPeerPaymentConversationContext, NSString, PKPeerPaymentController, PKPeerPaymentRecipient, PKPeerPaymentService;
@protocol OS_dispatch_queue;

@interface NPKPeerPaymentConversationManager : NSObject
{
    NSObject<OS_dispatch_queue> *_internalQueue;	// 8 = 0x8
    MSConversation *_activeConversation;	// 16 = 0x10
    PKPeerPaymentRecipient *_recipient;	// 24 = 0x18
    NPKPeerPaymentConversationContext *_conversationContext;	// 32 = 0x20
    NSString *_currentRecipientAddressLookup;	// 40 = 0x28
    PKPeerPaymentController *_currentPeerPaymentController;	// 48 = 0x30
    PKPeerPaymentService *_peerPaymentService;	// 56 = 0x38
}

+ (id)sharedInstance;	// IMP=0x0000000000148f5c
- (void).cxx_destruct;	// IMP=0x000000000014d171
@property(retain, nonatomic) PKPeerPaymentService *peerPaymentService; // @synthesize peerPaymentService=_peerPaymentService;
@property(nonatomic) __weak PKPeerPaymentController *currentPeerPaymentController; // @synthesize currentPeerPaymentController=_currentPeerPaymentController;
@property(retain, nonatomic) NSString *currentRecipientAddressLookup; // @synthesize currentRecipientAddressLookup=_currentRecipientAddressLookup;
@property(retain, nonatomic) NPKPeerPaymentConversationContext *conversationContext; // @synthesize conversationContext=_conversationContext;
- (id)_newPeerPaymentControllerWithQueue:(id)arg1;	// IMP=0x000000000014d070
- (id)_newPeerPaymentController;	// IMP=0x000000000014d040
- (id)_sharedPeerPaymentWebService;	// IMP=0x000000000014d027
- (void)_postNotificationWithRecipient:(id)arg1 error:(id)arg2;	// IMP=0x000000000014cdf8
- (id)_skeletonPeerPaymentQuoteWithPeerPaymentController:(id)arg1 selectedAmount:(id)arg2 recipient:(id)arg3;	// IMP=0x000000000014c493
- (id)_unknownPaymentErrorWithUnderlyingError:(id)arg1;	// IMP=0x000000000014c3ea
- (id)_lockedOrRestrictedAccountErrorWithUnderlyingError:(id)arg1;	// IMP=0x000000000014c2a3
- (id)_ambiguousSenderAddressErrorWithUnderlyingError:(id)arg1;	// IMP=0x000000000014c107
- (id)_negativeBalanceErrorWithUnderlyingError:(id)arg1;	// IMP=0x000000000014bd46
- (id)_displayableErrorWithError:(id)arg1;	// IMP=0x000000000014bbf8
- (void)_accountDidChange;	// IMP=0x000000000014bb45
- (void)_internalQueue_performRequestWithAmount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000014b3ee
- (void)performRequestWithAmount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000014b315
- (void)_internalQueue_forceLookupRecipientInformation;	// IMP=0x000000000014b1af
- (void)_internalQueue_lookupRecipientInformationWithAddress:(id)arg1 senderAddress:(id)arg2;	// IMP=0x000000000014aba4
- (void)lookupRecipientInformationWithAddress:(id)arg1 senderAddress:(id)arg2;	// IMP=0x000000000014aacb
- (void)_internalQueue_performPaymentWithAmount:(id)arg1 requestToken:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000149873
- (void)performPaymentWithAmount:(id)arg1 requestToken:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000149769
- (void)lookupRecipientInformationIfNecessary;	// IMP=0x0000000000149611
@property(readonly) PKPeerPaymentRecipient *recipient; // @synthesize recipient=_recipient;
@property(readonly, nonatomic) _Bool recipientFoundInContacts;
@property(readonly, copy, nonatomic) NSString *recipientDisplayName;
@property(readonly, nonatomic) NSString *recipientPhoneOrEmail;
@property(readonly, nonatomic) NSString *senderPhoneOrEmail;
@property(retain) MSConversation *activeConversation; // @synthesize activeConversation=_activeConversation;
- (id)init;	// IMP=0x0000000000148e7c

@end
