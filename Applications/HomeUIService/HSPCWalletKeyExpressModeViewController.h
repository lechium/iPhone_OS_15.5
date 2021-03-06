//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMHomeWalletKeyDeviceState, HSProxCardCoordinator, HSSetupStateMachineConfiguration, HUIconView, NSString, PRXAction, UIViewController;

@interface HSPCWalletKeyExpressModeViewController
{
    HSSetupStateMachineConfiguration *_config;	// 8 = 0x8
    HSProxCardCoordinator *_coordinator;	// 16 = 0x10
    PRXAction *_continueAction;	// 24 = 0x18
    HMHomeWalletKeyDeviceState *_walletKeyDeviceState;	// 32 = 0x20
    HUIconView *_iconImageView;	// 40 = 0x28
}

+ (id)_expresssModePassConflictError:(id)arg1;	// IMP=0x00200000000207ec
- (void).cxx_destruct;	// IMP=0x0020000000020a38
@property(retain, nonatomic) HUIconView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) HMHomeWalletKeyDeviceState *walletKeyDeviceState; // @synthesize walletKeyDeviceState=_walletKeyDeviceState;
@property(retain, nonatomic) PRXAction *continueAction; // @synthesize continueAction=_continueAction;
@property(retain) HSProxCardCoordinator *coordinator; // @synthesize coordinator=_coordinator;
@property(retain) HSSetupStateMachineConfiguration *config; // @synthesize config=_config;
- (void)_presentAlertControllerWithTitle:(id)arg1 message:(id)arg2 style:(long long)arg3 actions:(id)arg4;	// IMP=0x0010000000020645
- (CDUnknownBlockType)dismissButtonBlock;	// IMP=0x00100000000205b8
- (void)_sendAnalytics:(unsigned long long)arg1;	// IMP=0x00100000000203b6
- (void)_updateHasOnboardedForWalletKey:(id)arg1;	// IMP=0x001000000002012c
- (id)_addWalletKeyWithiPhoneExpressModeOptions:(long long)arg1 pairedWatchesExpressModeOptions:(long long)arg2;	// IMP=0x001000000001fb96
- (id)_addWalletKeyWithoutExpressMode;	// IMP=0x001000000001fb7a
- (id)_addWalletKeyWithExpressMode;	// IMP=0x001000000001faac
- (id)_shouldShowSingleContinueButton;	// IMP=0x001000000001f7f0
- (id)_requireAuthenticationButtonTapped;	// IMP=0x001000000001f616
- (void)_enableExpressModeAfterAuthWithPromise:(id)arg1;	// IMP=0x001000000001f5fa
- (id)_enableExpressModeButtonTapped;	// IMP=0x001000000001ede1
- (id)commitConfiguration;	// IMP=0x001000000001ec8c
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x001000000001ec5d
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x001000000001ec2e
- (id)initWithCoordinator:(id)arg1 config:(id)arg2;	// IMP=0x001000000001e32c

// Remaining properties
@property(retain, nonatomic) UIViewController *contentVC;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

