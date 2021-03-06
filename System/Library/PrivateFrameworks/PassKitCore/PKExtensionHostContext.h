//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitCore/PKExtensionHostContextProtocol-Protocol.h>

@class NSObject, NSString;
@protocol OS_dispatch_group, PKPaymentAuthorizationHostProtocol;

@interface PKExtensionHostContext <PKExtensionHostContextProtocol>
{
    id <PKPaymentAuthorizationHostProtocol> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_group> *_delayCallbacksGroup;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000c1369
@property(retain, nonatomic) NSObject<OS_dispatch_group> *delayCallbacksGroup; // @synthesize delayCallbacksGroup=_delayCallbacksGroup;
@property(nonatomic) __weak id <PKPaymentAuthorizationHostProtocol> delegate; // @synthesize delegate=_delegate;
- (void)authorizationDidAuthorizeContext;	// IMP=0x00000000000c1311
- (void)authorizationDidUpdateAccountServicePaymentMethod:(id)arg1;	// IMP=0x00000000000c130b
- (void)authorizationDidAuthorizeApplePayTrustSignature:(id)arg1;	// IMP=0x00000000000c1305
- (void)didEncounterAuthorizationEvent:(unsigned long long)arg1;	// IMP=0x00000000000c11e4
- (void)authorizationDidPresent;	// IMP=0x00000000000c10d3
- (void)authorizationDidChangeCouponCode:(id)arg1;	// IMP=0x00000000000c0fd8
- (void)authorizationDidSelectPaymentMethod:(id)arg1;	// IMP=0x00000000000c0edd
- (void)authorizationDidSelectShippingAddress:(id)arg1;	// IMP=0x00000000000c0de2
- (void)authorizationDidSelectShippingMethod:(id)arg1;	// IMP=0x00000000000c0ce7
- (void)authorizationDidAuthorizeDisbursement:(id)arg1;	// IMP=0x00000000000c0bec
- (void)authorizationDidAuthorizePeerPaymentQuote:(id)arg1;	// IMP=0x00000000000c0af1
- (void)authorizationDidAuthorizePurchase:(id)arg1;	// IMP=0x00000000000c09f6
- (void)authorizationDidAuthorizePayment:(id)arg1;	// IMP=0x00000000000c08fb
- (void)authorizationDidRequestMerchantSession;	// IMP=0x00000000000c0849
- (void)authorizationDidFinishWithError:(id)arg1;	// IMP=0x00000000000c074e
- (void)authorizationWillStart;	// IMP=0x00000000000c069c
- (void)endDelayingCallbacks;	// IMP=0x00000000000c0687
- (void)beginDelayingCallbacks;	// IMP=0x00000000000c0672
- (id)vendorContextWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c0660
- (id)vendorContext;	// IMP=0x00000000000c064e
- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3;	// IMP=0x00000000000c05f8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

