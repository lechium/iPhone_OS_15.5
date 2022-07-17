//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSManagedObjectModel, NSPersistentHistoryToken, NSPersistentStoreCoordinator, NSString;

@interface BLJaliscoServerSource : NSObject
{
    long long _modelSentinel;	// 8 = 0x8
    long long _pscSentinel;	// 16 = 0x10
    NSPersistentStoreCoordinator *_psc;	// 24 = 0x18
    NSManagedObjectModel *_model;	// 32 = 0x20
    NSString *_identifier;	// 40 = 0x28
    NSString *_databaseContainerPath;	// 48 = 0x30
}

+ (void)setSharedSource:(id)arg1;	// IMP=0x0000000000035463
+ (id)sharedSource;	// IMP=0x00000000000353c0
+ (void)preWarmSync;	// IMP=0x0000000000035348
- (void).cxx_destruct;	// IMP=0x0000000000039928
@property(retain, nonatomic) NSString *databaseContainerPath; // @synthesize databaseContainerPath=_databaseContainerPath;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)fetchRequestForAllBookletsIDsWithParentStoreIDs:(id)arg1;	// IMP=0x0000000000039756
- (id)fetchRequestForBookletItemsForStoreIDs:(id)arg1;	// IMP=0x00000000000395ff
- (id)predicateForStoreAccountID:(id)arg1 storeIDs:(id)arg2;	// IMP=0x00000000000394ad
- (id)fetchRequestForNotInStoreAccountIDs:(id)arg1;	// IMP=0x00000000000393b7
- (id)fetchRequestForBuyParameters:(id)arg1;	// IMP=0x00000000000392eb
- (id)predicateForNeedsImport:(_Bool)arg1;	// IMP=0x000000000003929f
- (id)fetchRequestForAllStoreIDs:(id)arg1 dsids:(id)arg2 isImported:(_Bool)arg3 includeHidden:(_Bool)arg4;	// IMP=0x000000000003914c
- (id)fetchRequestForAllStoreIDs:(id)arg1 dsids:(id)arg2 isImported:(_Bool)arg3;	// IMP=0x0000000000039134
- (id)fetchRequestForNeedsImport:(_Bool)arg1;	// IMP=0x0000000000039084
- (id)fetchRequestForAllStoreIDs:(id)arg1;	// IMP=0x0000000000038f1e
- (id)fetchRequestForAllStoreIDsWithNonEmptyPurchasedToken:(id)arg1 dsids:(id)arg2;	// IMP=0x0000000000038d63
- (id)fetchRequestForAllStoreIDs:(id)arg1 dsids:(id)arg2;	// IMP=0x0000000000038bd9
- (id)fetchRequestForStoreIDs:(id)arg1 dsids:(id)arg2;	// IMP=0x0000000000038a4f
- (id)fetchRequestForAllCloudIDs:(id)arg1 dsids:(id)arg2;	// IMP=0x00000000000388c5
- (id)predicateForBookletItems:(_Bool)arg1 dsids:(id)arg2;	// IMP=0x0000000000038702
- (id)predicateForItems:(_Bool)arg1 dsids:(id)arg2;	// IMP=0x000000000003853f
- (id)_itemsFetchRequestIncludingHiddenItems:(_Bool)arg1 dsids:(id)arg2;	// IMP=0x00000000000383ce
- (id)itemsFetchRequestForDSIDs:(id)arg1;	// IMP=0x00000000000383b7
- (id)allItemsFetchRequestForDSIDs:(id)arg1;	// IMP=0x000000000003839d
- (id)serverItemWithStoreID:(id)arg1 inDatabaseWithIdentifier:(id)arg2 forDSID:(id)arg3 fromManagedObjectContext:(id)arg4 error:(id *)arg5;	// IMP=0x0000000000038262
- (id)existingServerItemWithPredicate:(id)arg1 fromManagedObjectContext:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000038139
- (id)existingServerDatabaseWithPredicate:(id)arg1 fromManagedObjectContext:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000038010
- (id)existingServerInfoWithPredicate:(id)arg1 fromManagedObjectContext:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000037ee7
- (id)existingEntitiesWithName:(id)arg1 matchingPredicate:(id)arg2 fromManagedObjectContext:(id)arg3 limit:(unsigned long long)arg4 error:(id *)arg5;	// IMP=0x0000000000037d5d
- (id)serverDatabaseForDSID:(id)arg1 withIdentifier:(id)arg2 fromManagedObjectContext:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000037c75
- (id)serverDatabaseForDSID:(id)arg1 fromManagedObjectContext:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000037b95
- (void)refreshStoreWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000037728
- (_Bool)truncateDatabaseError:(id *)arg1;	// IMP=0x000000000003730e
- (id)serverInfoForDSID:(id)arg1 fromManagedObjectContext:(id)arg2 error:(id *)arg3;	// IMP=0x000000000003722e
- (id)newManagedObjectContextWithPrivateQueueConcurrency;	// IMP=0x0000000000037163
- (id)newManagedObjectContext;	// IMP=0x000000000003701e
@property(readonly, nonatomic) NSPersistentHistoryToken *currentJaliscoHistoryToken;
- (id)persistentStoreCoordinator;	// IMP=0x0000000000036eaa
- (id)persistentStoreCoordinatorWithError:(id *)arg1;	// IMP=0x00000000000365af
- (_Bool)_setupCoreDataStack;	// IMP=0x00000000000363ed
- (id)_persistentStoreOptions;	// IMP=0x0000000000036322
- (_Bool)p_createPersistentDirectoryIfNeeded;	// IMP=0x0000000000036244
- (_Bool)p_databaseExistsAtSharediBooksContainerLocation;	// IMP=0x00000000000361c9
- (_Bool)p_databaseExistsAtPrivateiBooksContainerLocation;	// IMP=0x000000000003614e
- (id)p_persistentStoreFullPathAtSharediBooksLocation;	// IMP=0x00000000000360cd
- (id)p_persistentStoreFullPathAtPrivateiBooksLocation;	// IMP=0x000000000003604c
- (id)p_persistentStoreDirectory;	// IMP=0x0000000000035f7f
- (id)p_oldPersistentStoreDirectory;	// IMP=0x0000000000035eb1
- (id)managedObjectModel;	// IMP=0x0000000000035d47
- (void)dealloc;	// IMP=0x0000000000035cee
- (_Bool)workaround_18397698;	// IMP=0x000000000003561d
- (id)init;	// IMP=0x00000000000355c1
- (id)initWithIdentifier:(id)arg1 databaseContainerPath:(id)arg2;	// IMP=0x0000000000035477

@end
