//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SBFullScreenAppLayoutSwitcherModifier;

@interface SBAppUnderFloatingSwitcherSwitcherModifier
{
    SBFullScreenAppLayoutSwitcherModifier *_fullScreenAppLayoutModifier;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000040cd19
- (_Bool)wantsAsynchronousSurfaceRetentionAssertion;	// IMP=0x000000000040cd11
- (struct SBSwitcherAsyncRenderingAttributes)asyncRenderingAttributesForAppLayout:(id)arg1;	// IMP=0x000000000040cd00
- (id)keyboardSuppressionMode;	// IMP=0x000000000040cce7
- (id)appLayoutsToResignActive;	// IMP=0x000000000040cc49
- (id)initWithActiveAppLayout:(id)arg1;	// IMP=0x000000000040cba3

@end

