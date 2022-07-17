//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLSyndicationDeleteManagerDelegate-Protocol.h>

@class NSError, NSMutableArray, NSMutableDictionary, NSPersistentStoreCoordinator, NSProgress, NSString, NSURL, PLAssetsdCrashRecoverySupport, PLBackgroundJobService, PLCacheDeleteRegistration, PLCacheDeleteSupport, PLCameraPreviewWellManager, PLChangeHandlingContainer, PLClientServerTransaction, PLCloudPhotoLibraryManager, PLDatabaseContext, PLDupeManager, PLImageWriter, PLJournalManager, PLKeywordManager, PLLazyObject, PLLibraryServicesCPLReadiness, PLLibraryServicesManagerStateHandler, PLLibraryServicesStateNode, PLModelMigrator, PLMomentGenerationDataManager, PLPairing, PLPhotoLibraryBundle, PLPhotoLibraryPathManager, PLQuickActionManager, PLRelationshipOrderKeyManager, PLSearchIndexManager, PLSyndicationDeleteManager, PLTrackableRequestManager;
@protocol OS_dispatch_queue, OS_dispatch_source, PLLibraryServicesDelegate, PLMigrationServiceProtocol;

@interface PLLibraryServicesManager : NSObject <PLSyndicationDeleteManagerDelegate>
{
    PLPhotoLibraryBundle *_libraryBundle;	// 8 = 0x8
    PLLibraryServicesManagerStateHandler *_stateHandler;	// 16 = 0x10
    PLPhotoLibraryPathManager *_pathManager;	// 24 = 0x18
    _Bool _isCreateMode;	// 32 = 0x20
    PLLazyObject *_lazyWellKnownPhotoLibraryIdentifier;	// 40 = 0x28
    PLLazyObject *_lazyImageWriter;	// 48 = 0x30
    PLLazyObject *_lazyModelMigrator;	// 56 = 0x38
    PLLazyObject *_lazySearchIndexManager;	// 64 = 0x40
    PLLazyObject *_lazyDatabaseContext;	// 72 = 0x48
    PLLazyObject *_lazyDupeManager;	// 80 = 0x50
    PLLazyObject *_lazyRelationshipOrderKeyManager;	// 88 = 0x58
    PLLazyObject *_lazyMomentGenerationDataManager;	// 96 = 0x60
    PLLazyObject *_lazyJournalManager;	// 104 = 0x68
    PLLazyObject *_lazyQuickActionManager;	// 112 = 0x70
    PLLazyObject *_lazyKeywordManager;	// 120 = 0x78
    PLLazyObject *_lazyAlbumCountCoalescer;	// 128 = 0x80
    PLLazyObject *_lazyImportSessionCountCoalescer;	// 136 = 0x88
    PLLazyObject *_lazyCloudPhotoLibraryManager;	// 144 = 0x90
    PLLazyObject *_lazyCrashRecoverySupport;	// 152 = 0x98
    PLLazyObject *_lazyPairingManager;	// 160 = 0xa0
    PLLazyObject *_lazyCPLReadiness;	// 168 = 0xa8
    PLLazyObject *_lazyCameraPreviewWellManager;	// 176 = 0xb0
    PLLazyObject *_lazySyndicationDeleteManager;	// 184 = 0xb8
    PLLazyObject *_lazyCacheDeleteSupport;	// 192 = 0xc0
    PLClientServerTransaction *_serverTransaction;	// 200 = 0xc8
    NSObject<OS_dispatch_source> *_outstandingTransactionHandlerTimer;	// 208 = 0xd0
    struct os_unfair_lock_s _outstandingTransactionHandlerTimerLock;	// 216 = 0xd8
    NSObject<OS_dispatch_queue> *_albumCountQueue;	// 224 = 0xe0
    NSMutableDictionary *_externalWaiterCompletionBlocksByState;	// 232 = 0xe8
    unsigned int _maxWaiterQoS;	// 240 = 0xf0
    _Bool _active;	// 244 = 0xf4
    _Bool _finalizing;	// 245 = 0xf5
    struct os_unfair_lock_s _importMutex;	// 248 = 0xf8
    struct os_unfair_lock_s _localeUpdateLock;	// 252 = 0xfc
    struct os_unfair_lock_s _contactsAuthorizationUpdateLock;	// 256 = 0x100
    NSString *_logPrefix;	// 264 = 0x108
    id <PLLibraryServicesDelegate> _libraryServicesDelegate;	// 272 = 0x110
    NSError *_invalidationError;	// 280 = 0x118
    PLBackgroundJobService *_backgroundJobService;	// 288 = 0x120
    PLTrackableRequestManager *_trackableRequestManager;	// 296 = 0x128
    PLCacheDeleteRegistration *_cacheDeleteRegistration;	// 304 = 0x130
    NSProgress *_preRunningProgress;	// 312 = 0x138
    NSProgress *_postRunningProgress;	// 320 = 0x140
    NSString *_upgradeClient;	// 328 = 0x148
    id <PLMigrationServiceProtocol> _migrationServiceProxy;	// 336 = 0x150
    PLLibraryServicesStateNode *_currentStateNode;	// 344 = 0x158
    id _operationCountObservee;	// 352 = 0x160
    NSMutableArray *_mutablePendingOperations;	// 360 = 0x168
    NSObject<OS_dispatch_queue> *_stateSerializationQueue;	// 368 = 0x170
    NSObject<OS_dispatch_queue> *_helperQueue;	// 376 = 0x178
}

