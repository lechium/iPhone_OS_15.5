//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIActivityIndicatorView, UIButton, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface HomeKitDeviceDetectedStartViewController
{
    UIButton *_dismissButton;	// 32 = 0x20
    UIButton *_setupButton;	// 40 = 0x28
    _Bool _settingUp;	// 48 = 0x30
    UIView *_progressView;	// 56 = 0x38
    UIActivityIndicatorView *_progressIndicator;	// 64 = 0x40
    UILabel *_progressLabel;	// 72 = 0x48
    int _testMode;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x002000000018b5e9
- (void)_restoreHomeApp;	// IMP=0x001000000018b488
- (void)_launchHomeApp;	// IMP=0x001000000018b211
- (void)applicationsDidInstall:(id)arg1;	// IMP=0x001000000018afd9
- (void)handleTapOutsideView:(id)arg1;	// IMP=0x001000000018af51
- (void)handleSetupButton:(id)arg1;	// IMP=0x001000000018ae67
- (void)handleDismissButton:(id)arg1;	// IMP=0x001000000018addf
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x001000000018ad5c
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x001000000018acd8
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x001000000018ab46

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
