//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

#import <HomeUI/HUGridCellProtocol-Protocol.h>
#import <HomeUI/UIPointerInteractionDelegate-Protocol.h>

@class CAShapeLayer, HFItem, HUGridCellBackgroundView, HUGridCellLayoutOptions, NSString, UIPointerInteraction, UIView, UIVisualEffect, UIVisualEffectView;
@protocol HUResizableCellDelegate;

@interface HUGridCell : UICollectionViewCell <UIPointerInteractionDelegate, HUGridCellProtocol>
{
    _Bool _cellContentsHidden;	// 8 = 0x8
    _Bool _rearranging;	// 9 = 0x9
    _Bool _pointerInteractionEnabled;	// 10 = 0xa
    HUGridCellLayoutOptions *_layoutOptions;	// 16 = 0x10
    double _pointerRegionMargin;	// 24 = 0x18
    long long _primaryState;	// 32 = 0x20
    UIVisualEffect *_contentEffect;	// 40 = 0x28
    UIVisualEffect *_secondaryContentEffect;	// 48 = 0x30
    double _secondaryContentDimmingFactor;	// 56 = 0x38
    HUGridCellBackgroundView *_gridBackgroundView;	// 64 = 0x40
    HFItem *_item;	// 72 = 0x48
    UIVisualEffectView *_gridForegroundView;	// 80 = 0x50
    UIPointerInteraction *_pointerInteraction;	// 88 = 0x58
    CAShapeLayer *_dashedBorderLayer;	// 96 = 0x60
}

+ (id)_jitterTransformAnimationWithAspectRatio:(double)arg1;	// IMP=0x00000000001d668d
+ (id)_jitterPositionAnimation;	// IMP=0x00000000001d61f0
+ (Class)layoutOptionsClass;	// IMP=0x00000000001d51d7
- (void).cxx_destruct;	// IMP=0x00000000001d6aa8
@property(retain, nonatomic) CAShapeLayer *dashedBorderLayer; // @synthesize dashedBorderLayer=_dashedBorderLayer;
@property(retain, nonatomic) UIPointerInteraction *pointerInteraction; // @synthesize pointerInteraction=_pointerInteraction;
@property(retain, nonatomic) UIVisualEffectView *gridForegroundView; // @synthesize gridForegroundView=_gridForegroundView;
@property(retain, nonatomic) HFItem *item; // @synthesize item=_item;
@property(retain, nonatomic) HUGridCellBackgroundView *gridBackgroundView; // @synthesize gridBackgroundView=_gridBackgroundView;
@property(nonatomic) double secondaryContentDimmingFactor; // @synthesize secondaryContentDimmingFactor=_secondaryContentDimmingFactor;
@property(retain, nonatomic) UIVisualEffect *secondaryContentEffect; // @synthesize secondaryContentEffect=_secondaryContentEffect;
@property(retain, nonatomic) UIVisualEffect *contentEffect; // @synthesize contentEffect=_contentEffect;
@property(nonatomic) long long primaryState; // @synthesize primaryState=_primaryState;
@property(nonatomic) double pointerRegionMargin; // @synthesize pointerRegionMargin=_pointerRegionMargin;
@property(nonatomic, getter=isPointerInteractionEnabled) _Bool pointerInteractionEnabled; // @synthesize pointerInteractionEnabled=_pointerInteractionEnabled;
@property(nonatomic, getter=isRearranging) _Bool rearranging; // @synthesize rearranging=_rearranging;
@property(retain, nonatomic) HUGridCellLayoutOptions *layoutOptions; // @synthesize layoutOptions=_layoutOptions;
@property(nonatomic, getter=areCellContentsHidden) _Bool cellContentsHidden; // @synthesize cellContentsHidden=_cellContentsHidden;
- (void)_updateTintColorSettingsForSubviewsOfView:(id)arg1 desiredDisplayStyle:(unsigned long long)arg2;	// IMP=0x00000000001d5f1b
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000001d5dce
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;	// IMP=0x00000000001d5caa
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;	// IMP=0x00000000001d5b5d
- (void)updateUIWithAnimation:(_Bool)arg1;	// IMP=0x00000000001d51e8
@property(readonly, nonatomic) unsigned long long iconDisplayStyle;
- (void)_updateForegroundStyle;	// IMP=0x00000000001d4f10
- (void)_removeDashedBorderLayer;	// IMP=0x00000000001d4e86
- (void)layoutOptionsDidChange;	// IMP=0x00000000001d4d1e
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x00000000001d4bb4
@property(readonly, nonatomic) _Bool managesOwnBackgroundViewLayout;
- (void)displayStyleDidChange;	// IMP=0x00000000001d4954
@property(readonly, nonatomic) UIView *gridForegroundContentView;
@property(readonly, nonatomic) unsigned long long backgroundState;
- (void)layoutSubviews;	// IMP=0x00000000001d479e
- (void)prepareForReuse;	// IMP=0x00000000001d4738
- (void)_setupCommonCellAppearance;	// IMP=0x00000000001d4601
- (void)applyLayoutAttributes:(id)arg1;	// IMP=0x00000000001d439e
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;	// IMP=0x00000000001d4388
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001d42c0
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001d4274

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <HUResizableCellDelegate> resizingDelegate;
@property(readonly) Class superclass;

@end
