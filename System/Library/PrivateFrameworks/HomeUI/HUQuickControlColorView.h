//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <HomeUI/HUQuickControlColorPaletteViewInteractionDelegate-Protocol.h>
#import <HomeUI/HUQuickControlColorPickerViewInteractionDelegate-Protocol.h>
#import <HomeUI/HUQuickControlInteractiveView-Protocol.h>

@class HFColorPalette, HFColorPaletteColor, HUColorLinearPaletteView, HUColorPickerView, HUQuickControlColorViewProfile, NSIndexPath, NSString, UISegmentedControl;
@protocol HUQuickControlColorViewInteractionDelegate, HUQuickControlInteractiveView;

@interface HUQuickControlColorView : UIView <HUQuickControlColorPickerViewInteractionDelegate, HUQuickControlColorPaletteViewInteractionDelegate, HUQuickControlInteractiveView>
{
    _Bool _showPickerModeControl;	// 8 = 0x8
    _Bool _userInteractionActive;	// 9 = 0x9
    HUQuickControlColorViewProfile *_profile;	// 16 = 0x10
    unsigned long long _reachabilityState;	// 24 = 0x18
    id <HUQuickControlColorViewInteractionDelegate> _interactionDelegate;	// 32 = 0x20
    HFColorPalette *_colorPalette;	// 40 = 0x28
    HFColorPaletteColor *_selectedColor;	// 48 = 0x30
    id _originalValue;	// 56 = 0x38
    HFColorPalette *_originalPalette;	// 64 = 0x40
    NSIndexPath *_originalSelectedColorIndexPath;	// 72 = 0x48
    HUColorLinearPaletteView *_colorLinearPaletteView;	// 80 = 0x50
    HUColorPickerView *_colorPickerView;	// 88 = 0x58
    UISegmentedControl *_colorPickerModeSegmentedControl;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000293579
@property(nonatomic, getter=isUserInteractionActive) _Bool userInteractionActive; // @synthesize userInteractionActive=_userInteractionActive;
@property(retain, nonatomic) UISegmentedControl *colorPickerModeSegmentedControl; // @synthesize colorPickerModeSegmentedControl=_colorPickerModeSegmentedControl;
@property(retain, nonatomic) HUColorPickerView *colorPickerView; // @synthesize colorPickerView=_colorPickerView;
@property(retain, nonatomic) HUColorLinearPaletteView *colorLinearPaletteView; // @synthesize colorLinearPaletteView=_colorLinearPaletteView;
@property(nonatomic) _Bool showPickerModeControl; // @synthesize showPickerModeControl=_showPickerModeControl;
@property(retain, nonatomic) NSIndexPath *originalSelectedColorIndexPath; // @synthesize originalSelectedColorIndexPath=_originalSelectedColorIndexPath;
@property(retain, nonatomic) HFColorPalette *originalPalette; // @synthesize originalPalette=_originalPalette;
@property(retain, nonatomic) id originalValue; // @synthesize originalValue=_originalValue;
@property(retain, nonatomic) HFColorPaletteColor *selectedColor; // @synthesize selectedColor=_selectedColor;
@property(retain, nonatomic) HFColorPalette *colorPalette; // @synthesize colorPalette=_colorPalette;
@property(nonatomic) __weak id <HUQuickControlColorViewInteractionDelegate> interactionDelegate; // @synthesize interactionDelegate=_interactionDelegate;
@property(nonatomic) unsigned long long reachabilityState; // @synthesize reachabilityState=_reachabilityState;
@property(copy, nonatomic) HUQuickControlColorViewProfile *profile; // @synthesize profile=_profile;
- (void)cancelColorPicking;	// IMP=0x0000000000293066
- (void)controlView:(id)arg1 didSelectColorAtIndexPath:(id)arg2;	// IMP=0x0000000000292fe0
- (void)presentFullColorViewForControlView:(id)arg1 selectedColorIndexPath:(id)arg2;	// IMP=0x0000000000292f6b
- (void)controlView:(id)arg1 colorPaletteDidChange:(id)arg2;	// IMP=0x0000000000292ef0
- (void)controlView:(id)arg1 colorPickerModeDidChange:(unsigned long long)arg2;	// IMP=0x0000000000292ea4
- (void)controlView:(id)arg1 interactionStateDidChange:(_Bool)arg2 forFirstTouch:(_Bool)arg3;	// IMP=0x0000000000292e44
- (void)controlView:(id)arg1 valueDidChange:(id)arg2;	// IMP=0x0000000000292b85
- (void)updateSelectedColorIndexPathToIndexPath:(id)arg1;	// IMP=0x0000000000292b13
- (id)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1;	// IMP=0x0000000000292a6b
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1;	// IMP=0x00000000002929f9
@property(retain, nonatomic) id value;
- (void)storeCurrentColorInformationAsOriginalValues;	// IMP=0x00000000002922ae
- (void)_updateUIForReachabilityState:(unsigned long long)arg1;	// IMP=0x000000000029209e
- (void)_updateColorPicker;	// IMP=0x0000000000291e72
@property(readonly, nonatomic, getter=isSelectedColorInPalette) _Bool selectedColorInPalette;
@property(readonly, nonatomic) UIView<HUQuickControlInteractiveView> *activeView;
- (void)_updateLayout;	// IMP=0x0000000000291515
- (void)_updateVisibleViews;	// IMP=0x00000000002912b3
- (void)layoutSubviews;	// IMP=0x0000000000291233
- (id)initWithProfile:(id)arg1 colorPalette:(id)arg2;	// IMP=0x0000000000290f7c
- (id)initWithProfile:(id)arg1;	// IMP=0x0000000000290ec7
@property(readonly, nonatomic) NSIndexPath *linearPaletteViewSelectedColorIndexPath;
@property(readonly, nonatomic) unsigned long long mode;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) id secondaryValue;
@property(readonly) Class superclass;

@end

