//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableSet, NSSet, SBAppLayout;

@interface SBWindowDragTransitionSwitcherModifier
{
    SBAppLayout *_selectedAppLayout;	// 24 = 0x18
    SBAppLayout *_fromAppLayout;	// 32 = 0x20
    SBAppLayout *_toAppLayout;	// 40 = 0x28
    SBAppLayout *_toFloatingAppLayout;	// 48 = 0x30
    SBAppLayout *_discardedAppLayout;	// 56 = 0x38
    long long _discardedLayoutRole;	// 64 = 0x40
    unsigned long long _finalWindowDragDestination;	// 72 = 0x48
    _Bool _isGoingToHomeScreenPeek;	// 80 = 0x50
    NSSet *_initiallyBlurredDisplayItems;	// 88 = 0x58
    NSMutableSet *_waitingForSceneUpdateForDisplayItems;	// 96 = 0x60
    _Bool _hasAddedChildTransitionModifiers;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000000006ac3e4
- (_Bool)_minimizingCenterWindow;	// IMP=0x00000000006ac306
- (_Bool)_goingToHomeScreenPeekFromSplitView;	// IMP=0x00000000006ac2d8
- (struct SBSwitcherAsyncRenderingAttributes)asyncRenderingAttributesForAppLayout:(id)arg1;	// IMP=0x00000000006ac25b
- (id)animationAttributesForLayoutElement:(id)arg1;	// IMP=0x00000000006ac169
- (id)appLayoutToAttachSlideOverTongue;	// IMP=0x00000000006ac161
- (double)shadowOpacityForLayoutRole:(long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000006ac153
- (_Bool)isLayoutRoleMatchMovedToScene:(long long)arg1 inAppLayout:(id)arg2;	// IMP=0x00000000006ac14b
- (_Bool)isLayoutRoleBlurred:(long long)arg1 inAppLayout:(id)arg2;	// IMP=0x00000000006ac0cc
- (_Bool)isSwitcherWindowUserInteractionEnabled;	// IMP=0x00000000006ac0ba
- (_Bool)isSwitcherWindowVisible;	// IMP=0x00000000006ac0b2
- (_Bool)isHomeScreenContentRequired;	// IMP=0x00000000006ac0aa
- (long long)wallpaperStyle;	// IMP=0x00000000006ac09f
- (_Bool)isWallpaperRequiredForSwitcher;	// IMP=0x00000000006ac097
- (long long)homeScreenBackdropBlurType;	// IMP=0x00000000006ac08c
- (double)homeScreenDimmingAlpha;	// IMP=0x00000000006ac06c
- (double)backgroundOpacityForIndex:(unsigned long long)arg1;	// IMP=0x00000000006ac063
- (_Bool)shouldUseAnchorPointToPinLayoutRolesToSpace:(unsigned long long)arg1;	// IMP=0x00000000006ac05b
- (id)handleSceneReadyEvent:(id)arg1;	// IMP=0x00000000006abee2
- (id)transitionDidEnd;	// IMP=0x00000000006abdda
- (struct CGRect)frameForIndex:(unsigned long long)arg1;	// IMP=0x00000000006abc01
- (id)appLayoutContainingAppLayout:(id)arg1;	// IMP=0x00000000006abb75
- (void)didMoveToParentModifier:(id)arg1;	// IMP=0x00000000006abaab
- (id)initWithTransitionID:(id)arg1 selectedAppLayout:(id)arg2 fromAppLayout:(id)arg3 toAppLayout:(id)arg4 toFloatingAppLayout:(id)arg5 toHomeScreenPeek:(_Bool)arg6 toAppExposeBundleIdentifier:(id)arg7 initiallyBlurredDisplayItems:(id)arg8 windowDragDestination:(unsigned long long)arg9;	// IMP=0x00000000006ab77c

@end
