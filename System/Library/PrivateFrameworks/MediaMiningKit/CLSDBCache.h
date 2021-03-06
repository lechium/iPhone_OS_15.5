//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, NSManagedObjectModel, NSPersistentStoreCoordinator, NSString, NSURL;

@interface CLSDBCache : NSObject
{
    _Bool _supportsVersioning;	// 8 = 0x8
    NSURL *_diskCacheURL;	// 16 = 0x10
    NSString *_dataModelName;	// 24 = 0x18
    NSManagedObjectModel *_managedObjectModel;	// 32 = 0x20
    NSManagedObjectContext *_managedObjectContext;	// 40 = 0x28
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;	// 48 = 0x30
}

+ (_Bool)locationIsValidForDatabaseAtURL:(id)arg1;	// IMP=0x000000000003593f
+ (id)urlForGraphApplicationData;	// IMP=0x00000000000356c2
+ (id)diskCacheWithName:(id)arg1;	// IMP=0x0000000000035671
+ (id)defaultCache;	// IMP=0x00000000000354a5
+ (id)defaultCacheName;	// IMP=0x000000000003549c
+ (id)currentApplicationDataUrlQueue;	// IMP=0x000000000003543d
+ (id)applicationDataUrlQueueWithURL:(id)arg1;	// IMP=0x00000000000353db
+ (void)initialize;	// IMP=0x0000000000035326
- (void).cxx_destruct;	// IMP=0x0000000000034c2e
@property(nonatomic) _Bool supportsVersioning; // @synthesize supportsVersioning=_supportsVersioning;
@property(readonly, copy, nonatomic) NSURL *diskCacheURL; // @synthesize diskCacheURL=_diskCacheURL;
@property(readonly, copy, nonatomic) NSString *dataModelName; // @synthesize dataModelName=_dataModelName;
- (void)invalidateMemoryCaches;	// IMP=0x0000000000034b86
- (void)invalidateDiskCaches;	// IMP=0x0000000000034b08
- (void)_resetCoreDataStack;	// IMP=0x0000000000034ab3
- (void)_saveAsync;	// IMP=0x0000000000034a35
- (_Bool)save;	// IMP=0x0000000000034962
- (_Bool)_save;	// IMP=0x0000000000034814
@property(readonly, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator; // @synthesize persistentStoreCoordinator=_persistentStoreCoordinator;
@property(readonly, nonatomic) NSManagedObjectModel *managedObjectModel; // @synthesize managedObjectModel=_managedObjectModel;
@property(readonly, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
- (id)formatVersion;	// IMP=0x0000000000033bd3
- (id)initAtURL:(id)arg1;	// IMP=0x0000000000033b35
- (id)initWithDiskCacheName:(id)arg1;	// IMP=0x00000000000338a5
- (id)initWithDiskCacheName:(id)arg1 dataModelName:(id)arg2;	// IMP=0x0000000000033846

@end

