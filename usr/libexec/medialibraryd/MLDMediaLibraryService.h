//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ML3DatabaseImportManager, ML3MediaLibraryWriter, MLDCacheDeleteController, MLDDatabaseValidationController, NSMutableArray, NSMutableDictionary, NSOperationQueue, NSString, NSTimer;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface MLDMediaLibraryService : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_spotlightIndexQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_writerBeginTransactionQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_writerUpdateQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 40 = 0x28
    struct os_unfair_lock_s _xpcLock;	// 48 = 0x30
    NSMutableDictionary *_xpcListeners;	// 56 = 0x38
    NSMutableDictionary *_xpcClients;	// 64 = 0x40
    ML3MediaLibraryWriter *_writer;	// 72 = 0x48
    ML3DatabaseImportManager *_importManager;	// 80 = 0x50
    MLDCacheDeleteController *_cacheDeleteController;	// 88 = 0x58
    MLDDatabaseValidationController *_validationController;	// 96 = 0x60
    NSOperationQueue *_maintenanceTasksOperationQueue;	// 104 = 0x68
    NSOperationQueue *_databaseRecoveryOperationQueue;	// 112 = 0x70
    NSMutableArray *_databaseRecoveryCompletionHandlers;	// 120 = 0x78
    NSObject<OS_dispatch_source> *_signalDispatchSource;	// 128 = 0x80
    NSObject<OS_dispatch_source> *_spotlightIndexCoalescingTimer;	// 136 = 0x88
    NSTimer *_idleTimer;	// 144 = 0x90
    NSMutableDictionary *_mediaLibraries;	// 152 = 0x98
    NSString *_deviceSharedLibraryPath;	// 160 = 0xa0
    NSMutableDictionary *_transactionInfoForID;	// 168 = 0xa8
    unsigned long long _stateHandle;	// 176 = 0xb0
    _Bool _databaseLocked;	// 184 = 0xb8
    long long _currentLockReason;	// 192 = 0xc0
}

