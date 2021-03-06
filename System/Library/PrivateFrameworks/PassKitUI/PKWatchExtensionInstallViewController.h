//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/ASCLockupViewDelegate-Protocol.h>

@class ASCLockupView, NSString, PKPaymentPass, PKPaymentProvisioningController, PKPaymentWebService, PKWatchDeviceAppCarouselView;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKWatchExtensionInstallViewController <ASCLockupViewDelegate>
{
    PKWatchDeviceAppCarouselView *_deviceImageView;	// 8 = 0x8
    ASCLockupView *_appStoreView;	// 16 = 0x10
    PKPaymentPass *_paymentPass;	// 24 = 0x18
    PKPaymentWebService *_webservice;	// 32 = 0x20
    PKPaymentProvisioningController *_provisioningController;	// 40 = 0x28
    id <PKPaymentSetupViewControllerDelegate> _setupDelegate;	// 48 = 0x30
}

+ (_Bool)shouldShowWatchExtensionInstallViewControllerForPaymentPass:(id)arg1 webService:(id)arg2;	// IMP=0x000000000016f462
- (void).cxx_destruct;	// IMP=0x00000000001702da
@property(nonatomic) __weak id <PKPaymentSetupViewControllerDelegate> setupDelegate; // @synthesize setupDelegate=_setupDelegate;
@property(retain, nonatomic) PKPaymentProvisioningController *provisioningController; // @synthesize provisioningController=_provisioningController;
@property(retain, nonatomic) PKPaymentWebService *webservice; // @synthesize webservice=_webservice;
@property(retain, nonatomic) PKPaymentPass *paymentPass; // @synthesize paymentPass=_paymentPass;
- (void)_proceedToNextScreen;	// IMP=0x00000000001700e9
- (void)_installNowPressed;	// IMP=0x00000000001700d7
- (id)presentingViewControllerForLockupView:(id)arg1;	// IMP=0x00000000001700ce
- (void)lockupViewDidFinishRequest:(id)arg1;	// IMP=0x000000000016fd0d
- (void)explanationViewDidSelectSetupLater:(id)arg1;	// IMP=0x000000000016fc9c
- (void)loadView;	// IMP=0x000000000016f5c9
- (id)initWithPaymentPass:(id)arg1 provisioningController:(id)arg2 webService:(id)arg3 context:(long long)arg4 setupDelegate:(id)arg5;	// IMP=0x000000000016f46a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

