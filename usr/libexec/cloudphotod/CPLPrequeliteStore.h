//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudPhotoLibrary/CPLPlatformObject.h>

@class CPLChangeSessionUpdate, CPLPrequeliteClientCacheMigrator, CPLPrequeliteVariable, CPLSimpleUpgradeHistory, NSDate, NSMutableDictionary, NSMutableSet, NSObject, NSString, NSURL, PQLConnection;
@protocol OS_dispatch_queue;

@interface CPLPrequeliteStore : CPLPlatformObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_writeQueue;	// 16 = 0x10
    PQLConnection *_db;	// 24 = 0x18
    NSURL *_dbURL;	// 32 = 0x20
    _Bool _configuringDB;	// 40 = 0x28
    NSMutableSet *_modifiedVariables;	// 48 = 0x30
    id _globalVariableCacheIdentifier;	// 56 = 0x38
    CPLPrequeliteVariable *_libraryVersionVar;	// 64 = 0x40
    CPLPrequeliteVariable *_userIdentifierVar;	// 72 = 0x48
    CPLPrequeliteVariable *_lastQuarantineCountReportDateVar;	// 80 = 0x50
    CPLPrequeliteVariable *_clientCacheIdentifierVar;	// 88 = 0x58
    CPLPrequeliteVariable *_clientCacheIdentifierAsKnownByClient;	// 96 = 0x60
    CPLPrequeliteVariable *_libraryCreationDateVar;	// 104 = 0x68
    CPLPrequeliteVariable *_changeSessionUpdateVar;	// 112 = 0x70
    _Bool _hasCachedChangeSessionUpdate;	// 120 = 0x78
    CPLChangeSessionUpdate *_cachedChangeSessionUpdate;	// 128 = 0x80
    CPLPrequeliteVariable *_libraryOptionsVar;	// 136 = 0x88
    CPLPrequeliteVariable *_shouldUpdateDisabledFeaturesVar;	// 144 = 0x90
    CPLPrequeliteVariable *_disabledFeaturesDataVar;	// 152 = 0x98
    CPLSimpleUpgradeHistory *_history;	// 160 = 0xa0
    CPLPrequeliteVariable *_derivativesFilterVar;	// 168 = 0xa8
    CPLPrequeliteVariable *_deactivatedVar;	// 176 = 0xb0
    Class _userIdentifierClass;	// 184 = 0xb8
    NSObject<OS_dispatch_queue> *_isClientInSyncWithClientCacheQueue;	// 192 = 0xc0
    _Bool _isClientInSyncWithClientCache;	// 200 = 0xc8
    unsigned long long _resetOption;	// 208 = 0xd0
    NSString *_resetReason;	// 216 = 0xd8
    NSString *_wipeReason;	// 224 = 0xe0
    _Bool _failInsteadOfWipe;	// 232 = 0xe8
    _Bool _needsToReset;	// 233 = 0xe9
    _Bool _reentrencyGuard;	// 234 = 0xea
    _Bool _didWipeLibrary;	// 235 = 0xeb
    int _upgradeEventJournal;	// 236 = 0xec
    _Bool _mustFix22666940;	// 240 = 0xf0
    _Bool;	// 241 = 0xf1
    CPLPrequeliteClientCacheMigrator *_clientCacheMigrator;	// 248 = 0xf8
    _Bool _hasScheduledClientCacheDrop;	// 256 = 0x100
    NSObject<OS_dispatch_queue> *_vacuumQueue;	// 264 = 0x108
    _Bool _executingVacuum;	// 272 = 0x110
    _Bool _shouldProfile;	// 273 = 0x111
    _Bool _showStatsForAllTransactions;	// 274 = 0x112
    double _lastLongTransactionDate;	// 280 = 0x118
    NSMutableDictionary *_transactionStatistics;	// 288 = 0x120
    NSDate *_libraryCreationDate;	// 296 = 0x128
}

