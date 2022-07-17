//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudDocsDaemon/BRCListOperationDelegate-Protocol.h>

@class BRCItemID, BRCListDirectoryContentsOperation, BRCServerZone, NSMutableArray;

__attribute__((visibility("hidden")))
@interface BRCRecursiveListDirectoryContentsOperation <BRCListOperationDelegate>
{
    BRCServerZone *_serverZone;	// 48 = 0x30
    NSMutableArray *_itemsToList;	// 56 = 0x38
    BRCItemID *_rootItemID;	// 64 = 0x40
    BRCListDirectoryContentsOperation *_activeListOp;	// 72 = 0x48
    NSMutableArray *_itemsFailedListing;	// 80 = 0x50
    NSMutableArray *_recursiveListCompletionBlocks;	// 88 = 0x58
    _Bool _rescheduleApply;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000063584
@property(nonatomic) _Bool rescheduleApply; // @synthesize rescheduleApply=_rescheduleApply;
- (void)addRecursiveDirectoryListCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000063405
- (void)main;	// IMP=0x000000000006326d
- (void)finishWithResult:(id)arg1 error:(id)arg2;	// IMP=0x00000000000630d8
- (void)listNextItem;	// IMP=0x0000000000062b1f
- (void)fetchNextItemToList;	// IMP=0x0000000000062636
- (_Bool)_finishIfBlockedFromListing;	// IMP=0x0000000000062537
- (void)listOperation:(id)arg1 wasReplacedByOperation:(id)arg2;	// IMP=0x00000000000624da
- (void)cancel;	// IMP=0x0000000000062435
- (_Bool)shouldRetryForError:(id)arg1;	// IMP=0x0000000000062420
- (id)initWithItemID:(id)arg1 zone:(id)arg2 isUserWaiting:(_Bool)arg3;	// IMP=0x0000000000062249

@end
