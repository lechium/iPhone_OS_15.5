//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFItemManager.h>

@class HFItem, HFStaticItem, HFStaticItemProvider, HFUserNameFormatter, HMHome;
@protocol HFPersonLikeItem;

@interface HUFaceRecognitionPersonEditorItemManager : HFItemManager
{
    HFItem *_faceCropItem;	// 8 = 0x8
    HFItem *_nameItem;	// 16 = 0x10
    HFItem *_addNameItem;	// 24 = 0x18
    HFStaticItem *_hideNotificationsItem;	// 32 = 0x20
    HFItem *_deleteItem;	// 40 = 0x28
    HFStaticItemProvider *_staticItemProvider;	// 48 = 0x30
    HMHome *_personHome;	// 56 = 0x38
    HFUserNameFormatter *_userNameFormatter;	// 64 = 0x40
}

+ (id)dateFormatter;	// IMP=0x0000000000044236
- (void).cxx_destruct;	// IMP=0x0000000000045fb8
@property(retain, nonatomic) HFUserNameFormatter *userNameFormatter; // @synthesize userNameFormatter=_userNameFormatter;
@property(retain, nonatomic) HMHome *personHome; // @synthesize personHome=_personHome;
@property(retain, nonatomic) HFStaticItemProvider *staticItemProvider; // @synthesize staticItemProvider=_staticItemProvider;
@property(retain, nonatomic) HFItem *deleteItem; // @synthesize deleteItem=_deleteItem;
@property(retain, nonatomic) HFStaticItem *hideNotificationsItem; // @synthesize hideNotificationsItem=_hideNotificationsItem;
@property(retain, nonatomic) HFItem *addNameItem; // @synthesize addNameItem=_addNameItem;
@property(retain, nonatomic) HFItem *nameItem; // @synthesize nameItem=_nameItem;
@property(retain, nonatomic) HFItem *faceCropItem; // @synthesize faceCropItem=_faceCropItem;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;	// IMP=0x0000000000045717
- (id)_buildItemProvidersForHome:(id)arg1;	// IMP=0x00000000000444b1
@property(readonly, nonatomic) HFItem<HFPersonLikeItem> *personItem;
- (id)_homeFuture;	// IMP=0x000000000004443c
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;	// IMP=0x00000000000442c9

@end

