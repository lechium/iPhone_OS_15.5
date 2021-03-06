//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@interface UIView (UIAccessibilityElementTraversal)
+ (id)_accessibilityElementsAndContainersDescendingFromViews:(id)arg1 options:(id)arg2 sorted:(_Bool)arg3;	// IMP=0x0000000000010dd6
+ (id)_subviewsReplacedByModalViewSubviewsIfNecessary:(id)arg1;	// IMP=0x000000000000f7f0
+ (id)_accessibilityTitleForSystemTag:(long long)arg1;	// IMP=0x000000000005c5c4
- (_Bool)_accessibilityShouldBeProcessed:(id)arg1;	// IMP=0x0000000000011321
- (id)_accessibilityViewChildrenWithOptions:(id)arg1;	// IMP=0x00000000000111fa
- (void)_accessibilitySetIsSortingInUpperFrame:(_Bool)arg1;	// IMP=0x00000000000111e9
- (_Bool)_accessibilityIsSortingInUpperFrame;	// IMP=0x00000000000111d8
- (void)_addAccessibilityElementsAndOrderedContainersWithOptions:(id)arg1 toCollection:(id)arg2;	// IMP=0x0000000000010517
- (id)_accessibilitySubviewsForGettingElementsWithOptions:(id)arg1;	// IMP=0x000000000000fd07
- (_Bool)_accessibilityShouldUseSupplementaryViews;	// IMP=0x000000000000fcce
- (_Bool)_accessibilityShouldBeAddedToViewChildrenWithOptions:(id)arg1;	// IMP=0x000000000000fbd1
- (struct CGRect)accessibilityConvertRectToSceneReferenceCoordinates:(struct CGRect)arg1;	// IMP=0x000000000005bb53
- (struct CGPoint)accessibilityConvertPointFromSceneReferenceCoordinates:(struct CGPoint)arg1;	// IMP=0x000000000005ba96
- (id)_accessibilityComputedLabelForNavigationBarWithAssociatedBarButtonItem:(id)arg1;	// IMP=0x000000000005c317
- (void)_accessibilitySetAllowsSiblingsWhenOvergrown:(_Bool)arg1;	// IMP=0x000000000005c306
- (_Bool)_accessibilityAllowsSiblingsWhenOvergrown;	// IMP=0x000000000005c2f5
- (void)_accessibilitySetOverridesInvalidFrames:(_Bool)arg1;	// IMP=0x000000000005c2e4
- (_Bool)_accessibilityOverridesInvalidFrames;	// IMP=0x000000000005c2d3
- (id)_accessibilitySubviews;	// IMP=0x000000000005c2c1
- (id)_accessibleSubviews;	// IMP=0x000000000005c289
- (id)_accessibleSubviews:(int)arg1;	// IMP=0x000000000005c1fa
- (_Bool)_accessibilityViewIsVisibleIgnoringAXOverrides:(_Bool)arg1 stoppingBeforeContainer:(id)arg2;	// IMP=0x000000000005bd9e
- (_Bool)_accessibilityViewIsVisibleIgnoringAXOverrides:(_Bool)arg1;	// IMP=0x000000000005bd3c
- (void)_accessibilitySetViewIsVisible:(_Bool)arg1;	// IMP=0x000000000005bcef
- (_Bool)_accessibilityViewIsVisible;	// IMP=0x000000000005bcdb
- (_Bool)_accessibilityViewIsActive;	// IMP=0x000000000005bca2
- (void)_accessibilitySetFrameExpansion:(struct CGSize)arg1;	// IMP=0x000000000005bc48
- (struct CGSize)_accessibilityFrameExpansion;	// IMP=0x000000000005bbe7
- (void)_accessibilityClearChildren;	// IMP=0x000000000005bbe1
@end

