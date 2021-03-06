//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/PTSettingsKeyObserver-Protocol.h>
#import <SpringBoard/SBHIDButtonStateDelegate-Protocol.h>
#import <SpringBoard/SBSceneManagerObserver-Protocol.h>

@class BKSHIDEventDeliveryManager, BSMutableIntegerMap, BSTimer, CMPocketStateManager, NSMutableIndexSet, NSString, RBSProcessMonitor, SBApplicationController, SBBacklightController, SBCameraHardwareButtonDefaults, SBCameraHardwareButtonSettings, SBCoverSheetPresentationManager, SBHIDButtonStateArbiter, SBLockScreenManager, SBProximitySensorManager, SBSceneManager, _SBCameraLaunchCondition;
@protocol BSInvalidatable;

@interface SBCameraHardwareButton : NSObject <SBHIDButtonStateDelegate, PTSettingsKeyObserver, SBSceneManagerObserver>
{
    _Bool _disableDeferringToApplications;	// 8 = 0x8
    _Bool _shouldUsePocketStateDetection;	// 9 = 0x9
    int _lastCameraApplicationPID;	// 12 = 0xc
    id <BSInvalidatable> _dispatchingRuleAssertion;	// 16 = 0x10
    id <BSInvalidatable> _deferringRuleAssertion;	// 24 = 0x18
    NSMutableIndexSet *_allCameraShutterButtonPIDs;	// 32 = 0x20
    NSMutableIndexSet *_foregroundCameraShutterButtonPIDs;	// 40 = 0x28
    NSMutableIndexSet *_foregroundPendingRemovalCameraShutterButtonPIDs;	// 48 = 0x30
    BSMutableIntegerMap *_deferringTokensPerPID;	// 56 = 0x38
    SBHIDButtonStateArbiter *_buttonArbiter;	// 64 = 0x40
    RBSProcessMonitor *_processMonitor;	// 72 = 0x48
    CMPocketStateManager *_pocketStateManager;	// 80 = 0x50
    _SBCameraLaunchCondition *_shouldLaunchCameraCondition;	// 88 = 0x58
    _SBCameraLaunchCondition *_longPressCondition;	// 96 = 0x60
    _SBCameraLaunchCondition *_outOfPocketCondition;	// 104 = 0x68
    BSTimer *_longPressCancellationTimer;	// 112 = 0x70
    double _longPressCancellationTimeout;	// 120 = 0x78
    BKSHIDEventDeliveryManager *_deliveryManager;	// 128 = 0x80
    SBApplicationController *_applicationController;	// 136 = 0x88
    SBLockScreenManager *_lockScreenManager;	// 144 = 0x90
    SBCoverSheetPresentationManager *_coverSheetPresentationManager;	// 152 = 0x98
    SBBacklightController *_backlightController;	// 160 = 0xa0
    SBProximitySensorManager *_proximitySensorManager;	// 168 = 0xa8
    SBSceneManager *_mainDisplaySceneManager;	// 176 = 0xb0
    SBCameraHardwareButtonSettings *_settings;	// 184 = 0xb8
    SBCameraHardwareButtonDefaults *_defaults;	// 192 = 0xc0
}

- (void).cxx_destruct;	// IMP=0x00000000001a0c1d
@property(nonatomic) _Bool disableDeferringToApplications; // @synthesize disableDeferringToApplications=_disableDeferringToApplications;
- (void)sceneManager:(id)arg1 didRemoveExternalForegroundApplicationSceneHandle:(id)arg2;	// IMP=0x00000000001a0850
- (void)sceneManager:(id)arg1 didAddExternalForegroundApplicationSceneHandle:(id)arg2;	// IMP=0x00000000001a0701
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;	// IMP=0x00000000001a06dd
- (void)performActionsForButtonUp:(id)arg1;	// IMP=0x00000000001a06cb
- (void)performActionsForButtonLongPress:(id)arg1;	// IMP=0x00000000001a0694
- (void)performActionsForButtonDown:(id)arg1;	// IMP=0x00000000001a014f
- (void)_stopWaitingForLongPressCancellation;	// IMP=0x00000000001a011d
- (void)_longPressDidCancel;	// IMP=0x00000000001a0020
- (void)_startWaitingForLongPressCancellation;	// IMP=0x000000000019fe46
- (void)_launchToUnlockedCameraAfterWakingScreen:(_Bool)arg1;	// IMP=0x000000000019fbb1
- (void)_launchToCoverSheetCameraAfterWakingScreen:(_Bool)arg1;	// IMP=0x000000000019fa4f
- (void)_notifyCoreAnalyticsCameraDidLaunchToLockScreen:(_Bool)arg1 screenWasOff:(_Bool)arg2;	// IMP=0x000000000019f90e
- (void)_launchCameraIfReady;	// IMP=0x000000000019f6ac
- (void)_updateCameraDeferringRule;	// IMP=0x000000000019f61d
- (_Bool)_shouldDeferToCoverSheetCamera;	// IMP=0x000000000019f4fd
- (_Bool)_isCoverSheetCameraVisible;	// IMP=0x000000000019f428
- (_Bool)_shouldDeferToNonSpringBoardProcess;	// IMP=0x000000000019f3b9
- (void)_deferCameraPressesToCameraApplication;	// IMP=0x000000000019f366
- (void)_deferCameraPressesToApplication:(id)arg1;	// IMP=0x000000000019f26d
- (void)_deferCameraPressesToPID:(int)arg1;	// IMP=0x000000000019f07f
- (void)_deferCameraPressesToSpringBoard;	// IMP=0x000000000019efc2
- (void)_reconfigureProcessMonitorForPredicates:(id)arg1;	// IMP=0x000000000019ec2e
- (void)_reconfigureProcessMonitor;	// IMP=0x000000000019ea66
- (void)_process:(id)arg1 stateDidUpdate:(id)arg2;	// IMP=0x000000000019e677
- (void)_updateSettingsForReason:(id)arg1;	// IMP=0x000000000019e3ce
- (void)removeProcessRequestingCameraButton:(int)arg1;	// IMP=0x000000000019e2ce
- (void)addProcessRequestingCameraButton:(int)arg1 token:(id)arg2;	// IMP=0x000000000019e19a
- (void)handleButtonEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x000000000019e135
- (void)dealloc;	// IMP=0x000000000019e0b4
- (id)init;	// IMP=0x000000000019daab

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

