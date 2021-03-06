//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFItemManager.h>

@class HFItem;
@protocol HFServiceLikeItem;

@interface HUAccessorySceneListItemManager : HFItemManager
{
    HFItem<HFServiceLikeItem> *_serviceLikeItem;	// 8 = 0x8
    HFItem *_existingScenesContentItem;	// 16 = 0x10
    HFItem *_suggestedScenesContentItem;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000328251
@property(readonly, nonatomic) HFItem *suggestedScenesContentItem; // @synthesize suggestedScenesContentItem=_suggestedScenesContentItem;
@property(readonly, nonatomic) HFItem *existingScenesContentItem; // @synthesize existingScenesContentItem=_existingScenesContentItem;
@property(readonly, copy, nonatomic) HFItem<HFServiceLikeItem> *serviceLikeItem; // @synthesize serviceLikeItem=_serviceLikeItem;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;	// IMP=0x0000000000327f44
- (id)_buildItemProvidersForHome:(id)arg1;	// IMP=0x0000000000327d2a
- (id)initWithDelegate:(id)arg1 serviceLikeItem:(id)arg2;	// IMP=0x0000000000327cb0

@end

