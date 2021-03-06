//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDiagnosticObject-Protocol.h>
#import <HealthDaemon/HDProcessStateObserver-Protocol.h>

@class HDDaemon, NSMutableArray, NSMutableDictionary, NSString;
@protocol HDQueryManagerUnitTestDelegate, OS_dispatch_queue;

@interface HDQueryManager : NSObject <HDProcessStateObserver, HDDiagnosticObject>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableDictionary *_queryServersByUUID;	// 16 = 0x10
    NSMutableDictionary *_queryCollectionsByProcessBundleIdentifier;	// 24 = 0x18
    NSMutableArray *_pendingDatabaseAccessBlocks;	// 32 = 0x20
    NSMutableArray *_executingDatabaseAccessBlocks;	// 40 = 0x28
    long long _countOfExecutingThrottledDatabaseAccessBlocks;	// 48 = 0x30
    long long _unitTest_suspendCount;	// 56 = 0x38
    HDDaemon *_daemon;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_unitTest_delegateQueue;	// 72 = 0x48
    id <HDQueryManagerUnitTestDelegate> _unitTest_delegate;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000118638
@property __weak id <HDQueryManagerUnitTestDelegate> unitTest_delegate; // @synthesize unitTest_delegate=_unitTest_delegate;
@property(retain) NSObject<OS_dispatch_queue> *unitTest_delegateQueue; // @synthesize unitTest_delegateQueue=_unitTest_delegateQueue;
@property(readonly, nonatomic) __weak HDDaemon *daemon; // @synthesize daemon=_daemon;
- (void)unitTest_suspendWithCount:(unsigned long long)arg1;	// IMP=0x0000000000118529
- (void)logDiagnostics;	// IMP=0x0000000000118385
- (id)diagnosticDescription;	// IMP=0x0000000000117638
- (void)processWithBundleIdentifier:(id)arg1 didTransitionFromState:(unsigned int)arg2 toState:(unsigned int)arg3;	// IMP=0x0000000000116e8e
- (void)scheduleDatabaseAccessForQueryServer:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000000115a9c
- (void)startQueryServer:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000114d2a
- (void)dealloc;	// IMP=0x0000000000114cb5
- (id)initWithDaemon:(id)arg1;	// IMP=0x0000000000114bcc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

