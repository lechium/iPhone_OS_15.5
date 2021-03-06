//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, NSManagedObjectModel, NSPersistentStoreCoordinator, NSString;

@interface SLDatabase : NSObject
{
    NSString *_modelPath;	// 8 = 0x8
    NSString *_storePath;	// 16 = 0x10
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;	// 24 = 0x18
    NSManagedObjectContext *_managedObjectContext;	// 32 = 0x20
    NSManagedObjectModel *_managedObjectModel;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000003405c
- (void)_removeFilesAtURL:(id)arg1 forStoreCoordinator:(id)arg2;	// IMP=0x0000000000033f6a
- (id)_managedObjectModel;	// IMP=0x0000000000033ecf
- (id)_persistentStoreCoordinator;	// IMP=0x0000000000033ba9
- (void)_setUpManagedObjectContext;	// IMP=0x0000000000033b3b
- (_Bool)save:(id *)arg1;	// IMP=0x0000000000033b25
- (id)newObjectForEntityNamed:(id)arg1;	// IMP=0x0000000000033afc
- (id)fetchObjectsForEntityNamed:(id)arg1 withPredicate:(id)arg2;	// IMP=0x0000000000033a2b
- (id)initWithStoreName:(id)arg1 modelPath:(id)arg2;	// IMP=0x000000000003394b

@end

