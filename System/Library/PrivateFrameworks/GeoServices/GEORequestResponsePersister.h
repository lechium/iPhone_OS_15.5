//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOSQLiteDB;
@protocol OS_dispatch_source;

@interface GEORequestResponsePersister : NSObject
{
    GEOSQLiteDB *_db;	// 8 = 0x8
    NSObject<OS_dispatch_source> *_pruneTimer;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000010b9fc9
- (unsigned int)_restoreOrphanedEntries:(id *)arg1;	// IMP=0x00000000010b9551
- (unsigned int)restoreOrphanedEntries:(id *)arg1;	// IMP=0x00000000010b93b4
- (void)_pruneDBToSize:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x00000000010b9252
- (void)pruneDBToSize:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x00000000010b911c
- (void)_pruneDBToDefaultSize:(id *)arg1;	// IMP=0x00000000010b90e3
- (void)pruneDBToDefaultSize:(id *)arg1;	// IMP=0x00000000010b8fbc
- (void)_pruneEntriesOlderThan:(id)arg1 error:(id *)arg2;	// IMP=0x00000000010b8e66
- (void)_pruneDBToDefaultAge:(id *)arg1;	// IMP=0x00000000010b8dc6
- (void)pruneDBToDefaultAge:(id *)arg1;	// IMP=0x00000000010b8c9f
- (void)pruneEntriesOlderThan:(id)arg1 error:(id *)arg2;	// IMP=0x00000000010b8b2d
- (void)_runAllPruners:(id *)arg1;	// IMP=0x00000000010b8af0
- (void)runAllPruners:(id *)arg1;	// IMP=0x00000000010b89c9
- (unsigned long long)getTotalSize:(id *)arg1;	// IMP=0x00000000010b86c8
- (id)findResponse:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000010b83b4
- (id)findRequest:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000010b80a0
- (id)enumerateEntriesOfType:(int)arg1 inRange:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000010b7cb5
- (id)enumerateEntriesOfType:(int)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000010b79dd
- (id)enumerateEntriesInRange:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000010b7755
- (id)enumerateAllEntriesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000010b7416
- (void)persistResponseTaskCanceled:(id)arg1;	// IMP=0x00000000010b72bc
- (void)persistResponseTask:(id)arg1 error:(id)arg2;	// IMP=0x00000000010b7127
- (void)persistResponseTask:(id)arg1 response:(id)arg2;	// IMP=0x00000000010b6fb3
- (void)persistRequestTask:(id)arg1 url:(id)arg2 request:(id)arg3;	// IMP=0x00000000010b6c76
- (void)_persistEvent:(id)arg1;	// IMP=0x00000000010b6628
- (void)_reschedulePruner;	// IMP=0x00000000010b64af
- (void)dealloc;	// IMP=0x00000000010b63ef
- (id)init;	// IMP=0x00000000010b5e35

@end
