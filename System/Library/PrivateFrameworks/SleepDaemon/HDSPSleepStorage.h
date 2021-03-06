//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SleepDaemon/HDSPEnvironmentAware-Protocol.h>
#import <SleepDaemon/HDSPSource-Protocol.h>
#import <SleepDaemon/HDSPSyncedUserDefaultsExternalChangeDelegate-Protocol.h>

@class HDSPEnvironment, HDSPSyncedDefaults, HDSPSyncedDefaultsConfiguration, HKSPObserverSet, NSString;
@protocol HDSPSource;

@interface HDSPSleepStorage : NSObject <HDSPSyncedUserDefaultsExternalChangeDelegate, HDSPEnvironmentAware, HDSPSource>
{
    HDSPEnvironment *_environment;	// 8 = 0x8
    HDSPSyncedDefaults *_syncedDefaults;	// 16 = 0x10
    HDSPSyncedDefaultsConfiguration *_configuration;	// 24 = 0x18
    HKSPObserverSet *_observers;	// 32 = 0x20
}

+ (id)standardConfiguration;	// IMP=0x0000000000002e7a
- (void).cxx_destruct;	// IMP=0x00000000000057ae
@property(readonly, nonatomic) HKSPObserverSet *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) HDSPSyncedDefaultsConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) HDSPSyncedDefaults *syncedDefaults; // @synthesize syncedDefaults=_syncedDefaults;
@property(readonly, nonatomic) __weak HDSPEnvironment *environment; // @synthesize environment=_environment;
@property(readonly, nonatomic) NSString *sourceIdentifier;
- (void)syncedUserDefaults:(id)arg1 didChangeExternallyForKeys:(id)arg2;	// IMP=0x0000000000005756
- (void)syncedUserDefaultsDidChangeExternally:(id)arg1;	// IMP=0x000000000000563d
- (void)environmentDidBecomeReady:(id)arg1;	// IMP=0x0000000000005586
- (void)environmentWillBecomeReady:(id)arg1;	// IMP=0x0000000000005492
- (void)removeObserver:(id)arg1;	// IMP=0x000000000000547c
- (void)addObserver:(id)arg1;	// IMP=0x0000000000005466
- (_Bool)_removeObjectProperties:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000053c8
- (_Bool)_saveObjectChanges:(id)arg1 versionKey:(id)arg2 currentVersion:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x0000000000004d58
- (_Bool)_saveObject:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000049ba
- (id)_loadObjectOfClass:(Class)arg1 allowedClasses:(id)arg2 propertiesToLoad:(id)arg3 error:(id *)arg4;	// IMP=0x000000000000467b
- (_Bool)saveSleepScheduleModel:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000445d
- (id)loadSleepScheduleModel:(id *)arg1;	// IMP=0x0000000000004210
- (_Bool)removeSleepEventRecordWithError:(id *)arg1;	// IMP=0x0000000000004116
- (_Bool)saveSleepEventRecordChanges:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000004000
- (_Bool)saveSleepEventRecord:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000003efa
- (id)loadSleepEventRecord:(id *)arg1;	// IMP=0x0000000000003d0c
- (_Bool)removeSleepSettingsWithError:(id *)arg1;	// IMP=0x0000000000003c12
- (_Bool)saveSleepSettingsChanges:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000003afc
- (_Bool)saveSleepSettings:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000039f6
- (id)loadSleepSettings:(id *)arg1;	// IMP=0x00000000000038a0
- (_Bool)removeSleepScheduleWithError:(id *)arg1;	// IMP=0x00000000000037a6
- (_Bool)saveSleepScheduleChanges:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000003690
- (_Bool)saveSleepSchedule:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000358a
- (id)loadSleepSchedule:(id *)arg1;	// IMP=0x00000000000033e8
- (void)saveCurrentDataVersion;	// IMP=0x00000000000033ab
@property(readonly, nonatomic) _Bool needsMigration;
@property(readonly, nonatomic) unsigned long long dataVersion;
- (id)initWithEnvironment:(id)arg1 configuration:(id)arg2 syncedDefaults:(id)arg3;	// IMP=0x000000000000320f
- (id)initWithEnvironment:(id)arg1;	// IMP=0x0000000000003165

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool dontNotify;
@property(readonly, nonatomic) _Bool dontSync;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) id <HDSPSource> targetSource;

@end

