//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/UIPointerInteractionDelegate-Protocol.h>

@class NSLayoutConstraint, NSString, SBTopAffordanceDotView, UIPointerInteraction, UIView;

@interface SBTopAffordanceDotsView <UIPointerInteractionDelegate>
{
    SBTopAffordanceDotView *_leadingDotView;	// 8 = 0x8
    SBTopAffordanceDotView *_centerDotView;	// 16 = 0x10
    SBTopAffordanceDotView *_trailingDotView;	// 24 = 0x18
    UIView *_hitTestBlocker;	// 32 = 0x20
    NSLayoutConstraint *_widthConstraint;	// 40 = 0x28
    NSLayoutConstraint *_heightConstraint;	// 48 = 0x30
    NSLayoutConstraint *_leadingSpacingConstraint;	// 56 = 0x38
    NSLayoutConstraint *_trailingSpacingConstraint;	// 64 = 0x40
    NSLayoutConstraint *_hitTestBlockerWidthConstraint;	// 72 = 0x48
    NSLayoutConstraint *_hitTestBlockerHeightConstraint;	// 80 = 0x50
    NSLayoutConstraint *_hitTestBlockerLeftConstraint;	// 88 = 0x58
    UIPointerInteraction *_pointerInteraction;	// 96 = 0x60
    struct UIEdgeInsets _hitTestEdgeInsets;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0000000000504bce
@property(nonatomic) struct UIEdgeInsets hitTestEdgeInsets; // @synthesize hitTestEdgeInsets=_hitTestEdgeInsets;
- (id)_dotViews;	// IMP=0x0000000000504a2d
- (void)_updateBackgroundColor;	// IMP=0x0000000000504941
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000050492f
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;	// IMP=0x0000000000504677
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;	// IMP=0x00000000005045ae
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000504502
@property(nonatomic, getter=isPointerInteractionEnabled) _Bool pointerInteractionEnabled;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
@property(nonatomic, getter=isExpanded) _Bool expanded;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000005036e7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
