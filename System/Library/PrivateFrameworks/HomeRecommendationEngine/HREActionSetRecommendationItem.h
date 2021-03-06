//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFItem.h>

@class HREActionSetRecommendation, HRERecommendationItem;
@protocol HFServiceLikeItem;

@interface HREActionSetRecommendationItem : HFItem
{
    HRERecommendationItem *_recommendationItem;	// 8 = 0x8
    HFItem<HFServiceLikeItem> *_serviceLikeItem;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000b140
@property(retain, nonatomic) HFItem<HFServiceLikeItem> *serviceLikeItem; // @synthesize serviceLikeItem=_serviceLikeItem;
@property(readonly, nonatomic) HRERecommendationItem *recommendationItem; // @synthesize recommendationItem=_recommendationItem;
- (id)_subclass_updateWithOptions:(id)arg1;	// IMP=0x000000000000abbd
@property(readonly, nonatomic) HREActionSetRecommendation *recommendation;
- (id)init;	// IMP=0x000000000000aa75
- (id)initWithRecommendationItem:(id)arg1;	// IMP=0x000000000000aa07

@end

