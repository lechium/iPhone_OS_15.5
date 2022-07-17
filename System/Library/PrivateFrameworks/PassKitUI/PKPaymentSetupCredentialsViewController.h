//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/PKPaymentSetupCredentialsSectionControllerDelegate-Protocol.h>
#import <PassKitUI/PKPaymentSetupPresentationProtocol-Protocol.h>

@class NSString, PKPaymentSetupCredentialsSectionController, PKPaymentSetupFlowController, PKPaymentSetupProduct;

@interface PKPaymentSetupCredentialsViewController <PKPaymentSetupCredentialsSectionControllerDelegate, PKPaymentSetupPresentationProtocol>
{
    PKPaymentSetupFlowController *_flowController;	// 8 = 0x8
    PKPaymentSetupCredentialsSectionController *_sectionController;	// 16 = 0x10
    PKPaymentSetupProduct *_product;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000003ebc5c
- (void)_toggleEdit;	// IMP=0x00000000003ebb16
- (void)_requestExternalizedAuthIfNeededWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000003eb66d
- (void)_terminateSetupFlow;	// IMP=0x00000000003eb5ad
- (void)_setUserInteractionEnabled:(_Bool)arg1;	// IMP=0x00000000003eb3e5
- (void)_presentProvisioningFlowForCredentials:(id)arg1;	// IMP=0x00000000003eb2a7
- (void)_requestAuthAndStartProvisioningForCredentials:(id)arg1;	// IMP=0x00000000003eb0d3
- (void)_presentManualAddController;	// IMP=0x00000000003eaafe
- (void)_setupLaterTapped;	// IMP=0x00000000003ea971
- (void)_continueButtonPressed;	// IMP=0x00000000003ea809
- (void)_presentCredentialDoubleCheckAlert:(id)arg1 continueHandler:(CDUnknownBlockType)arg2 setupLaterHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000003ea316
- (void)_setupDockView;	// IMP=0x00000000003ea042
- (id)paymentSetupMarker;	// IMP=0x00000000003ea029
- (void)showCredentialDeletionError;	// IMP=0x00000000003e9e8f
- (void)showUnableToDeleteCredentialError;	// IMP=0x00000000003e9cf5
- (void)showDeleteConfirmationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000003e9a2a
- (void)showMaxSelectionAlertForCredential:(id)arg1;	// IMP=0x00000000003e97ff
- (void)credentialSelectionDidChange:(_Bool)arg1;	// IMP=0x00000000003e9790
- (void)presentUnavailableDetailsForCredential:(id)arg1;	// IMP=0x00000000003e96e6
- (void)presentRefundFlowForCredential:(id)arg1;	// IMP=0x00000000003e963c
- (void)reloadAnimated:(_Bool)arg1;	// IMP=0x00000000003e9598
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000003e949c
- (void)viewDidLoad;	// IMP=0x00000000003e9217
- (void)dealloc;	// IMP=0x00000000003e91e8
- (id)initWithProvisioningController:(id)arg1 context:(long long)arg2 delegate:(id)arg3 credentials:(id)arg4 product:(id)arg5 allowsManualEntry:(_Bool)arg6;	// IMP=0x00000000003e9062

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
