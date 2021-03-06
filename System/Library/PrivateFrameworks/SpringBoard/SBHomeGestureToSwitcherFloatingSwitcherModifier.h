//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SBAppLayout, SBFluidSwitcherAnimationSettings, SBSwitcherModifier;

@interface SBHomeGestureToSwitcherFloatingSwitcherModifier
{
    SBSwitcherModifier *_multitaskingModifier;	// 24 = 0x18
    SBAppLayout *_selectedAppLayout;	// 32 = 0x20
    SBFluidSwitcherAnimationSettings *_animationSettings;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000687f9d
@property(retain, nonatomic) SBFluidSwitcherAnimationSettings *animationSettings; // @synthesize animationSettings=_animationSettings;
@property(retain, nonatomic) SBAppLayout *selectedAppLayout; // @synthesize selectedAppLayout=_selectedAppLayout;
@property(retain, nonatomic) SBSwitcherModifier *multitaskingModifier; // @synthesize multitaskingModifier=_multitaskingModifier;
- (struct SBSwitcherAsyncRenderingAttributes)asyncRenderingAttributesForAppLayout:(id)arg1;	// IMP=0x0000000000687f1a
- (id)_layoutSettings;	// IMP=0x0000000000687ece
- (id)animationAttributesForLayoutElement:(id)arg1;	// IMP=0x0000000000687e29
- (id)visibleAppLayouts;	// IMP=0x0000000000687c93
- (id)transitionWillBegin;	// IMP=0x0000000000687b55
- (id)initWithTransitionID:(id)arg1 multitaskingModifier:(id)arg2 selectedAppLayout:(id)arg3;	// IMP=0x0000000000687a54

@end

