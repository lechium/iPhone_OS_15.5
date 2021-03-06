//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <PassKitUI/PKPaymentAuthorizationCoordinatorDelegate-Protocol.h>
#import <PassKitUI/PKPaymentAuthorizationCoordinatorPrivateDelegate-Protocol.h>
#import <PassKitUI/PKPaymentSetupDelegate-Protocol.h>
#import <PassKitUI/PKPaymentSetupPurchaseAmountViewDelegate-Protocol.h>
#import <PassKitUI/PKPaymentSetupPurchaseControllerDelegate-Protocol.h>
#import <PassKitUI/PKPaymentSetupViewControllerDelegate-Protocol.h>
#import <PassKitUI/PKViewControllerPreflightable-Protocol.h>
#import <PassKitUI/RemoteUIControllerDelegate-Protocol.h>

@class NSDecimalNumber, NSLayoutConstraint, NSString, PKPaymentAuthorizationCoordinator, PKPaymentProvisioningController, PKPaymentProvisioningMethodMetadata, PKPaymentSetupProduct, PKPaymentSetupPurchaseAmountView, PKPaymentSetupPurchaseController, PKServiceProviderPurchase, UIActivityIndicatorView, UIImage, UIImageView, UILabel;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKPaymentSetupPurchaseViewController : UIViewController <PKPaymentSetupPurchaseAmountViewDelegate, PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate, PKPaymentSetupViewControllerDelegate, PKPaymentSetupPurchaseControllerDelegate, RemoteUIControllerDelegate, PKPaymentSetupDelegate, PKViewControllerPreflightable>
{
    _Bool _snapshotNeedsCorners;	// 8 = 0x8
    unsigned char _visibility;	// 9 = 0x9
    _Bool _fieldsVerified;	// 10 = 0xa
    _Bool _acceptedTerms;	// 11 = 0xb
    PKPaymentSetupProduct *_product;	// 16 = 0x10
    PKPaymentSetupPurchaseController *_purchaseController;	// 24 = 0x18
    PKPaymentProvisioningController *_provisioningController;	// 32 = 0x20
    long long _setupContext;	// 40 = 0x28
    id <PKPaymentSetupViewControllerDelegate> _setupDelegate;	// 48 = 0x30
    PKPaymentProvisioningMethodMetadata *_provisioningMethodMetadata;	// 56 = 0x38
    UIImageView *_passView;	// 64 = 0x40
    UILabel *_titleLabel;	// 72 = 0x48
    PKPaymentSetupPurchaseAmountView *_amountView;	// 80 = 0x50
    NSLayoutConstraint *_amountViewBottomHeightConstraint;	// 88 = 0x58
    NSDecimalNumber *_currentAmount;	// 96 = 0x60
    PKPaymentAuthorizationCoordinator *_authorizationCoordinator;	// 104 = 0x68
    PKServiceProviderPurchase *_purchase;	// 112 = 0x70
    UIImage *_cardImage;	// 120 = 0x78
    UIActivityIndicatorView *_activityIndicator;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x000000000005641f
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) UIImage *cardImage; // @synthesize cardImage=_cardImage;
@property(nonatomic) _Bool acceptedTerms; // @synthesize acceptedTerms=_acceptedTerms;
@property(nonatomic) _Bool fieldsVerified; // @synthesize fieldsVerified=_fieldsVerified;
@property(retain, nonatomic) PKServiceProviderPurchase *purchase; // @synthesize purchase=_purchase;
@property(retain, nonatomic) PKPaymentAuthorizationCoordinator *authorizationCoordinator; // @synthesize authorizationCoordinator=_authorizationCoordinator;
@property(copy, nonatomic) NSDecimalNumber *currentAmount; // @synthesize currentAmount=_currentAmount;
@property(retain, nonatomic) NSLayoutConstraint *amountViewBottomHeightConstraint; // @synthesize amountViewBottomHeightConstraint=_amountViewBottomHeightConstraint;
@property(retain, nonatomic) PKPaymentSetupPurchaseAmountView *amountView; // @synthesize amountView=_amountView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *passView; // @synthesize passView=_passView;
@property(retain, nonatomic) PKPaymentProvisioningMethodMetadata *provisioningMethodMetadata; // @synthesize provisioningMethodMetadata=_provisioningMethodMetadata;
@property(nonatomic) __weak id <PKPaymentSetupViewControllerDelegate> setupDelegate; // @synthesize setupDelegate=_setupDelegate;
@property(nonatomic) long long setupContext; // @synthesize setupContext=_setupContext;
@property(retain, nonatomic) PKPaymentProvisioningController *provisioningController; // @synthesize provisioningController=_provisioningController;
@property(readonly, nonatomic) PKPaymentSetupPurchaseController *purchaseController; // @synthesize purchaseController=_purchaseController;
@property(readonly, nonatomic) PKPaymentSetupProduct *product; // @synthesize product=_product;
- (void)_updateBottomHeightConstraint;	// IMP=0x0000000000056177
- (struct CGSize)_imageSizeShowingTransferButton:(_Bool)arg1;	// IMP=0x0000000000056100
- (void)_rightBarButtonPressed:(id)arg1;	// IMP=0x0000000000055f4e
- (void)_showSpinner:(_Bool)arg1;	// IMP=0x0000000000055e7b
- (void)showSpinner:(_Bool)arg1;	// IMP=0x0000000000055e69
- (id)_spinnerBarButton;	// IMP=0x0000000000055dd0
- (id)_rightBarButton;	// IMP=0x0000000000055d60
- (void)_createConstraints;	// IMP=0x0000000000055545
- (void)_createSubviews;	// IMP=0x000000000005515e
- (_Bool)_isCompactHeight;	// IMP=0x0000000000055115
- (_Bool)_shouldHideImage;	// IMP=0x00000000000550e3
- (_Bool)_readerModeIsSupported;	// IMP=0x000000000005504d
- (void)paymentSetupDidFinish:(id)arg1;	// IMP=0x0000000000055031
- (void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(unsigned long long *)arg3;	// IMP=0x0000000000054f9d
- (void)viewControllerDidTerminateSetupFlow:(id)arg1;	// IMP=0x0000000000054f61
- (void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePurchase:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000054e5a
- (void)paymentAuthorizationCoordinatorDidFinish:(id)arg1;	// IMP=0x00000000000548fe
- (void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePayment:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000054899
- (void)paymentSetupPurchaseAmountViewDidLayoutKeyboard:(id)arg1;	// IMP=0x000000000005486a
- (void)transferBalanceFromExistingCard;	// IMP=0x000000000005479e
- (void)didUpdateAmount:(id)arg1 isValid:(_Bool)arg2;	// IMP=0x00000000000546b6
- (void)shakeCard;	// IMP=0x0000000000054697
- (void)preflightWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000054596
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000000543e1
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000000000543a5
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000054369
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000542ef
- (void)viewDidLoad;	// IMP=0x0000000000054242
- (id)initWithProvisioningController:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 product:(id)arg4;	// IMP=0x0000000000053fac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

