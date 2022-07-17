//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SBActiveAppLayoutFloatingSwitcherModifier;

@interface SBStashedFloatingSwitcherModifier
{
    SBActiveAppLayoutFloatingSwitcherModifier *_activeModifier;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000003d9403
- (_Bool)isSwitcherWindowUserInteractionEnabled;	// IMP=0x00000000003d93fb
- (_Bool)isSwitcherWindowVisible;	// IMP=0x00000000003d93f3
- (double)shadowOpacityForLayoutRole:(long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000003d93ea
- (double)opacityForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x00000000003d93dc
- (id)visibleAppLayouts;	// IMP=0x00000000003d93c3
- (id)handleTapSlideOverTongueEvent:(id)arg1;	// IMP=0x00000000003d925f
- (id)initWithFloatingConfiguration:(long long)arg1 environmentMode:(long long)arg2;	// IMP=0x00000000003d91c3

@end
