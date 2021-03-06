//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFItemModule.h>

@class HFItem, HFItemBuilder, HFStaticItemProvider, HFTransformItem, NSSet;
@protocol HFNamingComponentCreating;

@interface HUNameItemModule : HFItemModule
{
    HFItem<HFNamingComponentCreating> *_sourceItem;	// 8 = 0x8
    HFItemBuilder *_sourceItemBuilder;	// 16 = 0x10
    HFTransformItem *_nameAndIconItem;	// 24 = 0x18
    NSSet *_items;	// 32 = 0x20
    HFStaticItemProvider *_itemProvider;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000029891c
@property(retain, nonatomic) HFStaticItemProvider *itemProvider; // @synthesize itemProvider=_itemProvider;
@property(retain, nonatomic) NSSet *items; // @synthesize items=_items;
@property(retain, nonatomic) HFTransformItem *nameAndIconItem; // @synthesize nameAndIconItem=_nameAndIconItem;
@property(retain, nonatomic) HFItemBuilder *sourceItemBuilder; // @synthesize sourceItemBuilder=_sourceItemBuilder;
@property(retain, nonatomic) HFItem<HFNamingComponentCreating> *sourceItem; // @synthesize sourceItem=_sourceItem;
- (id)buildSectionsWithDisplayedItems:(id)arg1;	// IMP=0x0000000000298692
- (id)itemProviders;	// IMP=0x00000000002981ee
- (id)init;	// IMP=0x0000000000298139
- (id)initWithItemUpdater:(id)arg1 sourceServiceLikeItem:(id)arg2 itemBuilder:(id)arg3;	// IMP=0x0000000000298091

@end

