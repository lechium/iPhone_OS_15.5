//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/SBNotchedStatusBarProximityBacklightPolicyEnablementConditionDelegate-Protocol.h>
#import <SpringBoard/_SBProximityTouchHandlingDelegate-Protocol.h>

@class NSString, SBNotchedStatusBarProximityBacklightPolicyEnablementCondition, SBProximitySettings, _SBProximityTouchHandlingViewController, _SBProximityTouchHandlingWindow;

@interface SBNotchedStatusBarProximityBacklightPolicy <SBNotchedStatusBarProximityBacklightPolicyEnablementConditionDelegate, _SBProximityTouchHandlingDelegate>
{
    _Bool _objectInProximity;	// 8 = 0x8
    _SBProximityTouchHandlingWindow *_proxTouchHandlingWindow;	// 16 = 0x10
    _SBProximityTouchHandlingViewController *_proxTouchHandlingViewController;	// 24 = 0x18
    SBNotchedStatusBarProximityBacklightPolicyEnablementCondition *_enablementCondition;	// 32 = 0x20
    unsigned long long _timesEnabledWithObjectInProximity;	// 40 = 0x28
    unsigned long long _touchesReceivedWithObjectInProximity;	// 48 = 0x30
    SBProximitySettings *_lazy_proximitySettings;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000029fbcf
@property(retain, nonatomic, setter=_setProximitySettings:) SBProximitySettings *_proximitySettings; // @synthesize _proximitySettings=_lazy_proximitySettings;
- (double)_debounceDurationForNumberOfTouchesReceivedWithObjectInProximity:(_Bool)arg1;	// IMP=0x000000000029fb2a
- (void)_setHandleTouchesIfNecessary:(_Bool)arg1;	// IMP=0x000000000029fa17
- (void)condition:(id)arg1 enablementDidChange:(_Bool)arg2;	// IMP=0x000000000029f88b
- (void)didHitAllowedRegion:(struct CGPoint)arg1;	// IMP=0x000000000029f6b4
- (void)proximitySensorManager:(id)arg1 objectWithinProximityDidChange:(_Bool)arg2;	// IMP=0x000000000029f482
- (id)_createNewEnablementCondition;	// IMP=0x000000000029f3c3
- (void)_scheduleBacklightFactorToZeroAfterDebounceDuration:(double)arg1;	// IMP=0x000000000029f37c
- (void)dealloc;	// IMP=0x000000000029f311
- (id)initWithBacklightController:(id)arg1;	// IMP=0x000000000029f1eb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
