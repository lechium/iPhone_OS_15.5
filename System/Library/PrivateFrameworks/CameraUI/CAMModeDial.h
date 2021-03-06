//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

#import <CameraUI/CAMAccessibilityHUDItemProvider-Protocol.h>

@class CAGradientLayer, NSArray, NSDictionary, NSString, UIView;
@protocol CAMModeDialDataSource;

@interface CAMModeDial : UIControl <CAMAccessibilityHUDItemProvider>
{
    long long _layoutStyle;	// 8 = 0x8
    id <CAMModeDialDataSource> _dataSource;	// 16 = 0x10
    long long _selectedMode;	// 24 = 0x18
    UIView *__selectedItemBackgroundView;	// 32 = 0x20
    NSArray *__modes;	// 40 = 0x28
    NSDictionary *__items;	// 48 = 0x30
    UIView *__meshTransformView;	// 56 = 0x38
    CAGradientLayer *__gradientLayer;	// 64 = 0x40
    UIView *__itemsContainerView;	// 72 = 0x48
}

+ (_Bool)wantsVerticalModeDialForLayoutStyle:(long long)arg1;	// IMP=0x0000000000013bd4
- (void).cxx_destruct;	// IMP=0x000000000010d5e6
@property(readonly, nonatomic) UIView *_itemsContainerView; // @synthesize _itemsContainerView=__itemsContainerView;
@property(readonly, nonatomic) CAGradientLayer *_gradientLayer; // @synthesize _gradientLayer=__gradientLayer;
@property(readonly, nonatomic) UIView *_meshTransformView; // @synthesize _meshTransformView=__meshTransformView;
@property(retain, nonatomic, setter=_setItems:) NSDictionary *_items; // @synthesize _items=__items;
@property(retain, nonatomic, setter=_setModes:) NSArray *_modes; // @synthesize _modes=__modes;
@property(readonly, nonatomic) UIView *_selectedItemBackgroundView; // @synthesize _selectedItemBackgroundView=__selectedItemBackgroundView;
@property(nonatomic) long long selectedMode; // @synthesize selectedMode=_selectedMode;
@property(nonatomic) id <CAMModeDialDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
- (void)selectedByAccessibilityHUDManager:(id)arg1;	// IMP=0x000000000010d4f0
- (id)hudItemForAccessibilityHUDManager:(id)arg1;	// IMP=0x000000000010d3ac
- (void)_updateSelectedItemBackgroundForLayoutStyle:(long long)arg1;	// IMP=0x00000000000143b6
- (void)_updateForLayoutStyle;	// IMP=0x0000000000014024
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000010d2ad
- (void)_configureMeshTransformForLayoutStyle:(long long)arg1;	// IMP=0x0000000000013ae6
- (id)_meshTransformForLayoutStyle:(long long)arg1;	// IMP=0x0000000000013be1
- (id)_horizontalMeshTransform;	// IMP=0x0000000000013c33
- (void)_configureGradientForLayoutStyle:(long long)arg1;	// IMP=0x0000000000013d3b
- (long long)_nearestCaptureModeForLocation:(struct CGPoint)arg1;	// IMP=0x000000000010d010
- (void)reloadData;	// IMP=0x0000000000014ca9
- (id)_selectedItem;	// IMP=0x0000000000014bae
- (void)_updateItemsForLayoutStyle:(long long)arg1;	// IMP=0x00000000000140cd
- (id)_fontForLayoutStyle:(long long)arg1 selected:(_Bool)arg2;	// IMP=0x000000000010cf02
- (void)_updateContainerCenterFromSelectedModeAnimated:(_Bool)arg1;	// IMP=0x00000000000144e8
- (struct CGPoint)_verticalContainerCenterForMode:(long long)arg1;	// IMP=0x000000000010ccfc
- (struct CGPoint)_horizontalContainerCenterForMode:(long long)arg1;	// IMP=0x0000000000014a30
- (double)_centeringNudgeForMode:(long long)arg1;	// IMP=0x0000000000014c45
- (void)setSelectedMode:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000015302
- (void)_layoutVerticalModeDial;	// IMP=0x000000000010c80d
- (void)_layoutHorizontalModeDial;	// IMP=0x000000000003c7d3
- (struct CGSize)_interpolatedHorizontalMeshTransformSize;	// IMP=0x000000000003cdae
- (void)layoutSubviews;	// IMP=0x000000000003c73e
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000010c546
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000010c490
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000010c42c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000010c3c8
- (id)initWithLayoutStyle:(long long)arg1;	// IMP=0x00000000000137f5
- (void)_commonCAMModeDialInitializationWithLayoutStyle:(long long)arg1;	// IMP=0x0000000000013874

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

