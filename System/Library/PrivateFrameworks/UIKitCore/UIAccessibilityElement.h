//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIAccessibilityIdentification-Protocol.h>
#import <UIKitCore/UIFocusItem-Protocol.h>
#import <UIKitCore/UIFocusItemContainer-Protocol.h>
#import <UIKitCore/_UIFocusEnvironmentPrivate-Protocol.h>
#import <UIKitCore/_UIFocusRegionContainer-Protocol.h>

@class NSArray, NSString, UIFocusEffect, UIView;
@protocol UICoordinateSpace, UIFocusEnvironment, UIFocusItemContainer;

@interface UIAccessibilityElement <UIFocusItem, UIFocusItemContainer, _UIFocusEnvironmentPrivate, _UIFocusRegionContainer, UIAccessibilityIdentification>
{
    _Bool _areChildrenFocused;	// 8 = 0x8
    struct CGRect _accessibilityFrameInContainerSpace;	// 16 = 0x10
}

@property(nonatomic) struct CGRect accessibilityFrameInContainerSpace; // @synthesize accessibilityFrameInContainerSpace=_accessibilityFrameInContainerSpace;
- (id)nextResponder;	// IMP=0x00000000000128d1
- (id)_firstViewAncestor;	// IMP=0x0000000000012853
@property(nonatomic) _Bool areChildrenFocused;
@property(readonly, nonatomic) id <UICoordinateSpace> coordinateSpace;
- (id)focusItemsInRect:(struct CGRect)arg1;	// IMP=0x00000000000127c3
- (id)_regionForFocusedItem:(id)arg1 inCoordinateSpace:(id)arg2;	// IMP=0x000000000001272e
- (id)_preferredFocusRegionCoordinateSpace;	// IMP=0x00000000000126f7
- (void)_searchForFocusRegionsInContext:(id)arg1;	// IMP=0x00000000000121fa
@property(readonly, nonatomic) struct CGRect frame;
@property(readonly, nonatomic) _Bool canBecomeFocused;
- (void)_updateFocusLayerFrame;	// IMP=0x00000000000120fb
- (void)_destroyFocusLayer;	// IMP=0x00000000000120df
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000000000120d9
- (_Bool)shouldUpdateFocusInContext:(id)arg1;	// IMP=0x00000000000120d1
- (void)updateFocusIfNeeded;	// IMP=0x000000000001208c
- (void)setNeedsFocusUpdate;	// IMP=0x0000000000012044
@property(readonly, nonatomic) id <UIFocusItemContainer> focusItemContainer;
@property(readonly, nonatomic) __weak id <UIFocusEnvironment> parentFocusEnvironment;
@property(readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property(nonatomic) unsigned long long accessibilityTraits;
@property(nonatomic) struct CGRect accessibilityFrame;
@property(retain, nonatomic) NSString *accessibilityValue;
@property(retain, nonatomic) NSString *accessibilityHint;
@property(retain, nonatomic) NSString *accessibilityLabel;
@property(nonatomic) _Bool isAccessibilityElement;
- (void)dealloc;	// IMP=0x0000000000011ca4
- (id)initWithAccessibilityContainer:(id)arg1;	// IMP=0x0000000000011c16

// Remaining properties
@property(nonatomic) __weak id accessibilityContainer; // @dynamic accessibilityContainer;
@property(copy, nonatomic) NSString *accessibilityIdentifier; // @dynamic accessibilityIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=_isEligibleForFocusInteraction) _Bool eligibleForFocusInteraction;
@property(readonly, nonatomic, getter=_isEligibleForFocusOcclusion) _Bool eligibleForFocusOcclusion;
@property(readonly, copy, nonatomic) UIFocusEffect *focusEffect;
@property(readonly, copy, nonatomic) NSString *focusGroupIdentifier;
@property(readonly, nonatomic) long long focusGroupPriority;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isTransparentFocusItem;
@property(readonly, copy, nonatomic, getter=_linearFocusMovementSequences) NSArray *linearFocusMovementSequences;
@property(readonly, nonatomic, getter=_preferredFocusMovementStyle) long long preferredFocusMovementStyle;
@property(readonly, nonatomic) __weak UIView *preferredFocusedView;
@property(readonly) Class superclass;

@end

