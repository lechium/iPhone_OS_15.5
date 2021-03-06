//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFItemManager.h>

@class HFActionSetItemProvider, HFReorderableHomeKitItemList, HFStaticItem, HFStaticItemProvider, HMRoom;

@interface HUGridActionSetItemManager : HFItemManager
{
    _Bool _onlyShowsFavorites;	// 8 = 0x8
    _Bool _hideActionSetPlaceholderItem;	// 9 = 0x9
    HMRoom *_room;	// 16 = 0x10
    unsigned long long _actionSetStyle;	// 24 = 0x18
    HFStaticItem *_actionSetPlaceholderItem;	// 32 = 0x20
    HFActionSetItemProvider *_actionSetItemProvider;	// 40 = 0x28
    HFStaticItemProvider *_actionSetPlaceholderItemProvider;	// 48 = 0x30
    HFReorderableHomeKitItemList *_clientReorderableActionSetList;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000153d53
@property(retain, nonatomic) HFReorderableHomeKitItemList *clientReorderableActionSetList; // @synthesize clientReorderableActionSetList=_clientReorderableActionSetList;
@property(retain, nonatomic) HFStaticItemProvider *actionSetPlaceholderItemProvider; // @synthesize actionSetPlaceholderItemProvider=_actionSetPlaceholderItemProvider;
@property(retain, nonatomic) HFActionSetItemProvider *actionSetItemProvider; // @synthesize actionSetItemProvider=_actionSetItemProvider;
@property(retain, nonatomic) HFStaticItem *actionSetPlaceholderItem; // @synthesize actionSetPlaceholderItem=_actionSetPlaceholderItem;
@property(readonly, nonatomic) unsigned long long actionSetStyle; // @synthesize actionSetStyle=_actionSetStyle;
@property(nonatomic) _Bool hideActionSetPlaceholderItem; // @synthesize hideActionSetPlaceholderItem=_hideActionSetPlaceholderItem;
@property(nonatomic) _Bool onlyShowsFavorites; // @synthesize onlyShowsFavorites=_onlyShowsFavorites;
@property(retain, nonatomic) HMRoom *room; // @synthesize room=_room;
- (_Bool)isItemReorderableAtIndex:(id)arg1;	// IMP=0x0000000000153bc1
- (void)_updateFilters;	// IMP=0x0000000000153b0a
- (_Bool)shouldPerformInitialLoadOnMainThread;	// IMP=0x0000000000153b02
- (id)_itemsToHideInSet:(id)arg1;	// IMP=0x00000000001539f5
- (_Bool)_requiresNotificationsForCharacteristic:(id)arg1;	// IMP=0x00000000001539ed
- (void)_didFinishUpdateTransactionWithAffectedItems:(id)arg1;	// IMP=0x0000000000153939
- (id)_itemForSorting;	// IMP=0x0000000000153927
- (CDUnknownBlockType)_comparatorForSectionIdentifier:(id)arg1;	// IMP=0x000000000015386a
- (id)_buildSectionsWithDisplayedItems:(id)arg1;	// IMP=0x00000000001536cc
- (id)_buildItemProvidersForHome:(id)arg1;	// IMP=0x00000000001532ef
@property(retain, nonatomic) HFReorderableHomeKitItemList *reorderableActionSetList;
- (id)actionSetItemAssociatedWithActionSet:(id)arg1;	// IMP=0x0000000000152fb8
- (id)initWithDelegate:(id)arg1 actionSetStyle:(unsigned long long)arg2 room:(id)arg3;	// IMP=0x0000000000152f2e
- (id)initWithDelegate:(id)arg1;	// IMP=0x0000000000152eeb

@end

