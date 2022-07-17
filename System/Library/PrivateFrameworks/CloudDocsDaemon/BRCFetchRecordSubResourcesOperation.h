//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudDocsDaemon/BRCOperationSubclass-Protocol.h>

@class BRCPendingChangesStream, BRCServerZone, NSError, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject, NSString;
@protocol OS_dispatch_group, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface BRCFetchRecordSubResourcesOperation <BRCOperationSubclass>
{
    BRCServerZone *_serverZone;	// 32 = 0x20
    BRCPendingChangesStream *_pendingChangesStream;	// 40 = 0x28
    NSMutableDictionary *_recordsByID;	// 48 = 0x30
    NSMutableDictionary *_subResourceRecordsByID;	// 56 = 0x38
    NSMutableArray *_deletedRecordIDs;	// 64 = 0x40
    NSMutableArray *_deletedShareIDs;	// 72 = 0x48
    NSMutableSet *_movedZoneNames;	// 80 = 0x50
    NSObject<OS_dispatch_group> *_operationGroup;	// 88 = 0x58
    NSObject<OS_dispatch_group> *_xattrFetchingGroup;	// 96 = 0x60
    NSObject<OS_dispatch_source> *_xattrFetchingSource;	// 104 = 0x68
    NSObject<OS_dispatch_group> *_deserializeGroup;	// 112 = 0x70
    NSObject<OS_dispatch_source> *_deserializeSource;	// 120 = 0x78
    NSError *_error;	// 128 = 0x80
    unsigned char _deserializeState;	// 136 = 0x88
    _Bool _isDoneFetchingRecords;	// 137 = 0x89
    _Bool _isDeltaSync;	// 138 = 0x8a
    _Bool _canSaveDirectly;	// 139 = 0x8b
    _Bool _canSaveDirectlyWithDeletes;	// 140 = 0x8c
    _Bool _contentRecordsFetchedInline;	// 141 = 0x8d
    CDUnknownBlockType _queryFinishedServerTruthCallback;	// 144 = 0x90
    CDUnknownBlockType _queryFinishedClientTruthCallback;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x00000000002a4cb1
@property(copy, nonatomic) CDUnknownBlockType queryFinishedClientTruthCallback; // @synthesize queryFinishedClientTruthCallback=_queryFinishedClientTruthCallback;
@property(copy, nonatomic) CDUnknownBlockType queryFinishedServerTruthCallback; // @synthesize queryFinishedServerTruthCallback=_queryFinishedServerTruthCallback;
@property(readonly, nonatomic) BRCPendingChangesStream *pendingChangesStream; // @synthesize pendingChangesStream=_pendingChangesStream;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
- (_Bool)saveRecordsWithQueryCursor:(id)arg1;	// IMP=0x00000000002a425b
- (_Bool)saveRecordsWithServerChangeToken:(id)arg1 clientChangeToken:(long long)arg2 syncStatus:(long long)arg3;	// IMP=0x00000000002a3a20
- (_Bool)_hasRecordsPendingSubResources;	// IMP=0x00000000002a39d3
- (void)_saveRecordsToPendingChangesWithServerChangeToken:(id)arg1 clientChangeToken:(long long)arg2;	// IMP=0x00000000002a38e9
- (void)_cleanUpAfterSavingRecords;	// IMP=0x00000000002a382e
- (void)_fetchRecordsBlockingSaveIfNecessary;	// IMP=0x00000000002a32d2
- (void)_prepareToSaveRecords;	// IMP=0x00000000002a1e1d
- (void)_createSubResourceGroupsFromPendingChangesStreamIfNecessary;	// IMP=0x00000000002a1d54
- (void)_scheduleXattrFetch;	// IMP=0x00000000002a06ee
- (_Bool)_markSubResourceRecordAsFetchedIfNecessary:(id)arg1;	// IMP=0x00000000002a04c0
- (void)_scheduleDeserialize;	// IMP=0x000000000029f294
- (void)finishWithResult:(id)arg1 error:(id)arg2;	// IMP=0x000000000029f01d
- (void)main;	// IMP=0x000000000029ef27
- (void)stop;	// IMP=0x000000000029ebab
- (void)cancel;	// IMP=0x000000000029ea84
- (void)stopWithError:(id)arg1;	// IMP=0x000000000029e939
- (void)_startWithParentOperation:(id)arg1;	// IMP=0x000000000029e8a4
- (void)notifyWhenRecordsAreFetchedAndFinish:(CDUnknownBlockType)arg1;	// IMP=0x000000000029e88a
- (void)notifyWhenCaughtUp:(_Bool)arg1 whenRecordsAreFetchedAndFinish:(CDUnknownBlockType)arg2;	// IMP=0x000000000029e638
- (void)_notifyWhenRecordsAreFetched:(CDUnknownBlockType)arg1;	// IMP=0x000000000029e4f9
- (void)shareIDWasDeleted:(id)arg1;	// IMP=0x000000000029e337
- (void)recordIDWasDeleted:(id)arg1;	// IMP=0x000000000029ddd0
- (void)addRecordIDToDeserialize:(id)arg1 recordType:(long long)arg2;	// IMP=0x000000000029d942
- (void)addRecordIDToDeserialize:(id)arg1;	// IMP=0x000000000029d92e
- (void)addRecord:(id)arg1;	// IMP=0x000000000029c46b
- (_Bool)shouldRetryForError:(id)arg1;	// IMP=0x000000000029c3fa
- (id)createActivity;	// IMP=0x000000000029c3d1
- (id)initAndScheduleWithServerZone:(id)arg1 parentOperation:(id)arg2 pendingChangesStream:(id)arg3 contentRecordsFetchedInline:(_Bool)arg4;	// IMP=0x000000000029baca
- (id)movedZoneNames;	// IMP=0x000000000029bab5
- (id)records;	// IMP=0x000000000029ba1c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
