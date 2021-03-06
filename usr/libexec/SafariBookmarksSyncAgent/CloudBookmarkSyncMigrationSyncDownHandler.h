//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableSet;
@protocol CloudBookmarkSyncMigrationSyncDownHandlerDelegate;

@interface CloudBookmarkSyncMigrationSyncDownHandler
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
    NSMutableSet *_recordNamesToDelete;	// 16 = 0x10
    _Bool _isSyncing;	// 24 = 0x18
    id <CloudBookmarkSyncMigrationSyncDownHandlerDelegate> _delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000005d6c0
@property(nonatomic) __weak id <CloudBookmarkSyncMigrationSyncDownHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)shouldApplyReference:(id)arg1 withGeneration:(id)arg2 toAttribute:(id)arg3 inRecordWithName:(id)arg4;	// IMP=0x001000000005d5c9
- (id)_cloudBookmarkForRecord:(id)arg1 isNewBookmark:(_Bool *)arg2;	// IMP=0x001000000005d28a
- (void)_updateLocalBookmarkWithCKRecord:(id)arg1;	// IMP=0x001000000005cf10
- (void)_didDeleteRecordWithName:(id)arg1;	// IMP=0x001000000005cead
- (void)_performSyncDownInOperationGroup:(id)arg1 withRetryManager:(id)arg2;	// IMP=0x001000000005c36b
- (void)_performSyncDownInOperationGroup:(id)arg1;	// IMP=0x001000000005c30c
- (void)_didFinishSyncingReceivingRecordNames:(id)arg1 error:(id)arg2;	// IMP=0x001000000005c123
- (void)beginSyncDownInOperationGroup:(id)arg1 keepingRecordsMarkedAsDeletedLocally:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000005bf38
- (void)beginSyncDownInOperationGroup:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000005be8c

@end

