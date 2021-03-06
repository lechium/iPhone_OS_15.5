//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SBDefaultImplementationsSwitcherModifier
{
}

- (id)resizeGrabberLayoutAttributesForAppLayout:(id)arg1;	// IMP=0x00000000005e118a
- (id)preferredAppLayoutToReuseAccessoryForAppLayout:(id)arg1 fromAppLayouts:(id)arg2;	// IMP=0x00000000005e1175
- (_Bool)clipsToBoundsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000005e116d
- (struct CGRect)clippingFrameForIndex:(unsigned long long)arg1 withBounds:(struct CGRect)arg2;	// IMP=0x00000000005e1155
- (struct CGPoint)contentViewOffsetForAccessoriesOfAppLayout:(id)arg1;	// IMP=0x00000000005e113f
- (struct CGPoint)contentViewOffsetForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;	// IMP=0x00000000005e1129
- (_Bool)shouldTetherItemsAndAccessoriesInAppLayout:(id)arg1;	// IMP=0x00000000005e1121
- (unsigned long long)multipleWindowsIndicatorLayoutRoleMaskForAppLayout:(id)arg1;	// IMP=0x00000000005e0f62
- (unsigned long long)hiddenContentStatusBarPartsForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;	// IMP=0x00000000005e0f5a
- (unsigned long long)hiddenContainerStatusBarParts;	// IMP=0x00000000005e0f52
- (id)homeAffordanceLayoutElementToPortalIntoShelf:(id)arg1;	// IMP=0x00000000005e0f4a
- (struct CGRect)bounceIconInitialFrame;	// IMP=0x00000000005e0f2c
- (id)bounceIconBundleIdentifier;	// IMP=0x00000000005e0f24
- (unsigned long long)bounceIconGenerationCountForCurrentCount:(unsigned long long)arg1;	// IMP=0x00000000005e0f1b
- (_Bool)shouldUpdateAnimatableProperty:(id)arg1;	// IMP=0x00000000005e0f13
- (id)settingsForAnimatableProperty:(id)arg1;	// IMP=0x00000000005e0eea
- (long long)updateModeForAnimatableProperty:(id)arg1;	// IMP=0x00000000005e0edf
- (double)modelValueForAnimatableProperty:(id)arg1 currentValue:(double)arg2 creating:(_Bool)arg3;	// IMP=0x00000000005e0ed9
- (id)animatablePropertyIdentifiers;	// IMP=0x00000000005e0ec0
- (unsigned long long)blurTargetPreferenceForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;	// IMP=0x00000000005e0eb8
- (_Bool)canLayoutRoleParticipateInSwitcherDragAndDrop:(long long)arg1 appLayout:(id)arg2;	// IMP=0x00000000005e0eb0
- (id)switcherDropRegionContextForDraggingLayoutRole:(long long)arg1 inAppLayout:(id)arg2 atLocation:(struct CGPoint)arg3;	// IMP=0x00000000005e0ea8
- (id)ignoredDisplayItemsForShelf:(id)arg1;	// IMP=0x00000000005e0e8f
- (id)focusedAppLayoutForShelf:(id)arg1;	// IMP=0x00000000005e0e87
- (id)hiddenAppLayoutsInShelf:(id)arg1;	// IMP=0x00000000005e0e6e
- (struct SBSwitcherShelfPresentationAttributes)presentationAttributesForShelf:(id)arg1;	// IMP=0x00000000005e0e36
- (struct CGRect)frameForIconOverlayInAppLayout:(id)arg1;	// IMP=0x00000000005e0e17
- (_Bool)shouldUseAnchorPointToPinLayoutRolesToSpace:(unsigned long long)arg1;	// IMP=0x00000000005e0e0f
- (struct CGPoint)anchorPointForIndex:(unsigned long long)arg1;	// IMP=0x00000000005e0dfe
- (_Bool)shouldShowBackdropViewAtIndex:(unsigned long long)arg1;	// IMP=0x00000000005e0df6
- (_Bool)shouldUseNonuniformSnapshotScalingForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;	// IMP=0x00000000005e0da0
- (_Bool)shouldScaleContentToFillBoundsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000005e0d98
- (_Bool)canFocusableAppLayoutBeEffectivelyObscured:(id)arg1;	// IMP=0x00000000005e0d90
- (_Bool)switcherHitTestsAsOpaque;	// IMP=0x00000000005e0d88
- (_Bool)_isLayoutRoleBehindCenterWindow:(long long)arg1 inAppLayout:(id)arg2;	// IMP=0x00000000005e0c3f
- (_Bool)shouldSuppressHighlightEffectForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;	// IMP=0x00000000005e0c37
- (double)dimmingAlphaForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;	// IMP=0x00000000005e0bcb
- (double)blurDelayForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;	// IMP=0x00000000005e0bc2
- (_Bool)isLayoutRoleBlurred:(long long)arg1 inAppLayout:(id)arg2;	// IMP=0x00000000005e0bba
- (_Bool)isLayoutRoleMatchMovedToScene:(long long)arg1 inAppLayout:(id)arg2;	// IMP=0x00000000005e0bb2
- (struct CGRect)fullyPresentedFrameForIndex:(unsigned long long)arg1 frame:(struct CGRect)arg2;	// IMP=0x00000000005e0b9a
- (id)resizeProgressNotificationsForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;	// IMP=0x00000000005e0b81
- (id)topMostLayoutRolesForAppLayout:(id)arg1;	// IMP=0x00000000005e0b31
- (unsigned long long)maskedCornersForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 withMaskedCorners:(unsigned long long)arg3;	// IMP=0x00000000005e0a83
- (unsigned long long)maskedCornersForIndex:(unsigned long long)arg1;	// IMP=0x00000000005e0a78
- (struct UIRectCornerRadii)cornerRadiiForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 withCornerRadii:(struct UIRectCornerRadii)arg3;	// IMP=0x00000000005e08f7
- (double)scaleForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;	// IMP=0x00000000005e08e9
- (struct CGRect)frameForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 withBounds:(struct CGRect)arg3;	// IMP=0x00000000005e072d

@end