+ (id)errorForInvalidationError:(id)arg1 userInfo:(id)arg2;	// IMP=0x00000000002ef864
+ (id)libraryServicesManagerForLibraryURL:(id)arg1;	// IMP=0x00000000002ef74f
+ (long long)_finalState;	// IMP=0x00000000002ef744
+ (long long)_initialState;	// IMP=0x00000000002ef739
+ (Class)libraryServicesDelegateClass;	// IMP=0x00000000002ef728
+ (void)setLibraryServicesDelegateClass:(Class)arg1;	// IMP=0x00000000002ef71b
- (void).cxx_destruct;	// IMP=0x00000000002ed23f
@property(nonatomic) struct os_unfair_lock_s contactsAuthorizationUpdateLock; // @synthesize contactsAuthorizationUpdateLock=_contactsAuthorizationUpdateLock;
@property(nonatomic) struct os_unfair_lock_s localeUpdateLock; // @synthesize localeUpdateLock=_localeUpdateLock;
@property(nonatomic) struct os_unfair_lock_s importMutex; // @synthesize importMutex=_importMutex;
@property(nonatomic, getter=isFinalizing) _Bool finalizing; // @synthesize finalizing=_finalizing;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *helperQueue; // @synthesize helperQueue=_helperQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *stateSerializationQueue; // @synthesize stateSerializationQueue=_stateSerializationQueue;
@property(readonly, nonatomic) NSMutableArray *mutablePendingOperations; // @synthesize mutablePendingOperations=_mutablePendingOperations;
@property(retain, nonatomic) id operationCountObservee; // @synthesize operationCountObservee=_operationCountObservee;
@property(retain, nonatomic, setter=_setCurrentStateNode:) PLLibraryServicesStateNode *currentStateNode; // @synthesize currentStateNode=_currentStateNode;
@property __weak id <PLMigrationServiceProtocol> migrationServiceProxy; // @synthesize migrationServiceProxy=_migrationServiceProxy;
@property(copy) NSString *upgradeClient; // @synthesize upgradeClient=_upgradeClient;
@property(retain, nonatomic) NSProgress *postRunningProgress; // @synthesize postRunningProgress=_postRunningProgress;
@property(retain, nonatomic) NSProgress *preRunningProgress; // @synthesize preRunningProgress=_preRunningProgress;
@property(readonly) PLCacheDeleteRegistration *cacheDeleteRegistration; // @synthesize cacheDeleteRegistration=_cacheDeleteRegistration;
@property(readonly) PLTrackableRequestManager *trackableRequestManager; // @synthesize trackableRequestManager=_trackableRequestManager;
@property(readonly) PLBackgroundJobService *backgroundJobService; // @synthesize backgroundJobService=_backgroundJobService;
@property(readonly) PLPhotoLibraryPathManager *pathManager; // @synthesize pathManager=_pathManager;
@property(readonly, nonatomic) NSError *invalidationError; // @synthesize invalidationError=_invalidationError;
@property(retain) id <PLLibraryServicesDelegate> libraryServicesDelegate; // @synthesize libraryServicesDelegate=_libraryServicesDelegate;
@property(readonly) __weak PLPhotoLibraryBundle *libraryBundle; // @synthesize libraryBundle=_libraryBundle;
@property(readonly, copy) NSString *logPrefix; // @synthesize logPrefix=_logPrefix;
- (id)stateInformation;	// IMP=0x00000000002ecc6e
- (void)didRemainSystemPhotoLibrary;	// IMP=0x00000000002ecc39
- (void)didBecomeNonSystemPhotoLibrary;	// IMP=0x00000000002ecb95
- (_Bool)willBecomeNonSystemPhotoLibrary:(id *)arg1;	// IMP=0x00000000002ec4d6
- (void)setICloudPhotosEnabledInternal:(_Bool)arg1;	// IMP=0x00000000002ec093
- (void)_setCameraRollCountedInQuota:(_Bool)arg1;	// IMP=0x00000000002ec08d
- (void)registerOutstandingTransactionsHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000002ebebb
- (void)performBlockWithImportMutex:(CDUnknownBlockType)arg1;	// IMP=0x00000000002ebea7
- (void)_cancelPendingOperations;	// IMP=0x00000000002ebd16
- (void)_addPendingOperationsForStateNode:(id)arg1;	// IMP=0x00000000002eb83d
- (long long)_state;	// IMP=0x00000000002eb630
@property(readonly) long long state;
- (void)_handleLibraryStateCompletedAllOperations;	// IMP=0x00000000002eb358
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000002eb26d
- (void)_stopObservingLibraryStateCompletedAllOperations;	// IMP=0x00000000002eb0b6
- (void)_startObservingLibraryStateCompletedAllOperations;	// IMP=0x00000000002eaf7a
- (void)_dispatchExternalWaitersForState:(long long)arg1;	// IMP=0x00000000002eacf8
- (void)_transitionToState:(long long)arg1;	// IMP=0x00000000002ea5ae
- (_Bool)_canTransitionToState:(long long)arg1 error:(id *)arg2;	// IMP=0x00000000002ea322
- (void)deactivateWithInvalidationError:(id)arg1;	// IMP=0x00000000002ea1bc
- (_Bool)finalize:(id *)arg1;	// IMP=0x00000000002e9f81
- (void)_invalidate;	// IMP=0x00000000002e9d57
- (_Bool)transitionToState:(long long)arg1 error:(id *)arg2;	// IMP=0x00000000002e9c70
- (void)_enqueueExternalWaiterCompletionBlockForState:(long long)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000002e9aa1
- (void)awaitLibraryState:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002e9a8a
- (_Bool)awaitLibraryState:(long long)arg1 error:(id *)arg2;	// IMP=0x00000000002e995a
- (void)_waitForAwaitOperation:(id)arg1;	// IMP=0x00000000002e9833
- (id)_enqueueAwaitOperation;	// IMP=0x00000000002e95fc
- (void)_awaitLibraryState:(long long)arg1 sync:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000002e9239
- (void)_dispatchAwaitLibraryStateCompletionHandler:(CDUnknownBlockType)arg1 group:(id)arg2 error:(id)arg3;	// IMP=0x00000000002e9043
- (_Bool)activate:(id *)arg1;	// IMP=0x00000000002e8e94
- (id)pendingOperations;	// IMP=0x00000000002e8e31
- (id)activeOperations;	// IMP=0x00000000002e8db7
- (_Bool)_enqueueOperation:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002e88a6
- (void)_resetStateQueueQoS;	// IMP=0x00000000002e8741
- (void)_increaseStateQueueQoSIfNeeded;	// IMP=0x00000000002e85a7
- (void)shutdownLibraryWithDescription:(id)arg1;	// IMP=0x00000000002e8460
- (_Bool)enqueueOperation:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002e82c0
- (id)_libraryServicesStateNodeWithState:(long long)arg1;	// IMP=0x00000000002e827b
- (void)initializeConstraintsDirector;	// IMP=0x00000000002e8236
@property(readonly) PLChangeHandlingContainer *changeHandlingContainer;
- (void)initializeChangeHandling;	// IMP=0x00000000002e81a9
@property(readonly) PLCacheDeleteSupport *cacheDeleteSupport;
@property(readonly) PLSyndicationDeleteManager *syndicationDeleteManager;
@property(readonly) PLCameraPreviewWellManager *cameraPreviewWellManager;
@property(readonly) PLPairing *pairingManager;
@property(readonly) PLKeywordManager *keywordManager;
@property(readonly) PLQuickActionManager *quickActionManager;
- (id)newJournalManager;	// IMP=0x00000000002e80d5
@property(readonly) PLJournalManager *journalManager;
@property(readonly) PLDupeManager *dupeManager;
@property(readonly) PLMomentGenerationDataManager *momentGenerationDataManager;
@property(readonly) PLRelationshipOrderKeyManager *relationshipOrderKeyManager;
- (void)_invalidateOutstandingTransactionHandlerTimer;	// IMP=0x00000000002e7ff6
- (void)_invalidateCacheDeleteSupport;	// IMP=0x00000000002e7fdd
- (void)_invalidateSyndicationDeleteManager;	// IMP=0x00000000002e7fc4
- (void)_invalidateCameraPreviewWellManager;	// IMP=0x00000000002e7fab
- (void)_invalidateCPLReadiness;	// IMP=0x00000000002e7f8b
- (void)_invalidateBackgroundJobService;	// IMP=0x00000000002e7ef1
- (void)_invalidateCrashRecoverySupport;	// IMP=0x00000000002e7ed8
- (void)_invalidateCloudPhotoLibraryManager;	// IMP=0x00000000002e7eb8
- (void)_invalidateDatabaseContext;	// IMP=0x00000000002e7e9b
- (void)_invalidateQuickActionManager;	// IMP=0x00000000002e7e85
- (void)_invalidateRelationshipOrderKeyManager;	// IMP=0x00000000002e7e6f
- (void)_invalidateDupeManager;	// IMP=0x00000000002e7e59
- (void)_invalidatePairingManager;	// IMP=0x00000000002e7e40
- (void)_invalidateKeywordManager;	// IMP=0x00000000002e7e2a
- (void)_invalidateImageWriter;	// IMP=0x00000000002e7e14
- (void)_invalidateImportSessionCountCoalescer;	// IMP=0x00000000002e7df4
- (void)_invalidateAlbumCountCoalescer;	// IMP=0x00000000002e7dd4
- (void)_invalidateModelMigrator;	// IMP=0x00000000002e7dbe
- (void)_invalidateSearchIndexManager;	// IMP=0x00000000002e7da1
- (void)_invalidateJournalManager;	// IMP=0x00000000002e7d84
- (void)_invalidateMomentGenerationDataManager;	// IMP=0x00000000002e7d6e
@property(readonly) PLLibraryServicesCPLReadiness *cplReadiness;
- (id)newMomentGenerationDataManager;	// IMP=0x00000000002e7c57
- (id)newSearchIndexManager;	// IMP=0x00000000002e7b22
@property(readonly) PLAssetsdCrashRecoverySupport *crashRecoverySupport;
- (id)newCrashRecoverySupport;	// IMP=0x00000000002e799b
@property(readonly) PLCloudPhotoLibraryManager *cloudPhotoLibraryManager;
- (id)newCloudPhotoLibraryManager;	// IMP=0x00000000002e77f8
@property(readonly) PLDatabaseContext *databaseContext;
@property(readonly) PLSearchIndexManager *searchIndexManager;
@property(readonly) PLModelMigrator *modelMigrator;
@property(readonly) PLImageWriter *imageWriter;
- (id)_newContainer:(Class)arg1 scope:(id)arg2;	// IMP=0x00000000002e7677
- (void)_handleCoalescerActionWithScope:(id)arg1 class:(Class)arg2 forIDs:(id)arg3 context:(id)arg4;	// IMP=0x00000000002e73c2
- (id)newImportSessionCountCoalescer;	// IMP=0x00000000002e738d
- (id)newAlbumCountCoalescer;	// IMP=0x00000000002e7358
- (void)_initCloudPhotoLibraryManager;	// IMP=0x00000000002e727a
- (void)_invalidateSyndicationPhotoLibrarySpecificServices;	// IMP=0x00000000002e724c
- (void)_initSyndicationPhotoLibrarySpecificServices;	// IMP=0x00000000002e70cf
- (void)_invalidateSystemPhotoLibrarySpecificServices;	// IMP=0x00000000002e7087
- (void)_initSystemPhotoLibrarySpecificServices;	// IMP=0x00000000002e6d92
@property(readonly) long long wellKnownPhotoLibraryIdentifier;
- (_Bool)isSearchIndexingEnabled;	// IMP=0x00000000002e6d24
- (_Bool)isSyndicationPhotoLibrary;	// IMP=0x00000000002e6d0a
- (_Bool)isSystemPhotoLibrary;	// IMP=0x00000000002e6cf0
- (void)refreshImportSessionCountForImportSessionIDs:(id)arg1;	// IMP=0x00000000002e6bf0
- (void)refreshAlbumCountForAlbumIDs:(id)arg1;	// IMP=0x00000000002e6af0
- (void)setCreateMode:(_Bool)arg1 options:(id)arg2;	// IMP=0x00000000002e6a84
@property(readonly, getter=isCreateMode) _Bool createMode;
- (unsigned long long)createOptions;	// IMP=0x00000000002e69df
@property(readonly, getter=isCloudPhotoLibraryEnabled) _Bool cloudPhotoLibraryEnabled;
@property(readonly) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property(readonly, copy) NSURL *libraryURL;
- (void)invalidateReverseLocationDataOnAllAssets;	// IMP=0x00000000002e65cd
- (_Bool)updateGreenTeaSavedContactsAuthoriationIfNeeded;	// IMP=0x00000000002e652b
- (_Bool)updateSavedLocaleIfNeeded;	// IMP=0x00000000002e6489
- (void)currentLocaleDidChangeNotification:(id)arg1;	// IMP=0x00000000002e6295
- (id)_newOrderKeyManager;	// IMP=0x00000000002e6235
- (void)_initCameraPreviewWellManager;	// IMP=0x00000000002e6157
- (id)_determineWellKnownPhotoLibraryIdentifier;	// IMP=0x00000000002e5f8d
- (void)_initLazyWellKnownPhotoLibraryIdentifier;	// IMP=0x00000000002e5eb5
- (void)dealloc;	// IMP=0x00000000002e5de1
- (id)initWithLibraryBundle:(id)arg1 backgroundJobService:(id)arg2 cacheDeleteRegistration:(id)arg3 delegateClass:(Class)arg4;	// IMP=0x00000000002e50cc
- (id)statusDescription;	// IMP=0x00000000002e4c32
@property(readonly, copy) NSString *description;
- (void)performTransactionForSyndicationDeleteManager:(id)arg1 name:(const char *)arg2 transaction:(CDUnknownBlockType)arg3;	// IMP=0x00000000004ca4b3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
