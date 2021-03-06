//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MCProfileConnection, SBAlertItemsController, SBApplicationController, SBAssistantController, SBBannerManager, SBCommandTabController, SBConferenceManager, SBLocalDefaults, SBLockScreenManager, SBLockStateAggregator, SBMainWorkspace, SBRemoteTransientOverlaySessionManager, SBSetupManager, SBTelephonyManager;

@interface SBMainDisplayPolicyAggregator
{
    MCProfileConnection *_override_profileConnection;	// 8 = 0x8
    SBSetupManager *_override_setupManager;	// 16 = 0x10
    SBAlertItemsController *_override_alertItemsController;	// 24 = 0x18
    SBApplicationController *_override_applicationController;	// 32 = 0x20
    SBAssistantController *_override_assistantController;	// 40 = 0x28
    SBCommandTabController *_override_commandTabController;	// 48 = 0x30
    SBConferenceManager *_override_conferenceManager;	// 56 = 0x38
    SBRemoteTransientOverlaySessionManager *_override_remoteTransientOverlaySessionManager;	// 64 = 0x40
    SBLockScreenManager *_override_lockScreenManager;	// 72 = 0x48
    SBLockStateAggregator *_override_lockStateAggregator;	// 80 = 0x50
    SBTelephonyManager *_override_telephonyManager;	// 88 = 0x58
    SBMainWorkspace *_override_mainWorkspace;	// 96 = 0x60
    SBBannerManager *_override_bannerManager;	// 104 = 0x68
    struct __CFBoolean *_hasCameraCapability;	// 112 = 0x70
    SBLocalDefaults *_defaults;	// 120 = 0x78
    _Bool _storeDemoAppLockEnabled;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x00000000006af6d5
@property(retain, nonatomic, getter=_bannerManager, setter=_setBannerManager:) SBBannerManager *bannerManager; // @synthesize bannerManager=_override_bannerManager;
@property(retain, nonatomic, getter=_mainWorkspace, setter=_setMainWorkspace:) SBMainWorkspace *mainWorkspace; // @synthesize mainWorkspace=_override_mainWorkspace;
@property(retain, nonatomic, getter=_telephonyManager, setter=_setTelephonyManager:) SBTelephonyManager *telephonyManager; // @synthesize telephonyManager=_override_telephonyManager;
@property(retain, nonatomic, getter=_lockStateAggregator, setter=_setLockStateAggregator:) SBLockStateAggregator *lockStateAggregator; // @synthesize lockStateAggregator=_override_lockStateAggregator;
@property(retain, nonatomic, getter=_lockScreenManager, setter=_setLockScreenManager:) SBLockScreenManager *lockScreenManager; // @synthesize lockScreenManager=_override_lockScreenManager;
@property(retain, nonatomic, getter=_remoteTransientOverlaySessionManager, setter=_setRemoteTransientOverlaySessionManager:) SBRemoteTransientOverlaySessionManager *remoteTransientOverlaySessionManager; // @synthesize remoteTransientOverlaySessionManager=_override_remoteTransientOverlaySessionManager;
@property(retain, nonatomic, getter=_conferenceManager, setter=_setConferenceManager:) SBConferenceManager *conferenceManager; // @synthesize conferenceManager=_override_conferenceManager;
@property(retain, nonatomic, getter=_commandTabController, setter=_setCommandTabController:) SBCommandTabController *commandTabController; // @synthesize commandTabController=_override_commandTabController;
@property(retain, nonatomic, getter=_assistantController, setter=_setAssistantController:) SBAssistantController *assistantController; // @synthesize assistantController=_override_assistantController;
@property(retain, nonatomic, getter=_applicationController, setter=_setApplicationController:) SBApplicationController *applicationController; // @synthesize applicationController=_override_applicationController;
@property(retain, nonatomic, getter=_alertItemsController, setter=_setAlertItemsController:) SBAlertItemsController *alertItemsController; // @synthesize alertItemsController=_override_alertItemsController;
@property(retain, nonatomic, getter=_setupManager, setter=_setSetupManager:) SBSetupManager *setupManager; // @synthesize setupManager=_override_setupManager;
@property(retain, nonatomic, getter=_profileConnection, setter=_setProfileConnection:) MCProfileConnection *profileConnection; // @synthesize profileConnection=_override_profileConnection;
- (_Bool)_dictationInfoOnScreen;	// IMP=0x0000000000086d8e
- (_Bool)_allowsCapabilityCoverSheetSpotlightWithExplanation:(id *)arg1;	// IMP=0x00000000006af547
- (_Bool)_allowsCapabilityQuickNoteWithExplanation:(id *)arg1;	// IMP=0x000000000008b94b
- (_Bool)_allowsCapabilityLiftToWakeWithExplanation:(id *)arg1;	// IMP=0x00000000006af4e5
- (_Bool)_allowsCapabilityTodayViewWithExplanation:(id *)arg1;	// IMP=0x000000000008b7a3
- (_Bool)_allowsCapabilityLockScreenTodayViewWithExplanation:(id *)arg1;	// IMP=0x000000000008b5ff
- (_Bool)_allowsCapabilityLockScreenNotificationCenterWithExplanation:(id *)arg1;	// IMP=0x000000000008c538
- (_Bool)_allowsCapabilityLockScreenControlCenterWithExplanation:(id *)arg1;	// IMP=0x000000000008b857
- (_Bool)_allowsCapabilityCommandTabWithExplanation:(id *)arg1;	// IMP=0x00000000006af3ed
- (_Bool)_allowsCapabilityScreenshotWithExplanation:(id *)arg1;	// IMP=0x00000000006af21a
- (_Bool)_allowsCapabilityHomeScreenEditingWithExplanation:(id *)arg1;	// IMP=0x00000000006af030
- (_Bool)_allowsCapabilityLoginWindowWithExplanation:(id *)arg1;	// IMP=0x00000000006aef7a
- (_Bool)_allowsCapabilityLogoutWithExplanation:(id *)arg1;	// IMP=0x000000000008a09d
- (_Bool)_allowsCapabilityControlCenterWithExplanation:(id *)arg1;	// IMP=0x000000000009d9d6
- (_Bool)_allowsCapabilityDismissCoverSheetWithExplanation:(id *)arg1;	// IMP=0x000000000005738c
- (_Bool)_allowsCapabilityCoverSheetWithExplanation:(id *)arg1;	// IMP=0x0000000000086a0f
- (_Bool)_allowsNotificationOrControlCenterWithExplanation:(id *)arg1;	// IMP=0x0000000000086b75
- (_Bool)_allowsCapabilityLockScreenCameraWithExplanation:(id *)arg1;	// IMP=0x000000000008b332
- (_Bool)_allowsCapabilityLockScreenCameraSupportedWithExplanation:(id *)arg1;	// IMP=0x0000000000089aae
- (_Bool)_allowsCapabilitySpotlightWithExplanation:(id *)arg1;	// IMP=0x00000000006aef12
- (_Bool)_allowsCapabilityVoiceControlWithExplanation:(id *)arg1;	// IMP=0x00000000006aeb4e
- (_Bool)_allowsCapabilitySystemGestureWithExplanation:(id *)arg1;	// IMP=0x000000000005098c
- (_Bool)_allowsCapabilitySendMediaCommandWithExplanation:(id *)arg1;	// IMP=0x00000000006aeae6
- (_Bool)_allowsCapabilityAssistantWithExplanation:(id *)arg1;	// IMP=0x00000000000ac00a
- (_Bool)_allowsCapabilityAssistantEnabledWithExplanation:(id *)arg1;	// IMP=0x00000000000abdd2
- (_Bool)_allowsCapabilityUnlockToPluginSpecifiedApplicationWithExplanation:(id *)arg1;	// IMP=0x00000000006aea7e
- (_Bool)_allowsCapabilityLockScreenBulletinWithExplanation:(id *)arg1;	// IMP=0x00000000006aea00
- (_Bool)_allowsCapabilitySuggestedApplicationWithExplanation:(id *)arg1;	// IMP=0x00000000006ae932
- (_Bool)_hasFullySetUpUserWithExplanation:(id *)arg1;	// IMP=0x0000000000050a80
- (void)reloadDemoDefaults;	// IMP=0x00000000006ae80a
- (_Bool)allowsTransitionRequest:(id)arg1;	// IMP=0x000000000000a30e
- (_Bool)allowsCapability:(long long)arg1 explanation:(id *)arg2;	// IMP=0x0000000000050961
- (_Bool)allowsCapability:(long long)arg1;	// IMP=0x0000000000057378
- (id)init;	// IMP=0x00000000006ae7b0
- (id)_initWithDefaults:(id)arg1;	// IMP=0x00000000006ae082

@end

