//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFItem.h>

@class HRERecommendation;

@interface HRERecommendationItem : HFItem
{
    _Bool _selected;	// 8 = 0x8
    HRERecommendation *_recommendation;	// 16 = 0x10
    unsigned long long _accessoryCountType;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000009b10
@property(nonatomic) unsigned long long accessoryCountType; // @synthesize accessoryCountType=_accessoryCountType;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) HRERecommendation *recommendation; // @synthesize recommendation=_recommendation;
- (id)_subclass_updateWithOptions:(id)arg1;	// IMP=0x00000000000092f5
- (id)initWithRecommendation:(id)arg1;	// IMP=0x000000000000926d

@end

