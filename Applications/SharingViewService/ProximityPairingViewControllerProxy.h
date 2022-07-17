//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AudioSoftwareUpdateViewController, NSDictionary, NSString, ProximityPairingViewController, SFAnnounceMessagesEvent, SVSAnnounceNotificationsIntroViewController, UIStoryboard;

__attribute__((visibility("hidden")))
@interface ProximityPairingViewControllerProxy
{
    _Bool _dismissed;	// 86 = 0x56
    _Bool _homePressed;	// 87 = 0x57
    ProximityPairingViewController *_pairingViewController;	// 88 = 0x58
    _Bool _reportedResult;	// 96 = 0x60
    AudioSoftwareUpdateViewController *_vcSoftwareUpdate;	// 104 = 0x68
    double _viewAppearedTime;	// 112 = 0x70
    UIStoryboard *_shareAudioProxStoryboard;	// 120 = 0x78
    SVSAnnounceNotificationsIntroViewController *_announceNotificationsIntroViewController;	// 128 = 0x80
    _Bool _guestMode;	// 136 = 0x88
    _Bool _inEarDetection;	// 137 = 0x89
    _Bool _siriNotificationOnly;	// 138 = 0x8a
    _Bool _softwareVolume;	// 139 = 0x8b
    _Bool _userAccepted;	// 140 = 0x8c
    _Bool _shouldEnableSpatialAudio;	// 141 = 0x8d
    _Bool _shouldEnableAnnounce;	// 142 = 0x8e
    unsigned int _deviceVersion;	// 144 = 0x90
    int _pairErrorCode;	// 148 = 0x94
    int _testMode;	// 152 = 0x98
    double _pairStartTime;	// 160 = 0xa0
    double _userResponseTime;	// 168 = 0xa8
    SFAnnounceMessagesEvent *_announceMessagesEvent;	// 176 = 0xb0
}

+ (_Bool)_isSecureForRemoteViewService;	// IMP=0x00200000001bafd7
- (void).cxx_destruct;	// IMP=0x00200000001b7cac
@property(nonatomic) _Bool shouldEnableAnnounce; // @synthesize shouldEnableAnnounce=_shouldEnableAnnounce;
@property(nonatomic) _Bool shouldEnableSpatialAudio; // @synthesize shouldEnableSpatialAudio=_shouldEnableSpatialAudio;
@property(retain, nonatomic) SFAnnounceMessagesEvent *announceMessagesEvent; // @synthesize announceMessagesEvent=_announceMessagesEvent;
@property(nonatomic) double userResponseTime; // @synthesize userResponseTime=_userResponseTime;
@property(nonatomic) _Bool userAccepted; // @synthesize userAccepted=_userAccepted;
@property(nonatomic) int testMode; // @synthesize testMode=_testMode;
@property(nonatomic) _Bool softwareVolume; // @synthesize softwareVolume=_softwareVolume;
@property(nonatomic) _Bool siriNotificationOnly; // @synthesize siriNotificationOnly=_siriNotificationOnly;
@property(nonatomic) double pairStartTime; // @synthesize pairStartTime=_pairStartTime;
@property(nonatomic) int pairErrorCode; // @synthesize pairErrorCode=_pairErrorCode;
@property(nonatomic) _Bool inEarDetection; // @synthesize inEarDetection=_inEarDetection;
@property(nonatomic) _Bool guestMode; // @synthesize guestMode=_guestMode;
@property(nonatomic) unsigned int deviceVersion; // @synthesize deviceVersion=_deviceVersion;
- (void)proxCardFlowDidDismiss;	// IMP=0x00100000001b7aeb
- (void)showSpatialAudioTutorial;	// IMP=0x00100000001b79cd
- (void)announceNotificationsCompleted;	// IMP=0x00100000001b795a
- (void)showSiriAnnounceMessages;	// IMP=0x00100000001b75d3
- (_Bool)siriNotificationsSetupNeeded;	// IMP=0x00100000001b743c
- (void)showLearnMore;	// IMP=0x00100000001b735f
- (void)continueSetup;	// IMP=0x00100000001b728f
- (void)skipSetup;	// IMP=0x00100000001b71bf
- (void)dismissSetup;	// IMP=0x00100000001b7153
- (void)_trainingStart;	// IMP=0x00100000001b714d
- (_Bool)deviceSupportSpatialAudio;	// IMP=0x00100000001b7145
- (_Bool)shouldShowSpatialAudioSetUp;	// IMP=0x00100000001b713d
- (_Bool)shouldShowHeySiriSetUp;	// IMP=0x00100000001b7029
- (_Bool)accessorySupportsSiri;	// IMP=0x00100000001b6fa0
- (void)_testHandler:(id)arg1;	// IMP=0x00100000001b6d18
- (void)transitionToPostPair;	// IMP=0x00100000001b6c90
- (void)showStatus:(id)arg1;	// IMP=0x00100000001b686e
- (void)showShareDone;	// IMP=0x00100000001b67a7
- (void)showRepairInstructions;	// IMP=0x00100000001b6504
- (void)showRepairConnect:(id)arg1;	// IMP=0x00100000001b60bd
- (void)showConnectUI:(_Bool)arg1;	// IMP=0x00100000001b5b9e
- (void)reportResult;	// IMP=0x00000000001b584b
- (void)_handleHomeButtonPressed;	// IMP=0x00100000001b57a8
- (void)handleButtonActions:(id)arg1;	// IMP=0x00100000001b5655
- (void)dismissWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001b5539
- (void)dismiss:(int)arg1;	// IMP=0x00100000001b54e0
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00100000001b51c2
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00100000001b4b68
- (void)_willAppearInRemoteViewController;	// IMP=0x00100000001b4af9
- (_Bool)_canShowWhileLocked;	// IMP=0x00100000001b4af1
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001b499a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *localizedName;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSDictionary *userInfo;

@end
