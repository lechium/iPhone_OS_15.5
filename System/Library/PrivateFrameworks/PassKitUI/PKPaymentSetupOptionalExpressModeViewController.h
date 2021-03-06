//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PKPaymentPass, PKPaymentProvisioningController, PKPaymentProvisioningTracker;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKPaymentSetupOptionalExpressModeViewController
{
    PKPaymentProvisioningController *_provisioningController;	// 8 = 0x8
    PKPaymentPass *_pass;	// 16 = 0x10
    id <PKPaymentSetupViewControllerDelegate> _setupDelegate;	// 24 = 0x18
    PKPaymentProvisioningTracker *_provisioningTracker;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000033dfc6
- (struct CGSize)_snapshotSize;	// IMP=0x000000000033dfb0
- (id)_moreInfoViewControllerWithDismissalHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000033de64
- (id)_credentialViewController;	// IMP=0x000000000033ddac
- (void)_presentNextViewController:(id)arg1;	// IMP=0x000000000033dcb7
- (void)_terminateSetupFlow;	// IMP=0x000000000033dbc4
- (void)proceedToNextScreen;	// IMP=0x000000000033d9ce
- (void)explanationViewDidSelectSetupLater:(id)arg1;	// IMP=0x000000000033d6af
- (void)explanationViewDidSelectContinue:(id)arg1;	// IMP=0x000000000033d388
- (void)loadView;	// IMP=0x000000000033d02a
- (id)initWithProvisioningController:(id)arg1 paymentPass:(id)arg2 context:(long long)arg3 delegate:(id)arg4;	// IMP=0x000000000033cea0

@end

