//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BridgePreferences/BPSWelcomeOptinViewController.h>

@class COSAnimatedInsigniaWatchView, NRDevice, NSString, UIActivityIndicatorView, UINotificationFeedbackGenerator;

@interface COSWatchPairedViewController : BPSWelcomeOptinViewController
{
    _Bool _completedIntroAnimation;	// 8 = 0x8
    _Bool _wristChoicesDetected;	// 9 = 0x9
    _Bool _leftWristSelected;	// 10 = 0xa
    _Bool _rightCrownSelected;	// 11 = 0xb
    COSAnimatedInsigniaWatchView *_insigniaWatchView;	// 16 = 0x10
    UIActivityIndicatorView *_spinner;	// 24 = 0x18
    unsigned long long _backupStatus;	// 32 = 0x20
    NRDevice *_observedDevice;	// 40 = 0x28
    UINotificationFeedbackGenerator *_successBehavior;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000000eef65
@property(retain, nonatomic) UINotificationFeedbackGenerator *successBehavior; // @synthesize successBehavior=_successBehavior;
@property(nonatomic) _Bool rightCrownSelected; // @synthesize rightCrownSelected=_rightCrownSelected;
@property(nonatomic) _Bool leftWristSelected; // @synthesize leftWristSelected=_leftWristSelected;
@property(nonatomic) _Bool wristChoicesDetected; // @synthesize wristChoicesDetected=_wristChoicesDetected;
@property(retain, nonatomic) NRDevice *observedDevice; // @synthesize observedDevice=_observedDevice;
@property(nonatomic) unsigned long long backupStatus; // @synthesize backupStatus=_backupStatus;
@property(nonatomic) _Bool completedIntroAnimation; // @synthesize completedIntroAnimation=_completedIntroAnimation;
@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(retain, nonatomic) COSAnimatedInsigniaWatchView *insigniaWatchView; // @synthesize insigniaWatchView=_insigniaWatchView;
- (void)backupsChanged:(unsigned long long)arg1;	// IMP=0x00100000000eedba
- (void)refreshBackupStatus;	// IMP=0x00100000000eec47
- (void)device:(id)arg1 propertyDidChange:(id)arg2 fromValue:(id)arg3;	// IMP=0x00100000000eea9d
- (void)_madeWristOnLeftSelection:(_Bool)arg1 crownOnRightSelection:(_Bool)arg2;	// IMP=0x00100000000ee557
- (void)processWristDetectionResults;	// IMP=0x00100000000ee144
- (void)_continueSetupAsNew;	// IMP=0x00100000000edfef
- (void)_continueRestoring;	// IMP=0x00100000000edea7
- (void)alternateButtonPressed:(id)arg1;	// IMP=0x00100000000ede95
- (void)suggestedButtonPressed:(id)arg1;	// IMP=0x00100000000ede69
- (id)alternateButtonTitle;	// IMP=0x00100000000edd55
- (id)suggestedButtonTitle;	// IMP=0x00100000000edbb7
- (id)titleString;	// IMP=0x00100000000edaeb
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000000ed50d
- (void)viewDidLoad;	// IMP=0x00100000000ed00c
- (void)dealloc;	// IMP=0x00100000000ecf4c
- (id)init;	// IMP=0x00100000000ecefb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
