//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, SBAppExposeGridSwitcherModifier;

@interface SBAppExposeToHomeSwitcherModifier
{
    long long _direction;	// 24 = 0x18
    NSString *_bundleIdentifier;	// 32 = 0x20
    SBAppExposeGridSwitcherModifier *_appExposeModifier;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000003c089f
- (_Bool)_isEffectivelyHome;	// IMP=0x00000000003c0841
- (id)_newAppExposeModifier;	// IMP=0x00000000003c0824
- (struct SBSwitcherAsyncRenderingAttributes)asyncRenderingAttributesForAppLayout:(id)arg1;	// IMP=0x00000000003c06e3
- (double)plusButtonAlpha;	// IMP=0x00000000003c06c1
- (id)transitionDidEnd;	// IMP=0x00000000003c0617
- (id)transitionWillBegin;	// IMP=0x00000000003c0345
- (id)initWithTransitionID:(id)arg1 direction:(long long)arg2 bundleIdentifier:(id)arg3 appExposeModifier:(id)arg4;	// IMP=0x00000000003c011f

@end

