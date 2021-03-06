//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AXCharacterSoundMap, AXMDisplayManager, AXSSPunctuationGroup, AXUISoftwareKeyboardManager, AXVoiceOverActivity, BRLTTable, MISSING_TYPE, NSArray, NSLock, NSMutableArray, NSMutableDictionary, NSNumber, NSString, TUCallCenter, VOSCommandManager, VOTElement, VOTEventFactory, VOTKeyboardManager, VOTOutputRequest, VOTVisionEngine;
@protocol OS_dispatch_queue, OS_os_transaction, VOTDirectTouchManagementProtocol, VOTElementManagementProtocol, VOTRotorManagementProtocol, VOTWorkspaceUnitTestDelegate;

@interface VOTWorkspace : NSObject
{
    VOTEventFactory *_eventFactory;	// 8 = 0x8
    id <VOTElementManagementProtocol> _elementManager;	// 16 = 0x10
    id <VOTRotorManagementProtocol> _rotorManager;	// 24 = 0x18
    id <VOTDirectTouchManagementProtocol> _directTouchManager;	// 32 = 0x20
    VOTKeyboardManager *_keyboardManager;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_callCenterQueue;	// 48 = 0x30
    TUCallCenter *_callCenter;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_avAccessQueue;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_keyPostingQueue;	// 72 = 0x48
    struct __CFRunLoop *_runLoop;	// 80 = 0x50
    struct {
        unsigned int count;
        double delay;
        double lastTime;
        _Bool connected;
        double lastRecordedTimeOfDeath;
    } _retryState;	// 88 = 0x58
    _Bool _soundMuted;	// 128 = 0x80
    _Bool _speechMuted;	// 129 = 0x81
    _Bool _voiceOverMuted;	// 130 = 0x82
    _Bool _screenCurtainEnabled;	// 131 = 0x83
    _Bool _isSystemBatteryLow;	// 132 = 0x84
    _Bool _hintsEnabled;	// 133 = 0x85
    _Bool _typingPitchChangeEnabled;	// 134 = 0x86
    _Bool _isPostingKeyboardEvents;	// 135 = 0x87
    _Bool _speakingRateInRotor;	// 136 = 0x88
    _Bool _outputDisabled;	// 137 = 0x89
    _Bool _screenOn;	// 138 = 0x8a
    _Bool _speakNotifications;	// 139 = 0x8b
    _Bool _playKeyboardClicksOnHWInput;	// 140 = 0x8c
    _Bool _largeCursorEnabled;	// 141 = 0x8d
    int _typingMode;	// 144 = 0x90
    long long _tvInteractionMode;	// 152 = 0x98
    VOTOutputRequest *_completionRequest;	// 160 = 0xa0
    long long _orientation;	// 168 = 0xa8
    long long _realOrientation;	// 176 = 0xb0
    double _lastLockButtonPress;	// 184 = 0xb8
    double _lastHomeButtonPress;	// 192 = 0xc0
    double _lastKeyboardKeyPress;	// 200 = 0xc8
    double _lastDeviceInteractionEvent;	// 208 = 0xd0
    double _lastUnmuteEvent;	// 216 = 0xd8
    double _screenOnTime;	// 224 = 0xe0
    double _screenOffTime;	// 232 = 0xe8
    double _lastPowerCheck;	// 240 = 0xf0
    double _lastDeviceLock;	// 248 = 0xf8
    _Bool _deviceIsCharging;	// 256 = 0x100
    NSArray *_enabledLanguageRotorItems;	// 264 = 0x108
    NSString *_selectedLanguage;	// 272 = 0x110
    NSString *_audioAccessoryInstalledAssetLanguage;	// 280 = 0x118
    NSString *_systemSpokenLanguage;	// 288 = 0x120
    NSArray *_enabledBrailleLanguageRotorItems;	// 296 = 0x128
    BRLTTable *_selectedBrailleTable;	// 304 = 0x130
    long long _cachedRotorType;	// 312 = 0x138
    NSMutableDictionary *_appCache;	// 320 = 0x140
    NSMutableDictionary *_appCacheWithExactPID;	// 328 = 0x148
    struct os_unfair_lock_s _appCacheLock;	// 336 = 0x150
    NSString *_postKeyThreadKey;	// 344 = 0x158
    struct {
        _Bool isRunLoopEnabled;
        _Bool speakAutocorrectionsEnabled;
        _Bool ringerSwitchSilent;
        _Bool audioIsRoutedToSpeaker;
        _Bool speechLogging;
        _Bool isInternalInstall;
    } _vtwFlags;	// 352 = 0x160
    NSLock *_systemLangaugeLock;	// 360 = 0x168
    _Bool _originalKBAttachedState;	// 368 = 0x170
    _Bool _originalKBAttachedStateIsValid;	// 369 = 0x171
    long long _triggeredKBAttachState;	// 376 = 0x178
    long long _forcedOrientation;	// 384 = 0x180
    long long _applicationOrientation;	// 392 = 0x188
    NSMutableArray *_punctuationGroups;	// 400 = 0x190
    AXSSPunctuationGroup *_defaultPunctuationGroup;	// 408 = 0x198
    _Bool _voiceOverIsIdle;	// 416 = 0x1a0
    _Bool _screenCurtainSuspended;	// 417 = 0x1a1
    _Bool _wasEnabledThroughAccessory;	// 418 = 0x1a2
    _Bool _supportsHomeGestures;	// 419 = 0x1a3
    _Bool _accessoryShutdownInProgress;	// 420 = 0x1a4
    _Bool _inUnitTestMode;	// 421 = 0x1a5
    _Bool _inPerformanceTestMode;	// 422 = 0x1a6
    _Bool _isSiriTalking;	// 423 = 0x1a7
    _Bool _isSiriListening;	// 424 = 0x1a8
    _Bool _duckingTemporarilyDisabled;	// 425 = 0x1a9
    _Bool _pauseSpeechAndHaptics;	// 426 = 0x1aa
    _Bool _imageCaptionsEnabled;	// 427 = 0x1ab
    _Bool _textDetectionEnabled;	// 428 = 0x1ac
    _Bool _buttonIconDetectionEnabled;	// 429 = 0x1ad
    _Bool _soundEffectsEnabled;	// 430 = 0x1ae
    _Bool _captionPanelEnabled;	// 431 = 0x1af
    _Bool _automaticAccessibilityEnabled;	// 432 = 0x1b0
    _Bool _reachabilityActive;	// 433 = 0x1b1
    _Bool _audioDestinationRequestExternal;	// 434 = 0x1b2
    _Bool _systemVolumeControlsAvailablity;	// 435 = 0x1b3
    _Bool _brailleAlertsEnabled;	// 436 = 0x1b4
    _Bool _speakUnderPointer;	// 437 = 0x1b5
    _Bool _useDigitalCrownNavigation;	// 438 = 0x1b6
    _Bool _telephonyIsActive;	// 439 = 0x1b7
    _Bool _overridePropertiesForTesting;	// 440 = 0x1b8
    _Bool _userRecentlyUnlockedDeviceForUnitTesting;	// 441 = 0x1b9
    _Bool _userUnlockedDeviceForUnitTesting;	// 442 = 0x1ba
    _Bool _isRingerSwitchSilentForUnitTesting;	// 443 = 0x1bb
    _Bool _disableVoiceOverSettingOnStop;	// 444 = 0x1bc
    _Bool _startedFromCrash;	// 445 = 0x1bd
    int _pointerVoiceOverCursorOption;	// 448 = 0x1c0
    int _currentCallStateForUnitTests;	// 452 = 0x1c4
    long long _navigateImagesOption;	// 456 = 0x1c8
    NSString *additionalLanguageRotorItem;	// 464 = 0x1d0
    CDUnknownBlockType testingEventListener;	// 472 = 0x1d8
    AXVoiceOverActivity *_selectedActivity;	// 480 = 0x1e0
    double _lastSpeechMuteToggleTime;	// 488 = 0x1e8
    double _lastSoundMuteToggleTime;	// 496 = 0x1f0
    unsigned long long _customContentImportance;	// 504 = 0x1f8
    NSArray *_imageCaptioningDisabledApps;	// 512 = 0x200
    long long _containerOutputFeedback;	// 520 = 0x208
    long long _moreContentOutputFeedback;	// 528 = 0x210
    long long _numberFeedback;	// 536 = 0x218
    long long _emojiFeedback;	// 544 = 0x220
    long long _navigationStyle;	// 552 = 0x228
    long long _navigationDirection;	// 560 = 0x230
    NSMutableDictionary *_websiteLanguageMappingOverrides;	// 568 = 0x238
    CDUnknownBlockType _punctuationGroupsUpdatedHandler;	// 576 = 0x240
    double _reachabilityOffset;	// 584 = 0x248
    NSArray *_activities;	// 592 = 0x250
    long long _suppressValueChangeNotificationCount;	// 600 = 0x258
    long long _suppressSelectionChangeNotificationCount;	// 608 = 0x260
    long long;	// 616 = 0x268
    long long _systemVisualizationState;	// 624 = 0x270
    AXUISoftwareKeyboardManager *_softwareKeyboardManager;	// 632 = 0x278
    double _speakUnderPointerDelay;	// 640 = 0x280
    VOTVisionEngine *_visionEngine;	// 648 = 0x288
    AXMDisplayManager *_displayManager;	// 656 = 0x290
    VOSCommandManager *_userCommandManager;	// 664 = 0x298
    NSObject<VOTWorkspaceUnitTestDelegate> *_unitTestDelegate;	// 672 = 0x2a0
    NSNumber *_unitTestSpeechRate;	// 680 = 0x2a8
    NSString *_unitTestSystemSpokenLanguage;	// 688 = 0x2b0
    NSString *_reachabilityIdentifier;	// 696 = 0x2b8
    AXCharacterSoundMap *_characterSoundMap;	// 704 = 0x2c0
    NSObject<OS_dispatch_queue> *_managedConfigurationQueue;	// 712 = 0x2c8
    NSObject<OS_os_transaction> *_votTransaction;	// 720 = 0x2d0
    double _automaticAccessibilityVisualizationsEnabled;	// 728 = 0x2d8
}

