//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSDBThreadedRecordStore, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface IDSKVStore : NSObject
{
    NSObject<OS_dispatch_queue> *_ivarQueue;	// 8 = 0x8
    NSObject<OS_dispatch_source> *_databaseCloseTimer;	// 16 = 0x10
    double _databaseLastUpdateTime;	// 24 = 0x18
    unsigned int _dataProtectionClass;	// 32 = 0x20
    NSString *_storeName;	// 40 = 0x28
    NSString *_path;	// 48 = 0x30
    CSDBThreadedRecordStore *_messageStore;	// 56 = 0x38
}

+ (void)_initializeMessageStoreIfNeeded:(id)arg1 path:(id)arg2 dataProtectionClass:(unsigned int)arg3;	// IMP=0x0000000000002f7d
+ (void)_invalidateCachesForMessageStore:(id)arg1;	// IMP=0x0000000000002c53
- (void).cxx_destruct;	// IMP=0x00000000000043a7
@property(nonatomic) unsigned int dataProtectionClass; // @synthesize dataProtectionClass=_dataProtectionClass;
@property(retain, nonatomic) CSDBThreadedRecordStore *messageStore; // @synthesize messageStore=_messageStore;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(copy, nonatomic) NSString *storeName; // @synthesize storeName=_storeName;
- (void)_onIvarQueue_performBlock:(CDUnknownBlockType)arg1 initializeStore:(_Bool)arg2 waitUntilDone:(_Bool)arg3;	// IMP=0x0000000000003f9c
- (void)_onIvarQueue_performBlock:(CDUnknownBlockType)arg1 initializeStore:(_Bool)arg2;	// IMP=0x0000000000003f87
- (void)deleteDatabase;	// IMP=0x0000000000003f0a
- (void)closeDatabaseSynchronously:(_Bool)arg1;	// IMP=0x0000000000003e09
- (void)_setDatabaseCloseTimerOnIvarQueue;	// IMP=0x0000000000003cb7
- (void)_clearDatabaseCloseTimerOnIvarQueue;	// IMP=0x0000000000003c81
- (void)__closeDatabaseOnIvarQueue;	// IMP=0x000000000000389c
- (void)_performInitialHousekeepingOnIvarQueue;	// IMP=0x0000000000002c74
- (_Bool)deleteBatchWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000002b1c
- (_Bool)deleteEntriesBeforeDate:(id)arg1 afterDate:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000002a41
- (id)datasUpToLimit:(unsigned long long)arg1 deleteContext:(id *)arg2 error:(id *)arg3;	// IMP=0x0000000000002938
- (id)dataForKey:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000027f9
- (_Bool)persistData:(id)arg1 forKey:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000271b
- (void)_onIvarQueue_deleteSerializedValueForKey:(id)arg1 valueType:(BOOL)arg2;	// IMP=0x0000000000002578
- (void)_onIvarQueue_deleteDatesBefore:(id)arg1 after:(id)arg2;	// IMP=0x00000000000023b8
- (void)_onIvarQueue_deleteUpToRowID:(unsigned long long)arg1 valueType:(BOOL)arg2;	// IMP=0x000000000000226d
- (id)_onIvarQueue_serializedValuesUpToLimit:(unsigned long long)arg1 valueType:(BOOL)arg2 deleteContext:(id *)arg3;	// IMP=0x0000000000001eab
- (id)_onIvarQueue_serializedValueForKey:(id)arg1 valueType:(BOOL)arg2;	// IMP=0x0000000000001b59
- (void)_onIvarQueue_persistSerializedValue:(id)arg1 forKey:(id)arg2 valueType:(BOOL)arg3;	// IMP=0x00000000000017e5
- (id)initWithPath:(id)arg1 storeName:(id)arg2 dataProtectionClass:(unsigned int)arg3;	// IMP=0x0000000000001520

@end

