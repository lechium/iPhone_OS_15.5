//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class PKPaymentSetupRequest, PKRemotePaymentSetupViewController, UIActivityIndicatorView, UIButton, UILabel, _UIAsyncInvocation;

@interface PKPaymentSetupViewController : UIViewController
{
    PKRemotePaymentSetupViewController *_remoteVC;	// 8 = 0x8
    PKPaymentSetupRequest *_paymentSetupRequest;	// 16 = 0x10
    _UIAsyncInvocation *_remoteVCRequest;	// 24 = 0x18
    UIActivityIndicatorView *_spinner;	// 32 = 0x20
    UILabel *_loadingLabel;	// 40 = 0x28
    UIButton *_cancelButton;	// 48 = 0x30
}

+ (_Bool)_shouldForwardViewWillTransitionToSize;	// IMP=0x000000000000ad7f
+ (void)paymentSetupFeaturesForConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000a474
- (void).cxx_destruct;	// IMP=0x000000000000b588
- (void)paymentSetupDidFinish;	// IMP=0x000000000000b4d6
- (void)_cancelTapped;	// IMP=0x000000000000b4c4
- (void)_hideLoadingContent;	// IMP=0x000000000000b45d
- (void)viewWillLayoutSubviews;	// IMP=0x000000000000b141
- (void)loadView;	// IMP=0x000000000000adc3
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;	// IMP=0x000000000000ad87
- (id)childViewControllerForStatusBarHidden;	// IMP=0x000000000000ad6a
- (id)childViewControllerForStatusBarStyle;	// IMP=0x000000000000ad55
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x000000000000ad2c
- (_Bool)shouldAutorotate;	// IMP=0x000000000000ad06
- (long long)modalPresentationStyle;	// IMP=0x000000000000acaf
- (long long)modalTransitionStyle;	// IMP=0x000000000000aca7
- (void)_setRemoteVC:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000a750
- (void)dealloc;	// IMP=0x000000000000a6e4
- (id)initWithPaymentSetupRequest:(id)arg1;	// IMP=0x000000000000a51a
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000000a50c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000a4fe

@end

