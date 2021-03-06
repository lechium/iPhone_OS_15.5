//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/BRCJobsMatching-Protocol.h>
#import <CloudDocsDaemon/BRCZone-Protocol.h>

@class BRCAccountSession, BRCClientZone, BRCPQLConnection, BRCServerChangeState, BRCSyncContext, BRCZoneRowID, BRMangledID, CKRecordZoneID, NSArray, NSMutableDictionary, NSString;

@interface BRCServerZone : NSObject <BRCJobsMatching, BRCZone>
{
    BRCServerChangeState *_changeState;	// 8 = 0x8
    BRCAccountSession *_session;	// 16 = 0x10
    BRCPQLConnection *_db;	// 24 = 0x18
    NSString *_zoneName;	// 32 = 0x20
    BRCZoneRowID *_dbRowID;	// 40 = 0x28
    BRCClientZone *_clientZone;	// 48 = 0x30
    unsigned int _state;	// 56 = 0x38
    BRCSyncContext *_metadataSyncContext;	// 64 = 0x40
    NSMutableDictionary *_failedListDirectoryOperations;	// 72 = 0x48
    NSArray *_directoriesCreatedLastSyncUp;	// 80 = 0x50
    _Bool _needsSave;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000000f2272
@property(readonly, nonatomic) unsigned int state; // @synthesize state=_state;
@property(nonatomic) _Bool needsSave; // @synthesize needsSave=_needsSave;
@property(readonly, nonatomic) BRCPQLConnection *db; // @synthesize db=_db;
@property(retain, nonatomic) BRCAccountSession *session; // @synthesize session=_session;
@property(readonly, nonatomic) BRCClientZone *clientZone; // @synthesize clientZone=_clientZone;
@property(readonly) BRCServerChangeState *changeState; // @synthesize changeState=_changeState;
@property(readonly, nonatomic) NSString *zoneName; // @synthesize zoneName=_zoneName;
@property(retain, nonatomic) BRCZoneRowID *dbRowID; // @synthesize dbRowID=_dbRowID;
- (_Bool)validateItemsLoggingToFile:(struct __sFILE *)arg1 db:(id)arg2;	// IMP=0x00000000000f20eb
- (_Bool)validateStructureLoggingToFile:(struct __sFILE *)arg1 db:(id)arg2;	// IMP=0x00000000000f1fe7
- (_Bool)dumpTablesToContext:(id)arg1 includeAllItems:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00000000000f0d5c
- (_Bool)dumpStatusToContext:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000f016f
- (id)directDirectoryChildItemIDsOfParentEnumerator:(id)arg1;	// IMP=0x00000000000f0101
- (id)itemsEnumeratorWithDB:(id)arg1;	// IMP=0x00000000000f003e
- (id)itemByItemID:(id)arg1;	// IMP=0x00000000000f0028
- (id)itemByItemID:(id)arg1 db:(id)arg2;	// IMP=0x00000000000eff97
- (void)removeForegroundClient:(id)arg1;	// IMP=0x00000000000eff25
- (void)addForegroundClient:(id)arg1;	// IMP=0x00000000000efeb3
@property(readonly) _Bool isCloudDocsZone;
- (void)clearStateBits:(unsigned int)arg1;	// IMP=0x00000000000efd1b
- (_Bool)setStateBits:(unsigned int)arg1;	// IMP=0x00000000000ef86c
- (_Bool)saveQueryRecords:(id)arg1 zonesNeedingAllocRanks:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000ef6bb
- (void)forceMoveToCloudDocs;	// IMP=0x00000000000ef121
- (_Bool)serverZoneIsCreated;	// IMP=0x00000000000ef08c
- (_Bool)shouldRecreateServerZoneAfterError:(id)arg1;	// IMP=0x00000000000ef03c
- (id)deleteAllContentsOperation;	// IMP=0x00000000000ef034
- (void)deleteAllContentsOnServerWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000eefa8
- (_Bool)resetServerTruth;	// IMP=0x00000000000eef94
- (_Bool)resetServerTruthAndDestroyZone:(_Bool)arg1;	// IMP=0x00000000000eec4d
- (void)collectTombstoneRanks:(id)arg1;	// IMP=0x00000000000ee977
- (void)_collectTombstoneForRank:(unsigned long long)arg1;	// IMP=0x00000000000ee82c
- (id)failedListItemIDs;	// IMP=0x00000000000ee816
- (void)failedListingDirectoryChanges:(id)arg1 serverTruthCallback:(CDUnknownBlockType)arg2 clientTruthCallback:(CDUnknownBlockType)arg3 folderItemID:(id)arg4;	// IMP=0x00000000000ee6d9
- (unsigned long long)didListDirectoryChangesWithResults:(id)arg1 pendingFetchChanges:(id)arg2;	// IMP=0x00000000000ee05a
- (unsigned long long)didSyncDownRequestID:(unsigned long long)arg1 serverChangeToken:(id)arg2 editedRecords:(id)arg3 deletedRecordIDs:(id)arg4 deletedShareRecordIDs:(id)arg5 allocRankZones:(id *)arg6 caughtUp:(_Bool)arg7 pendingChanges:(id)arg8;	// IMP=0x00000000000ec1db
- (void)handleMovedZoneNames:(id)arg1;	// IMP=0x00000000000ebd65
- (void)checkIfFinishedFullSync;	// IMP=0x00000000000ebacd
- (_Bool)allocateRanksWhenCaughtUp:(_Bool)arg1;	// IMP=0x00000000000ea378
- (void)_recomputeMinLastUsedTime;	// IMP=0x00000000000ea227
- (_Bool)_recoverFromCorruptShareOptionsWithItemType:(BOOL)arg1 itemID:(id)arg2 parentID:(id)arg3 sharingOptions:(unsigned long long)arg4;	// IMP=0x00000000000e9ebc
- (id)_structurePrefixForType:(BOOL)arg1;	// IMP=0x00000000000e9dfe
- (_Bool)_saveEditedShareRecords:(id)arg1 deletedShareRecordIDs:(id)arg2 zonesNeedingAllocRanks:(id)arg3;	// IMP=0x00000000000e99d6
- (_Bool)_saveEditedContentRecords:(id)arg1 zonesNeedingAllocRanks:(id)arg2;	// IMP=0x00000000000e970d
- (void)_reportCantSaveProblem:(id)arg1 record:(id)arg2;	// IMP=0x00000000000e95dd
- (_Bool)_saveDeletedRecordIDs:(id)arg1;	// IMP=0x00000000000e9322
- (_Bool)_saveEditedStructureRecords:(id)arg1 zonesNeedingAllocRanks:(id)arg2;	// IMP=0x00000000000e903e
- (_Bool)_savePendingChangesSharesIgnoringRecordIDs:(id)arg1 zonesNeedingAllocRanks:(id)arg2 pendingChangeStream:(id)arg3;	// IMP=0x00000000000e8d4f
- (_Bool)_savePendingChangesDeletedRecordIDsIgnoringRecordIDs:(id)arg1 pendingChangeStream:(id)arg2;	// IMP=0x00000000000e8a63
- (_Bool)_savePendingChangesEditedContentRecordsIgnoringRecordIDs:(id)arg1 zonesNeedingAllocRanks:(id)arg2 pendingChangeStream:(id)arg3;	// IMP=0x00000000000e88de
- (_Bool)_savePendingChangesEditedStructureRecordsIgnoringRecordIDs:(id)arg1 zonesNeedingAllocRanks:(id)arg2 pendingChangeStream:(id)arg3;	// IMP=0x00000000000e8759
- (_Bool)_markItemDeadForRecordID:(id)arg1;	// IMP=0x00000000000e83d6
- (_Bool)_markShareIDDead:(id)arg1;	// IMP=0x00000000000e824e
- (_Bool)_saveEditedRecord:(id)arg1 zonesNeedingAllocRanks:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000e7d87
- (_Bool)_saveEditedShareRecord:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000e78e3
- (_Bool)_saveEditedAliasRecord:(id)arg1 zonesNeedingAllocRanks:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000e6f06
- (_Bool)_saveEditedFinderBookmarkRecord:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000e6c8b
- (_Bool)_saveEditedSymlinkRecord:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000e68e6
- (_Bool)_saveEditedDocumentContentRecord:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000e5eb7
- (_Bool)_saveEditedDirOrDocStructureRecord:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000e5c73
- (_Bool)_saveItemID:(id)arg1 version:(id)arg2 record:(id)arg3 iWorkSharingOptions:(unsigned long long)arg4;	// IMP=0x00000000000e58cc
- (_Bool)_saveItemID:(id)arg1 stat:(id)arg2 serverMetrics:(id)arg3 record:(id)arg4 error:(id *)arg5;	// IMP=0x00000000000e4eca
- (_Bool)_saveItemID:(id)arg1 stat:(id)arg2 serverMetrics:(id)arg3 record:(id)arg4 origName:(id)arg5 base:(id)arg6 no:(id)arg7 ext:(id)arg8;	// IMP=0x00000000000e36e6
- (id)xattrForSignature:(id)arg1;	// IMP=0x00000000000e367a
- (_Bool)storeXattr:(id)arg1;	// IMP=0x00000000000e33a6
- (_Bool)hasXattrWithSignature:(id)arg1;	// IMP=0x00000000000e3353
- (void)deactivateFromClientZone;	// IMP=0x00000000000e3339
- (void)activateWithClientZone:(id)arg1 offline:(_Bool)arg2;	// IMP=0x00000000000e3328
- (id)initWithMangledID:(id)arg1 dbRowID:(id)arg2 plist:(id)arg3 session:(id)arg4;	// IMP=0x00000000000e309e
@property(readonly, nonatomic) NSMutableDictionary *plist;
@property(readonly, copy) NSString *description;
- (id)descriptionWithContext:(id)arg1;	// IMP=0x00000000000e2d54
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000e2c61
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BRMangledID *mangledID;
@property(readonly, nonatomic) CKRecordZoneID *zoneID;
@property(readonly, nonatomic) NSString *ownerName;
@property(readonly, nonatomic) BRCSyncContext *metadataSyncContextIfExists;
@property(readonly, nonatomic) BRCSyncContext *metadataSyncContext;
- (id)asSharedZone;	// IMP=0x00000000000e2a15
- (id)asPrivateZone;	// IMP=0x00000000000e29d0
@property(readonly, nonatomic) _Bool isPrivateZone;
@property(readonly, nonatomic) _Bool isSharedZone;
- (void)scheduleMoveToCloudDocs;	// IMP=0x00000000000a6b59
- (id)matchingJobsWhereSQLClause;	// IMP=0x00000000002c8243
- (id)jobsDescription;	// IMP=0x00000000002c81d7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

