//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/PKExplanationViewDelegate-Protocol.h>
#import <PassKitUI/PKPeerPaymentAccountResolutionControllerDelegate-Protocol.h>

@class NSArray, NSString, PKPeerPaymentIdentityVerificationController;

@interface PKPeerPaymentIdentityVerificationViewController <PKExplanationViewDelegate, PKPeerPaymentAccountResolutionControllerDelegate>
{
    PKPeerPaymentIdentityVerificationController *_controller;	// 8 = 0x8
    NSArray *_visibleFieldIdentifiers;	// 16 = 0x10
    unsigned long long _identityVerificaionError;	// 24 = 0x18
    NSString *_headerTitle;	// 32 = 0x20
    NSString *_headerSubtitle;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000004a49a8
@property(retain, nonatomic) NSString *headerSubtitle; // @synthesize headerSubtitle=_headerSubtitle;
@property(retain, nonatomic) NSString *headerTitle; // @synthesize headerTitle=_headerTitle;
- (void)_terminateFlow;	// IMP=0x00000000004a48d0
- (void)_handleCancelButtonTapped:(id)arg1;	// IMP=0x00000000004a484d
- (void)_showNavigationBarSpinner:(_Bool)arg1;	// IMP=0x00000000004a4715
- (id)defaultHeaderViewSubTitle;	// IMP=0x00000000004a4700
- (id)defaultHeaderViewTitle;	// IMP=0x00000000004a46eb
- (void)handleNextButtonTapped:(id)arg1;	// IMP=0x00000000004a4141
- (id)visibleFieldIdentifiers;	// IMP=0x00000000004a412c
- (void)explanationViewDidSelectSetupLater:(id)arg1;	// IMP=0x00000000004a4118
- (void)explanationViewDidSelectContinue:(id)arg1;	// IMP=0x00000000004a3c7d
- (void)peerPaymentAccountResolutionController:(id)arg1 requestsDismissCurrentViewControllerAnimated:(_Bool)arg2;	// IMP=0x00000000004a3c64
- (void)peerPaymentAccountResolutionController:(id)arg1 requestsPresentViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00000000004a3c49
- (id)initWithController:(id)arg1 setupDelegate:(id)arg2 visibleFieldIdentifiers:(id)arg3;	// IMP=0x00000000004a3a6f
- (id)initWithController:(id)arg1 visibleFieldIdentifiers:(id)arg2;	// IMP=0x00000000004a3a58

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
