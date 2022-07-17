//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DoNotDisturbServer/DNDSBiomeTriggerManager-Protocol.h>

@class NPSDomainAccessor, NPSManager, NSMutableDictionary, NSString;
@protocol DNDSWorkoutTriggerManagerDataSource><DNDSBiomeTriggerManagerDataSource, OS_dispatch_queue;

@interface DNDSWorkoutTriggerManager : NSObject <DNDSBiomeTriggerManager>
{
    NSObject<OS_dispatch_queue> *_biomeQueue;	// 8 = 0x8
    NSMutableDictionary *_sinks;	// 16 = 0x10
    struct os_unfair_lock_s _lock;	// 24 = 0x18
    NPSDomainAccessor *_accessor;	// 32 = 0x20
    NPSManager *_npsManager;	// 40 = 0x28
    id <DNDSWorkoutTriggerManagerDataSource><DNDSBiomeTriggerManagerDataSource> _dataSource;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000049617
@property(nonatomic) __weak id <DNDSWorkoutTriggerManagerDataSource><DNDSBiomeTriggerManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)_setWorkoutDNDNanoPreferenceEnabled:(_Bool)arg1;	// IMP=0x00000000000494dc
- (_Bool)_isWorkoutDNDNanoPreferenceEnabled;	// IMP=0x0000000000049464
- (id)_accessor;	// IMP=0x00000000000493b3
- (void)_updateNanoPreferencesForRefreshWithModeConfiguration:(id)arg1;	// IMP=0x0000000000049231
- (void)_refreshForNanoPreferenceChange;	// IMP=0x0000000000048d64
- (void)_migrateWorkoutDNDNanoPreference;	// IMP=0x0000000000048bbf
- (_Bool)_isWorkoutTriggerEnabledForModeConfiguration:(id)arg1;	// IMP=0x0000000000048a5a
- (void)_configureWorkoutTriggerWithMode:(id)arg1;	// IMP=0x00000000000484f7
- (id)_assertionIdentifierForHealthKitWorkoutEvent:(id)arg1;	// IMP=0x0000000000048460
- (void)_refreshWithMode:(id)arg1 event:(id)arg2;	// IMP=0x0000000000047959
- (void)pairedDeviceDidChange;	// IMP=0x0000000000047928
- (void)refresh;	// IMP=0x00000000000477ef
- (void)refreshMigratingIfNecessary;	// IMP=0x00000000000477c1
- (void)dealloc;	// IMP=0x0000000000047777
- (id)init;	// IMP=0x0000000000047614

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
