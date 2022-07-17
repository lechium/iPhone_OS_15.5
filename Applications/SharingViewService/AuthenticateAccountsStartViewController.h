//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIActivityIndicatorView, UIButton, UIImageView, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface AuthenticateAccountsStartViewController
{
    UIActivityIndicatorView *_activityIndicatorView;	// 32 = 0x20
    UIButton *_dismissButton;	// 40 = 0x28
    UIImageView *_imageView;	// 48 = 0x30
    UIView *_progressView;	// 56 = 0x38
    UIButton *_startButton;	// 64 = 0x40
    _Bool _started;	// 72 = 0x48
    UILabel *_titleLabel;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00200000001a1f14
- (void)handleTapOutsideView:(id)arg1;	// IMP=0x00100000001a1e8c
- (void)handleDismissButton:(id)arg1;	// IMP=0x00100000001a1e04
- (void)handleStartButton:(id)arg1;	// IMP=0x00100000001a1cd6
- (void)handleDeviceSetupNotification:(id)arg1;	// IMP=0x00100000001a1a0d
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x00100000001a1979
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00100000001a18ab
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000001a15c8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
