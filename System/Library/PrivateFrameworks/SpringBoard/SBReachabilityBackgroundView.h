//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <SpringBoard/SBHomeGrabberDelegate-Protocol.h>

@class CAShapeLayer, NSString, SBHomeGrabberView, SBWallpaperEffectView, UIViewFloatAnimatableProperty;

@interface SBReachabilityBackgroundView : UIView <SBHomeGrabberDelegate>
{
    UIView *_wallpaperContainerView;	// 8 = 0x8
    SBWallpaperEffectView *_topWallpaperEffectView;	// 16 = 0x10
    SBWallpaperEffectView *_bottomWallpaperEffectView;	// 24 = 0x18
    UIView *_hitTestBlockerView;	// 32 = 0x20
    long long _wallpaperVariant;	// 40 = 0x28
    SBHomeGrabberView *_homeGrabberView;	// 48 = 0x30
    CAShapeLayer *_chevronLayer;	// 56 = 0x38
    UIViewFloatAnimatableProperty *_chevronShapeAnimatableProperty;	// 64 = 0x40
    double _containerViewYOffset;	// 72 = 0x48
    double _homeGrabberAdditionalOffset;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000401102
@property(nonatomic) double homeGrabberAdditionalOffset; // @synthesize homeGrabberAdditionalOffset=_homeGrabberAdditionalOffset;
@property(nonatomic) double containerViewYOffset; // @synthesize containerViewYOffset=_containerViewYOffset;
@property(nonatomic) long long wallpaperVariant; // @synthesize wallpaperVariant=_wallpaperVariant;
- (void)_setupHitTestBlockerView;	// IMP=0x0000000000400f9a
- (void)_setupHomeGrabberView;	// IMP=0x0000000000400eee
- (void)_updateChevronPathForUpFraction:(double)arg1;	// IMP=0x0000000000400e13
- (void)_setupChevron;	// IMP=0x0000000000400aa8
- (void)_setupCornerContentsImageForWallpaperEffectView:(id)arg1;	// IMP=0x00000000004006a6
- (double)_displayCornerRadius;	// IMP=0x000000000040069c
- (void)_updateWallpaperEffectViewAnimated:(_Bool)arg1;	// IMP=0x00000000004002c7
- (id)_newWallpaperEffectViewForVariant:(long long)arg1;	// IMP=0x000000000040021e
- (_Bool)shouldAllowAutoHideForHomeGrabberView:(id)arg1;	// IMP=0x0000000000400216
- (_Bool)shouldAllowThinStyleForHomeGrabberView:(id)arg1;	// IMP=0x000000000040020e
- (double)additionalEdgeSpacingForHomeGrabberView:(id)arg1;	// IMP=0x00000000004001fc
@property(nonatomic) double chevronAlpha;
@property(nonatomic) double homeGrabberAlpha;
- (void)layoutSubviews;	// IMP=0x00000000003ffda1
- (id)initWithFrame:(struct CGRect)arg1 wallpaperVariant:(long long)arg2;	// IMP=0x00000000003ffc68

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