+ (id)sharedInstance;	// IMP=0x002000000000f925
- (void).cxx_destruct;	// IMP=0x002000000000b9a0
- (void)faultForQuery:(id)arg1 fromClientBundleID:(id)arg2 onTrustError:(id)arg3;	// IMP=0x001000000000b644
- (_Bool)_isMediaPath:(id)arg1 selector:(SEL)arg2 resolvedPath:(id *)arg3;	// IMP=0x001000000000b203
- (_Bool)_platformSupportsSpotlightIndexing;	// IMP=0x001000000000b1fb
- (void)_unregisterServiceOriginatedTransactionWithConnection:(id)arg1;	// IMP=0x001000000000b155
- (void)_validateDatabaseAtPath:(id)arg1 forConnection:(id)arg2 byTruncatingFirst:(_Bool)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x001000000000af0f
- (void)_validateDatabaseAtPath:(id)arg1 byTruncatingFirst:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x001000000000aef5
- (_Bool)_validateTransactionIdentifier:(id)arg1 forClient:(id)arg2;	// IMP=0x001000000000ad47
- (void)_unregisterTransactionInfoForIdentifier:(id)arg1;	// IMP=0x001000000000acb8
- (void)_registerTransactionInfo:(id)arg1 forIdentitifer:(id)arg2;	// IMP=0x001000000000abee
- (void)_performMaintenanceOnDatabaseAtPath:(id)arg1 withActivity:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000000aa30
- (void)_stopIdleTimer;	// IMP=0x001000000000a988
- (void)_resetIdleTimer;	// IMP=0x001000000000a8ba
- (void)_idleTimerFired:(id)arg1;	// IMP=0x001000000000a79a
- (void)_startIdleTimer;	// IMP=0x001000000000a648
- (void)_tearDownLibraryDidChangeNotifications;	// IMP=0x001000000000a578
- (void)_handleLibraryDidChangeNotification:(id)arg1;	// IMP=0x001000000000a4d3
- (void)_registerForLibraryDidChangeNotifications;	// IMP=0x001000000000a3f5
- (void)_writeDiagnosticToDisk:(id)arg1;	// IMP=0x001000000000a219
- (void)_performDiagnosticWithReason:(id)arg1;	// IMP=0x001000000000a0b0
- (void)_handleDebugSignal;	// IMP=0x001000000000a033
- (void)_tearDownSignalHandler;	// IMP=0x001000000000a022
- (void)_setupSignalHandler;	// IMP=0x0010000000009f18
- (id)_clientForConnection:(id)arg1;	// IMP=0x0010000000009def
- (id)_currentXPCClient;	// IMP=0x0010000000009d70
- (void)_handleXPCDisconnect:(id)arg1;	// IMP=0x0010000000009c8f
- (id);	// IMP=0x0010000000009c33
- (id)_allMediaLibraries;	// IMP=0x0010000000009b7a
- (id)_mediaLibraryForPath:(id)arg1;	// IMP=0x00100000000099f4
- (long long)_MLDSupportedServiceForXPCListener:(id)arg1;	// IMP=0x0010000000009968
- (id)_XPCListenerForService:(long long)arg1;	// IMP=0x00100000000098a4
- (void)_setupCacheDeleteController;	// IMP=0x001000000000982f
- (void)_setupActivityHandlers;	// IMP=0x001000000000975b
- (void)_setupNotifyEventHandlers;	// IMP=0x0010000000009755
- (void)_logPrivacyAccessWithTransactionIdentifier:(id)arg1;	// IMP=0x00100000000096ca
- (void)_reconnectLibraries:(id)arg1;	// IMP=0x001000000000941d
- (void)_disconnectLibraries:(id)arg1;	// IMP=0x001000000000914c
@property(nonatomic) long long currentLockReason; // @synthesize currentLockReason=_currentLockReason;
@property(nonatomic, getter=isDatabaseLocked) _Bool databaseLocked; // @synthesize databaseLocked=_databaseLocked;
- (void)start;	// IMP=0x0010000000008e9e
- (void)collectDiagnostic:(id)arg1;	// IMP=0x0010000000008dbc
- (void)mediaLibraryWriter:(id)arg1 terminatedTransaction:(id)arg2 withError:(id)arg3;	// IMP=0x0010000000008ca8
- (void)library:(id)arg1 didRollbackDatabaseTransactionWithConnection:(id)arg2;	// IMP=0x0010000000008c93
- (void)library:(id)arg1 didCommitDatabaseTransactionWithConnection:(id)arg2;	// IMP=0x0010000000008c7e
- (void)library:(id)arg1 didBeginDatabaseTransactionWithConnection:(id)arg2;	// IMP=0x0010000000008b9a
- (_Bool)_shouldAcceptConnectionForMediaLibraryService:(id)arg1;	// IMP=0x001000000000882e
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x001000000000860b
- (void)getClientImportServiceListenerEndpointWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000084b5
- (void)getMediaLibraryResourcesServiceListenerEndpointWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000000835f
- (void)performMaintenanceTasksForDatabaseAtPath:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000008261
- (void)updateSpotlightIndexMetadataForItemsWithIdentifiers:(id)arg1 bundleID:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000007bfc
- (void)updateSpotlightIndexForBundleID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000007be2
- (void)getLanguageResourcesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000007978
- (void)unlockDatabaseWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000078ed
- (void)lockDatabaseForReason:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000077e2
- (void)cancelImportOperation:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000076d1
- (void)performImport:(id)arg1 fromSource:(unsigned long long)arg2 withUUID:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000000738f
- (void)setOptions:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000071be
- (void)performDatabaseOperation:(unsigned long long)arg1 withAttributes:(id)arg2 options:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000006bd4
- (_Bool)endTransaction:(id)arg1 shouldCommit:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0010000000006aa0
- (void)endTransaction:(id)arg1 shouldCommit:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000000693c
- (void)executeQuery:(id)arg1 withParameters:(id)arg2 options:(id)arg3 onTransaction:(id)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000065fa
- (void)executeUpdate:(id)arg1 withParameters:(id)arg2 onTransaction:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000006343
- (id)beginTransactionForDatabaseWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000006191
- (void)beginTransactionForDatabaseWithContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000005b77
- (void)recreateDatabaseAtPath:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000005943
- (void)performDiagnosticWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000000578f
- (void)checkIntegrityOfDatabaseAtPath:(id)arg1 repairFaults:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000005469
- (void)attemptDatabaseFileRecoveryAtPath:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000051b6
- (void)validateDatabaseAtPath:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000004fe3
- (void)dealloc;	// IMP=0x0010000000004f3d
- (id)_stateDump;	// IMP=0x0010000000004ec3
- (id)_init;	// IMP=0x0010000000004bec
- (id)init;	// IMP=0x0010000000004baa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

