//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BRCAccountSession, NSMutableArray, NSMutableDictionary, NSOperationQueue;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface BRCItemTransmogrifier : NSObject
{
    BRCAccountSession *_session;	// 8 = 0x8
    NSObject<OS_dispatch_source> *_pendingRenamesTimer;	// 16 = 0x10
    NSMutableArray *_pendingRenames;	// 24 = 0x18
    NSOperationQueue *_queue;	// 32 = 0x20
    NSMutableDictionary *_pendingTransmogirifcations;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000001607a9
- (void)scheduleBouncedDirectoryRename:(id)arg1;	// IMP=0x0000000000160671
- (void)_scheduleRenameAfter:(double)arg1 onQueue:(id)arg2;	// IMP=0x000000000016046f
- (void)_renameItems;	// IMP=0x0000000000160166
- (double)_renameItem:(id)arg1;	// IMP=0x000000000015f8fd
- (double)_renameDelayForZone:(id)arg1;	// IMP=0x000000000015f88d
- (void)scheduleDirectoryToPackageTransmogrification:(id)arg1 absolutePath:(id)arg2;	// IMP=0x000000000015efd5
- (void)_finishDirectoryToPackageTransmogrification:(id)arg1 relpath:(id)arg2;	// IMP=0x000000000015ed64
- (void)removeOperationsForItemGlobalID:(id)arg1;	// IMP=0x000000000015ece8
- (_Bool)addOperation:(id)arg1 forItem:(id)arg2;	// IMP=0x000000000015ebd1
- (id)queue;	// IMP=0x000000000015eb2b
- (id)initWithSession:(id)arg1;	// IMP=0x000000000015eaad

@end
