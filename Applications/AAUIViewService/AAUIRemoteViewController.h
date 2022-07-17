//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

@class AAUIOBWelcomeController, NSString, NSXPCConnection;
@protocol AATrustedContactPresenterHostProtocol, AAUIOBWelcomeControllerViewModelProtocol;

@interface AAUIRemoteViewController : SBUIRemoteAlertServiceViewController
{
    NSXPCConnection *_lookupConnection;	// 8 = 0x8
    _Bool _isCustodianFlow;	// 16 = 0x10
    id <AAUIOBWelcomeControllerViewModelProtocol> _viewModel;	// 24 = 0x18
    AAUIOBWelcomeController *_welcomeController;	// 32 = 0x20
    id <AATrustedContactPresenterHostProtocol> _hostProxy;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000003a8a
@property(retain, nonatomic) id <AATrustedContactPresenterHostProtocol> hostProxy; // @synthesize hostProxy=_hostProxy;
@property(retain, nonatomic) AAUIOBWelcomeController *welcomeController; // @synthesize welcomeController=_welcomeController;
@property(retain, nonatomic) id <AAUIOBWelcomeControllerViewModelProtocol> viewModel; // @synthesize viewModel=_viewModel;
- (void)welcomeViewController:(id)arg1 didCompleteWithSuccess:(_Bool)arg2 error:(id)arg3;	// IMP=0x0010000000003a06
- (void)_goToAccountBeneficiarySettings;	// IMP=0x0010000000003933
- (void)_goToAccountRecoverySettings;	// IMP=0x0010000000003860
- (void)_dismissCustodianInvitationReminderFollowUp;	// IMP=0x00100000000036a3
- (void)_showCustodianInvitationAcceptedView;	// IMP=0x00100000000033c7
- (void)_respondToCustodianInvitationWithResponse:(_Bool)arg1;	// IMP=0x0010000000003181
- (void)_declineCustodianshipInvite;	// IMP=0x001000000000316d
- (void)_acceptCustodianshipInvite;	// IMP=0x0010000000002f46
- (void)_invalidateLookupConnection;	// IMP=0x0010000000002f0e
- (void)_main_dismissAndExit;	// IMP=0x0010000000002dcc
- (void)_dismissAndExit;	// IMP=0x0010000000002d57
- (void)_callCompletionWithError:(id)arg1;	// IMP=0x0010000000002cc9
- (void)handleButtonActions:(id)arg1;	// IMP=0x0010000000002acf
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000002220
- (void)_prepareMessagesInvitation;	// IMP=0x0010000000001e1b
- (void)_showInvitedAsFlow;	// IMP=0x0010000000001afc
- (long long)preferredStatusBarStyle;	// IMP=0x0010000000001af4
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x0010000000001a9a
- (void)dealloc;	// IMP=0x0010000000001a1e
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x001000000000193b
- (void)_setupRemoteProxy;	// IMP=0x0010000000001836

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
