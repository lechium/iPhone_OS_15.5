//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDAssertionObserver-Protocol.h>

@class HDAssertionManager, NSLock, NSOperationQueue, NSString;
@protocol OS_dispatch_queue;

@interface HDMaintenanceWorkCoordinator : NSObject <HDAssertionObserver>
{
    NSOperationQueue *_maintenanceWorkQueue;	// 8 = 0x8
    HDAssertionManager *_assertionManager;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_assertionQueue;	// 24 = 0x18
    NSLock *_lock;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000039c97d
- (void)assertionManager:(id)arg1 assertionInvalidated:(id)arg2;	// IMP=0x000000000039c875
- (id)takeMaintenanceSuspensionAssertionForOwner:(id)arg1;	// IMP=0x000000000039c726
- (void)cancelAllOperations;	// IMP=0x000000000039c710
- (void)enqueueMaintenanceOperation:(id)arg1;	// IMP=0x000000000039c64b
@property _Bool suspended;
- (id)init;	// IMP=0x000000000039c4d6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
