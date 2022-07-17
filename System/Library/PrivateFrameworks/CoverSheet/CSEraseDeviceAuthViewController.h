//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <CoverSheet/AKInlineSignInViewControllerDelegate-Protocol.h>

@class AKAppleIDAuthenticationInAppContext, AKInlineSignInViewController, NSString, UIButton, UILabel, UIView;
@protocol CSEraseDeviceAuthViewControllerDelegate;

@interface CSEraseDeviceAuthViewController : UIViewController <AKInlineSignInViewControllerDelegate>
{
    UIButton *_cancelButton;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
    UILabel *_subtitleLabel;	// 24 = 0x18
    UIView *_containerView;	// 32 = 0x20
    UIView *_labelsContainerView;	// 40 = 0x28
    AKInlineSignInViewController *_authenticationViewController;	// 48 = 0x30
    UIView *_springView;	// 56 = 0x38
    id <CSEraseDeviceAuthViewControllerDelegate> _delegate;	// 64 = 0x40
    AKAppleIDAuthenticationInAppContext *_authContext;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000000140d6
@property(nonatomic) AKAppleIDAuthenticationInAppContext *authContext; // @synthesize authContext=_authContext;
@property(nonatomic) __weak id <CSEraseDeviceAuthViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateForFailedAppleIDAuthentication;	// IMP=0x0000000000013c1e
- (id)_authenticationView;	// IMP=0x0000000000013c01
- (void)_handleCancelButtonAction;	// IMP=0x0000000000013bc4
- (void)_activateConstraints;	// IMP=0x0000000000012f8e
- (void)signInViewController:(id)arg1 didAuthenticateWithResults:(id)arg2 error:(id)arg3;	// IMP=0x0000000000012e51
- (void)setSubtitleLabelText:(id)arg1;	// IMP=0x0000000000012e34
- (void)viewDidLoad;	// IMP=0x0000000000012a87
- (_Bool)_canShowWhileLocked;	// IMP=0x0000000000012a7f
- (void)loadView;	// IMP=0x00000000000123e2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
