//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIFocusRegionContainer-Protocol.h>

@class NSArray, NSString, UIView;
@protocol UIFocusEnvironment, UIFocusItemContainer;

__attribute__((visibility("hidden")))
@interface _UIFocusRegionContainerProxy : NSObject <_UIFocusRegionContainer>
{
    _Bool _isFocusEnvironment;	// 8 = 0x8
    id <UIFocusItemContainer> _itemContainer;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000006ae8f6
@property(nonatomic) _Bool isFocusEnvironment; // @synthesize isFocusEnvironment=_isFocusEnvironment;
@property(retain, nonatomic) id <UIFocusItemContainer> itemContainer; // @synthesize itemContainer=_itemContainer;
- (void)_searchForFocusRegionsInContext:(id)arg1;	// IMP=0x00000000006ae3c0
- (id)_regionForFocusedItem:(id)arg1 inCoordinateSpace:(id)arg2;	// IMP=0x00000000006ae2ac
- (id)_preferredFocusRegionCoordinateSpace;	// IMP=0x00000000006ae296
@property(readonly, nonatomic) id <UIFocusItemContainer> focusItemContainer;
@property(readonly, nonatomic) __weak id <UIFocusEnvironment> parentFocusEnvironment;
- (void)updateFocusIfNeeded;	// IMP=0x00000000006ae1fb
- (void)setNeedsFocusUpdate;	// IMP=0x00000000006ae1be
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000000006ae138
- (_Bool)shouldUpdateFocusInContext:(id)arg1;	// IMP=0x00000000006ae0c1
@property(readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
- (id)_focusEnvironment;	// IMP=0x00000000006ae02d
- (id)initWithItemContainer:(id)arg1;	// IMP=0x00000000006adfa2

// Remaining properties
@property(nonatomic) _Bool areChildrenFocused;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=_isEligibleForFocusInteraction) _Bool eligibleForFocusInteraction;
@property(readonly, nonatomic, getter=_isEligibleForFocusOcclusion) _Bool eligibleForFocusOcclusion;
@property(readonly, copy, nonatomic) NSString *focusGroupIdentifier;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic, getter=_linearFocusMovementSequences) NSArray *linearFocusMovementSequences;
@property(readonly, nonatomic, getter=_preferredFocusMovementStyle) long long preferredFocusMovementStyle;
@property(readonly, nonatomic) __weak UIView *preferredFocusedView;
@property(readonly) Class superclass;

@end
