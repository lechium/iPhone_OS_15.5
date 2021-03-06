//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardFoundation/BSDescriptionProviding-Protocol.h>
#import <SpringBoardFoundation/BSInvalidatable-Protocol.h>
#import <SpringBoardFoundation/NSCopying-Protocol.h>
#import <SpringBoardFoundation/SBFTraitsPreferencesProviding-Protocol.h>
#import <SpringBoardFoundation/SBFTraitsPreferencesUpdating-Protocol.h>
#import <SpringBoardFoundation/SBFTraitsResolutionPoliciesProviding-Protocol.h>
#import <SpringBoardFoundation/SBFTraitsSettingsActuating-Protocol.h>
#import <SpringBoardFoundation/SBFTraitsSettingsActuationContextProviding-Protocol.h>
#import <SpringBoardFoundation/SBFTraitsSettingsUpdating-Protocol.h>

@class NSString, SBFTraitsArbiter, SBFTraitsOrientationResolutionPolicyInfo, SBFTraitsPreferencesOrientation, SBFTraitsPreferencesZOrderLevel, SBFTraitsSettings, SBFTraitsSettingsActuationContext;
@protocol BSInvalidatable, SBFTraitsParticipantDelegate;

@interface SBFTraitsParticipant : NSObject <SBFTraitsPreferencesUpdating, SBFTraitsSettingsUpdating, SBFTraitsSettingsActuationContextProviding, SBFTraitsPreferencesProviding, SBFTraitsResolutionPoliciesProviding, NSCopying, BSInvalidatable, BSDescriptionProviding, SBFTraitsSettingsActuating>
{
    _Bool _invalidated;	// 8 = 0x8
    id <BSInvalidatable> _stateDumpHandle;	// 16 = 0x10
    SBFTraitsArbiter *_arbiter;	// 24 = 0x18
    SBFTraitsPreferencesOrientation *_orientationPreferences;	// 32 = 0x20
    SBFTraitsPreferencesZOrderLevel *_zOrderLevelPreferences;	// 40 = 0x28
    SBFTraitsSettings *_currentSettings;	// 48 = 0x30
    SBFTraitsSettings *_previousSettings;	// 56 = 0x38
    SBFTraitsOrientationResolutionPolicyInfo *_orientationResolutionPolicyInfo;	// 64 = 0x40
    _Bool __debugDelegateDidValidateLastSettings;	// 72 = 0x48
    NSString *_role;	// 80 = 0x50
    NSString *_uniqueIdentifier;	// 88 = 0x58
    id <SBFTraitsParticipantDelegate> _delegate;	// 96 = 0x60
    NSString *__debugLastOrientationValidationFailureReason;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x000000000003bc18
@property(copy, nonatomic) NSString *_debugLastOrientationValidationFailureReason; // @synthesize _debugLastOrientationValidationFailureReason=__debugLastOrientationValidationFailureReason;
@property(nonatomic) _Bool _debugDelegateDidValidateLastSettings; // @synthesize _debugDelegateDidValidateLastSettings=__debugDelegateDidValidateLastSettings;
@property(nonatomic) __weak SBFTraitsArbiter *arbiter; // @synthesize arbiter=_arbiter;
@property(nonatomic) __weak id <SBFTraitsParticipantDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(copy, nonatomic) NSString *role; // @synthesize role=_role;
@property(retain, nonatomic) SBFTraitsSettings *previousSettings; // @synthesize previousSettings=_previousSettings;
@property(retain, nonatomic) SBFTraitsSettings *currentSettings; // @synthesize currentSettings=_currentSettings;
@property(retain, nonatomic) SBFTraitsPreferencesOrientation *orientationPreferences; // @synthesize orientationPreferences=_orientationPreferences;
@property(retain, nonatomic) SBFTraitsPreferencesZOrderLevel *zOrderLevelPreferences; // @synthesize zOrderLevelPreferences=_zOrderLevelPreferences;
@property(copy, nonatomic) SBFTraitsOrientationResolutionPolicyInfo *orientationResolutionPolicyInfo; // @synthesize orientationResolutionPolicyInfo=_orientationResolutionPolicyInfo;
- (id)_setupStateDump;	// IMP=0x000000000003b989
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000000003b066
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x000000000003b016
- (id)succinctDescriptionBuilder;	// IMP=0x000000000003af34
- (id)succinctDescription;	// IMP=0x000000000003aee4
- (_Bool)hasAnyActuationContext;	// IMP=0x000000000003aead
@property(readonly, copy, nonatomic) SBFTraitsSettingsActuationContext *orientationActuationContext;
- (void)updateOrientationSettingsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000003ac85
- (void)updateZOrderLevelSettingsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000003aa81
- (void)updateOrientationPreferencesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000003a767
- (void)updateZOrderLevelPreferencesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000003a5d9
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x000000000003a571
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003a566
- (void)invalidate;	// IMP=0x000000000003a52c
- (void)updatePreferencesIfNeeded;	// IMP=0x000000000003a4fb
- (void)setNeedsUpdatePreferencesWithReason:(id)arg1 force:(_Bool)arg2 animate:(_Bool)arg3;	// IMP=0x000000000003a28e
- (void)setNeedsUpdatePreferencesWithReason:(id)arg1 animate:(_Bool)arg2;	// IMP=0x000000000003a277
- (void)setNeedsUpdatePreferencesWithReason:(id)arg1 force:(_Bool)arg2;	// IMP=0x000000000003a1b0
- (void)setNeedsUpdatePreferencesWithReason:(id)arg1;	// IMP=0x000000000003a0f0
- (id)initWithParticipant:(id)arg1;	// IMP=0x0000000000039f79
- (id)initWithRole:(id)arg1 uniqueIdentifier:(id)arg2 delegate:(id)arg3 arbiter:(id)arg4;	// IMP=0x0000000000039c5a

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

