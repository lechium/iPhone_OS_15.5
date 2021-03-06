//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/SBHardwareButtonGestureParametersObserver-Protocol.h>

@class NSString, SBAccessibilityHardwareButtonInteraction, SBApplication, SBHardwareButtonGestureParameters, SBHardwareButtonService, SBProximitySensorManager, SBSiriHardwareButtonInteraction, SBSleepWakeHardwareButtonInteraction, SBWalletPreArmController, SOSManager;
@protocol SBHardwareButtonInteraction><SBHardwareButtonGestureParametersProvider;

@interface SBLockHardwareButtonActions <SBHardwareButtonGestureParametersObserver>
{
    long long _homeButtonType;	// 8 = 0x8
    SBApplication *_lastLockButtonEventRecipient;	// 16 = 0x10
    SBProximitySensorManager *_proximitySensorManager;	// 24 = 0x18
    SBHardwareButtonService *_hardwareButtonService;	// 32 = 0x20
    SBWalletPreArmController *_walletPreArmController;	// 40 = 0x28
    SOSManager *_sosManager;	// 48 = 0x30
    SBHardwareButtonGestureParameters *_accessibilityGestureParameters;	// 56 = 0x38
    SBHardwareButtonGestureParameters *_siriGestureParameters;	// 64 = 0x40
    SBHardwareButtonGestureParameters *_proximitySensorGestureParameters;	// 72 = 0x48
    long long _sosTriggerMechanism;	// 80 = 0x50
    _Bool _isButtonDown;	// 88 = 0x58
    SBSiriHardwareButtonInteraction *_siriButtonInteraction;	// 96 = 0x60
    SBAccessibilityHardwareButtonInteraction *_accessibilityButtonInteraction;	// 104 = 0x68
    SBSleepWakeHardwareButtonInteraction *_sleepWakeButtonInteraction;	// 112 = 0x70
    id <SBHardwareButtonInteraction><SBHardwareButtonGestureParametersProvider> _proximitySensorButtonInteraction;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x00000000001601b9
@property(retain, nonatomic) id <SBHardwareButtonInteraction><SBHardwareButtonGestureParametersProvider> proximitySensorButtonInteraction; // @synthesize proximitySensorButtonInteraction=_proximitySensorButtonInteraction;
@property(retain, nonatomic) SBSleepWakeHardwareButtonInteraction *sleepWakeButtonInteraction; // @synthesize sleepWakeButtonInteraction=_sleepWakeButtonInteraction;
@property(retain, nonatomic) SBAccessibilityHardwareButtonInteraction *accessibilityButtonInteraction; // @synthesize accessibilityButtonInteraction=_accessibilityButtonInteraction;
@property(retain, nonatomic) SBSiriHardwareButtonInteraction *siriButtonInteraction; // @synthesize siriButtonInteraction=_siriButtonInteraction;
@property(readonly, nonatomic) _Bool isButtonDown; // @synthesize isButtonDown=_isButtonDown;
- (_Bool)_usesLockButtonForSiri;	// IMP=0x0000000000160110
- (_Bool)_usesLockButtonForSecureIntent;	// IMP=0x00000000001600ff
- (void)_sendButtonEventToApp:(id)arg1 down:(_Bool)arg2;	// IMP=0x000000000015ffb9
- (_Bool)_sendButtonDownToRegisteredApp;	// IMP=0x00000000000c3c2f
- (_Bool)_sendButtonUpToRegisteredApp;	// IMP=0x00000000000c42f4
- (id)_foregroundAppRegisteredForLockButtonEvents;	// IMP=0x00000000000c3ca3
- (void)_registeredLockButtonAppsDidChange:(id)arg1;	// IMP=0x00000000000bc122
- (_Bool)_isSOSActive;	// IMP=0x00000000000c4b1d
- (void)_performSOSDidTriggerActions;	// IMP=0x000000000015ff75
- (void)provider:(id)arg1 didUpdateButtonGestureParameters:(id)arg2;	// IMP=0x000000000015fd92
- (id)hardwareButtonGestureParameters;	// IMP=0x00000000000bc16e
- (_Bool)shouldBeginDoublePressGestureWhileObjectWithinProximity;	// IMP=0x000000000015fd6e
- (_Bool)disallowsLongPressForReason:(id *)arg1;	// IMP=0x000000000015fd1c
- (_Bool)disallowsTriplePressForReason:(id *)arg1;	// IMP=0x000000000015fc9e
- (_Bool)disallowsDoublePressForReason:(id *)arg1;	// IMP=0x000000000015fba9
- (_Bool)disallowsSinglePressForReason:(id *)arg1;	// IMP=0x00000000000c4112
- (_Bool)_shouldWaitForDoublePress;	// IMP=0x000000000015fa1f
- (void)performKeyboardShortcut;	// IMP=0x000000000015f9e4
- (void)performLongPressCancelledActions;	// IMP=0x00000000000adec8
- (void)performSOSActionsWithUUID:(id)arg1 triggerMechanism:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000015f6d2
- (void)performTriplePressActions;	// IMP=0x000000000015f56f
- (void)performDoublePressActions;	// IMP=0x000000000015f062
- (void)performSinglePressAction;	// IMP=0x00000000000c44e7
- (_Bool)performButtonUpPreActions;	// IMP=0x00000000000c42a9
- (void)performSinglePressDidFailActions;	// IMP=0x000000000015f00f
- (void)performForceResetSequenceBeganActions;	// IMP=0x000000000015ef1c
- (void)_showPowerDownTransientOverlayOnForceReset;	// IMP=0x000000000015edd6
- (void)performLongPressActions;	// IMP=0x000000000015e97c
- (void)performSecondButtonDownActions;	// IMP=0x000000000015e89c
- (void)performInitialButtonUpActions;	// IMP=0x00000000000c41c9
- (void)performInitialButtonDownActions;	// IMP=0x00000000000c338d
- (void)performFinalButtonUpActions;	// IMP=0x000000000015e812
- (void)performSOSGestureEndedActions;	// IMP=0x00000000000d082e
- (void)performSOSGestureBeganActions;	// IMP=0x000000000015e7f0
- (_Bool)reverseFadeOutIfNeeded;	// IMP=0x000000000015e7d3
- (id)initWithHomeButtonType:(long long)arg1 proximitySensorManager:(id)arg2;	// IMP=0x000000000015e424

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

