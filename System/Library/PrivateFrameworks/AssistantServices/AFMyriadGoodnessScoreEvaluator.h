//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFSettingsDelegate-Protocol.h>

@class AFInstanceContext, AFMyriadInstrumentation, AFPreferences, AFSettingsConnection, NSString;
@protocol OS_dispatch_queue;

@interface AFMyriadGoodnessScoreEvaluator : NSObject <AFSettingsDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    struct os_unfair_lock_s _scoreEvaluationLock;	// 16 = 0x10
    unsigned char _myriadPlatformBias;	// 20 = 0x14
    AFInstanceContext *_deviceInstanceContext;	// 24 = 0x18
    unsigned long long _platformBiasAcquisitionState;	// 32 = 0x20
    AFPreferences *_pref;	// 40 = 0x28
    AFSettingsConnection *_settingsConnection;	// 48 = 0x30
    AFMyriadInstrumentation *_myriadInstrumentation;	// 56 = 0x38
    _Bool _evaluateForAudioAccessory;	// 64 = 0x40
    double _lastActivationTime;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000000f933f
@property(nonatomic) double lastActivationTime; // @synthesize lastActivationTime=_lastActivationTime;
@property(readonly, nonatomic) _Bool evaluateForAudioAccessory; // @synthesize evaluateForAudioAccessory=_evaluateForAudioAccessory;
- (void)_settingsConnectionDidDisconnect;	// IMP=0x00000000000f91d0
- (unsigned char)getMyriadAdjustedBoostForGoodnessScoreContext:(id)arg1;	// IMP=0x00000000000f8f64
- (void)preheat;	// IMP=0x00000000000f8f03
- (void)_fetchDevicePlatformBiasIfRequired;	// IMP=0x00000000000f8ec6
- (void)_updatePlatformBias:(unsigned char)arg1;	// IMP=0x00000000000f8ddc
- (unsigned char)bumpGoodnessScore:(id)arg1 lastActivationTime:(double)arg2 mediaPlaybackInterruptedTime:(double)arg3 ignoreAdjustedBoost:(_Bool)arg4;	// IMP=0x00000000000f8aae
- (unsigned char)getPlatformBias;	// IMP=0x00000000000f89e4
- (unsigned char)getRecentBump:(double)arg1 ignoreAdjustedBoost:(_Bool)arg2;	// IMP=0x00000000000f87fa
- (id)initWithDeviceInstanceContext:(id)arg1 preferences:(id)arg2 queue:(id)arg3 instrumentation:(id)arg4;	// IMP=0x00000000000f86b1
- (id)initWithDeviceInstanceContext:(id)arg1 preferences:(id)arg2 queue:(id)arg3;	// IMP=0x00000000000f869c
- (id)initWithDeviceInstanceContext:(id)arg1 queue:(id)arg2;	// IMP=0x00000000000f8682

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

