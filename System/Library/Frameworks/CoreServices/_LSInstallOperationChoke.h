//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface _LSInstallOperationChoke : NSObject
{
    unsigned long long _numConcurrentOperations;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 16 = 0x10
    NSMutableDictionary *_queuedWork;	// 24 = 0x18
    unsigned long long _activeInstallers;	// 32 = 0x20
    unsigned long long _activeUninstallers;	// 40 = 0x28
    NSObject<OS_dispatch_semaphore> *_backpressureSemaphore;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_concurrentQueue;	// 56 = 0x38
}

+ (long long)_bufferedRequestSlop;	// IMP=0x000000000013df79
- (void).cxx_destruct;	// IMP=0x000000000013ec8b
- (void)performOperationForBundleIdentifier:(id)arg1 installType:(long long)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x000000000013e812
- (void)retireOperation:(id)arg1;	// IMP=0x000000000013e671
- (id)claimOperationOfType:(long long)arg1;	// IMP=0x000000000013e603
- (void)retireFromInstaller;	// IMP=0x000000000013e55e
- (void)retireFromUninstaller;	// IMP=0x000000000013e4b9
- (_Bool)becomeInstaller;	// IMP=0x000000000013e447
- (_Bool)becomeUninstaller;	// IMP=0x000000000013e3d7
- (id)availableOperationOfType:(long long)arg1;	// IMP=0x000000000013e19e
- (void)enqueueInstallationOperation:(id)arg1;	// IMP=0x000000000013e067
- (id)initWithWidth:(long long)arg1;	// IMP=0x000000000013df84

@end

