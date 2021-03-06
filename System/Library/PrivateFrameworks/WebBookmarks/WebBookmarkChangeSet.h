//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WebBookmarks/NSSecureCoding-Protocol.h>

@class NSArray, NSMutableDictionary, NSMutableOrderedSet, NSURL;
@protocol OS_dispatch_queue;

@interface WebBookmarkChangeSet : NSObject <NSSecureCoding>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    int _lastBookmarkIDForAddingInMemoryBookmark;	// 16 = 0x10
    NSMutableOrderedSet *_changes;	// 24 = 0x18
    NSMutableDictionary *_bookmarkIDToChanges;	// 32 = 0x20
    NSMutableDictionary *_associatedIDToChanges;	// 40 = 0x28
    NSMutableDictionary *_folderIDToChildrenChanges;	// 48 = 0x30
    NSMutableDictionary *_folderIDToDeletedChildrenChanges;	// 56 = 0x38
    NSMutableDictionary *_folderIDToAddedChildrenChanges;	// 64 = 0x40
    NSMutableDictionary *_folderIDToModifiedChildrenChanges;	// 72 = 0x48
    NSMutableDictionary *_folderIDToReorderedChildrenChanges;	// 80 = 0x50
    NSURL *_fileURL;	// 88 = 0x58
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000180ad
- (void).cxx_destruct;	// IMP=0x000000000001bc96
@property(readonly, copy, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
- (void)_readPersistedChanges;	// IMP=0x000000000001b90c
- (void)persistChangesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000001b591
- (void)applyModificationsToBookmarks:(id)arg1;	// IMP=0x000000000001b20e
- (_Bool)bookmarkIsAddedInMemory:(int)arg1;	// IMP=0x000000000001b202
- (void)updateAddChangesWithInMemoryBookmarkID:(int)arg1 toDatabaseGeneratedID:(int)arg2;	// IMP=0x000000000001abbf
- (_Bool)folderHasReplaceChange:(int)arg1;	// IMP=0x000000000001aa72
- (unsigned long long)numberOfReorderedBookmarksInBookmarkFolder:(int)arg1;	// IMP=0x000000000001a94a
- (unsigned long long)numberOfAddedBookmarksInBookmarkFolder:(int)arg1;	// IMP=0x000000000001a822
- (id)modifiedBookmarksInBookmarkFolder:(int)arg1;	// IMP=0x000000000001a4cd
- (id)addedBookmarksInBookmarkFolder:(int)arg1;	// IMP=0x000000000001a242
- (id)deletedBookmarkIDsInBookmarkFolder:(int)arg1;	// IMP=0x0000000000019f7f
- (_Bool)isBookmarkDeleted:(int)arg1;	// IMP=0x0000000000019d3a
- (id)bookmarksAfterReplayingChangesToBookmarks:(id)arg1 inFolderWithID:(int)arg2;	// IMP=0x0000000000019837
- (long long)replayChangesOnBookmark:(id)arg1;	// IMP=0x00000000000194cf
- (void)_removeAllChanges;	// IMP=0x0000000000019422
- (void)removeAllChanges;	// IMP=0x00000000000193c1
- (void)_removeChange:(id)arg1;	// IMP=0x0000000000018fe9
- (void)removeChange:(id)arg1;	// IMP=0x0000000000018f41
- (void)_coalesceChangesForChangeIfNeeded:(id)arg1;	// IMP=0x0000000000018d50
- (void)_addChange:(id)arg1;	// IMP=0x00000000000188a4
- (void)addChange:(id)arg1;	// IMP=0x00000000000187fc
- (void)addChanges:(id)arg1;	// IMP=0x0000000000018642
@property(readonly, copy, nonatomic) NSArray *changes;
- (int)nextBookmarkIDForAddingBookmarkInMemory;	// IMP=0x000000000001844a
@property(readonly, nonatomic) _Bool shouldSync;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000181ed
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000180b5
- (id)initWithFileURL:(id)arg1 readPersistedChanges:(_Bool)arg2;	// IMP=0x0000000000017e0f
- (id)initWithFileURL:(id)arg1;	// IMP=0x0000000000017df8

@end

