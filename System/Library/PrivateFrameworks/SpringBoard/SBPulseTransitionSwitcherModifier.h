//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SBAppLayout;

@interface SBPulseTransitionSwitcherModifier
{
    SBAppLayout *_appLayout;	// 24 = 0x18
    _Bool _shouldScaleIn;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000002ddc59
- (id)topMostLayoutElements;	// IMP=0x00000000002ddbe1
- (_Bool)shouldUseAnchorPointToPinLayoutRolesToSpace:(unsigned long long)arg1;	// IMP=0x00000000002ddbd9
- (struct SBSwitcherAsyncRenderingAttributes)asyncRenderingAttributesForAppLayout:(id)arg1;	// IMP=0x00000000002ddb8f
- (id)animationAttributesForLayoutElement:(id)arg1;	// IMP=0x00000000002ddaae
- (double)scaleForIndex:(unsigned long long)arg1;	// IMP=0x00000000002dd983
- (id)handleTimerEvent:(id)arg1;	// IMP=0x00000000002dd86c
- (id)transitionWillUpdate;	// IMP=0x00000000002dd766
- (id)initWithTransitionID:(id)arg1 appLayout:(id)arg2;	// IMP=0x00000000002dd677

@end

