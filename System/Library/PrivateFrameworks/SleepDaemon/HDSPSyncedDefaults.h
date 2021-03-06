//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SleepDaemon/HDSPSyncedUserDefaults-Protocol.h>
#import <SleepDaemon/HDSPSyncedUserDefaultsExternalChangeDelegate-Protocol.h>

@class HDSPEnvironment, HDSPSyncedDefaultsConfiguration, HKSPAccumulator, NSMutableSet, NSString;
@protocol HDSPSyncedUserDefaults, HDSPSyncedUserDefaultsExternalChangeDelegate, HKSPUserDefaults;

__attribute__((visibility("hidden")))
@interface HDSPSyncedDefaults : NSObject <HDSPSyncedUserDefaultsExternalChangeDelegate, HDSPSyncedUserDefaults>
{
    HDSPEnvironment *_environment;	// 8 = 0x8
    HDSPSyncedDefaultsConfiguration *_configuration;	// 16 = 0x10
    id <HKSPUserDefaults> _localDefaults;	// 24 = 0x18
    id <HDSPSyncedUserDefaults> _nanoDefaults;	// 32 = 0x20
    NSMutableSet *_keysNeedingSynchronize;	// 40 = 0x28
    HKSPAccumulator *_syncAccumulator;	// 48 = 0x30
    struct os_unfair_lock_s _lock;	// 56 = 0x38
    id <HDSPSyncedUserDefaultsExternalChangeDelegate> _delegate;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000003bb95
@property(nonatomic) __weak id <HDSPSyncedUserDefaultsExternalChangeDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_nanoDefaultsDidReceiveExternalChange;	// IMP=0x000000000003baa2
- (void)syncedUserDefaults:(id)arg1 didChangeExternallyForKeys:(id)arg2;	// IMP=0x000000000003b9df
- (void)syncedUserDefaultsDidChangeExternally:(id)arg1;	// IMP=0x000000000003b97a
- (void)saveCurrentDataVersion;	// IMP=0x000000000003b8c3
- (void)_syncCurrentDataVersions;	// IMP=0x000000000003b814
- (void)_throttled_synchronizeKeys:(id)arg1;	// IMP=0x000000000003b750
- (void)hksp_synchronizeKeys:(id)arg1;	// IMP=0x000000000003b700
- (void)hksp_synchronize;	// IMP=0x000000000003b5b4
- (id)localDefaultsDictionaryRepresentation;	// IMP=0x000000000003b59e
- (id)hksp_dataForKey:(id)arg1;	// IMP=0x000000000003b521
- (void)hksp_setInteger:(long long)arg1 forKey:(id)arg2;	// IMP=0x000000000003b469
- (long long)hksp_integerForKey:(id)arg1;	// IMP=0x000000000003b3f8
- (void)hksp_setFloat:(float)arg1 forKey:(id)arg2;	// IMP=0x000000000003b337
- (float)hksp_floatForKey:(id)arg1;	// IMP=0x000000000003b2ba
- (void)hksp_setBool:(_Bool)arg1 forKey:(id)arg2;	// IMP=0x000000000003b202
- (_Bool)hksp_boolForKey:(id)arg1;	// IMP=0x000000000003b191
- (void)hksp_removeObjectForKey:(id)arg1;	// IMP=0x000000000003b0e4
- (void)hksp_setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000003b005
- (id)hksp_objectForKey:(id)arg1;	// IMP=0x000000000003af88
- (id)_defaultsForKey:(id)arg1;	// IMP=0x000000000003aefc
- (void)hdsp_setExternalChangeDelegate:(id)arg1;	// IMP=0x000000000003adf2
- (void)hdsp_forceSynchronizeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000003adec
- (void)_setDefaultForKey:(id)arg1 setBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000003aca6
- (void)hksp_removeObjectsForKeys:(id)arg1;	// IMP=0x000000000003ab66
- (void)hksp_saveDictionary:(id)arg1;	// IMP=0x000000000003a92c
- (id)hksp_dictionaryRepresentationForKeys:(id)arg1;	// IMP=0x000000000003a45e
- (id)hksp_dictionaryRepresentation;	// IMP=0x000000000003a3fb
- (void)_withLock:(CDUnknownBlockType)arg1;	// IMP=0x000000000003a3be
- (id)initWithEnvironment:(id)arg1 configuration:(id)arg2 nanoDefaultsProvider:(CDUnknownBlockType)arg3 throttleInterval:(double)arg4;	// IMP=0x000000000003a162
- (id)initWithEnvironment:(id)arg1 configuration:(id)arg2;	// IMP=0x000000000003a0ca
- (CDUnknownBlockType)_nanoDefaultsProvider;	// IMP=0x000000000003a017

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

