//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HFItem, HUHomeAccessoryTileView;
@protocol HFServiceLikeItem;

@interface HUPCSetupAccessoryContentController
{
    HUHomeAccessoryTileView *_homeAccessoryTileView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000008a5d6
@property(readonly, nonatomic) HUHomeAccessoryTileView *homeAccessoryTileView; // @synthesize homeAccessoryTileView=_homeAccessoryTileView;
- (double)_contentAspectRatio;	// IMP=0x000000000008a575
@property(readonly, nonatomic) HFItem<HFServiceLikeItem> *item;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 item:(id)arg3;	// IMP=0x000000000008a3ee

@end
