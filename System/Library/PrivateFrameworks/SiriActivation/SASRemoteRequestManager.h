//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFRemoteRequestWatcher, AFRequestInfo, CMPocketStateManager, INAppIntentDeliverer;

@interface SASRemoteRequestManager : NSObject
{
    _Bool _hasPendingVoiceTriggerActivation;	// 8 = 0x8
    AFRemoteRequestWatcher *_remoteRequestWatcher;	// 16 = 0x10
    INAppIntentDeliverer *_currentAppIntentDeliverer;	// 24 = 0x18
    unsigned long long _currentVoiceTriggerRestriction;	// 32 = 0x20
    unsigned long long _pendingVoiceTriggerRestrictionCount;	// 40 = 0x28
    AFRequestInfo *_pendingVoiceTriggerActivationInfo;	// 48 = 0x30
    CMPocketStateManager *_pocketStateManager;	// 56 = 0x38
    long long _currentPocketState;	// 64 = 0x40
}

+ (id)new;	// IMP=0x00000000000283dc
+ (id)manager;	// IMP=0x000000000002774c
- (void).cxx_destruct;	// IMP=0x000000000002967c
@property(nonatomic) long long currentPocketState; // @synthesize currentPocketState=_currentPocketState;
@property(retain, nonatomic) CMPocketStateManager *pocketStateManager; // @synthesize pocketStateManager=_pocketStateManager;
@property(retain, nonatomic) AFRequestInfo *pendingVoiceTriggerActivationInfo; // @synthesize pendingVoiceTriggerActivationInfo=_pendingVoiceTriggerActivationInfo;
@property(nonatomic) _Bool hasPendingVoiceTriggerActivation; // @synthesize hasPendingVoiceTriggerActivation=_hasPendingVoiceTriggerActivation;
@property(nonatomic) unsigned long long pendingVoiceTriggerRestrictionCount; // @synthesize pendingVoiceTriggerRestrictionCount=_pendingVoiceTriggerRestrictionCount;
@property(nonatomic) unsigned long long currentVoiceTriggerRestriction; // @synthesize currentVoiceTriggerRestriction=_currentVoiceTriggerRestriction;
@property(retain, nonatomic) INAppIntentDeliverer *currentAppIntentDeliverer; // @synthesize currentAppIntentDeliverer=_currentAppIntentDeliverer;
@property(retain, nonatomic) AFRemoteRequestWatcher *remoteRequestWatcher; // @synthesize remoteRequestWatcher=_remoteRequestWatcher;
- (unsigned long long)_dismissalReasonForDeactivationReason:(long long)arg1;	// IMP=0x00000000000295a3
- (_Bool)_requestWatcherVoiceActivationEnabled;	// IMP=0x000000000002959b
- (void)_startFetchingPocketStateUpdates;	// IMP=0x0000000000029555
- (void)_handlePendingVoiceTriggerActivationsWithInfo:(id)arg1;	// IMP=0x0000000000029119
- (void)_handleRemoteRequestDismissalWithReason:(long long)arg1 options:(unsigned long long)arg2 analyticsContext:(id)arg3;	// IMP=0x0000000000028deb
- (void)_processPendingVoiceTriggerActivationsWithInfo:(id)arg1 delay:(double)arg2;	// IMP=0x0000000000028af4
- (void)_handleRequestWatcherVoiceTriggerRequestWithInfo:(id)arg1;	// IMP=0x00000000000288d9
- (void)_handleNewRemoteRequestWithInfo:(id)arg1;	// IMP=0x0000000000028576
- (void)_handleRemotePrewarmWithInfo:(id)arg1;	// IMP=0x00000000000283e4
- (id)init;	// IMP=0x00000000000283ce
- (id)_init;	// IMP=0x00000000000277b1

@end
