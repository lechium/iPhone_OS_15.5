//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, RoutePlanningFooterView, RouteStepItem;

__attribute__((visibility("hidden")))
@interface RoutePlanningFooterCollectionViewCell
{
    RouteStepItem *_item;	// 8 = 0x8
}

+ (double)heightForItem:(id)arg1 width:(double)arg2;	// IMP=0x0020000000645d6a
+ (Class)_contentViewClass;	// IMP=0x0010000000645be4
- (void).cxx_destruct;	// IMP=0x0020000000645e9b
@property(retain, nonatomic) RouteStepItem *item; // @synthesize item=_item;
@property(readonly, nonatomic) RoutePlanningFooterView *footerView;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000645bf5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
