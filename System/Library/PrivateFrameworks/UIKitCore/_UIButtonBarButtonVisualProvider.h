//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class UIBarButtonItem, UIColor, UIView, _UIButtonBarButton;

@interface _UIButtonBarButtonVisualProvider : NSObject <NSCopying>
{
    _UIButtonBarButton *_button;	// 8 = 0x8
    UIBarButtonItem *_barButtonItem;	// 16 = 0x10
    UIColor *_tintColor;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000011cc5f
@property(copy, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
- (id)buttonSpringLoadedInteractionEffect;	// IMP=0x000000000011cc3e
- (id)buttonSpringLoadedInteractionBehavior;	// IMP=0x000000000011cc36
- (void)updateMenu;	// IMP=0x000000000011cc30
- (_Bool)canUpdateMenuInPlace;	// IMP=0x000000000011cc28
- (struct CGPoint)menuAnchorPoint;	// IMP=0x000000000011cbcb
- (id)buttonContextMenuStyleFromDefaultStyle:(id)arg1;	// IMP=0x000000000011cbb5
- (id)buttonContextMenuTargetedPreview;	// IMP=0x000000000011cbad
- (id)buttonContextMenuInteractionConfiguration;	// IMP=0x000000000011cba5
- (id)focusEffect;	// IMP=0x000000000011cacb
- (void)pointerWillExit:(id)arg1;	// IMP=0x000000000011cac5
- (void)pointerWillEnter:(id)arg1;	// IMP=0x000000000011cabf
- (_Bool)shouldLift;	// IMP=0x000000000011cab7
- (id)matchingPointerShapeForView:(id)arg1 rect:(struct CGRect)arg2 inContainer:(id)arg3;	// IMP=0x000000000011ca34
- (id)pointerShapeInContainer:(id)arg1;	// IMP=0x000000000011c968
- (id)pointerPreviewParameters;	// IMP=0x000000000011c94f
- (_Bool)useLocalPointerInteraction;	// IMP=0x000000000011c947
@property(readonly, nonatomic) UIView *alignmentViewForStaticNavBarButtonTrailing;
@property(readonly, nonatomic) UIView *alignmentViewForStaticNavBarButtonLeading;
- (void)resetButtonHasHighlighted;	// IMP=0x000000000011c931
- (struct UIEdgeInsets)buttonAlignmentRectInsets:(id)arg1;	// IMP=0x000000000011c91e
- (struct CGSize)buttonIntrinsicContentSize:(id)arg1;	// IMP=0x000000000011c90d
- (_Bool)shouldButtonAdjustToTraitCollection:(id)arg1;	// IMP=0x000000000011c905
- (void)traitCollectionChangedInSubtreeFrom:(id)arg1 to:(id)arg2;	// IMP=0x000000000011c8ff
- (void)buttonWillMoveToSuperview:(id)arg1;	// IMP=0x000000000011c8f9
- (void)buttonWillMoveToWindow:(id)arg1;	// IMP=0x000000000011c8f3
- (void)buttonLayoutSubviews:(id)arg1 baseImplementation:(CDUnknownBlockType)arg2;	// IMP=0x000000000011c8e8
- (void)updateButton:(id)arg1 toUseButtonShapes:(_Bool)arg2;	// IMP=0x000000000011c8e2
- (void)updateButton:(id)arg1 appearance:(id)arg2;	// IMP=0x000000000011c8dc
- (void)configureButton:(id)arg1 withAppearanceDelegate:(id)arg2 fromBarItem:(id)arg3;	// IMP=0x000000000011c866
- (void)updateButton:(id)arg1 forFocusedState:(_Bool)arg2;	// IMP=0x000000000011c860
- (void)updateButton:(id)arg1 forEnabledState:(_Bool)arg2;	// IMP=0x000000000011c85a
- (void)updateButton:(id)arg1 forHighlightedState:(_Bool)arg2;	// IMP=0x000000000011c854
- (void)updateButton:(id)arg1 forSelectedState:(_Bool)arg2;	// IMP=0x000000000011c84e
- (_Bool)buttonEnabledState:(id)arg1 forRequestedState:(_Bool)arg2;	// IMP=0x000000000011c846
- (_Bool)buttonHighlitedState:(id)arg1 forRequestedState:(_Bool)arg2;	// IMP=0x000000000011c83e
- (_Bool)buttonSelectionState:(id)arg1 forRequestedState:(_Bool)arg2;	// IMP=0x000000000011c836
@property(nonatomic) _Bool backButtonMaskEnabled;
@property(nonatomic) _Bool backButtonConstraintsActive;
@property(readonly, nonatomic) UIView *contentView;
@property(readonly, nonatomic) UIView *backIndicatorView;
- (_Bool)supportsBackButtons;	// IMP=0x000000000011c802
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000011c7f0
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000011c7a7
- (unsigned long long)hash;	// IMP=0x000000000011c78d

@end

