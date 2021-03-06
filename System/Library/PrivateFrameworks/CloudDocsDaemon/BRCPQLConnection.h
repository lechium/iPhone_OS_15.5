//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <prequelite/PQLConnection.h>

@class NSString, br_pacer;

__attribute__((visibility("hidden")))
@interface BRCPQLConnection : PQLConnection
{
    br_pacer *_batchingPacer;	// 16 = 0x10
    int _changeCount;	// 24 = 0x18
    double _flushInterval;	// 32 = 0x20
    _Bool _flushImmediately;	// 40 = 0x28
    _Bool _autovacuumInProgress;	// 41 = 0x29
    long long _changesOverride;	// 48 = 0x30
    _Bool _isReadonly;	// 56 = 0x38
    unsigned long long _vmStepsExecuted;	// 64 = 0x40
    NSString *_assertionPersonaIdentifier;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000000d42b
@property(retain, nonatomic) NSString *assertionPersonaIdentifier; // @synthesize assertionPersonaIdentifier=_assertionPersonaIdentifier;
@property(readonly, nonatomic) _Bool isReadonly; // @synthesize isReadonly=_isReadonly;
@property(readonly, nonatomic) unsigned long long vmStepsExecuted; // @synthesize vmStepsExecuted=_vmStepsExecuted;
- (id)fetchObject:(CDUnknownBlockType)arg1 sql:(id)arg2 args:(struct __va_list_tag [1])arg3;	// IMP=0x000000000000d34c
- (id)fetchObject:(CDUnknownBlockType)arg1 sql:(id)arg2;	// IMP=0x000000000000d2ab
- (id)fetchObjectOfClass:(Class)arg1 sql:(id)arg2 args:(struct __va_list_tag [1])arg3;	// IMP=0x000000000000d22c
- (id)fetchObjectOfClass:(Class)arg1 sql:(id)arg2;	// IMP=0x000000000000d18b
- (id)fetchObjectOfClass:(Class)arg1 initializer:(SEL)arg2 sql:(id)arg3 args:(struct __va_list_tag [1])arg4;	// IMP=0x000000000000d102
- (id)fetchObjectOfClass:(Class)arg1 initializer:(SEL)arg2 sql:(id)arg3;	// IMP=0x000000000000d065
- (id)fetch:(id)arg1 args:(struct __va_list_tag [1])arg2;	// IMP=0x000000000000cff0
- (id)fetch:(id)arg1;	// IMP=0x000000000000cf4c
- (_Bool)executeRaw:(id)arg1;	// IMP=0x000000000000cee3
- (_Bool)execute:(id)arg1 args:(struct __va_list_tag [1])arg2;	// IMP=0x000000000000ce70
- (_Bool)execute:(id)arg1;	// IMP=0x000000000000cdcc
- (void)assertOnQueue;	// IMP=0x000000000000cd8b
- (_Bool)_validateIsRunningWithCorrectPersona;	// IMP=0x000000000000ccb3
- (void)autovacuumIfNeeded;	// IMP=0x000000000000caf2
- (_Bool)needsAutovacuum;	// IMP=0x000000000000c9f3
- (long long)sizeInBytes;	// IMP=0x000000000000c958
- (void)brc_close;	// IMP=0x000000000000c941
- (void)brc_closeCrashingOnFailure:(_Bool)arg1;	// IMP=0x000000000000c7cb
- (void)usePacedBatchingOnTargetQueue:(id)arg1 withInterval:(double)arg2 changeCount:(int)arg3;	// IMP=0x000000000000c753
- (_Bool)_shouldFlushWithChangeCount:(int)arg1;	// IMP=0x000000000000c527
- (void)disableProfilingForQueriesInBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000000c41f
- (_Bool)executeWithErrorHandler:(CDUnknownBlockType)arg1 sql:(id)arg2;	// IMP=0x000000000000c272
- (_Bool)executeWithSlowStatementRadar:(id)arg1 sql:(id)arg2;	// IMP=0x000000000000c080
- (_Bool)executeWithExpectedIndex:(id)arg1 sql:(id)arg2;	// IMP=0x000000000000bf19
- (id)fetchWithSlowStatementRadar:(id)arg1 objectOfClass:(Class)arg2 sql:(id)arg3;	// IMP=0x000000000000bd29
- (id)fetchWithSlowStatementRadar:(id)arg1 sql:(id)arg2;	// IMP=0x000000000000bb37
- (void)setProfilingHook:(CDUnknownBlockType)arg1;	// IMP=0x000000000000ba22
- (void)flushToMakeEditsVisibleToIPCReaders;	// IMP=0x000000000000b9db
- (_Bool)attachDBAtPath:(id)arg1 as:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000b8ba
@property(nonatomic) _Bool profilingEnabled;
- (long long)changes;	// IMP=0x000000000000b1ed
- (_Bool)openAtURL:(id)arg1 withFlags:(int)arg2 error:(id *)arg3;	// IMP=0x000000000000b10f
- (void)_setLockedHandler;	// IMP=0x000000000000ae9e
- (void)_setErrorHandlerWithDBCorruptionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000aac6
- (id)initWithLabel:(id)arg1 dbCorruptionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000a9bd
- (id)init;	// IMP=0x000000000000a9a7

// Remaining properties
@property(copy, nonatomic) CDUnknownBlockType lockedHandler; // @dynamic lockedHandler;

@end

