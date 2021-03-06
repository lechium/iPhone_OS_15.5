//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EFLocked, NSArray, NSMutableDictionary, NSString;

@interface FavoritesCollection : NSObject
{
    unsigned long long _type;	// 8 = 0x8
    _Bool _transient;	// 16 = 0x10
    NSMutableDictionary *_invalidItemDicts;	// 24 = 0x18
    EFLocked *_state;	// 32 = 0x20
}

+ (id)outboxCollection;	// IMP=0x004000000001fc1c
+ (id)accountsCollection;	// IMP=0x001000000001fbf6
+ (id)mailboxesCollection;	// IMP=0x001000000001fbd0
- (void).cxx_destruct;	// IMP=0x0020000000022b58
@property(nonatomic) _Bool transient; // @synthesize transient=_transient;
- (id)description;	// IMP=0x0010000000022a78
- (id)uniqueId;	// IMP=0x0010000000022a50
@property(readonly, getter=hidesHeader) _Bool hidesHeader;
@property(readonly, getter=doesSync) _Bool doesSync;
- (_Bool)isShowingAllInboxes;	// IMP=0x0010000000022952
- (_Bool)isShowingSharedMailboxOfType:(unsigned long long)arg1;	// IMP=0x00100000000228b0
@property(readonly, nonatomic) NSString *displayName;
- (_Bool)isVisible;	// IMP=0x001000000002244c
- (id)visibleItemsOfType:(long long)arg1;	// IMP=0x00100000000222b3
- (id)itemsOfType:(long long)arg1;	// IMP=0x00100000000220cf
@property(readonly, nonatomic) NSArray *selectedItems;
@property(readonly, nonatomic) NSArray *visibleItems;
@property(readonly, nonatomic) NSArray *expandedItems;
@property(readonly, nonatomic) NSArray *items;
- (id)itemWithSyncKey:(id)arg1;	// IMP=0x001000000002195a
- (id)removeItemWithSyncKey:(id)arg1;	// IMP=0x001000000002176f
- (id)removeExpandedItem:(id)arg1;	// IMP=0x00100000000215a4
- (id)removeItem:(id)arg1;	// IMP=0x0010000000021359
- (void)addExpandedItemsFromDictionaryRepresentations:(id)arg1;	// IMP=0x0010000000021164
- (void)addOrUpdateExpandedItem:(id)arg1 replacedItem:(id *)arg2;	// IMP=0x0010000000020ef8
- (void)addOrUpdateItem:(id)arg1 replacedItem:(id *)arg2;	// IMP=0x0010000000020bae
- (_Bool)addExpandedItem:(id)arg1;	// IMP=0x0010000000020a2b
- (_Bool)addItem:(id)arg1 ordered:(_Bool)arg2;	// IMP=0x001000000002080e
- (_Bool)addItem:(id)arg1;	// IMP=0x00100000000207f9
- (void)invalidateVisibleItems;	// IMP=0x00100000000207bc
- (void)setItems:(id)arg1;	// IMP=0x001000000002068b
- (void)setEditing:(_Bool)arg1;	// IMP=0x00100000000205be
@property(nonatomic) _Bool isEditing; // @dynamic isEditing;
- (void)prepareForWriting;	// IMP=0x0010000000020304
- (id)dictionaryRepresentation;	// IMP=0x001000000001fcdb
- (_Bool)isOutboxCollection;	// IMP=0x001000000001fccd
- (_Bool)isAccountsCollection;	// IMP=0x001000000001fcbf
- (_Bool)isMailboxesCollection;	// IMP=0x001000000001fcb1
- (id)initWithDictionary:(id)arg1;	// IMP=0x001000000001f7f2

@end

