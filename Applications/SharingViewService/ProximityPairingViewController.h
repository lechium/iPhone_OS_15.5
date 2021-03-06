//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ControlCenterTrainingView, MISSING_TYPE, NSArray, NSDictionary, NSLayoutConstraint, NSString, NSURL, SFBluetoothPairingSession, SFDevice, SFDeviceDiscovery, UIActivityIndicatorView, UIButton, UIImageView, UILabel, UIView, _TtC18SharingViewService18SVSMediaPlayerView, _TtC18SharingViewService20SVSAdjustedImageView;

__attribute__((visibility("hidden")))
@interface ProximityPairingViewController
{
    _TtC18SharingViewService20SVSAdjustedImageView *_leftImageView;	// 32 = 0x20
    UIImageView *_leftIndicatorImageView;	// 40 = 0x28
    UIImageView *_leftExclamationPointImageView;	// 48 = 0x30
    _TtC18SharingViewService20SVSAdjustedImageView *_rightImageView;	// 56 = 0x38
    UIImageView *_rightIndicatorImageView;	// 64 = 0x40
    UIImageView *_rightExclamationPointImageView;	// 72 = 0x48
    UIActivityIndicatorView *_activityIndicatorView;	// 80 = 0x50
    UIButton *_connectButton;	// 88 = 0x58
    UIButton *_connectGuestButton;	// 96 = 0x60
    UILabel *_connectingLabel;	// 104 = 0x68
    _Bool _connecting;	// 112 = 0x70
    SFDeviceDiscovery *_deviceDiscovery;	// 120 = 0x78
    MISSING_TYPE *_deviceIdentifier;	// 128 = 0x80
    UIButton *_dismissButton;	// 136 = 0x88
    _Bool _done;	// 144 = 0x90
    UIImageView *_errorImageView;	// 152 = 0x98
    _TtC18SharingViewService20SVSAdjustedImageView *_imageView;	// 160 = 0xa0
    UILabel *_infoLabel;	// 168 = 0xa8
    SFDevice *_pairingDevice;	// 176 = 0xb0
    SFBluetoothPairingSession *_pairingSession;	// 184 = 0xb8
    _Bool _repairMode;	// 192 = 0xc0
    long long _repairRSSI;	// 200 = 0xc8
    UIButton *_reportBugButton;	// 208 = 0xd0
    int _testMode;	// 216 = 0xd8
    UILabel *_titleLabel;	// 224 = 0xe0
    ControlCenterTrainingView *_controlerCenterTrainingView;	// 232 = 0xe8
    _Bool _hasSkippedFeatureShowcase;	// 240 = 0xf0
    NSString *_adjustmentsFileName;	// 248 = 0xf8
    NSURL *_adjustmentsURL;	// 256 = 0x100
    NSString *_movieIntroName;	// 264 = 0x108
    NSURL *_avItemIntroURL;	// 272 = 0x110
    NSString *_moviePairLoopName;	// 280 = 0x118
    NSURL *_avItemPairLoopURL;	// 288 = 0x120
    NSString *_movieFeaturesLoopName;	// 296 = 0x128
    NSURL *_avItemFeaturesLoopURL;	// 304 = 0x130
    NSString *_movieFeaturesTimeName;	// 312 = 0x138
    NSURL *_movieItemFeaturesTimeURL;	// 320 = 0x140
    NSString *_movieStatusLoopName;	// 328 = 0x148
    NSURL *_avItemStatusLoopURL;	// 336 = 0x150
    _Bool _avItemsAdded;	// 344 = 0x158
    _Bool _avPlaying;	// 345 = 0x159
    _TtC18SharingViewService18SVSMediaPlayerView *_avView;	// 352 = 0x160
    NSLayoutConstraint *_avViewPairYConstraint;	// 360 = 0x168
    NSLayoutConstraint *_avViewPairHeightConstraint;	// 368 = 0x170
    NSLayoutConstraint *_avViewStatusYCombinedConstraint;	// 376 = 0x178
    NSLayoutConstraint *_avViewStatusYSplitConstraint;	// 384 = 0x180
    NSLayoutConstraint *_avViewStatusHeightConstraint;	// 392 = 0x188
    NSArray *_avViewConstraints;	// 400 = 0x190
    UILabel *_featuresTitleLabel;	// 408 = 0x198
    UILabel *_featuresDescriptionLabel;	// 416 = 0x1a0
    UIButton *_featuresSkipButton;	// 424 = 0x1a8
    UIView *_featuresGradient;	// 432 = 0x1b0
    UIView *_budsBatteryView;	// 440 = 0x1b8
    UILabel *_budsBatteryLabel;	// 448 = 0x1c0
    UIImageView *_budsBatteryLevelImageView;	// 456 = 0x1c8
    UIImageView *_budsBatteryShellImageView;	// 464 = 0x1d0
    UIImageView *_budsBatteryChargeImageView;	// 472 = 0x1d8
    UIView *_caseBatteryView;	// 480 = 0x1e0
    UILabel *_caseBatteryLabel;	// 488 = 0x1e8
    UIImageView *_caseBatteryLevelImageView;	// 496 = 0x1f0
    UIImageView *_caseBatteryShellImageView;	// 504 = 0x1f8
    UIImageView *_caseBatteryChargeImageView;	// 512 = 0x200
    UIView *_mainBatteryView;	// 520 = 0x208
    UILabel *_mainBatteryLabel;	// 528 = 0x210
    UIImageView *_mainBatteryLevelImageView;	// 536 = 0x218
    UIImageView *_mainBatteryShellImageView;	// 544 = 0x220
    UIImageView *_mainBatteryChargeImageView;	// 552 = 0x228
    NSDictionary *_userInfo;	// 560 = 0x230
}

