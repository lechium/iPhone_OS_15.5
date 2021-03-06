//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Sharing/AVAudioPlayerDelegate-Protocol.h>

@class ACAccount, ACAccountStore, AFEnablementConfiguration, AFEnablementFlowConfigurationProvider, AFVoiceInfo, AMSPromise, AVAudioPlayer, AVAudioSession, HMAccessory, HMHome, NSArray, NSDictionary, NSMutableArray, NSSet, NSString, RPCompanionLinkClient, SFDevice, SFDeviceOperationCDPSetup, SFDeviceOperationHomeKitSetup, SFDeviceOperationWiFiSetup, SFSession, SSAccount, TROperationQueue, TRSession, UIViewController;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SFDeviceSetupB238Session : NSObject <AVAudioPlayerDelegate>
{
    _Bool _activateCalled;	// 8 = 0x8
    RPCompanionLinkClient *_companionLinkClient;	// 16 = 0x10
    _Bool _invalidateCalled;	// 24 = 0x18
    unsigned long long _startTicks;	// 32 = 0x20
    int _proxSetupActiveToken;	// 40 = 0x28
    _Bool _audioProgress;	// 44 = 0x2c
    AVAudioSession *_audioSession;	// 48 = 0x30
    AVAudioPlayer *_audioPlayerStart;	// 56 = 0x38
    AVAudioPlayer *_audioPlayerStep;	// 64 = 0x40
    CDUnknownBlockType _audioPlayerCompletion;	// 72 = 0x48
    _Bool _preflightEnabled;	// 80 = 0x50
    int _preflightWiFiState;	// 84 = 0x54
    int _preflightiCloudState;	// 88 = 0x58
    _Bool _preventAppleWiFi;	// 92 = 0x5c
    ACAccountStore *_iCloudAccountStore;	// 96 = 0x60
    ACAccount *_iCloudAccount;	// 104 = 0x68
    NSString *_iCloudUserID;	// 112 = 0x70
    int _iCloudAccountState;	// 120 = 0x78
    _Bool _homeiCloudEnabled;	// 124 = 0x7c
    int _preflightiTunesState;	// 128 = 0x80
    int _preflightHomeKitUpgrade;	// 132 = 0x84
    SSAccount *_iTunesAccount;	// 136 = 0x88
    _Bool _iTunesSignInSkip;	// 144 = 0x90
    NSString *_iTunesUserID;	// 152 = 0x98
    _Bool _appleMusicEnabled;	// 160 = 0xa0
    int _appleMusicState;	// 164 = 0xa4
    _Bool _appleMusicForce;	// 168 = 0xa8
    _Bool _forceSoftwareUpdate;	// 169 = 0xa9
    NSObject<OS_dispatch_source> *_appleMusicTimeoutTimer;	// 176 = 0xb0
    int _preflightAppleMusicState;	// 184 = 0xb8
    int _appleStoreMode;	// 188 = 0xbc
    AMSPromise *_amsDeviceRegistrationPromise;	// 192 = 0xc0
    int _preflightMiscState;	// 200 = 0xc8
    _Bool _locationEnabled;	// 204 = 0xcc
    _Bool _locationDecided;	// 205 = 0xcd
    _Bool _siriEnabled;	// 206 = 0xce
    _Bool _prefStereoPairEnabled;	// 207 = 0xcf
    _Bool _prefStereoWait;	// 208 = 0xd0
    NSArray *_potentialStereoCounterparts;	// 216 = 0xd8
    HMAccessory *_stereoCounterpartAccessory;	// 224 = 0xe0
    int _stereoPairUserInputState;	// 232 = 0xe8
    int _stereoPairRole;	// 236 = 0xec
    _Bool _tvAudioEnabled;	// 240 = 0xf0
    _Bool _tvAudioInputAvailable;	// 241 = 0xf1
    int _tvAudioUserInputState;	// 244 = 0xf4
    _Bool _prefTVAudioEnabled;	// 248 = 0xf8
    NSArray *_potentialTVs;	// 256 = 0x100
    HMAccessory *_tvAudioInput;	// 264 = 0x108
    SFSession *_sfSession;	// 272 = 0x110
    _Bool _sfSessionSecured;	// 280 = 0x118
    int _sfSessionState;	// 284 = 0x11c
    int _preAuthState;	// 288 = 0x120
    _Bool _preAuthStartedProgress;	// 292 = 0x124
    unsigned int _siriFlags;	// 296 = 0x128
    NSArray *_siriLanguageCodes;	// 304 = 0x130
    long long _siriLanguageIndex;	// 312 = 0x138
    _Bool _siriLanguagePicked;	// 320 = 0x140
    int _siriLanguageState;	// 324 = 0x144
    AFVoiceInfo *_selectedSiriVoice;	// 328 = 0x148
    int _siriEnablementConfigurationState;	// 336 = 0x150
    AFEnablementConfiguration *_siriEnablementConfiguration;	// 344 = 0x158
    AFEnablementFlowConfigurationProvider *_siriEnablementConfigurationProvider;	// 352 = 0x160
    NSString *_siriPreferredLanguage;	// 360 = 0x168
    _Bool _siriPasscodeEnabled;	// 368 = 0x170
    _Bool _siriPasscodeInitDone;	// 369 = 0x171
    _Bool _siriPasscodeSecured;	// 370 = 0x172
    int _siriPasscodeState;	// 372 = 0x174
    NSString *_forcedPasscode;	// 376 = 0x178
    unsigned int _pairSetupFlags;	// 384 = 0x180
    int _pairSetupState;	// 388 = 0x184
    double _pairSetupSecs;	// 392 = 0x188
    int _recognizeVoiceEnabled;	// 400 = 0x190
    int _recognizeVoiceState;	// 404 = 0x194
    int _recognizeVoiceStepState;	// 408 = 0x198
    int _personalRequestsState;	// 412 = 0x19c
    int _personalRequestsChoice;	// 416 = 0x1a0
    _Bool _siriForEveryoneAnswered;	// 420 = 0x1a4
    int _siriForEveryoneState;	// 424 = 0x1a8
    int _siriDataSharing;	// 428 = 0x1ac
    int _termsState;	// 432 = 0x1b0
    _Bool _termsAgreed;	// 436 = 0x1b4
    int _shareSettingsState;	// 440 = 0x1b8
    _Bool _shareSettingsAgreed;	// 444 = 0x1bc
    int _authKitTrustState;	// 448 = 0x1c0
    int _basicConfigState;	// 452 = 0x1c4
    unsigned long long _basicConfigStartTicks;	// 456 = 0x1c8
    double _basicConfigSecs;	// 464 = 0x1d0
    NSString *_deviceGUID;	// 472 = 0x1d8
    NSString *_deviceSerialNumber;	// 480 = 0x1e0
    NSString *_deviceModel;	// 488 = 0x1e8
    SFDeviceOperationWiFiSetup *_wifiSetupOperation;	// 496 = 0x1f0
    int _wifiSetupState;	// 504 = 0x1f8
    double _wifiSetupSecs;	// 512 = 0x200
    double _wifiSetupStepSecs;	// 520 = 0x208
    double _wifiBonjourTestSecs;	// 528 = 0x210
    int _trSessionState;	// 536 = 0x218
    TRSession *_trSession;	// 544 = 0x220
    NSMutableArray *_trOperations;	// 552 = 0x228
    TROperationQueue *_trOperationQueue;	// 560 = 0x230
    int _trSetupConfigurationState;	// 568 = 0x238
    unsigned long long _trSetupConfigurationStartTicks;	// 576 = 0x240
    double _trSetupConfigurationSecs;	// 584 = 0x248
    _Bool _trNeedsNetwork;	// 592 = 0x250
    NSSet *_trUnauthServices;	// 600 = 0x258
    _Bool _trUseAIDA;	// 608 = 0x260
    int _trActivationState;	// 612 = 0x264
    int _bgActivationState;	// 616 = 0x268
    double _activationSecs;	// 624 = 0x270
    int _trAuthenticationState;	// 632 = 0x278
    _Bool _trAuthenticationStateReset;	// 636 = 0x27c
    unsigned long long _trAuthenticationStartTicks;	// 640 = 0x280
    double _trAuthenticationSecs;	// 648 = 0x288
    double _trAuthenticationTotalSecs;	// 656 = 0x290
    _Bool _cdpEnabled;	// 664 = 0x298
    SFDeviceOperationCDPSetup *_cdpSetupOperation;	// 672 = 0x2a0
    double _cdpSetupSecs;	// 680 = 0x2a8
    int _cdpState;	// 688 = 0x2b0
    SFDeviceOperationHomeKitSetup *_homeKitSetupOperation;	// 696 = 0x2b8
    int _homeKitUserInputState;	// 704 = 0x2c0
    int _homeKitSetupState;	// 708 = 0x2c4
    double _homeKitSetupSecs;	// 712 = 0x2c8
    NSString *_homeKitSelectedRoomName;	// 720 = 0x2d0
    _Bool _hasExistingHomePod;	// 728 = 0x2d8
    int _multiUserEnableState;	// 732 = 0x2dc
    int _multiUserEnableStepState;	// 736 = 0x2e0
    int _finishState;	// 740 = 0x2e4
    unsigned long long _finishStartTicks;	// 744 = 0x2e8
    double _finishSecs;	// 752 = 0x2f0
    double _iTunesWaitSecs;	// 760 = 0x2f8
    double _mediaSystemWaitSecs;	// 768 = 0x300
    double _totalSecs;	// 776 = 0x308
    _Bool _prefBonjourTest;	// 784 = 0x310
    _Bool _prefForceSiriGreeting;	// 785 = 0x311
    _Bool _prefLEDPasscodeEnabled;	// 786 = 0x312
    _Bool _prefMultiUser;	// 787 = 0x313
    _Bool _hasMultipleUsers;	// 788 = 0x314
    _Bool _liveOn;	// 789 = 0x315
    _Bool _pauseAfterPreAuth;	// 790 = 0x316
    unsigned char _stereoCounterpartColor;	// 791 = 0x317
    _Bool _touchRemoteEnabled;	// 792 = 0x318
    int _bonjourTestState;	// 796 = 0x31c
    NSDictionary *_additionalMetrics;	// 800 = 0x320
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 808 = 0x328
    SFDevice *_peerDevice;	// 816 = 0x330
    unsigned long long _peerFeatureFlags;	// 824 = 0x338
    NSDictionary *_preAuthResponse;	// 832 = 0x340
    UIViewController *_presentingViewController;	// 840 = 0x348
    unsigned long long _testFlags;	// 848 = 0x350
    CDUnknownBlockType _preAuthHandler;	// 856 = 0x358
    CDUnknownBlockType _promptHomePodSoftwareUpdateHandler;	// 864 = 0x360
    CDUnknownBlockType _progressHandler;	// 872 = 0x368
    CDUnknownBlockType _promptForAppleMusicHandler;	// 880 = 0x370
    CDUnknownBlockType _promptForHomeHandler;	// 888 = 0x378
    CDUnknownBlockType _promptForHomeiCloudHandler;	// 896 = 0x380
    CDUnknownBlockType _promptForiTunesSignInHandler;	// 904 = 0x388
    CDUnknownBlockType _promptForLocationEnableHandler;	// 912 = 0x390
    CDUnknownBlockType _promptForPersonalRequestsHandler;	// 920 = 0x398
    CDUnknownBlockType _promptForPINHandler;	// 928 = 0x3a0
    CDUnknownBlockType _promptForRoomHandler;	// 936 = 0x3a8
    CDUnknownBlockType _promptForSiriEnableHandler;	// 944 = 0x3b0
    CDUnknownBlockType _promptForSiriVoiceSelectionHandler;	// 952 = 0x3b8
    CDUnknownBlockType _promptForTermsHandler;	// 960 = 0x3c0
    CDUnknownBlockType _promptForTVAudioHandler;	// 968 = 0x3c8
    CDUnknownBlockType _promptToInstallHomeAppHandler;	// 976 = 0x3d0
    CDUnknownBlockType _promptToShareSettingsHandler;	// 984 = 0x3d8
    CDUnknownBlockType _promptForSiriLanguageHandler;	// 992 = 0x3e0
    CDUnknownBlockType _promptForStereoRoleHandler;	// 1000 = 0x3e8
    CDUnknownBlockType _promptForStereoMultipleHandler;	// 1008 = 0x3f0
    CDUnknownBlockType _deviceColorFoundHandler;	// 1016 = 0x3f8
}

