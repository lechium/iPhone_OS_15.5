//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/PKApplyFlowControllerProtocol-Protocol.h>

@class NSString, PKApplyController, PKDynamicProvisioningPageContent;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKApplyCollectionViewController <PKApplyFlowControllerProtocol>
{
    PKApplyController *_controller;	// 8 = 0x8
    id <PKPaymentSetupViewControllerDelegate> _setupDelegate;	// 16 = 0x10
    PKDynamicProvisioningPageContent *_page;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000406135
@property(retain, nonatomic) PKDynamicProvisioningPageContent *page; // @synthesize page=_page;
@property(readonly, nonatomic) __weak id <PKPaymentSetupViewControllerDelegate> setupDelegate; // @synthesize setupDelegate=_setupDelegate;
@property(readonly, nonatomic) PKApplyController *controller; // @synthesize controller=_controller;
- (void)didTapFooterLink:(id)arg1;	// IMP=0x0000000000405e0b
- (void)terminateSetupFlow;	// IMP=0x0000000000405d2e
- (void)displayDisplayableError:(id)arg1;	// IMP=0x0000000000405a9a
- (void)handleNextViewController:(id)arg1 displayableError:(id)arg2;	// IMP=0x000000000040595b
- (void)handleNextStep;	// IMP=0x000000000040581c
- (void)_withdrawApplicationTapped;	// IMP=0x000000000040558e
- (void)_cancelPressed;	// IMP=0x0000000000405397
- (void)_continueTapped;	// IMP=0x000000000040525a
- (void)viewDidLoad;	// IMP=0x0000000000404afb
- (id)currentPage;	// IMP=0x0000000000404ae6
- (id)initWithController:(id)arg1 setupDelegate:(id)arg2 context:(long long)arg3 applyPage:(id)arg4;	// IMP=0x0000000000404a11

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