- (void).cxx_destruct;	// IMP=0x00200000001c28be
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
- (void)_updateBatteryUIForDevice:(id)arg1;	// IMP=0x00100000001c248b
- (void)_transitionToStatusFadeInSplit;	// IMP=0x00100000001c21ca
- (void)_transitionToStatusFadeInCombined;	// IMP=0x00100000001c1d93
- (void)_transitionToStatusStart;	// IMP=0x00100000001c1c1c
- (void)_transitionToTraining;	// IMP=0x00100000001c1b91
- (void)transitionToPostPair;	// IMP=0x00100000001c19ee
- (void)_transitionToControlCenterTraining;	// IMP=0x00100000001c1061
- (void)handleFeatureShowcaseCompleted;	// IMP=0x00100000001c0f8b
- (void)_transitionToFeatureShowcase;	// IMP=0x00100000001c0879
- (void)_testHandler:(id)arg1;	// IMP=0x00100000001c074f
- (void)_showFailed;	// IMP=0x00100000001c06d1
- (void)_showStart:(_Bool)arg1;	// IMP=0x00100000001be7b1
- (void)_showCarPlayAlert;	// IMP=0x00100000001be671
- (void)_pairingComplete:(id)arg1;	// IMP=0x00100000001be256
- (void)_movieStart;	// IMP=0x00100000001bda2c
- (void)_movieCleanup;	// IMP=0x00100000001bda04
- (void)_deviceLost:(id)arg1;	// IMP=0x00100000001bd86e
- (void)_deviceFound:(id)arg1;	// IMP=0x00100000001bd398
- (void)handleSkipTutorialButtonTapped:(id)arg1;	// IMP=0x00100000001bd1d2
- (void)handleTapOutsideView:(id)arg1;	// IMP=0x00100000001bd0e2
- (void)handleReportBugButton:(id)arg1;	// IMP=0x00100000001bcc70
- (void)handleDismissButton:(id)arg1;	// IMP=0x00100000001bcb80
- (void)handleDisconnectButton:(id)arg1;	// IMP=0x00100000001bca4f
- (void)_handleConnectButton:(id)arg1;	// IMP=0x00100000001bc703
- (void)handleGuestConnectButton:(id)arg1;	// IMP=0x00100000001bc676
- (void)handleConnectButton:(id)arg1;	// IMP=0x00100000001bc60e
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x00100000001bc57a
- (_Bool)_canShowWhileLocked;	// IMP=0x00100000001bc572
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00100000001bc3fc
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000001bb525

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