+ (void)setShouldPreventWipeOnUpgrade:(_Bool)arg1;	// IMP=0x002000000002eb33
+ (_Bool)shouldPreventWipeOnUpgrade;	// IMP=0x001000000002eaac
- (void).cxx_destruct;	// IMP=0x0020000000039fac
@property(readonly) NSDate *libraryCreationDate; // @synthesize libraryCreationDate=_libraryCreationDate;
- (id)redactedDescription;	// IMP=0x0010000000039e89
@property(readonly, copy) NSString *description;
- (_Bool)deleteDynamicallyCreatedStorages:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000399d3
- (_Bool)createStoragesDynamically:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000396c2
- (void)markAsCorrupted;	// IMP=0x001000000003948d
- (void)emergencyClose;	// IMP=0x001000000003910f
- (void)stopVacuum;	// IMP=0x001000000003902e
- (void)startVacuum;	// IMP=0x0010000000038e16
- (void)_vacuum:(long long)arg1 withInitialDatabaseSize:(long long)arg2;	// IMP=0x00100000000389e0
- (long long)_sizeInBytes;	// IMP=0x0010000000038911
- (id)transientPullRepository;	// IMP=0x0010000000038893
- (id)cloudCache;	// IMP=0x0010000000038815
- (id)clientCache;	// IMP=0x00100000000387e5
- (_Bool)hasTable:(id)arg1;	// IMP=0x0010000000038792
- (_Bool)table:(id)arg1 hasColumnWithName:(id)arg2;	// IMP=0x0010000000038687
- (void)table:(id)arg1 enumerateCountGroupedByProperty:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x0010000000038568
- (void)table:(id)arg1 enumerateCountGroupedByUnsignedIntegerProperty:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x0010000000038446
- (unsigned long long)table:(id)arg1 countOfRecordsMatchingQuery:(id)arg2;	// IMP=0x001000000003839e
- (unsigned long long)tableCountOfRecords:(id)arg1;	// IMP=0x001000000003830f
- (_Bool)table:(id)arg1 hasRecordsMatchingQuery:(id)arg2;	// IMP=0x0010000000038276
- (_Bool)tableHasRecords:(id)arg1;	// IMP=0x00100000000381fd
- (void)recordUpgradeEvent:(id)arg1 arguments:(struct __va_list_tag [1])arg2;	// IMP=0x0010000000038121
- (void)recordUpgradeEvent:(id)arg1;	// IMP=0x001000000003807d
- (id)status;	// IMP=0x0010000000037fad
- (void)transactionDidFinish;	// IMP=0x0010000000037fa7
- (void)writeTransactionDidFail;	// IMP=0x0010000000037e2c
- (void)writeTransactionDidSucceed;	// IMP=0x0010000000037e0f
- (void)wipeStoreAtNextOpeningWithReason:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000037bac
- (void)_deleteWipeReason;	// IMP=0x00100000000379fb
- (id)wipeReason;	// IMP=0x0010000000037944
- (id)_wipeStoreMarkerURL;	// IMP=0x001000000003789c
- (_Bool)storeDerivativesFilter:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000377fa
- (id)derivativesFilter;	// IMP=0x001000000003777d
- (id)disabledFeatures;	// IMP=0x00100000000376c4
- (_Bool)storeDisabledFeatures:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000375e1
- (_Bool)setShouldUpdateDisabledFeaturesWithError:(id *)arg1;	// IMP=0x00100000000375ba
@property(readonly, nonatomic) _Bool shouldUpdateDisabledFeatures;
- (_Bool)storeChangeSessionUpdate:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000373ee
@property(readonly, nonatomic) CPLChangeSessionUpdate *storedChangeSessionUpdate;
@property(readonly, nonatomic) _Bool hasStoredChangeSessionUpdate;
- (_Bool)isClientInSyncWithClientCache;	// IMP=0x001000000003714a
- (_Bool)storeClientIsNotInSyncWithClientCacheWithError:(id *)arg1;	// IMP=0x0010000000036fbb
- (_Bool)storeClientIsInSyncWithClientCacheWithError:(id *)arg1;	// IMP=0x0010000000036dfa
- (id)createNewClientCacheIdentifier;	// IMP=0x0010000000036da3
- (_Bool)storeClientCacheIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000036d83
- (id)clientCacheIdentifier;	// IMP=0x0010000000036d66
- (_Bool)storeLastQuarantineCountReportDate:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000036d46
- (id)lastQuarantineCountReportDate;	// IMP=0x0010000000036cd8
- (_Bool)storeUserIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000036b57
- (id)userIdentifier;	// IMP=0x00100000000368ef
- (Class)_userIdentifierClass;	// IMP=0x0010000000036814
- (_Bool)resetValueForGlobalVariable:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000036794
- (id)valueForGlobalVariable:(id)arg1;	// IMP=0x0010000000036665
- (_Bool)setValue:(id)arg1 forGlobalVariable:(id)arg2 error:(id *)arg3;	// IMP=0x001000000003655f
- (_Bool)addGlobalVariable:(id)arg1 defaultValue:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000361b6
- (void)_cacheValue:(id)arg1 forVariable:(id)arg2;	// IMP=0x0010000000036128
- (id)pqlConnection;	// IMP=0x0010000000036113
- (id)createNewLibraryVersion;	// IMP=0x00100000000360bc
- (_Bool)storeLibraryVersion:(id)arg1 withError:(id *)arg2;	// IMP=0x001000000003609c
- (id)libraryVersion;	// IMP=0x001000000003607f
- (_Bool)updateLibraryOptions:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x0010000000035dee
- (unsigned long long)libraryOptions;	// IMP=0x0010000000035d9f
- (void)performBarrier;	// IMP=0x0010000000035d7d
- (void)performBarrierTransaction:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000035c70
- (_Bool)closeWithError:(id *)arg1;	// IMP=0x0010000000035c28
- (void)blockWriteTransactionsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000035ac7
- (void)performWriteTransaction:(id)arg1 withBlock:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000003550d
- (void)performReadTransaction:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000003511c
- (_Bool)executePostOpenWithError:(id *)arg1;	// IMP=0x0010000000035056
- (_Bool)openWithError:(id *)arg1;	// IMP=0x0010000000034e0d
- (_Bool)_openWithError:(id *)arg1;	// IMP=0x001000000003393f
- (void)_markLibraryAsCorruptedWithInfo:(id)arg1;	// IMP=0x0010000000033879
- (_Bool)_setupPragmasAndFunctions;	// IMP=0x001000000003385c
- (_Bool)markDatabaseAsDeactivatedWithError:(id *)arg1;	// IMP=0x0010000000033835
- (void)_deleteCorruptionInfo;	// IMP=0x0010000000033684
@property(readonly, nonatomic) id corruptionInfo;
- (id)_corruptionMarkerURL;	// IMP=0x00100000000334df
- (_Bool)_setupDBIfNeeded;	// IMP=0x0010000000032dea
- (_Bool)_upgradeDB:(long long)arg1;	// IMP=0x001000000003203f
- (_Bool)_wipeIfDeactivated:(long long)arg1 didWipeDatabase:(_Bool *)arg2 error:(id *)arg3;	// IMP=0x0010000000031f2e
- (void)_wipeBeforeOpeningIfNecessary;	// IMP=0x0010000000031d5a
- (id)_wipeReasonFromCorruptionInfo:(id)arg1;	// IMP=0x0010000000031cc3
- (_Bool)_closeWipeAndReOpenWithReason:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000319e2
- (void)_wipeWithReason:(id)arg1;	// IMP=0x00100000000317fe
- (_Bool)_postUpgradeToVersion:(long long)arg1;	// IMP=0x00100000000315d3
- (_Bool)_upgradeToVersion:(long long)arg1;	// IMP=0x0010000000031266
- (void)_scheduleClientCacheDropIfNecessary;	// IMP=0x001000000003118e
- (void)_scheduleClientCacheDrop;	// IMP=0x001000000003104e
- (_Bool)_fix22666940;	// IMP=0x0010000000030869
- (_Bool)_performWithFlags:(unsigned int)arg1 action:(CDUnknownBlockType)arg2;	// IMP=0x00100000000304e8
- (void)_unsetupProfilingHooks;	// IMP=0x001000000003046c
- (void)_setupProfilingHooks;	// IMP=0x001000000002ffdd
- (id)_transactionStatsDescription;	// IMP=0x001000000002fd9e
- (_Bool)_initializeDB;	// IMP=0x001000000002f492
- (void)triggerResetAfterUpgrade:(unsigned long long)arg1 withReason:(id)arg2;	// IMP=0x001000000002f2ef
- (id)initWithAbstractObject:(id)arg1;	// IMP=0x001000000002eb46

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
