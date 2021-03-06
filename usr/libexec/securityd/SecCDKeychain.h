//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSManagedObjectContext, NSMutableDictionary, NSPersistentStoreCoordinator, NSURL;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SecCDKeychain : NSObject
{
    NSURL *_persistentStoreBaseURL;	// 8 = 0x8
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;	// 16 = 0x10
    NSManagedObjectContext *_managedObjectContext;	// 24 = 0x18
    NSMutableDictionary *_managedItemTypeDict;	// 32 = 0x20
    NSMutableDictionary *_itemTypeDict;	// 40 = 0x28
    _Bool _encryptDatabase;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_queue;	// 56 = 0x38
    NSArray *_classAPersistentStores;	// 64 = 0x40
}

+ (id)lookupValueTypeForObject:(id)arg1;	// IMP=0x004000000004427a
- (void).cxx_destruct;	// IMP=0x002000000003dcbb
- (id)managedItemWithItem:(id)arg1 withManagedObjectContext:(id)arg2 error:(id *)arg3;	// IMP=0x001000000003d8c8
- (id)itemTypeForItemTypeName:(id)arg1;	// IMP=0x001000000003d8b2
- (void)_registerItemTypeForTesting:(id)arg1;	// IMP=0x001000000003d820
- (void)registerItemType:(id)arg1 withManagedObjectContext:(id)arg2;	// IMP=0x001000000003d4f2
- (void)deleteItemWithPersistentID:(id)arg1 withConnection:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000003d3aa
- (void)fetchItemsWithValue:(id)arg1 forLookupKey:(id)arg2 ofType:(id)arg3 withConnection:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x001000000003d210
- (void)fetchItemForPersistentID:(id)arg1 withConnection:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000003d0c8
- (id)fetchManagedItemForPersistentID:(id)arg1 withManagedObjectContext:(id)arg2 error:(id *)arg3;	// IMP=0x001000000003cf8a
- (void)insertItems:(id)arg1 withConnection:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000003ce42
- (_Bool)validateItemOwner:(id)arg1 withConnection:(id)arg2 withError:(id *)arg3;	// IMP=0x001000000003cb45
- (id)primaryKeyNameForItemTypeName:(id)arg1;	// IMP=0x001000000003cb20
- (void)performOnManagedObjectQueueAndWait:(CDUnknownBlockType)arg1;	// IMP=0x001000000003ca93
- (void)performOnManagedObjectQueue:(CDUnknownBlockType)arg1;	// IMP=0x001000000003c9c7
- (id)_queue;	// IMP=0x001000000003c9b9
- (void)_onQueueDropClassAPersistentStore;	// IMP=0x001000000003c7a0
- (id)_onQueueGetManagedObjectContextWithError:(id *)arg1;	// IMP=0x001000000003c3fd
- (id)_onQueueGetDatabaseKeyDataWithError:(id *)arg1;	// IMP=0x001000000003bd14
- (id)initWithStorageURL:(id)arg1 modelURL:(id)arg2 encryptDatabase:(_Bool)arg3;	// IMP=0x001000000003bb17

@end

