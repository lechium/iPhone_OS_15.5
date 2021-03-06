//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <PassKit/PKPaymentAuthorizationCoordinatorDelegate-Protocol.h>
#import <PassKit/PKPaymentAuthorizationCoordinatorPrivateDelegate-Protocol.h>

@class NSString, PKPaymentAuthorizationCoordinator;
@protocol PKPaymentAuthorizationViewControllerDelegate, PKPaymentAuthorizationViewControllerPrivateDelegate;

@interface PKPaymentAuthorizationViewController : UIViewController <PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate>
{
    _Bool _viewHasAppeared;	// 8 = 0x8
    id <PKPaymentAuthorizationViewControllerDelegate> _delegate;	// 16 = 0x10
    PKPaymentAuthorizationCoordinator *_paymentCoordinator;	// 24 = 0x18
    id <PKPaymentAuthorizationViewControllerPrivateDelegate> _privateDelegate;	// 32 = 0x20
}

+ (void)paymentServicesMerchantURLForAPIType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000005ac3
+ (void)paymentServicesMerchantURL:(CDUnknownBlockType)arg1;	// IMP=0x0000000000005aa9
+ (_Bool)canMakePaymentsUsingNetworks:(id)arg1 capabilities:(unsigned long long)arg2;	// IMP=0x0000000000005a40
+ (_Bool)canMakePaymentsUsingNetworks:(id)arg1;	// IMP=0x00000000000059e7
+ (_Bool)canMakePayments;	// IMP=0x00000000000059b9
+ (_Bool)isPlatformSupported;	// IMP=0x0000000000005846
- (void).cxx_destruct;	// IMP=0x00000000000076d2
@property(nonatomic) __weak id <PKPaymentAuthorizationViewControllerPrivateDelegate> privateDelegate; // @synthesize privateDelegate=_privateDelegate;
@property(nonatomic) _Bool viewHasAppeared; // @synthesize viewHasAppeared=_viewHasAppeared;
@property(retain, nonatomic) PKPaymentAuthorizationCoordinator *paymentCoordinator; // @synthesize paymentCoordinator=_paymentCoordinator;
@property(nonatomic) __weak id <PKPaymentAuthorizationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_presentInAppPaymentInterfaceWithWindow:(id)arg1;	// IMP=0x000000000000732e
- (void)_presentInAppPaymentInterface;	// IMP=0x000000000000731a
- (void)paymentAuthorizationCoordinator:(id)arg1 willFinishWithError:(id)arg2;	// IMP=0x00000000000071c4
- (void)paymentAuthorizationCoordinator:(id)arg1 didChangeCouponCode:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000007079
- (void)paymentAuthorizationCoordinator:(id)arg1 didSelectPaymentMethod:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000006de7
- (void)paymentAuthorizationCoordinator:(id)arg1 didSelectShippingAddress:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000696e
- (void)paymentAuthorizationCoordinator:(id)arg1 didSelectShippingMethod:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000066aa
- (void)paymentAuthorizationCoordinatorDidFinish:(id)arg1;	// IMP=0x000000000000660d
- (void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePayment:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000637e
- (void)paymentAuthorizationCoordinatorWillAuthorizePayment:(id)arg1;	// IMP=0x0000000000006280
- (void)paymentAuthorizationCoordinator:(id)arg1 didRequestMerchantSessionUpdate:(CDUnknownBlockType)arg2;	// IMP=0x0000000000005f89
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000005efe
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000005ecf
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000005e7d
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x0000000000005e21
- (long long)modalPresentationStyle;	// IMP=0x0000000000005e16
- (void)dealloc;	// IMP=0x0000000000005de7
- (id)initWithPaymentRequest:(id)arg1;	// IMP=0x0000000000005c7c
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000005c3c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000005bf4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

