//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

@class NSString, TFBetaLaunchHandleConfiguration, UITraitCollection, UIViewController;
@protocol TFHostedBetaAppLaunchScreenView;

@interface ServiceTFBetaLaunchHostViewController : SBUIRemoteAlertServiceViewController
{
    TFBetaLaunchHandleConfiguration *_activeConfiguration;	// 8 = 0x8
    UIViewController<TFHostedBetaAppLaunchScreenView> *_launchViewController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000044fe
@property(nonatomic) __weak UIViewController<TFHostedBetaAppLaunchScreenView> *launchViewController; // @synthesize launchViewController=_launchViewController;
@property(retain, nonatomic) TFBetaLaunchHandleConfiguration *activeConfiguration; // @synthesize activeConfiguration=_activeConfiguration;
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg1;	// IMP=0x0010000000004450
- (void)_dismissViewService;	// IMP=0x0010000000004340
- (void)launchScreenViewControllerWasDismissed:(id)arg1;	// IMP=0x001000000000432e
- (void)_setupViewController:(id)arg1 forPresentationInTraitEnvironment:(id)arg2;	// IMP=0x001000000000429d
- (void)_presentLaunchViewControllerForIdentifier:(id)arg1;	// IMP=0x001000000000411d
- (void)handleButtonActions:(id)arg1;	// IMP=0x0010000000003fca
- (void)handleHomeButtonPressed;	// IMP=0x0010000000003fb8
- (void)prepareForActivationWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000003fa6
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000003d6e
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0010000000003cd6
- (_Bool)prefersStatusBarHidden;	// IMP=0x0010000000003cce
- (_Bool)_shouldRemoveViewFromHierarchyOnDisappear;	// IMP=0x0010000000003cc6
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x0010000000003c6a
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000003b99

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) UITraitCollection *traitCollection;

@end

