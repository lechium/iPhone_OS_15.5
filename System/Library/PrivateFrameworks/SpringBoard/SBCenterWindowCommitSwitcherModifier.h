//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SBAppLayout;

@interface SBCenterWindowCommitSwitcherModifier
{
    SBAppLayout *_fromAppLayout;	// 24 = 0x18
    SBAppLayout *_centerWindowAppLayout;	// 32 = 0x20
    SBAppLayout *_fullScreenAppLayout;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000047bad8
- (struct SBSwitcherAsyncRenderingAttributes)asyncRenderingAttributesForAppLayout:(id)arg1;	// IMP=0x000000000047baca
- (id)visibleAppLayouts;	// IMP=0x000000000047ba2c
- (id)topMostLayoutElements;	// IMP=0x000000000047b962
- (double)scaleForIndex:(unsigned long long)arg1;	// IMP=0x000000000047b850
- (double)opacityForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x000000000047b7ad
- (struct CGRect)frameForIndex:(unsigned long long)arg1;	// IMP=0x000000000047b5cd
- (double)dimmingAlphaForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;	// IMP=0x000000000047b50f
- (id)animationAttributesForLayoutElement:(id)arg1;	// IMP=0x000000000047b3ff
- (id)appLayoutsToEnsureExistForMainTransitionEvent:(id)arg1;	// IMP=0x000000000047b389
- (id)transitionWillBegin;	// IMP=0x000000000047b2b3
- (id)initWithTransitionID:(id)arg1 fromAppLayout:(id)arg2;	// IMP=0x000000000047b108

@end

