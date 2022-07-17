//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDiagnosticObject-Protocol.h>

@class NSCondition, NSMapTable, NSMutableSet, NSString;
@protocol HDSQLiteDatabasePoolDelegate, OS_dispatch_group, OS_dispatch_semaphore;

@interface HDSQLiteDatabasePool : NSObject <HDDiagnosticObject>
{
    NSCondition *_cacheCondition;	// 8 = 0x8
    NSMutableSet *_cache;	// 16 = 0x10
    NSObject<OS_dispatch_group> *_flushGroup;	// 24 = 0x18
    unsigned long long _cacheGeneration;	// 32 = 0x20
    long long _cacheSize;	// 40 = 0x28
    long long _concurrentReaderLimit;	// 48 = 0x30
    _Atomic int _count;	// 56 = 0x38
    struct os_unfair_lock_s _checkoutLock;	// 60 = 0x3c
    NSMapTable *_checkoutMap;	// 64 = 0x40
    NSObject<OS_dispatch_semaphore> *_readerSemaphore;	// 72 = 0x48
    NSObject<OS_dispatch_semaphore> *_writerSemaphore;	// 80 = 0x50
    id <HDSQLiteDatabasePoolDelegate> _delegate;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000006c9369
@property __weak id <HDSQLiteDatabasePoolDelegate> delegate; // @synthesize delegate=_delegate;
- (id)diagnosticDescription;	// IMP=0x00000000006c8e12
- (id)currentFlushGroup;	// IMP=0x00000000006c8dc3
- (id)flush;	// IMP=0x000000000006a162
- (void)checkInDatabase:(id)arg1 flushImmediately:(_Bool)arg2;	// IMP=0x00000000000088b6
- (id)checkOutDatabaseWithOptions:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x00000000006c89c6
@property(readonly) long long checkedOutDatabaseCount;
@property(readonly) long long concurrentReaderLimit;
@property(readonly) long long cacheSize;
@property(readonly) long long count;
- (void)dealloc;	// IMP=0x00000000006c88e6
- (id)initWithConcurrentReaderLimit:(long long)arg1;	// IMP=0x00000000006c8740

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
