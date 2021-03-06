//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FCKeyValueStore, NSArray, NSHashTable;

@interface FCOfflineIssueList : NSObject
{
    FCKeyValueStore *_localStore;	// 8 = 0x8
    NSHashTable *_observers;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002bdf14
- (void)removeObserver:(id)arg1;	// IMP=0x00000000002bddc9
- (void)addObserver:(id)arg1;	// IMP=0x00000000002bdb99
- (void)removeAllIssues;	// IMP=0x00000000002bd999
- (void)removeIssueIDs:(id)arg1;	// IMP=0x00000000002bd71d
@property(readonly, nonatomic) NSArray *issueIDs;
- (id)dateRemovedForIssueID:(id)arg1;	// IMP=0x00000000002bd566
- (id)dateAddedForIssueID:(id)arg1;	// IMP=0x00000000002bd502
- (long long)sourceForIssueID:(id)arg1;	// IMP=0x00000000002bd453
- (_Bool)everContainedIssueID:(id)arg1;	// IMP=0x00000000002bd434
- (_Bool)containsIssueID:(id)arg1;	// IMP=0x00000000002bd335
- (void)addIssueID:(id)arg1 source:(long long)arg2;	// IMP=0x00000000002bce63
- (id)initWithStoreDirectoryFileURL:(id)arg1;	// IMP=0x00000000002bce4c
- (id)initWithStoreDirectoryFileURL:(id)arg1 appActivityMonitor:(id)arg2 backgroundTaskable:(id)arg3;	// IMP=0x00000000002bcbc2
- (id)init;	// IMP=0x00000000002bcb7c

@end

