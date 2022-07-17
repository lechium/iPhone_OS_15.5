//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableDictionary, NSSet;

@interface BGTaskScheduler : NSObject
{
    struct os_unfair_lock_s __lock;	// 8 = 0x8
    NSMutableDictionary *__registrations;	// 16 = 0x10
    NSSet *__permittedIdentifiers;	// 24 = 0x18
    NSMapTable *__runningTasksMap;	// 32 = 0x20
}

+ (id)_log;	// IMP=0x0000000000003319
+ (id)sharedScheduler;	// IMP=0x0000000000002565
+ (id)_sharedSchedulerIfExists;	// IMP=0x0000000000002535
+ (_Bool)_isRunningInExtension;	// IMP=0x00000000000022e6
+ (void)_applicationDidFinishLaunching:(id)arg1;	// IMP=0x0000000000002192
+ (void)load;	// IMP=0x000000000000212e
- (void).cxx_destruct;	// IMP=0x0000000000004558
@property(retain, nonatomic, setter=_setRunningTasksMap:) NSMapTable *_runningTasksMap; // @synthesize _runningTasksMap=__runningTasksMap;
@property(retain, nonatomic, setter=_setPermittedIdentifiers:) NSSet *_permittedIdentifiers; // @synthesize _permittedIdentifiers=__permittedIdentifiers;
@property(retain, nonatomic, setter=_setRegistrations:) NSMutableDictionary *_registrations; // @synthesize _registrations=__registrations;
@property(nonatomic, setter=_setLock:) struct os_unfair_lock_s _lock; // @synthesize _lock=__lock;
- (void)_simulateExpirationForTaskWithIdentifier:(id)arg1;	// IMP=0x0000000000004334
- (void)_simulateLaunchForTaskWithIdentifier:(id)arg1;	// IMP=0x0000000000003ee0
- (void)_runTask:(id)arg1 registration:(id)arg2;	// IMP=0x00000000000037e4
- (_Bool)_isRunningTaskOfClass:(Class)arg1;	// IMP=0x00000000000035d6
- (id)_runningTasks;	// IMP=0x0000000000003375
- (void)getPendingTaskRequestsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000003207
- (void)cancelAllTaskRequests;	// IMP=0x000000000000319c
- (void)cancelTaskRequestWithIdentifier:(id)arg1;	// IMP=0x00000000000030e8
- (void)_handleAppLaunch;	// IMP=0x000000000000304d
- (id)_queueForRegistration:(id)arg1;	// IMP=0x0000000000002f24
- (id)_unsafe_registrationForIdentifier:(id)arg1;	// IMP=0x0000000000002ea1
- (_Bool)_unsafe_submitTaskRequest:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000002bef
- (_Bool)submitTaskRequest:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000002afd
- (_Bool)_unsafe_registerForTaskWithIdentifier:(id)arg1 usingQueue:(id)arg2 launchHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000002852
- (_Bool)registerForTaskWithIdentifier:(id)arg1 usingQueue:(id)arg2 launchHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000002769
- (id)_init;	// IMP=0x00000000000024a9
- (id)init;	// IMP=0x0000000000002422

@end
