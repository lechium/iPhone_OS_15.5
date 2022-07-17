//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BookDataStore/BDSCloudKitSupportSignOutDeleteWithoutInstance-Protocol.h>

@class NSManagedObjectContext, NSPersistentStoreCoordinator;

@interface BCCloudDataSource : NSObject <BDSCloudKitSupportSignOutDeleteWithoutInstance>
{
    NSManagedObjectContext *_managedObjectContext;	// 8 = 0x8
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;	// 16 = 0x10
}

+ (id)_sharedLegacyRootDirectoryURL;	// IMP=0x0000000000047d17
+ (id)_sharedRootDirectoryURL;	// IMP=0x0000000000047cbb
+ (id)_documentsDirectoryURL;	// IMP=0x0000000000047c4c
+ (void)deleteCloudDataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000047b0c
- (void).cxx_destruct;	// IMP=0x0000000000048873
@property(retain, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator; // @synthesize persistentStoreCoordinator=_persistentStoreCoordinator;
@property(retain, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
- (_Bool)_addStoreAtURL:(id)arg1;	// IMP=0x00000000000485db
- (void)_migrateAndDestroyStoreAtLegacyURL:(id)arg1 toModernURL:(id)arg2;	// IMP=0x0000000000048369
- (void)_deleteDirectoryForStoreAtURL:(id)arg1;	// IMP=0x0000000000048287
- (void)_createDirectoryForStoreAtURL:(id)arg1;	// IMP=0x000000000004819d
- (_Bool)_directoryExistsForStoreAtURL:(id)arg1;	// IMP=0x0000000000048154
- (void)_setupManagedObjectContext;	// IMP=0x00000000000480ef
- (_Bool)_setupPersistentStoreWithRootDirectoryURL:(id)arg1 legacyRootDirectoryURL:(id)arg2 nameOnDisk:(id)arg3;	// IMP=0x0000000000047e93
- (void)_logIf:(_Bool)arg1 error:(id)arg2 operation:(id)arg3;	// IMP=0x0000000000047e10
- (id)_persistentStoreOptions;	// IMP=0x0000000000047d73
- (id)initWithManagedObjectModel:(id)arg1 rootDirectoryURL:(id)arg2 legacyRootDirectoryURL:(id)arg3 nameOnDisk:(id)arg4;	// IMP=0x0000000000047944
- (id)initWithManagedObjectModel:(id)arg1 nameOnDisk:(id)arg2;	// IMP=0x0000000000047884
- (id)initWithManagedObjectModel:(id)arg1;	// IMP=0x000000000004777e

@end
