//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MFMessageCriterion, NSArray, NSDictionary, NSNumber, NSPredicate, NSString;

@interface FavoriteItem : NSObject
{
    long long _type;	// 8 = 0x8
    _Bool _expanded;	// 16 = 0x10
    struct os_unfair_lock_s _lock;	// 20 = 0x14
    NSString *_syncKey;	// 24 = 0x18
    NSString *_itemID;	// 32 = 0x20
    NSString *_itemIDWithoutCollectionID;	// 40 = 0x28
    NSString *_itemUUID;	// 48 = 0x30
    NSString *_collectionID;	// 56 = 0x38
    _Bool _selected;	// 64 = 0x40
    _Bool _shouldSync;	// 65 = 0x41
    MFMessageCriterion *_criterion;	// 72 = 0x48
    NSNumber *_badgeCount;	// 80 = 0x50
    NSDictionary *_scrollableHint;	// 88 = 0x58
    NSArray *_subItems;	// 96 = 0x60
    NSString *_analyticsKey;	// 104 = 0x68
}

+ (id)itemFromDictionary:(id)arg1;	// IMP=0x002000000001974b
+ (_Bool)_defaultShouldExpand;	// IMP=0x0010000000019434
+ (_Bool)_defaultShouldSync;	// IMP=0x001000000001942c
+ (id)itemForOutbox;	// IMP=0x0010000000019413
+ (id)itemForVIP:(id)arg1 selected:(_Bool)arg2;	// IMP=0x0010000000019387
+ (id)itemForSharedMailboxWithType:(unsigned long long)arg1 selected:(_Bool)arg2;	// IMP=0x001000000001931b
+ (id)itemForUnifiedMailboxWithType:(int)arg1 selected:(_Bool)arg2;	// IMP=0x00100000000192b1
+ (id)itemForInboxWithAccount:(id)arg1 selected:(_Bool)arg2;	// IMP=0x0010000000019225
+ (id)itemForMailbox:(id)arg1 selected:(_Bool)arg2 shouldSync:(_Bool)arg3;	// IMP=0x0010000000019183
+ (id)itemForMailbox:(id)arg1 selected:(_Bool)arg2;	// IMP=0x001000000001915b
+ (id)itemForAccount:(id)arg1;	// IMP=0x00100000000190fd
+ (id)log;	// IMP=0x0010000000019020
- (void).cxx_destruct;	// IMP=0x002000000001aadf
@property(readonly, copy, nonatomic) NSString *analyticsKey; // @synthesize analyticsKey=_analyticsKey;
@property(copy) NSArray *subItems; // @synthesize subItems=_subItems;
@property(copy, nonatomic) NSDictionary *scrollableHint; // @synthesize scrollableHint=_scrollableHint;
@property _Bool shouldSync; // @synthesize shouldSync=_shouldSync;
@property(getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(retain) NSNumber *badgeCount; // @synthesize badgeCount=_badgeCount;
@property(readonly) MFMessageCriterion *criterion; // @synthesize criterion=_criterion;
@property(readonly) long long type; // @synthesize type=_type;
@property(readonly) unsigned long long sourceType;
- (id)_descriptionFullyRedacted:(_Bool)arg1;	// IMP=0x001000000001a75a
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *ef_publicDescription;
@property(getter=isExpanded) _Bool expanded;
@property(readonly, getter=isExpandableInEditMode) _Bool expandableInEditMode;
@property(readonly, getter=isExpandable) _Bool expandable;
@property(readonly) _Bool acceptsMessageTransfers;
- (id)persistentIDForMigration;	// IMP=0x001000000001a572
- (void)wasChangedExternally;	// IMP=0x001000000001a56c
- (void)wasRemovedFromCollecion:(id)arg1;	// IMP=0x001000000001a552
- (void)wasAddedToCollection:(id)arg1;	// IMP=0x001000000001a4f3
- (id)syncValue;	// IMP=0x001000000001a4eb
- (id)syncKey;	// IMP=0x001000000001a4e3
- (_Bool)isVisible;	// IMP=0x001000000001a4db
- (id)representingMailboxes;	// IMP=0x001000000001a433
- (id)representingMailbox;	// IMP=0x001000000001a42b
- (id)account;	// IMP=0x001000000001a423
@property(readonly) NSPredicate *additionalPredicate;
- (id)serverCountMailboxScope;	// IMP=0x001000000001a36b
- (id)countQueryPredicate;	// IMP=0x001000000001a1d9
- (id)badgeCountString;	// IMP=0x001000000001a0c2
- (id)displayName;	// IMP=0x001000000001a08f
- (_Bool)_displayNameShouldBeRedacted;	// IMP=0x001000000001a087
@property(readonly, nonatomic) NSString *parentItemID;
@property(readonly, nonatomic) NSString *itemUUID;
@property(readonly, nonatomic) NSString *itemIDWithoutCollectionID;
@property(readonly, nonatomic) NSString *itemID;
- (id)dictionaryRepresentationRemovingSyncKeys;	// IMP=0x0010000000019c28
- (id)dictionaryRepresentation;	// IMP=0x0010000000019970
- (id)initWithDictionary:(id)arg1;	// IMP=0x00100000000194c6
- (id)initWithType:(long long)arg1;	// IMP=0x001000000001943c

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

