//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, WBSCRDTPosition;

@interface CloudBookmarkSyncMigrationSaveReparentedBookmarksHandler
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
    NSMutableArray *_namesOfRemainingRecordsToSave;	// 16 = 0x10
    WBSCRDTPosition *_lastKnownPositionInRoot;	// 24 = 0x18
    _Bool _isSavingReparentedRecords;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000005bd41
- (id)positionForCloudBookmarkWithRecordName:(id)arg1;	// IMP=0x001000000005bbed
- (id)recordIDForParentSyncServerID:(id)arg1;	// IMP=0x001000000005bb42
- (id)_nextCloudBookmarkToSave;	// IMP=0x001000000005ba70
- (void)_didFinishSavingRecordsWithNames:(id)arg1;	// IMP=0x001000000005b9a0
- (void)_didFailSavingWithError:(id)arg1;	// IMP=0x001000000005b8ee
- (void)beginSavingReparentedBookmarksInOperationGroup:(id)arg1 withRecordNames:(id)arg2 lastKnownPositionInRoot:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000005b6c5

@end

