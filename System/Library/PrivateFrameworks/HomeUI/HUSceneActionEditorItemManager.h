//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFItemManager.h>

@class HFActionSetBuilder, HFStaticItem, NSMutableDictionary, NSSet;

@interface HUSceneActionEditorItemManager : HFItemManager
{
    HFActionSetBuilder *_actionSetBuilder;	// 8 = 0x8
    unsigned long long _mode;	// 16 = 0x10
    NSSet *_prioritizedServices;	// 24 = 0x18
    HFStaticItem *_nameAndIconItem;	// 32 = 0x20
    NSSet *_instructionsItems;	// 40 = 0x28
    HFStaticItem *_mediaInstructionsItem;	// 48 = 0x30
    HFStaticItem *_mediaItem;	// 56 = 0x38
    HFStaticItem *_changeServicesItem;	// 64 = 0x40
    HFStaticItem *_testSceneItem;	// 72 = 0x48
    HFStaticItem *_favoriteItem;	// 80 = 0x50
    HFStaticItem *_deleteSceneItem;	// 88 = 0x58
    NSMutableDictionary *_actionGridItemsByEditorType;	// 96 = 0x60
}

+ (id)allActionGridEditorSectionIdentifiers;	// IMP=0x000000000017ec82
+ (id)sectionIdentifierForActionGridEditorType:(unsigned long long)arg1;	// IMP=0x000000000017ec57
+ (unsigned long long)actionGridEditorTypeForSectionIdentifier:(id)arg1;	// IMP=0x000000000017ea08
- (void).cxx_destruct;	// IMP=0x0000000000180c14
@property(readonly, nonatomic) NSMutableDictionary *actionGridItemsByEditorType; // @synthesize actionGridItemsByEditorType=_actionGridItemsByEditorType;
@property(retain, nonatomic) HFStaticItem *deleteSceneItem; // @synthesize deleteSceneItem=_deleteSceneItem;
@property(retain, nonatomic) HFStaticItem *favoriteItem; // @synthesize favoriteItem=_favoriteItem;
@property(retain, nonatomic) HFStaticItem *testSceneItem; // @synthesize testSceneItem=_testSceneItem;
@property(retain, nonatomic) HFStaticItem *changeServicesItem; // @synthesize changeServicesItem=_changeServicesItem;
@property(retain, nonatomic) HFStaticItem *mediaItem; // @synthesize mediaItem=_mediaItem;
@property(readonly, nonatomic) HFStaticItem *mediaInstructionsItem; // @synthesize mediaInstructionsItem=_mediaInstructionsItem;
@property(readonly, nonatomic) NSSet *instructionsItems; // @synthesize instructionsItems=_instructionsItems;
@property(retain, nonatomic) HFStaticItem *nameAndIconItem; // @synthesize nameAndIconItem=_nameAndIconItem;
@property(copy, nonatomic) NSSet *prioritizedServices; // @synthesize prioritizedServices=_prioritizedServices;
@property(readonly, nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) HFActionSetBuilder *actionSetBuilder; // @synthesize actionSetBuilder=_actionSetBuilder;
- (void)_createItemsForActionGridEditorType:(unsigned long long)arg1 home:(id)arg2;	// IMP=0x00000000001809fa
- (id)_buildSectionForActionGridEditorType:(unsigned long long)arg1;	// IMP=0x0000000000180632
- (id)_itemsToHideInSet:(id)arg1;	// IMP=0x00000000001804e8
- (id)_buildSectionsWithDisplayedItems:(id)arg1;	// IMP=0x000000000017fdcd
- (id)_buildItemProvidersForHome:(id)arg1;	// IMP=0x000000000017eff4
@property(readonly, nonatomic) NSSet *itemsToHideWhenEmpty;
@property(readonly, nonatomic) NSSet *actionGridItems;
- (id)initWithActionSetBuilder:(id)arg1 mode:(unsigned long long)arg2 delegate:(id)arg3;	// IMP=0x000000000017e95d

@end

