//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/PKAccountFlowControllerDelegate-Protocol.h>
#import <PassKitUI/PKViewControllerPreflightable-Protocol.h>

@class CLInUseAssertion, NSString, PKAccountFlowController, PKAccountPostProvisioningContent;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKAccountPassMakeDefaultViewContoller <PKAccountFlowControllerDelegate, PKViewControllerPreflightable>
{
    PKAccountFlowController *_accountController;	// 8 = 0x8
    id <PKPaymentSetupViewControllerDelegate> _delegate;	// 16 = 0x10
    unsigned long long _featureIdentifier;	// 24 = 0x18
    PKAccountPostProvisioningContent *_makeDefaultPostProvisioningContent;	// 32 = 0x20
    CLInUseAssertion *_inUseAssertion;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000002b7e31
- (void)_reportEventForPassIfNecessary:(id)arg1;	// IMP=0x00000000002b7d48
- (void)_terminateSetupFlow;	// IMP=0x00000000002b7cb2
- (void)_presentDisplayableError:(id)arg1;	// IMP=0x00000000002b7b2f
- (void)_presentViewController:(id)arg1;	// IMP=0x00000000002b7a35
- (void)accountFlowController:(id)arg1 requestsPresentationOfDisplayableError:(id)arg2;	// IMP=0x00000000002b7a20
- (void)accountFlowController:(id)arg1 requestsPresentationOfViewController:(id)arg2;	// IMP=0x00000000002b7a0b
- (void)explanationViewDidSelectSetupLater:(id)arg1;	// IMP=0x00000000002b784e
- (void)explanationViewDidSelectContinue:(id)arg1;	// IMP=0x00000000002b7722
- (_Bool)_willPerformProvisioningActions;	// IMP=0x00000000002b76ff
- (void)preflightWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000002b7583
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000000002b74c3
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000002b745f
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000002b739f
- (void)viewDidLoad;	// IMP=0x00000000002b7356
- (void)loadView;	// IMP=0x00000000002b6c01
- (void)dealloc;	// IMP=0x00000000002b6b9d
- (id)initWithAccountFlowController:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3;	// IMP=0x00000000002b6a8c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
