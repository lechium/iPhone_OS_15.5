//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/PKPaymentAuthorizationHostProtocol-Protocol.h>

@class NSString, PKPaymentAuthorizationCoordinator;
@protocol PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate, PKPaymentAuthorizationServiceProtocol;

@interface PKPaymentAuthorizationCoordinatorExportedObject : NSObject <PKPaymentAuthorizationHostProtocol>
{
    struct os_unfair_lock_s _delegateLock;	// 8 = 0x8
    id <PKPaymentAuthorizationCoordinatorDelegate> _delegate;	// 16 = 0x10
    id <PKPaymentAuthorizationCoordinatorPrivateDelegate> _privateDelegate;	// 24 = 0x18
    PKPaymentAuthorizationCoordinator *_controller;	// 32 = 0x20
    id <PKPaymentAuthorizationServiceProtocol> _serviceProxy;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000150d6e
@property(retain, nonatomic) id <PKPaymentAuthorizationServiceProtocol> serviceProxy; // @synthesize serviceProxy=_serviceProxy;
@property(nonatomic) __weak PKPaymentAuthorizationCoordinator *controller; // @synthesize controller=_controller;
@property(nonatomic) __weak id <PKPaymentAuthorizationCoordinatorPrivateDelegate> privateDelegate; // @synthesize privateDelegate=_privateDelegate;
@property(nonatomic) __weak id <PKPaymentAuthorizationCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)authorizationDidChangeCouponCode:(id)arg1;	// IMP=0x0000000000150af0
- (void)authorizationDidSelectPaymentMethod:(id)arg1;	// IMP=0x0000000000150917
- (void)authorizationDidSelectShippingAddress:(id)arg1;	// IMP=0x00000000001506f0
- (void)authorizationDidSelectShippingMethod:(id)arg1;	// IMP=0x00000000001504f1
- (void)authorizationDidUpdateAccountServicePaymentMethod:(id)arg1;	// IMP=0x0000000000150363
- (void)authorizationDidAuthorizeApplePayTrustSignature:(id)arg1;	// IMP=0x0000000000150268
- (void)authorizationDidAuthorizeDisbursement:(id)arg1;	// IMP=0x000000000015016d
- (void)authorizationDidAuthorizePeerPaymentQuote:(id)arg1;	// IMP=0x0000000000150072
- (void)authorizationDidAuthorizePurchase:(id)arg1;	// IMP=0x000000000014ff77
- (void)authorizationDidAuthorizePayment:(id)arg1;	// IMP=0x000000000014fdf9
- (void)authorizationDidAuthorizeContext;	// IMP=0x000000000014fcf4
- (void)authorizationDidFinishWithError:(id)arg1;	// IMP=0x000000000014fc0f
- (void)authorizationDidRequestMerchantSession;	// IMP=0x000000000014fb07
- (void)authorizationWillStart;	// IMP=0x000000000014fa92
- (void)didEncounterAuthorizationEvent:(unsigned long long)arg1;	// IMP=0x000000000014fa18
- (void)handleConnectionDidOpenWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000014fa06
- (void)authorizationDidPresent;	// IMP=0x000000000014fa00
- (void)dealloc;	// IMP=0x000000000014f9d1
- (id)initWithController:(id)arg1;	// IMP=0x000000000014f966
- (id)init;	// IMP=0x000000000014f952

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
