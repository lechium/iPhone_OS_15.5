//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSOrderedSet, NSString, WFWorkflowIcon;

@interface WFWorkflowCollectionRecord
{
    _Bool _deleted;	// 8 = 0x8
    _Bool _folder;	// 9 = 0x9
    NSString *_name;	// 16 = 0x10
    WFWorkflowIcon *_icon;	// 24 = 0x18
    long long _lastSyncedHash;	// 32 = 0x20
    NSOrderedSet *_lastRemoteCollectionOrdering;	// 40 = 0x28
    NSOrderedSet *_lastRemoteCollectionOrderingSubset;	// 48 = 0x30
    NSOrderedSet *_collectionOrdering;	// 56 = 0x38
    NSOrderedSet *_lastRemoteShortcutOrdering;	// 64 = 0x40
    NSOrderedSet *_lastRemoteShortcutOrderingSubset;	// 72 = 0x48
    NSOrderedSet *_shortcutOrdering;	// 80 = 0x50
    NSData *_cloudKitFolderRecordMetadata;	// 88 = 0x58
    NSData *_cloudKitOrderingRecordMetadata;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000000002daab7
@property(copy, nonatomic) NSData *cloudKitOrderingRecordMetadata; // @synthesize cloudKitOrderingRecordMetadata=_cloudKitOrderingRecordMetadata;
@property(copy, nonatomic) NSData *cloudKitFolderRecordMetadata; // @synthesize cloudKitFolderRecordMetadata=_cloudKitFolderRecordMetadata;
@property(copy, nonatomic) NSOrderedSet *shortcutOrdering; // @synthesize shortcutOrdering=_shortcutOrdering;
@property(copy, nonatomic) NSOrderedSet *lastRemoteShortcutOrderingSubset; // @synthesize lastRemoteShortcutOrderingSubset=_lastRemoteShortcutOrderingSubset;
@property(copy, nonatomic) NSOrderedSet *lastRemoteShortcutOrdering; // @synthesize lastRemoteShortcutOrdering=_lastRemoteShortcutOrdering;
@property(copy, nonatomic) NSOrderedSet *collectionOrdering; // @synthesize collectionOrdering=_collectionOrdering;
@property(copy, nonatomic) NSOrderedSet *lastRemoteCollectionOrderingSubset; // @synthesize lastRemoteCollectionOrderingSubset=_lastRemoteCollectionOrderingSubset;
@property(copy, nonatomic) NSOrderedSet *lastRemoteCollectionOrdering; // @synthesize lastRemoteCollectionOrdering=_lastRemoteCollectionOrdering;
@property(readonly, nonatomic, getter=isFolder) _Bool folder; // @synthesize folder=_folder;
@property(readonly, nonatomic, getter=isDeleted) _Bool deleted; // @synthesize deleted=_deleted;
@property(nonatomic) long long lastSyncedHash; // @synthesize lastSyncedHash=_lastSyncedHash;
@property(retain, nonatomic) WFWorkflowIcon *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (long long)computedSyncHash;	// IMP=0x00000000002da7e3

@end
