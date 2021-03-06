//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNUIUserActionTargetDiscovering-Protocol.h>

@class CNUIUserActionTargetDiscoveryCache, NSString;
@protocol CNCapabilities, CNLSApplicationWorkspace, CNMCProfileConnection, CNSchedulerProvider, CNTUCallProviderManager;

@interface CNUIUserActionTargetDiscovering : NSObject <CNUIUserActionTargetDiscovering>
{
    id <CNLSApplicationWorkspace> _applicationWorkspace;	// 8 = 0x8
    id <CNTUCallProviderManager> _callProviderManager;	// 16 = 0x10
    id <CNMCProfileConnection> _profileConnection;	// 24 = 0x18
    id <CNCapabilities> _capabilities;	// 32 = 0x20
    id <CNSchedulerProvider> _schedulerProvider;	// 40 = 0x28
    id <CNSchedulerProvider> _highLatencySchedulerProvider;	// 48 = 0x30
    CNUIUserActionTargetDiscoveryCache *_cache;	// 56 = 0x38
}

+ (_Bool)isSkypeAvailableWithEnvironment:(id)arg1;	// IMP=0x000000000004df81
+ (_Bool)shouldIgnoreApplicationProxy:(id)arg1;	// IMP=0x000000000004df33
+ (id)applicationProxiesForIntent:(id)arg1 applicationWorkspace:(id)arg2;	// IMP=0x000000000004de84
+ (id)os_log;	// IMP=0x000000000004a94e
- (void).cxx_destruct;	// IMP=0x000000000004e082
@property(readonly, nonatomic) CNUIUserActionTargetDiscoveryCache *cache; // @synthesize cache=_cache;
@property(readonly, nonatomic) id <CNSchedulerProvider> highLatencySchedulerProvider; // @synthesize highLatencySchedulerProvider=_highLatencySchedulerProvider;
@property(readonly, nonatomic) id <CNSchedulerProvider> schedulerProvider; // @synthesize schedulerProvider=_schedulerProvider;
@property(readonly, nonatomic) id <CNCapabilities> capabilities; // @synthesize capabilities=_capabilities;
@property(readonly, nonatomic) id <CNMCProfileConnection> profileConnection; // @synthesize profileConnection=_profileConnection;
@property(readonly, nonatomic) id <CNTUCallProviderManager> callProviderManager; // @synthesize callProviderManager=_callProviderManager;
@property(readonly, nonatomic) id <CNLSApplicationWorkspace> applicationWorkspace; // @synthesize applicationWorkspace=_applicationWorkspace;
- (id)thirdPartyTargetsForBundleIdentifier:(id)arg1;	// IMP=0x000000000004d81e
- (id)thirdPartyTargetsForActionTypes:(id)arg1;	// IMP=0x000000000004d51c
- (id)targetsForSendMessageIntent;	// IMP=0x000000000004d2fa
- (id)targetsForStartVideoCallIntent;	// IMP=0x000000000004d0d8
- (id)targetsForStartAudioCallIntent;	// IMP=0x000000000004ceb6
- (id)targetsForVideoWithThirdPartyCallProviders;	// IMP=0x000000000004ccc5
- (id)targetsForVoiceWithThirdPartyCallProviders;	// IMP=0x000000000004cad4
- (id)targetForTextWithSkype;	// IMP=0x000000000004c975
- (id)targetForVideoWithSkype;	// IMP=0x000000000004c816
- (id)targetForVoiceWithSkype;	// IMP=0x000000000004c6b7
- (id)targetForVideoWithFaceTime;	// IMP=0x000000000004c55f
- (id)targetForVoiceWithFaceTime;	// IMP=0x000000000004c407
- (id)targetForTextWithMessages;	// IMP=0x000000000004c2af
- (id)targetForVoiceWithTelephony;	// IMP=0x000000000004c157
- (id)targetsForText;	// IMP=0x000000000004bd48
- (id)targetsForVideo;	// IMP=0x000000000004b9d7
- (id)targetsForVoice;	// IMP=0x000000000004b59b
- (id)targetsForDirections;	// IMP=0x000000000004b531
- (id)targetsForPay;	// IMP=0x000000000004b4c7
- (id)targetsForEmail;	// IMP=0x000000000004b45d
- (id)_targetsForActionType:(id)arg1;	// IMP=0x000000000004b329
- (void)resetTargetsForActionType:(id)arg1;	// IMP=0x000000000004b1b6
- (id)observableForTargetsChangedForActionType:(id)arg1 schedulerProvider:(id)arg2;	// IMP=0x000000000004aed4
- (id)targetsForActionType:(id)arg1;	// IMP=0x000000000004accd
- (void)dealloc;	// IMP=0x000000000004ab47
- (id)initWithApplicationWorkspace:(id)arg1 callProviderManager:(id)arg2 profileConnection:(id)arg3 schedulerProvider:(id)arg4 highLatencySchedulerProvider:(id)arg5 capabilities:(id)arg6;	// IMP=0x000000000004a9aa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