+ (id)sharedWorkspace;	// IMP=0x002000000004b010
- (void).cxx_destruct;	// IMP=0x0010000000058f91
@property(nonatomic) double automaticAccessibilityVisualizationsEnabled; // @synthesize automaticAccessibilityVisualizationsEnabled=_automaticAccessibilityVisualizationsEnabled;
@property(retain, nonatomic) NSObject<OS_os_transaction> *votTransaction; // @synthesize votTransaction=_votTransaction;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *managedConfigurationQueue; // @synthesize managedConfigurationQueue=_managedConfigurationQueue;
@property(retain, nonatomic) AXCharacterSoundMap *characterSoundMap; // @synthesize characterSoundMap=_characterSoundMap;
@property(nonatomic) _Bool startedFromCrash; // @synthesize startedFromCrash=_startedFromCrash;
@property(nonatomic) _Bool disableVoiceOverSettingOnStop; // @synthesize disableVoiceOverSettingOnStop=_disableVoiceOverSettingOnStop;
@property(retain, nonatomic) NSString *reachabilityIdentifier; // @synthesize reachabilityIdentifier=_reachabilityIdentifier;
@property(retain, nonatomic) NSString *unitTestSystemSpokenLanguage; // @synthesize unitTestSystemSpokenLanguage=_unitTestSystemSpokenLanguage;
@property(retain, nonatomic) NSNumber *unitTestSpeechRate; // @synthesize unitTestSpeechRate=_unitTestSpeechRate;
@property(nonatomic) int currentCallStateForUnitTests; // @synthesize currentCallStateForUnitTests=_currentCallStateForUnitTests;
@property(nonatomic) _Bool isRingerSwitchSilentForUnitTesting; // @synthesize isRingerSwitchSilentForUnitTesting=_isRingerSwitchSilentForUnitTesting;
@property(nonatomic) _Bool userUnlockedDeviceForUnitTesting; // @synthesize userUnlockedDeviceForUnitTesting=_userUnlockedDeviceForUnitTesting;
@property(nonatomic) _Bool userRecentlyUnlockedDeviceForUnitTesting; // @synthesize userRecentlyUnlockedDeviceForUnitTesting=_userRecentlyUnlockedDeviceForUnitTesting;
@property(nonatomic) _Bool overridePropertiesForTesting; // @synthesize overridePropertiesForTesting=_overridePropertiesForTesting;
@property(nonatomic) __weak NSObject<VOTWorkspaceUnitTestDelegate> *unitTestDelegate; // @synthesize unitTestDelegate=_unitTestDelegate;
@property(nonatomic) _Bool telephonyIsActive; // @synthesize telephonyIsActive=_telephonyIsActive;
@property(readonly, nonatomic) _Bool useDigitalCrownNavigation; // @synthesize useDigitalCrownNavigation=_useDigitalCrownNavigation;
@property(retain, nonatomic) VOSCommandManager *userCommandManager; // @synthesize userCommandManager=_userCommandManager;
@property(retain, nonatomic) AXMDisplayManager *displayManager; // @synthesize displayManager=_displayManager;
@property(retain, nonatomic) VOTVisionEngine *visionEngine; // @synthesize visionEngine=_visionEngine;
@property(nonatomic) double speakUnderPointerDelay; // @synthesize speakUnderPointerDelay=_speakUnderPointerDelay;
@property(nonatomic) _Bool speakUnderPointer; // @synthesize speakUnderPointer=_speakUnderPointer;
@property(nonatomic) int pointerVoiceOverCursorOption; // @synthesize pointerVoiceOverCursorOption=_pointerVoiceOverCursorOption;
@property(nonatomic) _Bool brailleAlertsEnabled; // @synthesize brailleAlertsEnabled=_brailleAlertsEnabled;
@property(readonly, nonatomic) AXUISoftwareKeyboardManager *softwareKeyboardManager; // @synthesize softwareKeyboardManager=_softwareKeyboardManager;
@property(nonatomic) _Bool systemVolumeControlsAvailablity; // @synthesize systemVolumeControlsAvailablity=_systemVolumeControlsAvailablity;
@property(nonatomic) long long systemVisualizationState; // @synthesize systemVisualizationState=_systemVisualizationState;
@property(nonatomic) long long suppressSelectionChangeNotificationSpeechOutputCount; // @synthesize suppressSelectionChangeNotificationSpeechOutputCount=_suppressSelectionChangeNotificationSpeechOutputCount;
@property(nonatomic) long long suppressSelectionChangeNotificationCount; // @synthesize suppressSelectionChangeNotificationCount=_suppressSelectionChangeNotificationCount;
@property(nonatomic) long long suppressValueChangeNotificationCount; // @synthesize suppressValueChangeNotificationCount=_suppressValueChangeNotificationCount;
- (void);	// IMP=0x0010000000058c62
@property(nonatomic) _Bool audioDestinationRequestExternal; // @synthesize audioDestinationRequestExternal=_audioDestinationRequestExternal;
@property(nonatomic) double reachabilityOffset; // @synthesize reachabilityOffset=_reachabilityOffset;
@property(nonatomic) _Bool reachabilityActive; // @synthesize reachabilityActive=_reachabilityActive;
@property(nonatomic) int typingMode; // @synthesize typingMode=_typingMode;
@property(copy, nonatomic) CDUnknownBlockType punctuationGroupsUpdatedHandler; // @synthesize punctuationGroupsUpdatedHandler=_punctuationGroupsUpdatedHandler;
@property(retain, nonatomic) NSMutableDictionary *websiteLanguageMappingOverrides; // @synthesize websiteLanguageMappingOverrides=_websiteLanguageMappingOverrides;
@property(nonatomic) _Bool largeCursorEnabled; // @synthesize largeCursorEnabled=_largeCursorEnabled;
@property(nonatomic) _Bool automaticAccessibilityEnabled; // @synthesize automaticAccessibilityEnabled=_automaticAccessibilityEnabled;
@property(nonatomic) _Bool captionPanelEnabled; // @synthesize captionPanelEnabled=_captionPanelEnabled;
@property(nonatomic) long long navigationDirection; // @synthesize navigationDirection=_navigationDirection;
@property(nonatomic) long long navigationStyle; // @synthesize navigationStyle=_navigationStyle;
@property(nonatomic) long long emojiFeedback; // @synthesize emojiFeedback=_emojiFeedback;
@property(nonatomic) long long numberFeedback; // @synthesize numberFeedback=_numberFeedback;
@property(nonatomic) _Bool soundEffectsEnabled; // @synthesize soundEffectsEnabled=_soundEffectsEnabled;
@property(nonatomic) _Bool buttonIconDetectionEnabled; // @synthesize buttonIconDetectionEnabled=_buttonIconDetectionEnabled;
@property(nonatomic) _Bool textDetectionEnabled; // @synthesize textDetectionEnabled=_textDetectionEnabled;
@property(nonatomic) _Bool imageCaptionsEnabled; // @synthesize imageCaptionsEnabled=_imageCaptionsEnabled;
@property(nonatomic) long long moreContentOutputFeedback; // @synthesize moreContentOutputFeedback=_moreContentOutputFeedback;
@property(nonatomic) long long containerOutputFeedback; // @synthesize containerOutputFeedback=_containerOutputFeedback;
@property(retain, nonatomic) NSArray *imageCaptioningDisabledApps; // @synthesize imageCaptioningDisabledApps=_imageCaptioningDisabledApps;
@property(nonatomic) unsigned long long customContentImportance; // @synthesize customContentImportance=_customContentImportance;
@property(nonatomic) _Bool pauseSpeechAndHaptics; // @synthesize pauseSpeechAndHaptics=_pauseSpeechAndHaptics;
@property(nonatomic) _Bool duckingTemporarilyDisabled; // @synthesize duckingTemporarilyDisabled=_duckingTemporarilyDisabled;
@property(nonatomic) _Bool isSiriListening; // @synthesize isSiriListening=_isSiriListening;
@property(nonatomic) _Bool isSiriTalking; // @synthesize isSiriTalking=_isSiriTalking;
@property(nonatomic) _Bool inPerformanceTestMode; // @synthesize inPerformanceTestMode=_inPerformanceTestMode;
@property(nonatomic) _Bool inUnitTestMode; // @synthesize inUnitTestMode=_inUnitTestMode;
@property(nonatomic) _Bool accessoryShutdownInProgress; // @synthesize accessoryShutdownInProgress=_accessoryShutdownInProgress;
@property(nonatomic) _Bool supportsHomeGestures; // @synthesize supportsHomeGestures=_supportsHomeGestures;
@property(nonatomic) _Bool wasEnabledThroughAccessory; // @synthesize wasEnabledThroughAccessory=_wasEnabledThroughAccessory;
@property(nonatomic) _Bool screenCurtainSuspended; // @synthesize screenCurtainSuspended=_screenCurtainSuspended;
@property(nonatomic) _Bool voiceOverIsIdle; // @synthesize voiceOverIsIdle=_voiceOverIsIdle;
@property(nonatomic) double lastSoundMuteToggleTime; // @synthesize lastSoundMuteToggleTime=_lastSoundMuteToggleTime;
@property(nonatomic) double lastSpeechMuteToggleTime; // @synthesize lastSpeechMuteToggleTime=_lastSpeechMuteToggleTime;
@property(nonatomic) double screenOnTime; // @synthesize screenOnTime=_screenOnTime;
@property(copy, nonatomic) CDUnknownBlockType testingEventListener; // @synthesize testingEventListener;
@property(nonatomic) _Bool playKeyboardClicksOnHWInput; // @synthesize playKeyboardClicksOnHWInput=_playKeyboardClicksOnHWInput;
@property(nonatomic) _Bool speakNotifications; // @synthesize speakNotifications=_speakNotifications;
@property(nonatomic) _Bool outputDisabled; // @synthesize outputDisabled=_outputDisabled;
@property(nonatomic) _Bool speakingRateInRotor; // @synthesize speakingRateInRotor=_speakingRateInRotor;
@property(nonatomic) long long rotorType; // @synthesize rotorType=_cachedRotorType;
@property(nonatomic) _Bool isSystemBatteryLow; // @synthesize isSystemBatteryLow=_isSystemBatteryLow;
@property(nonatomic) _Bool screenCurtainEnabled; // @synthesize screenCurtainEnabled=_screenCurtainEnabled;
@property(nonatomic) double lastKeyboardKeyPress; // @synthesize lastKeyboardKeyPress=_lastKeyboardKeyPress;
@property(nonatomic) double lastLockButtonPress; // @synthesize lastLockButtonPress=_lastLockButtonPress;
@property(nonatomic) double lastHomeButtonPress; // @synthesize lastHomeButtonPress=_lastHomeButtonPress;
@property(retain, nonatomic) NSString *additionalLanguageRotorItem; // @synthesize additionalLanguageRotorItem;
@property(nonatomic) _Bool typingPitchChangeEnabled; // @synthesize typingPitchChangeEnabled=_typingPitchChangeEnabled;
@property(nonatomic) long long navigateImagesOption; // @synthesize navigateImagesOption=_navigateImagesOption;
@property(nonatomic) _Bool voiceOverMuted; // @synthesize voiceOverMuted=_voiceOverMuted;
@property(nonatomic) _Bool soundMuted; // @synthesize soundMuted=_soundMuted;
@property(readonly, nonatomic) NSString *systemSpokenLanguage; // @dynamic systemSpokenLanguage;
- (struct CGPoint)convertDevicePointToZoomedPoint:(struct CGPoint)arg1;	// IMP=0x00100000000586a6
- (void)handleUSBMFiBrailleDisplayConnected;	// IMP=0x0010000000058424
- (void)_setUSBRMPreferenceDisabled;	// IMP=0x00100000000583c5
- (_Bool)_userHasDisabledUSBRM;	// IMP=0x001000000005836c
@property(readonly, nonatomic) _Bool navigationStyleHonorsGroups;
@property(retain, nonatomic) NSObject<VOTRotorManagementProtocol> *rotorManager; // @dynamic rotorManager;
@property(retain, nonatomic) NSObject<VOTElementManagementProtocol> *elementManager; // @dynamic elementManager;
- (id)applicationForPID:(int)arg1;	// IMP=0x0010000000057fba
- (id)applicationForElement:(id)arg1;	// IMP=0x0010000000057ae7
- (id)applicationForCurrentElement;	// IMP=0x0010000000057a7d
- (_Bool)isBaseSystemSpokenEqualToLocalization;	// IMP=0x0010000000057948
@property(retain, nonatomic) BRLTTable *selectedBrailleTable;
- (void)_selectedBrailleTableChanged;	// IMP=0x00100000000576e0
- (void)updateSelectedLanguage;	// IMP=0x00100000000574e1
@property(retain) NSString *selectedLanguage; // @synthesize selectedLanguage=_selectedLanguage;
- (void)unitTestSetBrailleRotorItems:(id)arg1;	// IMP=0x0010000000056f8f
@property(readonly, nonatomic) NSArray *brailleLanguageRotorItems;
@property(readonly, nonatomic) NSArray *languageRotorItems; // @dynamic languageRotorItems;
- (double)lastLockButtonPressTime;	// IMP=0x0010000000056d02
- (_Bool)isRingerSwitchSilent;	// IMP=0x0010000000056c97
- (_Bool)userRecentlyUnlockedDevice;	// IMP=0x0010000000056c24
- (_Bool)userUnlockedDevice;	// IMP=0x0010000000056bce
- (_Bool)isAudioRoutedToSpeaker;	// IMP=0x0010000000056bc2
@property(nonatomic) _Bool tapAndHoldMode; // @dynamic tapAndHoldMode;
- (void)_localeChanged:(id)arg1;	// IMP=0x0010000000056b7e
- (void)_activeAudioRouteChanged:(id)arg1;	// IMP=0x0010000000056aa5
- (int)currentCallState;	// IMP=0x0010000000056999
- (int)_callCenterQueue_currentCallState;	// IMP=0x0010000000056860
@property(readonly, nonatomic) double speechRateFromSettings;
- (_Bool)screenOn;	// IMP=0x00100000000567bc
- (void)setScreenOn:(_Bool)arg1 silently:(_Bool)arg2;	// IMP=0x001000000005675f
- (void)screenLockOccurred;	// IMP=0x0010000000056742
- (void)unmuteEligibleEventOccured;	// IMP=0x00100000000566db
- (void)userInteractedWithDevice;	// IMP=0x0010000000056674
@property(nonatomic) _Bool speechMuted; // @synthesize speechMuted=_speechMuted;
@property(nonatomic) _Bool speechLogging; // @dynamic speechLogging;
- (void)refreshBraille:(_Bool)arg1 rotorSelection:(id)arg2;	// IMP=0x0010000000056539
- (void)_postNextLanguageEvent;	// IMP=0x00100000000564e2
- (void)performNextLanguageButtonPress;	// IMP=0x0010000000056481
- (void)performEjectButtonPress;	// IMP=0x00100000000561bf
- (void)performVolumeDownButtonPress;	// IMP=0x00100000000560b9
- (void)performVolumeUpButtonPress;	// IMP=0x0010000000055fb3
- (void)performHomeButtonPress;	// IMP=0x0010000000055eb3
- (void)resetSystemBatteryLowState;	// IMP=0x0010000000055e2c
- (void)rotateDeviceOrientation:(_Bool)arg1;	// IMP=0x0010000000055d43
- (void)_resetOrientationAndAnnounce:(_Bool)arg1 updateApplication:(_Bool)arg2;	// IMP=0x0010000000055c7a
- (void)resetOrientation;	// IMP=0x0010000000055c5e
- (long long)applicationOrientation;	// IMP=0x0010000000055c51
- (long long)deviceOrientation;	// IMP=0x0010000000055c44
- (void)_setDeviceOrientation:(long long)arg1 shouldAnnounce:(_Bool)arg2 updateApplication:(_Bool)arg3;	// IMP=0x0010000000055740
- (_Bool)announceOrientationChanges;	// IMP=0x0010000000055738
- (_Bool)speakAutocorrectionsEnabled;	// IMP=0x001000000005572c
- (void)_speakCorrectionsChanged;	// IMP=0x00100000000556d5
- (void)_preferencesCaptionPanelChanged;	// IMP=0x0010000000055675
- (void)_languageChangedInBuddy;	// IMP=0x0010000000055663
- (void)_languageChanged;	// IMP=0x00100000000555e9
- (unsigned long long)fingerCount;	// IMP=0x00100000000555d3
- (struct CGPoint)fingerPosition;	// IMP=0x00100000000555bd
- (void)handleReturnToSpringBoard;	// IMP=0x001000000005557a
- (void)cancelTapAndHoldMode;	// IMP=0x0010000000055554
- (void)startTapAndHoldMode:(_Bool)arg1;	// IMP=0x001000000005553e
@property(readonly, nonatomic) _Bool directTouchElementsPresent;
- (void)handleUnsetForcedOrientationAndAnnounce:(_Bool)arg1;	// IMP=0x00100000000554fa
- (void)handleSetForcedOrientation:(long long)arg1 shouldAnnounce:(_Bool)arg2;	// IMP=0x00100000000554a8
- (void)handleOrientationChanged;	// IMP=0x0010000000055485
- (void)handleRingerSwitchSwitched:(id)arg1;	// IMP=0x001000000005542e
- (void)handleProximityEvent:(id)arg1;	// IMP=0x00100000000553ce
- (MISSING_TYPE *)handleLockButtonPress: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000055354
- (void)handlePlayPauseKeyPress:(id)arg1;	// IMP=0x001000000005533e
- (void)_wst_handleMediaKeyPress:(id)arg1;	// IMP=0x001000000005532c
- (void)handleMediaKeyPress:(id)arg1;	// IMP=0x0010000000055326
- (void)_handleSystemMuteKey:(id)arg1;	// IMP=0x0010000000054f5a
- (void)temporarilyChangeQuickNavState:(_Bool)arg1;	// IMP=0x0010000000054eb1
- (void)_temporarilyChangeQuickNav:(id)arg1;	// IMP=0x0010000000054e7c
- (id)keyboardPressInfo;	// IMP=0x0010000000054e66
- (void)handleKeyboardKeyEvent:(id)arg1 eventOrigin:(long long)arg2;	// IMP=0x0010000000054e50
- (void)handleAppleTVRemoteEvent:(id)arg1 eventOrigin:(long long)arg2 isRTL:(_Bool)arg3;	// IMP=0x0010000000054bf2
- (void)_wst_handleMenuButtonPress:(id)arg1;	// IMP=0x0010000000054be0
- (void)handleMenuButtonPress:(id)arg1;	// IMP=0x0010000000054a62
- (void)_wst_handleVolumeButtonPress:(id)arg1;	// IMP=0x0010000000054a50
- (void)handleVolumeButtonPress:(id)arg1;	// IMP=0x0010000000054803
- (void)_selfDestruct;	// IMP=0x0010000000054679
@property(readonly, nonatomic) _Bool isInternalInstall; // @dynamic isInternalInstall;
- (void)stop:(int)arg1;	// IMP=0x001000000005433f
- (void)outputRequestFinished:(id)arg1;	// IMP=0x00100000000542d1
- (void)_stopRunLoop;	// IMP=0x00100000000542b5
- (void)punctuationGroupsChanged:(id)arg1;	// IMP=0x0010000000053abd
- (id)defaultPunctuationGroup;	// IMP=0x001000000005399a
@property(readonly, nonatomic) NSArray *punctuationGroups;
- (id)punctuationGroupForUUID:(id)arg1;	// IMP=0x0010000000053732
- (void)systemSpokenLanguageChanged:(id)arg1;	// IMP=0x001000000005365b
@property(retain, nonatomic) AXVoiceOverActivity *selectedActivity; // @synthesize selectedActivity=_selectedActivity;
- (id)phoneticStringForCharacter:(id)arg1 andVoiceIdentifier:(id)arg2;	// IMP=0x00100000000534d3
- (void)_preferencesScreenCurtainChanged:(id)arg1;	// IMP=0x00100000000534bf
- (void)_preferencesTypingModeChanged:(id)arg1;	// IMP=0x00100000000534a4
- (void)preferencesBrailleLanguageRotorItemsChanged:(id)arg1;	// IMP=0x001000000005321f
- (void)preferencesLanguageRotorItemsChanged:(id)arg1;	// IMP=0x0010000000052f67
- (void)preferencesKeyboardClickStatusChange:(id)arg1;	// IMP=0x0010000000052f53
- (void)_preferencesSpeakNotifications;	// IMP=0x0010000000052ef3
- (void)_preferencesSpeakingRateInRotorChanged;	// IMP=0x0010000000052e93
- (void)_preferencesSpeechRateChange;	// IMP=0x0010000000052e4f
- (void)_preferencesNavigateImagesOptionChange;	// IMP=0x0010000000052def
- (void)_preferencesSpeakHintsChange;	// IMP=0x0010000000052d8a
- (void)_preferencesTypingPitchChange;	// IMP=0x0010000000052d2a
- (void)setUseDigitalCrownNavigationEnabled:(_Bool)arg1;	// IMP=0x0010000000052cd0
- (void)_preferenceUseDigitalCrownNavigationChanged;	// IMP=0x0010000000052c79
- (void)_preferenceUseSiriVoiceChanged;	// IMP=0x0010000000052c73
- (void)_preferencesAlwaysUseNemethForMathChange;	// IMP=0x0010000000052c2f
@property(readonly, nonatomic) _Bool brailleInputActive;
@property(readonly, nonatomic) NSArray *focusedApplications;
@property(readonly, nonatomic) VOTElement *currentElement;
- (void)postKeyboardEventWithCharacters:(id)arg1 originalCharacters:(id)arg2 modifiers:(unsigned int)arg3 keyCode:(unsigned short)arg4;	// IMP=0x0010000000052955
- (void)postKeyboardEvent:(_Bool)arg1 modifiers:(unsigned int)arg2 keyCode:(unsigned short)arg3;	// IMP=0x0010000000052845
- (void)_postKeyboardEvent:(id)arg1 modifiers:(id)arg2 keyCode:(id)arg3;	// IMP=0x00100000000526a8
- (void)_postKeyboardEventWithKeyCode:(unsigned short)arg1 characters:(id)arg2 originalCharacters:(id)arg3 modifierState:(unsigned int)arg4 eventType:(unsigned int)arg5;	// IMP=0x0010000000052570
- (void)_postKeyboardEventWithKeyCode:(unsigned short)arg1 characters:(id)arg2 originalCharacters:(id)arg3 modifierState:(unsigned int)arg4 isKeyDown:(_Bool)arg5;	// IMP=0x001000000005254b
- (void)_postKeyboardEventWithKeyCode:(unsigned short)arg1 modifierState:(unsigned int)arg2 isKeyDown:(_Bool)arg3;	// IMP=0x001000000005251f
- (void)_postKeyboardEventsForModifiers:(unsigned int)arg1 isKeyDown:(_Bool)arg2;	// IMP=0x0010000000052451
- (void)_postKeyboardEventWithCharacters:(id)arg1 originalCharacters:(id)arg2 modifiers:(id)arg3 keyCode:(id)arg4;	// IMP=0x00100000000522c4
- (void)dispatchCommand:(id)arg1;	// IMP=0x00100000000522ae
- (void)_voiceOverTouchEnabledChange:(struct __CFString *)arg1;	// IMP=0x0010000000051cc3
- (void)_voiceOverUsageConfirmed;	// IMP=0x0010000000051c7c
- (void)_checkVoiceOverWasConfirmed;	// IMP=0x0010000000051c09
- (void)_showVOTNoHomeButtonGestureAlert;	// IMP=0x0010000000051bbb
- (void)_showConfirmPanel;	// IMP=0x0010000000051b72
- (_Bool)_voiceOverIsConfirmed;	// IMP=0x0010000000051b49
- (void)loadUIKit;	// IMP=0x0010000000051ada
- (void)run;	// IMP=0x0010000000051829
- (void)_sendGreetingMessage;	// IMP=0x0010000000051514
- (id)_systemBootTime;	// IMP=0x0010000000051485
- (void)_registerWithSystem;	// IMP=0x001000000005137f
- (void)_updateScreenCurtainEnabled:(_Bool)arg1;	// IMP=0x0010000000051193
- (void)_registerWithSpringBoard;	// IMP=0x0010000000050d25
- (_Bool)isVoiceOverTouchPreferenceEnabled;	// IMP=0x0010000000050d15
- (_Bool)isAccessibilityEnabled;	// IMP=0x0010000000050d05
- (void)handleSystemWideServerDied;	// IMP=0x00100000000509b3
- (_Bool)isSystemWideServerAlive;	// IMP=0x00100000000509aa
- (void)_registerForExternalDevices;	// IMP=0x00100000000509a4
@property(retain, nonatomic) NSArray *activities; // @synthesize activities=_activities;
- (void)_preferencesActivitiesChanged;	// IMP=0x001000000005066b
- (void)_updateActivityListeners;	// IMP=0x001000000005056a
- (void)currentElementDidUpdate:(id)arg1;	// IMP=0x001000000005050d
- (void)_preferencesSelectedLanguageChanged;	// IMP=0x0010000000050458
- (void)_preferencesSelectedActivityChanged;	// IMP=0x0010000000050396
- (void)dealloc;	// IMP=0x00100000000502d2
- (void)_registerForPreferenceChanges;	// IMP=0x001000000004f133
- (void)_handleReachabilityChanges;	// IMP=0x001000000004edfe
- (void)willSwitchUser;	// IMP=0x001000000004edf8
- (void)_registerForUserSwitches;	// IMP=0x001000000004edf2
- (void)_migratePreferencesIfNeeded;	// IMP=0x001000000004ed96
- (void)_updatePointerVoiceOverOptions;	// IMP=0x001000000004ed3c
- (void)_updateMainScreenSize:(struct CGSize)arg1 scale:(double)arg2;	// IMP=0x001000000004ed32
- (void)_initialize;	// IMP=0x001000000004d4c6
@property(readonly) _Bool usesDisplayManager;
- (void)mlElementDetectorReceivedFrames:(id)arg1 labels:(id)arg2 uiClasses:(id)arg3;	// IMP=0x001000000004d2c1
- (void)mlElementDetectorUpdatedElements;	// IMP=0x001000000004d217
- (void)mlElementDetectorScrollToVisibleOccurred:(struct CGPoint)arg1;	// IMP=0x001000000004d1be
- (_Bool)softwareKeyboardManagerShouldSetHardwareKeyboardAttached:(id)arg1 hardwareKeyboardIsCurrentlyAttached:(_Bool)arg2 newHardwareKeyboardAttachedValue:(_Bool *)arg3;	// IMP=0x001000000004d1a6
- (void)softwareKeyboardManagerDidChangeHardwareKeyboardAttached:(id)arg1;	// IMP=0x001000000004d199
- (void)softwareKeyboardManager:(id)arg1 didSetHardwareKeyboardAttached:(_Bool)arg2;	// IMP=0x001000000004d18d
@property(readonly, nonatomic) _Bool hasActive2DBrailleDisplay;
- (void)softwareKeyboardManagerWillUpdateKeyboardState:(id)arg1;	// IMP=0x001000000004ceb1
@property long long tvInteractionMode;
- (void)setTvInteractionModeWithoutSaving:(long long)arg1;	// IMP=0x001000000004ce3d
@property(nonatomic) _Bool allowSingleLetterSearching; // @dynamic allowSingleLetterSearching;
- (id)_assetUpdaterClient;	// IMP=0x001000000004cd2c
- (void)_archerNotifyUserOfNavigationChanges;	// IMP=0x001000000004cd26
- (void)_hunterMigrateDigitalCrownNavigation;	// IMP=0x001000000004cd20
- (void)_hunterMigrateDefaultRotors;	// IMP=0x001000000004cd1a
- (void)_yukonMigrateLanguageRotors;	// IMP=0x001000000004ca54
- (void)_tigrisMigrateLanguageRotors;	// IMP=0x001000000004c5ae
- (void)_screenChange:(id)arg1;	// IMP=0x001000000004c50f
- (double)activeBrailleAutoAdvanceDuration;	// IMP=0x001000000004c34c
- (_Bool)activeBrailleGeneralStatusCellPreference;	// IMP=0x001000000004c18f
- (_Bool)activeBrailleTextStatusCellPreference;	// IMP=0x001000000004bfd2
- (long long)activeBrailleOutputPreference;	// IMP=0x001000000004be15
- (long long)activeBrailleInputPreference;	// IMP=0x001000000004bc58
@property(nonatomic) _Bool hintsEnabled;
- (void)_applyVoiceOverMigrations;	// IMP=0x001000000004b97a
@property(readonly, nonatomic) VOTEventFactory *eventFactory;
- (void)_callStatusChanged:(id)arg1;	// IMP=0x001000000004b85e
- (id)init;	// IMP=0x001000000004b021
- (void)notePostedEventForUnitTesting:(id)arg1;	// IMP=0x0010000000059241
- (id)lastPostedEventForUnitTesting;	// IMP=0x0010000000059230
- (id)currentElementRotorString;	// IMP=0x001000000005928b
- (id)lastScreenChangeTime;	// IMP=0x0010000000059255
- (void)_testFetchWebElementRects;	// IMP=0x00100000000592df

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

