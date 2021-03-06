//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SSSQLiteDatabase;

@interface SSVPlayActivityTable : NSObject
{
    SSSQLiteDatabase *_database;	// 8 = 0x8
}

+ (_Bool)_setupDatabase:(id)arg1;	// IMP=0x000000000018ccbc
+ (id)_propertiesDatabaseTableName;	// IMP=0x000000000018ccaf
+ (id)_eventsDatabaseTableName;	// IMP=0x000000000018cca2
+ (id)databasePath;	// IMP=0x000000000018bbda
- (void).cxx_destruct;	// IMP=0x000000000018e9fd
- (id)_valueForDatabasePropertyKey:(id)arg1;	// IMP=0x000000000018e77b
- (_Bool)_setValue:(id)arg1 forDatabasePropertyKey:(id)arg2;	// IMP=0x000000000018e05b
- (id)_revisionsIndexSetUsingPersisentIDGenerationBlock:(CDUnknownBlockType)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000018dcdb
- (_Bool)_getPlayActivityEvents:(id *)arg1 relevantRevisionsIndexSet:(id *)arg2 withStartRevision:(unsigned long long)arg3 endRevision:(unsigned long long)arg4 storeAccountID:(unsigned long long)arg5 shouldFilterStoreAccountID:(_Bool)arg6 additionalRevisionsIndexSet:(id)arg7 ignoredRevisionsIndexSet:(id)arg8 error:(id *)arg9;	// IMP=0x000000000018d28e
- (id)revisionsIndexSetForPlayActivityEventPersistentIDs:(id)arg1;	// IMP=0x000000000018cb9f
- (id)revisionsIndexSetForPlayActivityEvents:(id)arg1;	// IMP=0x000000000018ca99
- (_Bool)removePlayActivityEventsUpToRevision:(unsigned long long)arg1 returningError:(id *)arg2;	// IMP=0x000000000018c54d
- (_Bool)getPlayActivityEvents:(id *)arg1 relevantRevisionsIndexSet:(id *)arg2 withStartRevision:(unsigned long long)arg3 endRevision:(unsigned long long)arg4 storeAccountID:(unsigned long long)arg5 additionalRevisionsIndexSet:(id)arg6 ignoredRevisionsIndexSet:(id)arg7 error:(id *)arg8;	// IMP=0x000000000018c510
- (_Bool)getPlayActivityEvents:(id *)arg1 relevantRevisionsIndexSet:(id *)arg2 withStartRevision:(unsigned long long)arg3 endRevision:(unsigned long long)arg4 additionalRevisionsIndexSet:(id)arg5 ignoredRevisionsIndexSet:(id)arg6 error:(id *)arg7;	// IMP=0x000000000018c4d3
- (void)performTransactionWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000018c425
- (_Bool)insertPlayActivityEvent:(id)arg1 withRevision:(unsigned long long)arg2 returningError:(id *)arg3;	// IMP=0x000000000018bcb7
@property(readonly, copy, nonatomic) NSString *eventsRevisionVersionToken;
@property(nonatomic) unsigned long long currentEventsRevision;
- (id)init;	// IMP=0x000000000018b9e0

@end

