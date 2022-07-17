//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSSet, NSString, NSURL, PDPool, PDSQLiteDatabase;
@protocol OS_dispatch_queue;

@interface PDDatabase : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    _Bool _invalidated;	// 16 = 0x10
    NSString *_threadDBKey;	// 24 = 0x18
    PDPool *_dbPool;	// 32 = 0x20
    NSSet *_changeTrackedTableNames;	// 40 = 0x28
    struct os_unfair_recursive_lock_s _lock;	// 48 = 0x30
    NSURL *_databaseURL;	// 56 = 0x38
}

+ (id)whereSqlForTrackingEntityClass:(Class)arg1 whereClause:(id)arg2;	// IMP=0x00100000000fa7d2
+ (id)countWhereSqlForTrackingEntityClass:(Class)arg1 whereClause:(id)arg2;	// IMP=0x00100000000fa66e
+ (id)whereSQLForArray:(id)arg1 prefix:(id)arg2;	// IMP=0x00100000000fc564
+ (void)registerEntity:(Class)arg1;	// IMP=0x00100000000fc4a7
+ (Class)entityNamed:(id)arg1;	// IMP=0x00100000000fc417
+ (id)nameOfEntity:(Class)arg1;	// IMP=0x00100000000fc3ca
+ (id)registeredEntities;	// IMP=0x00100000000fc239
+ (id)recordTypesOfEntitiesTrackingUserActivity;	// IMP=0x00100000000fc0a9
+ (void)registerEntities;	// IMP=0x00100000001111ad
- (void).cxx_destruct;	// IMP=0x0010000000116456
@property(copy, nonatomic) NSURL *databaseURL; // @synthesize databaseURL=_databaseURL;
- (id)poolItemForPool:(id)arg1;	// IMP=0x0010000000115fb4
- (_Bool);	// IMP=0x0010000000115adb
- (_Bool)migrate;	// IMP=0x001000000011568b
- (_Bool)_updateFileProtectionAttribs;	// IMP=0x0010000000115125
- (void)_delete;	// IMP=0x0010000000114ec9
- (id)_databaseFileURLs;	// IMP=0x0010000000114c42
- (void)_notifyOfDataChange:(id)arg1 changeTime:(id)arg2 changedRowCount:(long long)arg3;	// IMP=0x001000000011495e
- (_Bool)shouldTrackChangesForTable:(id)arg1;	// IMP=0x00100000001148b5
- (void)trackChangesForTables:(id)arg1 replaceExisting:(_Bool)arg2;	// IMP=0x00100000001147d6
- (void)invalidate;	// IMP=0x0010000000114796
@property(readonly, nonatomic, getter=isInvalidated) _Bool invalidated;
- (_Bool)performTransaction:(CDUnknownBlockType)arg1 forWriting:(_Bool)arg2;	// IMP=0x00100000001140a3
- (_Bool)performWriteTransaction:(CDUnknownBlockType)arg1;	// IMP=0x001000000011408c
- (_Bool)performReadTransaction:(CDUnknownBlockType)arg1;	// IMP=0x0010000000113fe7
- (_Bool)migrateIfNeeded;	// IMP=0x0010000000113ce3
- (_Bool)performFrameworkMigrationIfNeeded;	// IMP=0x0010000000113b3f
- (_Bool)truncate;	// IMP=0x0010000000113999
- (void)cleanupAssociatedObjects;	// IMP=0x0010000000113963
- (void)deleteDatabase;	// IMP=0x0010000000113935
@property(readonly, copy, nonatomic) NSDictionary *stats;
- (id)dbPool;	// IMP=0x0010000000113841
@property(retain, nonatomic) PDSQLiteDatabase *currentDB;
- (void)unlock;	// IMP=0x0010000000113710
- (void)lock;	// IMP=0x0010000000113700
- (void)dealloc;	// IMP=0x00100000001136d1
- (id)initWithDatabaseURL:(id)arg1;	// IMP=0x0010000000113555
- (id)init;	// IMP=0x0010000000113498
- (id)createASMSearchOperationUsingSearchSpecification:(id)arg1 forNoUserMode:(_Bool)arg2 enumerationBlock:(CDUnknownBlockType)arg3 finishBlock:(CDUnknownBlockType)arg4;	// IMP=0x001000000000fd8a
- (id)personIDsForClassMembersMatchingConstraintsForSearchSpecification:(id)arg1;	// IMP=0x001000000000fa7e
- (id)organizationSearchPredicateForSearchSpec:(id)arg1;	// IMP=0x001000000000f9d3
- (id)locationIDsWithoutPrivilege:(id)arg1 onPersonIDs:(id)arg2;	// IMP=0x001000000000f880
- (id)locationIDsWithPrivilege:(id)arg1 onPersonIDs:(id)arg2;	// IMP=0x001000000000f85a
- (id)locationIDsWithRoleType:(long long)arg1 onPersonIDs:(id)arg2;	// IMP=0x001000000000f834
- (id)locationIDsMatchingConstraintsForSearchSpecification:(id)arg1;	// IMP=0x001000000000f4df
- (id)locationSearchPredicateForSearchSpec:(id)arg1;	// IMP=0x001000000000f3d7
- (id)personIDsWithoutPrivilege:(id)arg1 atLocationIDs:(id)arg2;	// IMP=0x001000000000f289
- (id)personIDsWithPrivilege:(id)arg1 atLocationIDs:(id)arg2;	// IMP=0x001000000000f263
- (id)personIDsWithRoleType:(long long)arg1 atLocationIDs:(id)arg2;	// IMP=0x001000000000f23d
- (id)personIDsWithRoleID:(id)arg1 atLocationIDs:(id)arg2;	// IMP=0x001000000000f115
- (id)personIDsAnyRoleAtLocationIDs:(id)arg1;	// IMP=0x001000000000f06d
- (id)personIDsMatchingConstraintsForSearchSpecification:(id)arg1;	// IMP=0x001000000000eb68
- (id)prlSelectColumn:(id)arg1 havingPrivilege:(id)arg2 whereConstraintColumn:(id)arg3 hasValues:(id)arg4;	// IMP=0x001000000000e9f7
- (id)prlSelectColumn:(id)arg1 havingRoleType:(long long)arg2 whereConstraintColumn:(id)arg3 hasValues:(id)arg4;	// IMP=0x001000000000e895
- (id)prlConstraintSQLOnColumn:(id)arg1 andValues:(id)arg2;	// IMP=0x001000000000e7c6
- (id)objectIDsForSQL:(id)arg1 resultColumnName:(id)arg2 bindings:(id)arg3;	// IMP=0x001000000000e4d0
- (_Bool)searchFor:(Class)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 limit:(long long)arg4 offset:(unsigned long long)arg5 block:(CDUnknownBlockType)arg6;	// IMP=0x001000000000e4b5
- (_Bool)queryUsingSearchSpecification:(id)arg1 state:(unsigned long long)arg2 limit:(unsigned long long)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x001000000000e08a
- (id)handoutAssignedItemsByAttachmentID:(id)arg1;	// IMP=0x0010000000012774
- (id)authTreeForAppWithAttachmentID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000011f04
- (_Bool)_pruneAuthTreeAtNodeWithAssignedItemStatusID:(id)arg1;	// IMP=0x0010000000011ab0
- (_Bool)removeAuthorizationStatus:(long long)arg1 forHandoutAssignedItemByAttachmentID:(id)arg2;	// IMP=0x00100000000114ed
- (_Bool)addAuthorizationStatus:(long long)arg1 forHandoutAssignedItemByAttachmentID:(id)arg2;	// IMP=0x0010000000011233
- (_Bool)_statusID:(out id *)arg1 deniedCount:(out long long *)arg2 authCount:(out long long *)arg3 forHandoutAssignedItem:(id)arg4;	// IMP=0x00100000000108c7
- (long long)authorizationStatusForHandoutAssignedItem:(id)arg1;	// IMP=0x001000000001050d
- (id)normalizedValue:(id)arg1 forKeyPath:(id)arg2;	// IMP=0x001000000004204d
- (id)normalizeKeyPath:(id)arg1 forValue:(id)arg2;	// IMP=0x0010000000042037
- (id)orderBySQLStringFromSortDescriptors:(id)arg1 prefix:(id)arg2;	// IMP=0x0010000000041cc5
- (id)whereClauseForPredicate:(id)arg1 entityClass:(Class)arg2 error:(id *)arg3;	// IMP=0x0010000000041a65
- (_Bool)selectAll:(Class)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 limit:(long long)arg4 offset:(unsigned long long)arg5 block:(CDUnknownBlockType)arg6;	// IMP=0x00100000000418d5
- (_Bool)setCurrentConfig:(id)arg1;	// IMP=0x00100000000427f8
- (id)currentConfig;	// IMP=0x001000000004274d
- (_Bool)hasOnboardingEntities;	// IMP=0x001000000004fcbb
- (_Bool)hasCompletedInitialiCloudDriveSync;	// IMP=0x001000000004fc58
- (_Bool)hasCompletedInitialOrionSync;	// IMP=0x001000000004fbf5
- (_Bool)hasCompletedInitialASMSync;	// IMP=0x001000000004fb92
- (_Bool)purgeASMRosterData;	// IMP=0x001000000004f81d
- (_Bool)purgeLocalProgressDataIfNecessary:(id)arg1;	// IMP=0x001000000004f0e4
- (id)rolesWithType:(long long)arg1;	// IMP=0x0010000000050e81
- (id)rolesWithPrivilege:(id)arg1;	// IMP=0x0010000000050a13
- (_Bool)insertOrUpdateRole:(id)arg1;	// IMP=0x00100000000504a5
- (_Bool)isAllowedHost:(id)arg1;	// IMP=0x00100000000659ae
- (long long)handoutStateForQuestionStepWithObjectID:(id)arg1;	// IMP=0x0010000000066c5e
- (id)questionStepFromParentObjectID:(id)arg1;	// IMP=0x0010000000066a7d
- (id)answerFormatForQuestionType:(long long)arg1 questionID:(id)arg2;	// IMP=0x001000000006666d
- (id)classIDsForQuestionStepWithID:(id)arg1;	// IMP=0x001000000006644b
- (void)setCurrentUserID:(id)arg1;	// IMP=0x00100000000683bc
- (void)resetCurrentUser;	// IMP=0x0010000000068336
- (_Bool)setCurrentUser:(id)arg1 withRoleLocations:(id)arg2;	// IMP=0x0010000000068321
- (id)currentUserLocationIDsByAXMRoleType;	// IMP=0x00100000000681f9
- (_Bool)setCurrentUser:(id)arg1 withRole:(unsigned long long)arg2;	// IMP=0x00100000000681e2
- (_Bool)currentUserHasRole:(unsigned long long)arg1;	// IMP=0x00100000000681bf
- (unsigned long long)currentUserRoles;	// IMP=0x00100000000680a3
- (_Bool)organizationMaidAnalyticsEnabled;	// IMP=0x001000000006805f
- (_Bool)setCurrentUserPersonMaidAnalyticsEnabled:(_Bool)arg1;	// IMP=0x0010000000068046
- (_Bool)currentUserPersonMaidAnalyticsEnabled;	// IMP=0x001000000006802d
- (_Bool)setCurrentUserOrganizationProgressTrackingAllowed:(_Bool)arg1;	// IMP=0x0010000000068014
- (_Bool)currentUserOrganizationProgressTrackingAllowed;	// IMP=0x0010000000067ffb
- (_Bool)setCurrentUserOrganizationName:(id)arg1;	// IMP=0x0010000000067fe2
- (id)currentUserOrganizationName;	// IMP=0x0010000000067fc9
- (_Bool)setCurrentUserOrganizationID:(id)arg1;	// IMP=0x0010000000067fb0
- (id)currentUserOrganizationID;	// IMP=0x0010000000067f97
- (_Bool)_setCurrentUser:(id)arg1 withRoleLocations:(id)arg2 orRole:(unsigned long long)arg3;	// IMP=0x0010000000067a37
- (void)postClassKitPrefsAvailabilityNotification;	// IMP=0x0010000000067a31
- (id)currentUserID;	// IMP=0x0010000000067a18
- (id)currentUser;	// IMP=0x0010000000067947
@property(readonly, nonatomic, getter=isContextTrackingAllowed) _Bool contextTrackingAllowed;
@property(readonly, nonatomic, getter=isProgressTrackingAllowed) _Bool progressTrackingAllowed;
- (id)personIDsOnlyInClassWithObjectID:(id)arg1;	// IMP=0x001000000006dde5
- (_Bool)resetSyncTokenForZoneNames:(id)arg1;	// IMP=0x00100000000a4fdb
- (_Bool)tableWithName:(id)arg1 containsColumnWithName:(id)arg2;	// IMP=0x00100000000b6863
- (_Bool)execute:(id)arg1 cache:(_Bool)arg2 bindings:(id)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x00100000000b6537
- (_Bool)select:(id)arg1 from:(id)arg2 where:(id)arg3 groupBy:(id)arg4 orderBy:(id)arg5 limit:(unsigned long long)arg6 offset:(unsigned long long)arg7 bindings:(id)arg8 block:(CDUnknownBlockType)arg9;	// IMP=0x00100000000b6326
- (_Bool)deleteFrom:(id)arg1 where:(id)arg2 bindings:(id)arg3;	// IMP=0x00100000000b6220
- (_Bool)update:(id)arg1 set:(id)arg2 toValues:(id)arg3 where:(id)arg4 bindings:(id)arg5;	// IMP=0x00100000000b5feb
- (_Bool)insertInto:(id)arg1 values:(id)arg2 forColumnsNamed:(id)arg3;	// IMP=0x00100000000b5e00
@property(readonly, nonatomic) NSNumber *lastInsertRowID;
- (_Bool)setCurrentASMConfig:(id)arg1;	// IMP=0x00100000000b785c
- (id)currentASMConfig;	// IMP=0x00100000000b77b1
- (void)updateScheduleWithIDs:(id)arg1 withScheduleUpdateStatus:(long long)arg2;	// IMP=0x00100000000c0986
- (id)scheduledEventsFromID:(id)arg1;	// IMP=0x00100000000c0833
- (id)classIDForSchedule:(id)arg1;	// IMP=0x00100000000c0767
- (long long)handoutStateForMultipleChoiceAnswerItemWithObjectID:(id)arg1;	// IMP=0x00100000000c5103
- (id)classIDsForMultipleChoiceAnswerItemWithID:(id)arg1;	// IMP=0x00100000000c4ee1
- (void)updateSurveysWithIDs:(id)arg1 withSurveyUpdateStatus:(long long)arg2;	// IMP=0x00100000000c6cb7
- (id)surveyFromObjectID:(id)arg1;	// IMP=0x00100000000c6ab1
- (id)classIDsForSurveyWithID:(id)arg1;	// IMP=0x00100000000c688f
- (_Bool)isBlockedApp:(id)arg1;	// IMP=0x00100000000d4e2a
- (_Bool)hasMissingReferenceIDs;	// IMP=0x00100000000d6481
- (id)missingReferenceIDsForCollectionID:(id)arg1;	// IMP=0x00100000000d625e
- (_Bool)markEndpointsAvailableForServiceID:(id)arg1;	// IMP=0x00100000000ef584
- (_Bool)markEndpoint:(id)arg1 forRetryAfter:(long long)arg2;	// IMP=0x00100000000ef3e9
- (_Bool)markEndpointAsExpired:(id)arg1;	// IMP=0x00100000000ef31c
- (_Bool)markEndpointAsFailed:(id)arg1;	// IMP=0x00100000000ef110
- (_Bool)markEndpointAsSuccessful:(id)arg1;	// IMP=0x00100000000eef74
- (_Bool)isEndpointExpired:(id)arg1;	// IMP=0x00100000000eee7d
- (_Bool)_mescalRequiredWhere:(id)arg1 bindings:(id)arg2;	// IMP=0x00100000000eee3e
- (_Bool)endpointRequiresMescal:(id)arg1;	// IMP=0x00100000000eed87
- (_Bool)hasEndpointWhichRequiresMescal;	// IMP=0x00100000000eed71
- (void)pruneTrackedItems;	// IMP=0x00100000000fbfd4
- (void)trackChangesForEntityClass:(Class)arg1 modifiedObjectIDs:(id)arg2 action:(int)arg3;	// IMP=0x00100000000fb905
- (void)trackChangeForObject:(id)arg1 action:(int)arg2;	// IMP=0x00100000000fb699
- (id)untrackedObjectIDsForEntityClass:(Class)arg1 restrictToIDs:(id)arg2;	// IMP=0x00100000000fb2e7
- (void)changesForEntityClass:(Class)arg1 whereSql:(id)arg2 bindings:(id)arg3 since:(id)arg4 block:(CDUnknownBlockType)arg5;	// IMP=0x00100000000faeba
- (void)changesForEntityClass:(Class)arg1 since:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00100000000fae03
- (unsigned long long)countChangesForEntityClass:(Class)arg1 whereSql:(id)arg2 bindings:(id)arg3 since:(id)arg4;	// IMP=0x00100000000fa9d4
- (unsigned long long)countChangesForEntityClass:(Class)arg1 since:(id)arg2;	// IMP=0x00100000000fa936
- (_Bool)syncableDatabaseEntityExistsByObjectID:(id)arg1;	// IMP=0x00100000001007a1
- (_Bool)entityExistsByClass:(Class)arg1 identity:(id)arg2;	// IMP=0x0010000000100669
- (_Bool)entityClass:(Class)arg1 containsColumnNamed:(id)arg2;	// IMP=0x0010000000100507
- (_Bool)selectColumns:(id)arg1 of:(Class)arg2 where:(id)arg3 orderBy:(id)arg4 limit:(long long)arg5 offset:(unsigned long long)arg6 bindings:(id)arg7 block:(CDUnknownBlockType)arg8;	// IMP=0x001000000010003b
- (_Bool)selectColumns:(id)arg1 of:(Class)arg2 where:(id)arg3 bindings:(id)arg4 block:(CDUnknownBlockType)arg5;	// IMP=0x0010000000100008
- (id)selectColumns:(id)arg1 of:(Class)arg2 where:(id)arg3 bindings:(id)arg4;	// IMP=0x00100000000ffe96
- (unsigned long long)count:(Class)arg1 where:(id)arg2 bindings:(id)arg3;	// IMP=0x00100000000ffc0f
- (_Bool)deleteAllWithoutTracking:(Class)arg1 where:(id)arg2 bindings:(id)arg3;	// IMP=0x00100000000ffbfa
- (_Bool)deleteAll:(Class)arg1 where:(id)arg2 bindings:(id)arg3;	// IMP=0x00100000000ffbe2
- (_Bool)_deleteAll:(Class)arg1 where:(id)arg2 bindings:(id)arg3 trackDeletes:(_Bool)arg4;	// IMP=0x00100000000ff6cd
- (_Bool)updateAll:(Class)arg1 set:(id)arg2 where:(id)arg3 bindings:(id)arg4;	// IMP=0x00100000000ff0bd
- (_Bool)selectAll:(Class)arg1 where:(id)arg2 orderBy:(id)arg3 limit:(long long)arg4 offset:(unsigned long long)arg5 bindings:(id)arg6 block:(CDUnknownBlockType)arg7;	// IMP=0x00100000000fedc0
- (_Bool)selectAll:(Class)arg1 where:(id)arg2 orderBy:(id)arg3 bindings:(id)arg4 block:(CDUnknownBlockType)arg5;	// IMP=0x00100000000fed99
- (_Bool)selectAll:(Class)arg1 where:(id)arg2 bindings:(id)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x00100000000fed6d
- (_Bool)selectAll:(Class)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00100000000fed3e
- (id)select:(Class)arg1 where:(id)arg2 bindings:(id)arg3;	// IMP=0x00100000000febcc
- (id)select:(Class)arg1 identity:(id)arg2;	// IMP=0x00100000000fea9b
- (_Bool)deleteObject:(id)arg1;	// IMP=0x00100000000fe75f
- (_Bool)insertOrUpdateObjects:(id)arg1;	// IMP=0x00100000000fe01b
- (_Bool)insertOrUpdateObject:(id)arg1;	// IMP=0x00100000000fdc28
- (_Bool)_postWillChangeNotificationWithEntity:(id)arg1;	// IMP=0x00100000000fdaed
- (_Bool)updateObjects:(id)arg1;	// IMP=0x00100000000fd7db
- (_Bool)updateObject:(id)arg1;	// IMP=0x00100000000fd70c
- (_Bool)_updateObject:(id)arg1;	// IMP=0x00100000000fd3cf
- (_Bool)_postDidInsertNotificationWithEntity:(id)arg1;	// IMP=0x00100000000fd294
- (_Bool)insertObjects:(id)arg1;	// IMP=0x00100000000fcf44
- (_Bool)insertObject:(id)arg1;	// IMP=0x00100000000fce7b
- (_Bool)_insertObject:(id)arg1;	// IMP=0x00100000000fcc28
- (void)populateSearchField:(id)arg1 bindings:(id)arg2;	// IMP=0x00100000000fc67a
- (_Bool)_markObject:(id)arg1 as:(long long)arg2;	// IMP=0x0010000000102b3d
- (_Bool)markAll:(Class)arg1 where:(id)arg2 bindings:(id)arg3 as:(long long)arg4;	// IMP=0x0010000000102a30
- (_Bool)markObject:(id)arg1 as:(long long)arg2;	// IMP=0x0010000000102876
- (void)setInSyncBlock:(_Bool)arg1;	// IMP=0x00100000001027da
- (_Bool)isInSyncBlock;	// IMP=0x0010000000102739
- (void)setSyncableDataWritten:(_Bool)arg1;	// IMP=0x001000000010269d
@property(readonly, nonatomic, getter=isSyncableDataWritten) _Bool syncableDataWritten;
- (_Bool)withSyncEnabled:(CDUnknownBlockType)arg1;	// IMP=0x0010000000102485
- (long long)answerStateForSurveyAnswerWithID:(id)arg1;	// IMP=0x00100000001174ab
- (id)classIDsForSurveyAnswerWithID:(id)arg1;	// IMP=0x0010000000117289
- (id)personsWithoutPrivilege:(id)arg1 atLocationIDs:(id)arg2;	// IMP=0x00100000001263b7
- (id)personsWithoutPrivilege:(id)arg1;	// IMP=0x00100000001263a3
- (id)personsWithPrivilege:(id)arg1 atLocationIDs:(id)arg2;	// IMP=0x0010000000126344
- (id)personsWithPrivilege:(id)arg1;	// IMP=0x0010000000126330
- (id)personIDsToPerson:(id)arg1;	// IMP=0x001000000012615b
- (id)personRoleLocationsForPersonID:(id)arg1;	// IMP=0x0010000000126021
- (unsigned long long)personRoleFromRoleLocations:(id)arg1;	// IMP=0x0010000000125e0f
- (_Bool)insertOrUpdatePerson:(id)arg1 andRoleLocations:(id)arg2;	// IMP=0x0010000000125962
- (id)answerFormatFromObjectID:(id)arg1;	// IMP=0x00100000001286a6
- (id)answerItemsFromAnswerFormatID:(id)arg1;	// IMP=0x0010000000128553
- (void)purgeExpiredEntities;	// IMP=0x001000000014526f
- (_Bool)hasCompletedDashboardAppRegistrationForAppIdentifier:(id)arg1;	// IMP=0x001000000015c95a
- (_Bool)shouldQueueDashboardAppRegistrationForAppIdentifier:(id)arg1;	// IMP=0x001000000015c78d
- (id)authTreeForAppWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001644ec
- (id)contextsAtPath:(id)arg1 parentContext:(id)arg2;	// IMP=0x0010000000164090
- (long long)authorizationStatusForContextAtPath:(id)arg1;	// IMP=0x00100000001638df
- (_Bool)_pruneAuthTreeAtNodeWithContextStatusID:(id)arg1;	// IMP=0x001000000016348b
- (_Bool)removeAuthorizationStatus:(long long)arg1 forContextAtPath:(id)arg2;	// IMP=0x0010000000162e78
- (_Bool)addAuthorizationStatus:(long long)arg1 forContextAtPath:(id)arg2;	// IMP=0x0010000000162b2e
- (_Bool)_statusID:(out id *)arg1 deniedCount:(out long long *)arg2 authCount:(out long long *)arg3 forContextPath:(id)arg4;	// IMP=0x0010000000161ed1
- (id)orphanedAssets;	// IMP=0x0010000000172a23
- (_Bool)isUnpublishedAssetWithObjectID:(id)arg1;	// IMP=0x0010000000172998
- (void)updateAssetsWithIDs:(id)arg1 withSchoolworkSyncStatus:(long long)arg2;	// IMP=0x0010000000172864
- (id)classIDsForAssetWithObjectID:(id)arg1;	// IMP=0x0010000000172680
@property(nonatomic) long long classKitCatalogEnvironment;
- (long long)handoutStateForHandoutAttachmentWithObjectID:(id)arg1;	// IMP=0x0010000000176319
- (_Bool)isCompleteAttachment:(id)arg1;	// IMP=0x0010000000176181
- (id)handoutsWithIncompleteAttachmentsFromHandouts:(id)arg1;	// IMP=0x0010000000175e8b
- (id)classIDsForHandoutAttachmentWithID:(id)arg1;	// IMP=0x0010000000175c69
- (_Bool)updateAuthorizationForAttachment:(id)arg1 shouldAuthorize:(_Bool)arg2;	// IMP=0x0010000000175847
- (_Bool)updateAuthorizationForAttachmentWithObjectID:(id)arg1 shouldAuthorize:(_Bool)arg2;	// IMP=0x0010000000175741
- (long long)handoutStateForCollaborationStateWithID:(id)arg1;	// IMP=0x00100000001795b0
- (id)classIDsForCollaborationStateWithID:(id)arg1;	// IMP=0x001000000017938e
- (id)stateForTargetID:(id)arg1 ownerPersonID:(id)arg2 domain:(long long)arg3;	// IMP=0x001000000017917e
- (id)statesForTargetID:(id)arg1 classID:(id)arg2 forOwnersWithRole:(unsigned long long)arg3;	// IMP=0x0010000000178dd9
- (id)statesForTargetID:(id)arg1 ownerPersonID:(id)arg2;	// IMP=0x0010000000178bb9
- (id)statesForTargetID:(id)arg1;	// IMP=0x00100000001789cd
- (id)valueForPropertyNamed:(id)arg1 expectedClasses:(id)arg2;	// IMP=0x001000000018032f
- (id)valueForPropertyNamed:(id)arg1 expectedClass:(Class)arg2;	// IMP=0x001000000018029b
- (_Bool)setValue:(id)arg1 forPropertyNamed:(id)arg2;	// IMP=0x00100000001801f7
- (id)dateForPropertyNamed:(id)arg1;	// IMP=0x0010000000180107
- (_Bool)setDate:(id)arg1 forPropertyNamed:(id)arg2;	// IMP=0x0010000000180063
- (id)stringForPropertyNamed:(id)arg1;	// IMP=0x001000000017ff73
- (_Bool)setString:(id)arg1 forPropertyNamed:(id)arg2;	// IMP=0x001000000017fecf
- (double)doubleForPropertyNamed:(id)arg1;	// IMP=0x001000000017fde7
- (_Bool)setDouble:(double)arg1 forPropertyNamed:(id)arg2;	// IMP=0x001000000017fd52
- (long long)integerForPropertyNamed:(id)arg1;	// IMP=0x001000000017fc6e
- (_Bool)setInteger:(long long)arg1 forPropertyNamed:(id)arg2;	// IMP=0x001000000017fbd8
- (_Bool)boolForPropertyNamed:(id)arg1;	// IMP=0x001000000017faf6
- (_Bool)setBool:(_Bool)arg1 forPropertyNamed:(id)arg2;	// IMP=0x001000000017fa60
- (void)pruneOldDeletedEntityIDs;	// IMP=0x001000000018adea
- (long long)handoutStateForHandoutWithObjectID:(id)arg1;	// IMP=0x001000000018cd8c
- (_Bool)isIncompleteHandout:(id)arg1;	// IMP=0x001000000018cbf8
- (id)incompleteHandoutsDueBefore:(id)arg1;	// IMP=0x001000000018ca72
- (id)classIDsForHandoutWithID:(id)arg1;	// IMP=0x001000000018c850

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
