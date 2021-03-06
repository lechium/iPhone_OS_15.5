//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <AuthenticationServices/ASCredentialRequestContainerViewControllerDelegate-Protocol.h>
#import <AuthenticationServices/ASCredentialRequestPaneViewControllerDelegate-Protocol.h>
#import <AuthenticationServices/ASPasswordAuthenticationPaneViewControllerDelegate-Protocol.h>

@class ASCAuthorizationPresentationContext, ASNavigationController, NSString, SFWirelessSettingsController;
@protocol ASAuthorizationViewControllerDelegate;

@interface ASAuthorizationViewController : UIViewController <ASCredentialRequestPaneViewControllerDelegate, ASCredentialRequestContainerViewControllerDelegate, ASPasswordAuthenticationPaneViewControllerDelegate>
{
    ASCAuthorizationPresentationContext *_presentationContext;	// 8 = 0x8
    ASNavigationController *_navigationController;	// 16 = 0x10
    SFWirelessSettingsController *_wirelessSettingsController;	// 24 = 0x18
    id <ASAuthorizationViewControllerDelegate> _delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000001e047
@property(nonatomic) __weak id <ASAuthorizationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)requestContainerViewControllerDidDismiss:(id)arg1;	// IMP=0x000000000001df93
- (void)passwordAuthenticationViewController:(id)arg1 completedWithManuallyEnteredPasswordCredential:(id)arg2;	// IMP=0x000000000001df2d
- (void)passwordAuthenticationViewController:(id)arg1 validateUserEnteredPIN:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000001dea9
- (void)requestPaneViewControllerStartCABLEAuthentication:(id)arg1;	// IMP=0x000000000001de7b
- (void)requestPaneViewControllerPresentExpandedLoginChoiceInterface:(id)arg1;	// IMP=0x000000000001dcf0
- (void)requestPaneViewControllerPresentManualPasswordEntryInterface:(id)arg1;	// IMP=0x000000000001dcde
- (void)requestPaneViewControllerRequiresPINEntryInterface:(id)arg1;	// IMP=0x000000000001dccc
- (void)requestPaneViewController:(id)arg1 didRequestCredentialForLoginChoice:(id)arg2 authenticatedContext:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000001db35
- (void)requestPaneViewController:(id)arg1 dismissWithCredential:(id)arg2 error:(id)arg3;	// IMP=0x000000000001dab1
- (void)_enableBluetoothAndShowCABLEConnectingViewController;	// IMP=0x000000000001da32
- (void)_showEnableBluetoothViewControllerForCABLEAuthenticator;	// IMP=0x000000000001d8c0
- (void)_startCABLEAuthenticator;	// IMP=0x000000000001d605
- (void)_startCABLEAuthenticatorOnInitialPresentationIfNeeded;	// IMP=0x000000000001d589
- (void)_showCABLEAuthenticatorError:(id)arg1;	// IMP=0x000000000001d2a6
- (void)_pushCABLEAuthenticatorCredentialPickerViewControllerWithPresentationContext:(id)arg1;	// IMP=0x000000000001d129
- (void)_enableBluetoothAndShowCABLEClientViewControllerWithLoginChoice:(id)arg1;	// IMP=0x000000000001d092
- (void)_showEnableBluetoothViewControllerForCABLEClientWithLoginChoice:(id)arg1;	// IMP=0x000000000001cedb
- (void)_startCABLEClientForSingleLoginChoiceIfNeeded;	// IMP=0x000000000001cda9
- (void)_startCABLEClientWithLoginChoice:(id)arg1;	// IMP=0x000000000001cc5e
- (void)_pushCABLEAuthenticatingViewController;	// IMP=0x000000000001c977
- (void)_pushCABLEConnectingViewController;	// IMP=0x000000000001c809
- (void)_pushCABLEClientViewControllerForCABLELoginChoice:(id)arg1;	// IMP=0x000000000001c7b0
- (id)_cableClientViewControllerWithLoginChoice:(id)arg1;	// IMP=0x000000000001c6f0
- (void)_updateOrPushPlatformKeyViewControllerWithSubtitle:(id)arg1;	// IMP=0x000000000001c4db
- (void)_updateOrPushSecurityKeyViewControllerWithSubtitle:(id)arg1;	// IMP=0x000000000001c441
- (void)_pushSecurityKeyViewControllerWithOverrideSubtitle:(id)arg1;	// IMP=0x000000000001c38b
- (void)_pushSecurityKeyViewController;	// IMP=0x000000000001c377
- (id)_setUpContainerViewControllerWithCredentialRequestViewController:(id)arg1;	// IMP=0x000000000001c2aa
- (void)_cancelButtonSelected:(id)arg1;	// IMP=0x000000000001c223
- (id)_cancelBarButtonItem;	// IMP=0x000000000001c1a5
- (void)_presentManualPasswordEntryInterface;	// IMP=0x000000000001c0bb
- (void)_presentPINEntryInterface;	// IMP=0x000000000001bf82
- (id)_activateSecurityKeySubtitleText;	// IMP=0x000000000001bf34
- (id)_securityKeyRequestViewControllerWithOverrideSubtitle:(id)arg1;	// IMP=0x000000000001bd0b
- (id)_securityKeyRequestViewController;	// IMP=0x000000000001bcf7
- (id)_initialViewControllerForPresentationContext:(id)arg1 expandingOtherLoginChoices:(_Bool)arg2;	// IMP=0x000000000001b807
- (id)_initialViewControllerForPresentationContext:(id)arg1;	// IMP=0x000000000001b7f3
- (id)_setUpInitialViewController;	// IMP=0x000000000001b662
- (long long)modalPresentationStyle;	// IMP=0x000000000001b657
- (id)_signInBarButtonItem;	// IMP=0x000000000001b54e
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000001b42a
- (void)cableClientWillAuthenticate;	// IMP=0x000000000001b418
- (void)cableClientWillConnect;	// IMP=0x000000000001b406
- (id)navigationController;	// IMP=0x000000000001b3f1
- (void)pushOrUpdateBasicPaneViewControllerWithError:(long long)arg1;	// IMP=0x000000000001b17a
- (void)presentPINEntryInterface;	// IMP=0x000000000001b105
- (void)updateInterfaceWithLoginChoices:(id)arg1;	// IMP=0x000000000001ae8b
- (id)initWithPresentationContext:(id)arg1;	// IMP=0x000000000001ade5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

