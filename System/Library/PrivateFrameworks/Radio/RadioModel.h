//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Radio/NSFetchedResultsControllerDelegate-Protocol.h>

@class BKSProcessAssertion, NSArray, NSFetchRequest, NSFetchedResultsController, NSManagedObjectContext, NSManagedObjectModel, NSMapTable, NSOperationQueue, NSPersistentStoreCoordinator, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface RadioModel : NSObject <NSFetchedResultsControllerDelegate>
{
    NSObject<OS_dispatch_queue> *_accessSerialQueue;	// 8 = 0x8
    NSOperationQueue *_backgroundCleanupQueue;	// 16 = 0x10
    BKSProcessAssertion *_backgroundProcessAssertion;	// 24 = 0x18
    long long _backgroundTaskCount;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_backgroundTaskInvalidateTimerSource;	// 40 = 0x28
    NSManagedObjectContext *_context;	// 48 = 0x30
    _Bool _isBackgroundModel;	// 56 = 0x38
    NSManagedObjectModel *_model;	// 64 = 0x40
    int _modelChangedToken;	// 72 = 0x48
    _Bool _modelChangedTokenIsValid;	// 76 = 0x4c
    int _modelDeletedToken;	// 80 = 0x50
    _Bool _modelDeletedTokenIsValid;	// 84 = 0x54
    NSFetchedResultsController *_stationFetchedResultsController;	// 88 = 0x58
    NSFetchRequest *_stationFetchRequest;	// 96 = 0x60
    NSMapTable *_stationToSkipControllerMapTable;	// 104 = 0x68
    NSPersistentStoreCoordinator *_storeCoordinator;	// 112 = 0x70
    long long _transactionCount;	// 120 = 0x78
}

+ (id)_radioDirectoryPath;	// IMP=0x0000000000016744
+ (id)_radioDatabasePath;	// IMP=0x00000000000166ed
+ (void)_postAccountDidDeauthenticateNotification;	// IMP=0x00000000000166ca
+ (id)_persistentStoreConfigurationOptions;	// IMP=0x00000000000165e6
+ (void)deleteAllData;	// IMP=0x000000000001645e
+ (id)sharedModel;	// IMP=0x000000000001642e
+ (id)backgroundModel;	// IMP=0x00000000000163cb
- (void).cxx_destruct;	// IMP=0x00000000000136af
- (void)_setDatabasePropertyValue:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000013571
- (id)_setByReplacingManagedObjectsInSet:(id)arg1;	// IMP=0x0000000000013325
- (void)_resetModel;	// IMP=0x0000000000013186
- (void)_prepareModel;	// IMP=0x0000000000012f8e
- (void)_postContextDidChangeNotification:(id)arg1;	// IMP=0x0000000000012a19
- (void)_performTransactionAndSave:(_Bool)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000012975
- (void)_endBackgroundTaskAssertion;	// IMP=0x000000000001292a
- (id)_databasePropertyValueForKey:(id)arg1;	// IMP=0x00000000000127a2
- (void)_createRadioDirectoryAndDatabaseIfNecessary;	// IMP=0x0000000000011ac3
- (unsigned long long)_numberOfSkipsUsedWithSkipTimestamps:(id)arg1 currentTimestamp:(double)arg2 skipInterval:(double)arg3 returningEarliestSkipTimestamp:(double *)arg4;	// IMP=0x00000000000118e5
- (void)_defaultRadioModelInitialization;	// IMP=0x00000000000117bb
- (void)_beginBackgroundTaskAssertion;	// IMP=0x0000000000011770
- (id)_arrayByReplacingManagedObjectsInArray:(id)arg1;	// IMP=0x0000000000011524
- (void)setDatabaseVersion:(long long)arg1;	// IMP=0x00000000000114be
- (long long)databaseVersion;	// IMP=0x0000000000011473
- (id)context;	// IMP=0x0000000000011465
@property(readonly, nonatomic) NSArray *userStations;
- (id)stationWithStationStringID:(id)arg1;	// IMP=0x00000000000111ff
- (id)stationWithPersistentID:(long long)arg1;	// IMP=0x0000000000010f6f
- (id)stationWithID:(long long)arg1;	// IMP=0x0000000000010dd8
- (id)stationWithHash:(id)arg1;	// IMP=0x0000000000010c50
@property(copy, nonatomic) NSArray *stationSortOrdering;
@property(readonly, nonatomic) NSArray *stations;
- (void)setTrackPlaybackDescriptorQueue:(id)arg1 forStation:(id)arg2;	// IMP=0x000000000001094d
- (void)setReportProblemIssueTypes:(id)arg1;	// IMP=0x00000000000107c7
@property(nonatomic) unsigned long long globalVersion;
@property(copy, nonatomic) NSString *globalHash;
@property(nonatomic) unsigned long long authenticatedAccountIdentifier;
@property(readonly, copy, nonatomic) NSArray *reportProblemIssueTypes;
@property(readonly, nonatomic) NSArray *previewStations;
- (void)performWriteTransactionWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000103a6
- (void)performTransactionWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000001038f
- (id)newStationWithDictionary:(id)arg1;	// IMP=0x000000000000eaa7
- (id)newPreviewStationWithDictionary:(id)arg1;	// IMP=0x000000000000e996
- (id)newFeaturedStationWithDictionary:(id)arg1;	// IMP=0x000000000000e885
@property(readonly, nonatomic) NSArray *featuredStations;
- (void)deleteStation:(id)arg1;	// IMP=0x000000000000e5c9
- (void)deleteStationWithID:(long long)arg1;	// IMP=0x000000000000e576
- (void)deletePreviewStation:(id)arg1;	// IMP=0x000000000000e564
- (void)deleteAllData;	// IMP=0x000000000000e54a
- (id)convertObjectsInSet:(id)arg1;	// IMP=0x000000000000e3a3
- (id)convertObjects:(id)arg1;	// IMP=0x000000000000e1fc
- (id)convertObject:(id)arg1;	// IMP=0x000000000000de52
@property(readonly, nonatomic) NSArray *allStations;
- (void)_contextDidSaveNotification:(id)arg1;	// IMP=0x000000000000dbca
- (void)controllerDidChangeContent:(id)arg1;	// IMP=0x000000000000dbc4
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;	// IMP=0x000000000000dbbe
- (void)dealloc;	// IMP=0x000000000000dae0
- (id)_initBackgroundModelWithPersistentStoreCoordinator:(id)arg1;	// IMP=0x000000000000da28
- (id)_init;	// IMP=0x000000000000d9c7
- (id)init;	// IMP=0x000000000000d988

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
