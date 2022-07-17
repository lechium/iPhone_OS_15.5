//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/PKExplanationViewControllerDelegate-Protocol.h>
#import <PassKitUI/PKExplanationViewDelegate-Protocol.h>
#import <PassKitUI/PKPaymentDocumentSubmissionControllerDelegate-Protocol.h>
#import <PassKitUI/PKPaymentSetupPresentationProtocol-Protocol.h>

@class NSString, PKPaymentDocumentSubmissionController;

@interface PKPaymentDocumentSubmissionInfoViewController <PKPaymentDocumentSubmissionControllerDelegate, PKExplanationViewDelegate, PKExplanationViewControllerDelegate, PKPaymentSetupPresentationProtocol>
{
    PKPaymentDocumentSubmissionController *_controller;	// 8 = 0x8
    long long _context;	// 16 = 0x10
    long long _currentState;	// 24 = 0x18
    long long _currentSide;	// 32 = 0x20
    unsigned long long _featureIdentifier;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000001b5d4b
- (id)paymentSetupMarker;	// IMP=0x00000000001b5d2c
- (id)onPresentationRemoveViewControllersAfterMarker;	// IMP=0x00000000001b5ce6
- (void)captureController:(id)arg1 didChangeStateTo:(long long)arg2;	// IMP=0x00000000001b5bf5
- (void)captureController:(id)arg1 showLoading:(_Bool)arg2;	// IMP=0x00000000001b5b73
- (void)didSelectSetupLater;	// IMP=0x00000000001b5ae5
- (void)explanationViewDidSelectSetupLater:(id)arg1;	// IMP=0x00000000001b5ad3
- (void)explanationViewDidSelectContinue:(id)arg1;	// IMP=0x00000000001b5a76
- (void)updateUIWithState:(long long)arg1;	// IMP=0x00000000001b456e
- (id)_secondaryButton;	// IMP=0x00000000001b4425
- (void)_cancelPressed;	// IMP=0x00000000001b4408
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000001b4369
- (void)viewDidLoad;	// IMP=0x00000000001b42a5
- (id)initWithController:(id)arg1 context:(long long)arg2 featureIdentifier:(unsigned long long)arg3;	// IMP=0x00000000001b41d4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
