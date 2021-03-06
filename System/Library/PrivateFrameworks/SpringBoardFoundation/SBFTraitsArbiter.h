//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardFoundation/BSDescriptionProviding-Protocol.h>

@class NSArray, NSHashTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet, NSString, SBFTraitsArbiterUpdateOrientationResolutionPolicySpecifier, SBFTraitsArbitrationDeviceOrientationInputs, SBFTraitsArbitrationInputs, SBFTraitsArbitrationInputsValidationStage, SBFTraitsArbitrationInterfaceIdiomInputs, SBFTraitsArbitrationKeyboardInputs;
@protocol BSInvalidatable;

@interface SBFTraitsArbiter : NSObject <BSDescriptionProviding>
{
    NSSet *_knownZOrderRoles;	// 8 = 0x8
    NSSet *_knownOrientationRoles;	// 16 = 0x10
    NSSet *_allKnownRoles;	// 24 = 0x18
    NSMutableDictionary *_liveRolesCounter;	// 32 = 0x20
    NSMutableDictionary *_acquiredParticipantsByUniqueIdentifier;	// 40 = 0x28
    NSMutableDictionary *_acquiredParticipantsByPreferencesType;	// 48 = 0x30
    NSMutableSet *_participantsNeedingUpdate;	// 56 = 0x38
    NSMutableSet *_updatedParticipants;	// 64 = 0x40
    NSMutableArray *_inputsNeedUpdateReasons;	// 72 = 0x48
    NSMutableArray *_componentsNeedUpdateReasons;	// 80 = 0x50
    NSHashTable *_observers;	// 88 = 0x58
    SBFTraitsArbiterUpdateOrientationResolutionPolicySpecifier *_resolutionUpdateOrientationSpecifier;	// 96 = 0x60
    SBFTraitsArbitrationInputsValidationStage *_inputsValidationStage;	// 104 = 0x68
    NSArray *_preferencesResolutionStages;	// 112 = 0x70
    SBFTraitsArbitrationInterfaceIdiomInputs *_deviceIdiomInputs;	// 120 = 0x78
    SBFTraitsArbitrationDeviceOrientationInputs *_deviceOrientationInputs;	// 128 = 0x80
    SBFTraitsArbitrationKeyboardInputs *_keyboardInputs;	// 136 = 0x88
    SBFTraitsArbitrationInputs *_lastRawInputs;	// 144 = 0x90
    SBFTraitsArbitrationInputs *_lastValidatedInputs;	// 152 = 0x98
    id <BSInvalidatable> _stateDumpHandle;	// 160 = 0xa0
}

+ (_Bool)__isUnderTest;	// IMP=0x000000000009bbaa
+ (void)__setIsUnderTest:(_Bool)arg1;	// IMP=0x000000000009bb9e
+ (void)setScreenStateProvider:(id)arg1;	// IMP=0x000000000009bb52
+ (id)screenStateProvider;	// IMP=0x000000000009bb39
+ (id)_defaultOrientationAnimationSettingsAnimatable:(_Bool)arg1;	// IMP=0x000000000009ba36
- (void).cxx_destruct;	// IMP=0x000000000009d47f
- (id)_setupStateDump;	// IMP=0x000000000009d303
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000000009cac5
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x000000000009ca75
- (id)succinctDescriptionBuilder;	// IMP=0x000000000009ca59
- (id)succinctDescription;	// IMP=0x000000000009ca09
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (void)_updateArbitrationWithClientContext:(id)arg1 defaultContext:(id)arg2;	// IMP=0x000000000009bf26
- (id)_defaultUpdateContextWithReason:(id)arg1 animatable:(_Bool)arg2;	// IMP=0x000000000009bd64
- (long long)_rawDeviceOrientation;	// IMP=0x000000000009bd10
- (id)_currentRawDeviceOrientationInputs;	// IMP=0x000000000009bca9
- (void)_deviceOrientationChanged:(id)arg1;	// IMP=0x000000000009bbd2
- (id)__forTestingOnly_knownOrientationRoles;	// IMP=0x000000000009bbc4
- (id)__forTestingOnly_knownZOrderRoles;	// IMP=0x000000000009bbb6
- (void)_removeForceResolutionSpecifier;	// IMP=0x000000000009b9c0
- (void)_addResolutionPolicySpecifierForClientContext:(id)arg1;	// IMP=0x000000000009b86e
- (void)_preferencesResolutionStageDidUpdateComponents:(id)arg1 animate:(_Bool)arg2;	// IMP=0x000000000009b734
- (void)_inputsValidationStageDidUpdateValidators:(id)arg1;	// IMP=0x000000000009b5fc
- (void)_participantDidUpdateSettings:(id)arg1;	// IMP=0x000000000009b543
- (void)_participantDidUpdatePreferences:(id)arg1;	// IMP=0x000000000009b48a
- (void)_invalidateParticipant:(id)arg1;	// IMP=0x000000000009af18
- (void)_setNeedsUpdateArbitrationWithClientContext:(id)arg1 defaultContext:(id)arg2;	// IMP=0x000000000009ab60
- (void)_setNeedsUpdateArbitrationWithReason:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000009ab12
- (void)noteArbiterDidCompleteTransitionWithContext:(id)arg1;	// IMP=0x000000000009a9fe
- (void)noteArbiterWillBeginTransitionWithContext:(id)arg1;	// IMP=0x000000000009a8ea
- (id)orientationPreferencesResolutionStage;	// IMP=0x000000000009a7a2
- (id)inputsValidationStage;	// IMP=0x000000000009a794
- (void)removeObserver:(id)arg1;	// IMP=0x000000000009a6c3
- (void)addObserver:(id)arg1;	// IMP=0x000000000009a5b1
- (void)updateArbitrationIfNeeded;	// IMP=0x000000000009a5ab
- (void)setNeedsUpdateArbitrationWithContext:(id)arg1;	// IMP=0x000000000009a510
- (id)acquireParticipantWithRole:(id)arg1 delegate:(id)arg2;	// IMP=0x0000000000099fcb
- (id)_newOrderedPreferencesResolutionStages;	// IMP=0x0000000000099a20
- (id)_newInputsValidationStage;	// IMP=0x0000000000099961
- (void)dealloc;	// IMP=0x00000000000998c4
- (id)init;	// IMP=0x00000000000995d6

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