- (void).cxx_destruct;	// IMP=0x00000000000dd640
@property(copy, nonatomic) CDUnknownBlockType deviceColorFoundHandler; // @synthesize deviceColorFoundHandler=_deviceColorFoundHandler;
@property(copy, nonatomic) CDUnknownBlockType promptForStereoMultipleHandler; // @synthesize promptForStereoMultipleHandler=_promptForStereoMultipleHandler;
@property(copy, nonatomic) CDUnknownBlockType promptForStereoRoleHandler; // @synthesize promptForStereoRoleHandler=_promptForStereoRoleHandler;
@property(copy, nonatomic) CDUnknownBlockType promptForSiriLanguageHandler; // @synthesize promptForSiriLanguageHandler=_promptForSiriLanguageHandler;
@property(copy, nonatomic) CDUnknownBlockType promptToShareSettingsHandler; // @synthesize promptToShareSettingsHandler=_promptToShareSettingsHandler;
@property(copy, nonatomic) CDUnknownBlockType promptToInstallHomeAppHandler; // @synthesize promptToInstallHomeAppHandler=_promptToInstallHomeAppHandler;
@property(copy, nonatomic) CDUnknownBlockType promptForTVAudioHandler; // @synthesize promptForTVAudioHandler=_promptForTVAudioHandler;
@property(copy, nonatomic) CDUnknownBlockType promptForTermsHandler; // @synthesize promptForTermsHandler=_promptForTermsHandler;
@property(copy, nonatomic) CDUnknownBlockType promptForSiriVoiceSelectionHandler; // @synthesize promptForSiriVoiceSelectionHandler=_promptForSiriVoiceSelectionHandler;
@property(copy, nonatomic) CDUnknownBlockType promptForSiriEnableHandler; // @synthesize promptForSiriEnableHandler=_promptForSiriEnableHandler;
@property(copy, nonatomic) CDUnknownBlockType promptForRoomHandler; // @synthesize promptForRoomHandler=_promptForRoomHandler;
@property(copy, nonatomic) CDUnknownBlockType promptForPINHandler; // @synthesize promptForPINHandler=_promptForPINHandler;
@property(copy, nonatomic) CDUnknownBlockType promptForPersonalRequestsHandler; // @synthesize promptForPersonalRequestsHandler=_promptForPersonalRequestsHandler;
@property(copy, nonatomic) CDUnknownBlockType promptForLocationEnableHandler; // @synthesize promptForLocationEnableHandler=_promptForLocationEnableHandler;
@property(copy, nonatomic) CDUnknownBlockType promptForiTunesSignInHandler; // @synthesize promptForiTunesSignInHandler=_promptForiTunesSignInHandler;
@property(copy, nonatomic) CDUnknownBlockType promptForHomeiCloudHandler; // @synthesize promptForHomeiCloudHandler=_promptForHomeiCloudHandler;
@property(copy, nonatomic) CDUnknownBlockType promptForHomeHandler; // @synthesize promptForHomeHandler=_promptForHomeHandler;
@property(copy, nonatomic) CDUnknownBlockType promptForAppleMusicHandler; // @synthesize promptForAppleMusicHandler=_promptForAppleMusicHandler;
@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(copy, nonatomic) CDUnknownBlockType promptHomePodSoftwareUpdateHandler; // @synthesize promptHomePodSoftwareUpdateHandler=_promptHomePodSoftwareUpdateHandler;
@property(copy, nonatomic) CDUnknownBlockType preAuthHandler; // @synthesize preAuthHandler=_preAuthHandler;
@property(nonatomic) _Bool touchRemoteEnabled; // @synthesize touchRemoteEnabled=_touchRemoteEnabled;
@property(nonatomic) unsigned long long testFlags; // @synthesize testFlags=_testFlags;
@property(readonly, nonatomic) unsigned char stereoCounterpartColor; // @synthesize stereoCounterpartColor=_stereoCounterpartColor;
@property(retain, nonatomic) UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(retain, nonatomic) NSDictionary *preAuthResponse; // @synthesize preAuthResponse=_preAuthResponse;
@property(nonatomic) unsigned long long peerFeatureFlags; // @synthesize peerFeatureFlags=_peerFeatureFlags;
@property(retain, nonatomic) SFDevice *peerDevice; // @synthesize peerDevice=_peerDevice;
@property(nonatomic) _Bool pauseAfterPreAuth; // @synthesize pauseAfterPreAuth=_pauseAfterPreAuth;
@property(nonatomic) _Bool liveOn; // @synthesize liveOn=_liveOn;
@property(readonly, nonatomic) _Bool hasMultipleUsers; // @synthesize hasMultipleUsers=_hasMultipleUsers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(readonly, nonatomic) int bonjourTestState; // @synthesize bonjourTestState=_bonjourTestState;
@property(copy, nonatomic) NSDictionary *additionalMetrics; // @synthesize additionalMetrics=_additionalMetrics;
- (void)forcePassCode:(id)arg1;	// IMP=0x00000000000dd263
- (void)audioSessionInterrupted:(id)arg1;	// IMP=0x00000000000dd191
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;	// IMP=0x00000000000dd0bf
- (void)audioPlayerDecodeErrorDidOccur:(id)arg1 error:(id)arg2;	// IMP=0x00000000000dcfa9
- (unsigned long long)_peerDeviceSupportedStereoPairVersions;	// IMP=0x00000000000dcf82
- (void)_setupAudio;	// IMP=0x00000000000dc9ab
- (void)_reportError:(id)arg1 label:(id)arg2;	// IMP=0x00000000000dc373
- (_Bool)_recognizeVoiceAlreadyEnabled;	// IMP=0x00000000000dbfc5
- (void)_promptForPINWithFlags:(unsigned int)arg1 throttleSeconds:(int)arg2;	// IMP=0x00000000000dbf2b
- (void)_playLocalSoundID:(int)arg1 remoteSoundID:(int)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000dba64
- (void)_playLocalSoundID:(int)arg1 remoteSoundID:(int)arg2;	// IMP=0x00000000000dba4f
- (void)_logMetrics:(id)arg1;	// IMP=0x00000000000dadd5
- (void)_homeKitUpdateiCloudSwitchState:(_Bool)arg1;	// IMP=0x00000000000dab68
- (id)_homeKitFindSettingsWithKeyPath:(id)arg1 group:(id)arg2;	// IMP=0x00000000000da854
- (void)_handlePeerEvent:(id)arg1 flags:(unsigned int)arg2;	// IMP=0x00000000000d9f65
- (void)_runFinishResponse:(id)arg1 error:(id)arg2;	// IMP=0x00000000000d9bf3
- (void)_runFinishRequest;	// IMP=0x00000000000d97ab
- (int)_runFinishStart;	// IMP=0x00000000000d971d
- (void)_runMultiUserEnableEnableSettingStart:(id)arg1 privateSettings:(_Bool)arg2;	// IMP=0x00000000000d91a7
- (void)_runMultiUserEnableHome;	// IMP=0x00000000000d8f0c
- (int)_runMultiUserEnable;	// IMP=0x00000000000d8d46
- (int)_runHomeKitSetup;	// IMP=0x00000000000d85de
- (int)_runCDPSetup:(_Bool)arg1;	// IMP=0x00000000000d8273
- (int)_runTRAuthentication:(id)arg1;	// IMP=0x00000000000d7cb0
- (int)_runTROtherAuthentication;	// IMP=0x00000000000d7c7d
- (int)_runTRiCloudAuthentication;	// IMP=0x00000000000d7bf8
- (int)_runTRActivation;	// IMP=0x00000000000d7804
- (void)_runBackgroundActivation;	// IMP=0x00000000000d7438
- (int)_runTRSetupConfiguration;	// IMP=0x00000000000d6ffb
- (int)_runWiFiSetup;	// IMP=0x00000000000d6bb4
- (int)_runTRSessionStart;	// IMP=0x00000000000d6862
- (int)_runAppleMusic;	// IMP=0x00000000000d64cb
- (void)_runBasicConfigReceiveResponse:(id)arg1 error:(id)arg2;	// IMP=0x00000000000d6269
- (void)_runBasicConfigSendRequest;	// IMP=0x00000000000d5176
- (int)_runBasicConfig;	// IMP=0x00000000000d5066
- (int)_runPairSetup;	// IMP=0x00000000000d4eac
- (void)_runSiriPasscodeStartPairSetup;	// IMP=0x00000000000d4d6a
- (void)_runSiriPasscodeInitResponse:(id)arg1 error:(id)arg2;	// IMP=0x00000000000d4c93
- (void)_runSiriPasscodeInitRequest;	// IMP=0x00000000000d4b30
- (int)_runSiriPasscode;	// IMP=0x00000000000d4934
- (int)_runAuthKitTrustFinish;	// IMP=0x00000000000d48ba
- (void)_runAuthKitTrustStartIfNeeded;	// IMP=0x00000000000d45d8
- (int)_runShareSettings;	// IMP=0x00000000000d4384
- (int)_runTerms;	// IMP=0x00000000000d416a
- (int)_runSiriForEveryone;	// IMP=0x00000000000d3fef
- (int)_runPersonalRequests;	// IMP=0x00000000000d3daa
- (void)_runRecognizeVoiceCheckVoiceProfileResponse:(_Bool)arg1 error:(id)arg2;	// IMP=0x00000000000d3ca9
- (void)_getSiriEnablementConfiguration;	// IMP=0x00000000000d3ad9
- (void)_runRecognizeVoiceCheckVoiceProfileStart;	// IMP=0x00000000000d38af
- (void)_runRecognizeVoiceCheckLanguageResponse:(id)arg1 error:(id)arg2;	// IMP=0x00000000000d370a
- (void)_runRecognizeVoiceCheckLanguageStart;	// IMP=0x00000000000d34ef
- (int)_runSiriEnablementConfigurationFetch;	// IMP=0x00000000000d344c
- (int)_runRecognizeVoice;	// IMP=0x00000000000d2fd3
- (int)_runSiriLanguage;	// IMP=0x00000000000d2ad5
- (int)_enableSiriForPersonalRequestIfNecessary;	// IMP=0x00000000000d29a4
- (int)_runCheckAccount;	// IMP=0x00000000000d2841
- (void)_runPreAuthResponse:(id)arg1 error:(id)arg2;	// IMP=0x00000000000d2399
- (void)_runPreAuthRequest;	// IMP=0x00000000000d1e44
- (int)_runPreAuth;	// IMP=0x00000000000d1ccd
- (int)_runTVAudioUserInput;	// IMP=0x00000000000d1658
- (void)_runStereoPairUserInputPickColors:(_Bool)arg1;	// IMP=0x00000000000d1278
- (int)_runStereoPairUserInput;	// IMP=0x00000000000d0ce2
- (int)_runHomeKitUserInput;	// IMP=0x00000000000d08ad
- (int)_runPreflightMisc;	// IMP=0x00000000000d0711
- (int)_runPreflightiTunes;	// IMP=0x00000000000cfeb1
- (int)_runHomeKitVersionCheck;	// IMP=0x00000000000cfdf2
- (int)_runPreflightiCloud;	// IMP=0x00000000000cf403
- (int)_runPreflightWiFi;	// IMP=0x00000000000cf0c3
- (int)_runSFSessionStart;	// IMP=0x00000000000cebf4
- (void)_run;	// IMP=0x00000000000ce52c
- (void)tvAudioEnabled:(_Bool)arg1;	// IMP=0x00000000000ce445
- (void)termsAgreed;	// IMP=0x00000000000ce384
- (void)stereoMultiplePicked:(id)arg1;	// IMP=0x00000000000ce278
- (void)stereoRolePicked:(int)arg1;	// IMP=0x00000000000ce194
- (void)requiredUpdateAcknowledged;	// IMP=0x00000000000ce0d0
- (void)_speakPasscodeWithInstructions:(id)arg1 languageCode:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000cdda5
- (void)speakPasscodeWithInstructions:(id)arg1 languageCode:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000cdc10
- (void)speakPasscodeWithInstructions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000cdae3
- (void)speakPasscodeWithLanguageCode:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000cd9b2
- (void)speakPasscodeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000cd884
- (void)skipiTunesSignIn;	// IMP=0x00000000000cd7c3
- (void)skipAudioPasscode;	// IMP=0x00000000000cd7a5
- (void)didDismiss;	// IMP=0x00000000000cd75d
- (void)siriVoicePicked:(id)arg1;	// IMP=0x00000000000cd63f
- (void)siriLanguagePicked:(long long)arg1;	// IMP=0x00000000000cd567
- (void)siriForEveryoneAnswered;	// IMP=0x00000000000cd4a6
@property(readonly, nonatomic) _Bool siriDataSharingEnabled;
- (void)siriEnable;	// IMP=0x00000000000cd3d5
- (void)shareSettingsAgreed;	// IMP=0x00000000000cd314
@property(readonly, nonatomic) NSString *selectedSiriLanguage;
@property(readonly, nonatomic) HMHome *selectedHome;
- (void)recognizeVoiceAnswered:(_Bool)arg1;	// IMP=0x00000000000cd1a0
- (void)_preflightAppleMusicCompleted:(int)arg1;	// IMP=0x00000000000cd0ae
- (void)_preflightAppleMusic;	// IMP=0x00000000000ccd06
- (void)preflight;	// IMP=0x00000000000ccbca
- (void)playAudioPasscodeAgain;	// IMP=0x00000000000ccbac
- (void)personalRequestsEnabled:(_Bool)arg1;	// IMP=0x00000000000ccac7
- (void)pairSetupTryPIN:(id)arg1;	// IMP=0x00000000000cca18
- (void)locationEnable:(_Bool)arg1;	// IMP=0x00000000000cc947
- (void)ledPasscodeMatched;	// IMP=0x00000000000cc941
- (void)homeKitSelectRoom:(id)arg1;	// IMP=0x00000000000cc892
- (void)homeKitReselectHome;	// IMP=0x00000000000cc827
- (void)homeKitSelectHome:(id)arg1;	// IMP=0x00000000000cc778
- (void)homeiCloudEnable;	// IMP=0x00000000000cc6ba
- (void)homeAppInstallChoice:(_Bool)arg1;	// IMP=0x00000000000cc645
- (void)disconnect;	// IMP=0x00000000000cc5b4
- (void)appleMusicNext;	// IMP=0x00000000000cc542
- (void)_invalidate;	// IMP=0x00000000000cc348
- (void)invalidate;	// IMP=0x00000000000cc2e4
- (void)_activate;	// IMP=0x00000000000cbb52
- (void)activate;	// IMP=0x00000000000cbada
- (void)_cleanupSession;	// IMP=0x00000000000cb84c
- (void)_cleanup;	// IMP=0x00000000000cb685
- (void)dealloc;	// IMP=0x00000000000cb62a
- (id)init;	// IMP=0x00000000000cb5b4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

