//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HSProxCardCoordinator, HSSetupStateMachineConfiguration, NSString, UIImageView, UIView, UIViewController;

@interface HSPCUseSiriViewController
{
    HSSetupStateMachineConfiguration *_config;	// 8 = 0x8
    HSProxCardCoordinator *_coordinator;	// 16 = 0x10
    UIImageView *_siriIconImageView;	// 24 = 0x18
    UIView *_siriIconContainerView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000001228c
@property(retain, nonatomic) UIView *siriIconContainerView; // @synthesize siriIconContainerView=_siriIconContainerView;
@property(retain, nonatomic) UIImageView *siriIconImageView; // @synthesize siriIconImageView=_siriIconImageView;
@property(retain) HSProxCardCoordinator *coordinator; // @synthesize coordinator=_coordinator;
@property(retain) HSSetupStateMachineConfiguration *config; // @synthesize config=_config;
- (_Bool)_shouldEnableShareSiriAnalytics;	// IMP=0x0010000000012009
- (void)_applyOnBoardingSelectionsWithFuture:(id)arg1;	// IMP=0x00100000000119a2
- (void)_setupOnBoardSelectionsWithLanguageValue:(id)arg1;	// IMP=0x00100000000117a0
- (id)_applyOnboardingSelections;	// IMP=0x001000000001135b
- (_Bool)_deviceIsOnAMultiUserLanguage;	// IMP=0x00100000000112b7
- (_Bool)_isVoiceRecognitionEnabled;	// IMP=0x00100000000110e4
- (void)_enableSiriWithFuture:(id)arg1;	// IMP=0x0010000000010a2e
- (id)_enableSiriWithUserConfirmation;	// IMP=0x0010000000010567
- (id)_disableSiri;	// IMP=0x001000000001017c
- (void)_launchSiriPrivacySheet;	// IMP=0x00100000000100d0
- (void)_handleFooterLabelTouchForOpenURL:(id)arg1;	// IMP=0x001000000000ff6a
- (CDUnknownBlockType)dismissButtonBlock;	// IMP=0x001000000000fefd
- (id)commitConfiguration;	// IMP=0x001000000000fdfc
- (void)viewDidLoad;	// IMP=0x001000000000f5e7
- (id)initWithCoordinator:(id)arg1 config:(id)arg2;	// IMP=0x001000000000f12c

// Remaining properties
@property(retain, nonatomic) UIViewController *contentVC;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
