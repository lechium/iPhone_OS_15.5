//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SKStatusPublishingService;
@protocol DNDSModeConfigurationProviding, DNDSStateProviding, DNDSUserAvailabilityTCCProviding, OS_dispatch_queue;

@interface DNDSUserAvailabilityCoordinator : NSObject
{
    _Bool _active;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_extensionLaunchQueue;	// 24 = 0x18
    id <DNDSModeConfigurationProviding> _configurationProvider;	// 32 = 0x20
    id <DNDSStateProviding> _stateProvider;	// 40 = 0x28
    id <DNDSUserAvailabilityTCCProviding> _tccProvider;	// 48 = 0x30
    SKStatusPublishingService *_statusService;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000001fbe3
- (_Bool)_isTCCUserAvailabilityGrantedForMessages;	// IMP=0x000000000001fbca
- (id)publishStatusKitAvailabilityForced:(_Bool)arg1 override:(long long)arg2 error:(out id *)arg3;	// IMP=0x000000000001f526
- (id)publishStatusKitAvailabilityForced:(_Bool)arg1 error:(out id *)arg2;	// IMP=0x000000000001f50a
- (id)publishStatusKitAvailabilityReturningError:(out id *)arg1;	// IMP=0x000000000001f4f3
- (void)_publishStatusKitAvailability:(_Bool)arg1 activityIdentifier:(id)arg2 local:(_Bool)arg3 scheduled:(_Bool)arg4 date:(id)arg5 forced:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x000000000001f0db
- (void)_publishStatusKitAvailability:(_Bool)arg1 activityIdentifier:(id)arg2 forced:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000001f0ac
- (void)_publishStatusKitCurrentAvailabilityForced:(_Bool)arg1 override:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000001eafe
- (_Bool)userAvailabilityInActiveModeForContactHandle:(id)arg1 withError:(out id *)arg2;	// IMP=0x000000000001e8eb
- (id)allowedModesForContactHandle:(id)arg1 withError:(out id *)arg2;	// IMP=0x000000000001e4aa
- (_Bool)isTCCUserAvailabilityGrantedForBundleId:(id)arg1;	// IMP=0x000000000001e32d
- (_Bool)isLocalUserAvailableForApplicationIdentifier:(id)arg1 withError:(out id *)arg2;	// IMP=0x000000000001e236
- (_Bool)_isLocalUserAvailableForAppId:(id)arg1 modeIdentifier:(id)arg2 withError:(out id *)arg3;	// IMP=0x000000000001e0db
- (void)sendStatusKitInvitationsForContacts:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001cf29
- (id)_entitlementRecordForApplicationRecord:(id)arg1;	// IMP=0x000000000001cc4c
- (void)_queue_notifyIntentExtensionsOfUserAvailability:(id)arg1 applicationIdentifiers:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000001bf1a
- (void)_queue_updateAvailabilityKit:(id)arg1 fromConfiguration:(id)arg2 toConfiguration:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000001b6bf
- (void)coordinateUserAvailability:(id)arg1 fromConfiguration:(id)arg2 toConfiguration:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000001aa26
- (void)suspend;	// IMP=0x000000000001aa1c
- (void)resume;	// IMP=0x000000000001aa12
- (id)initWithConfigurationProvider:(id)arg1 stateProvider:(id)arg2 userAvailabilityTCCProvider:(id)arg3;	// IMP=0x000000000001a8aa
- (id)initWithConfigurationProvider:(id)arg1 stateProvider:(id)arg2;	// IMP=0x000000000001a826

@end
