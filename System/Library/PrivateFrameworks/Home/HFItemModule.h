//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HFReorderableHomeKitItemList, NSSet;
@protocol HFItemUpdating;

@interface HFItemModule : NSObject
{
    NSSet *_itemProviders;	// 8 = 0x8
    id <HFItemUpdating> _itemUpdater;	// 16 = 0x10
    HFReorderableHomeKitItemList *_clientReorderableHomeKitItemList;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001d83b1
@property(retain, nonatomic) HFReorderableHomeKitItemList *clientReorderableHomeKitItemList; // @synthesize clientReorderableHomeKitItemList=_clientReorderableHomeKitItemList;
@property(readonly, nonatomic) __weak id <HFItemUpdating> itemUpdater; // @synthesize itemUpdater=_itemUpdater;
- (CDUnknownBlockType)_itemComparator;	// IMP=0x00000000001d82f4
- (id)_reorderableHomeKitItemListKey;	// IMP=0x00000000001d82ec
@property(retain, nonatomic) HFReorderableHomeKitItemList *reorderableHomeKitItemList;
@property(readonly, nonatomic) _Bool supportsReordering;
- (void)unregisterForExternalUpdates;	// IMP=0x00000000001d8144
- (void)registerForExternalUpdates;	// IMP=0x00000000001d813e
- (_Bool)containsItem:(id)arg1;	// IMP=0x00000000001d8026
@property(readonly, nonatomic) NSSet *allItems;
- (id)buildSectionsWithDisplayedItems:(id)arg1;	// IMP=0x00000000001d7f1b
- (id)buildItemProviders;	// IMP=0x00000000001d7f13
@property(readonly, nonatomic) NSSet *itemProviders; // @synthesize itemProviders=_itemProviders;
- (id)initWithItemUpdater:(id)arg1;	// IMP=0x00000000001d7da9
- (id)init;	// IMP=0x00000000001d7cf4

@end
