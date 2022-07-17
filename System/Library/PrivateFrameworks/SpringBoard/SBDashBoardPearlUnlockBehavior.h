//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBBiometricUnlockBehavior-Protocol.h>
#import <SpringBoard/SBMesaUnlockTriggerDelegate-Protocol.h>

@class CSLockScreenPearlSettings, NSString, SBMesaUnlockTrigger;
@protocol SBBiometricUnlockBehaviorDelegate;

@interface SBDashBoardPearlUnlockBehavior : NSObject <SBMesaUnlockTriggerDelegate, SBBiometricUnlockBehavior>
{
    CSLockScreenPearlSettings *_pearlSettings;	// 8 = 0x8
    id <SBBiometricUnlockBehaviorDelegate> _biometricUnlockBehaviorDelegate;	// 16 = 0x10
    SBMesaUnlockTrigger *_trigger;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000046ec9e
@property(retain, nonatomic, getter=_trigger, setter=_setTrigger:) SBMesaUnlockTrigger *trigger; // @synthesize trigger=_trigger;
@property(nonatomic) __weak id <SBBiometricUnlockBehaviorDelegate> biometricUnlockBehaviorDelegate; // @synthesize biometricUnlockBehaviorDelegate=_biometricUnlockBehaviorDelegate;
- (void)_handlePearlFailure;	// IMP=0x000000000046eaab
- (id)_feedbackForBioUnlockEventThatWasSpontaneous:(_Bool)arg1;	// IMP=0x000000000046ea77
- (id)_feedbackForPasscodeEvent;	// IMP=0x000000000046ea6f
- (id)_feedbackForFailureSettings:(id)arg1;	// IMP=0x000000000046ea22
- (void)mesaUnlockTriggerFired:(id)arg1;	// IMP=0x000000000046e88f
- (void)handleBiometricEvent:(unsigned long long)arg1;	// IMP=0x000000000046e4ca
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000000046e46f
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x000000000046e41f
- (id)succinctDescriptionBuilder;	// IMP=0x000000000046e403
- (id)succinctDescription;	// IMP=0x000000000046e3b3
@property(readonly, copy) NSString *description;
- (id)initWithPearlSettings:(id)arg1 andUnlockTrigger:(id)arg2;	// IMP=0x000000000046e2f2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
