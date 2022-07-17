//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/PTSettingsKeyObserver-Protocol.h>

@class NSString, UIColor, UITraitCollection, _UIShape, _UIShapeView;

__attribute__((visibility("hidden")))
@interface _UIFocusHaloView <PTSettingsKeyObserver>
{
    _Bool _geometryFrozen;	// 120 = 0x78
    _UIShape *_shape;	// 128 = 0x80
    long long _position;	// 136 = 0x88
    double _thickness;	// 144 = 0x90
    double _gapWidth;	// 152 = 0x98
    _UIShapeView *_haloView;	// 160 = 0xa0
    _UIShapeView *_gapView;	// 168 = 0xa8
    _UIShapeView *_maskViewWhenInside;	// 176 = 0xb0
    UIColor *_gapColor;	// 184 = 0xb8
    UITraitCollection *_gapSourceTraitCollection;	// 192 = 0xc0
}

- (void).cxx_destruct;	// IMP=0x00000000010e9848
@property(retain, nonatomic) UITraitCollection *gapSourceTraitCollection; // @synthesize gapSourceTraitCollection=_gapSourceTraitCollection;
@property(retain, nonatomic) UIColor *gapColor; // @synthesize gapColor=_gapColor;
@property(retain, nonatomic) _UIShapeView *maskViewWhenInside; // @synthesize maskViewWhenInside=_maskViewWhenInside;
@property(retain, nonatomic) _UIShapeView *gapView; // @synthesize gapView=_gapView;
@property(retain, nonatomic) _UIShapeView *haloView; // @synthesize haloView=_haloView;
@property(nonatomic) _Bool geometryFrozen; // @synthesize geometryFrozen=_geometryFrozen;
@property(nonatomic) double gapWidth; // @synthesize gapWidth=_gapWidth;
@property(nonatomic) double thickness; // @synthesize thickness=_thickness;
@property(nonatomic) long long position; // @synthesize position=_position;
@property(copy, nonatomic) _UIShape *shape; // @synthesize shape=_shape;
- (void)_updateDebugUI;	// IMP=0x00000000010e95f1
- (_Bool)_debugEnabled;	// IMP=0x00000000010e957c
@property(readonly, copy) NSString *description;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;	// IMP=0x00000000010e93c2
- (void)_updateGapColor;	// IMP=0x00000000010e914f
- (id)resolvedGapColor;	// IMP=0x00000000010e90ac
@property(readonly, nonatomic) UIColor *haloColor;
- (_Bool)_ignoreRemoveAllAnimations;	// IMP=0x00000000010e8f67
- (void)setCenter:(struct CGPoint)arg1;	// IMP=0x00000000010e8f11
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x00000000010e8ebb
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x00000000010e8e65
- (void)setHidden:(_Bool)arg1;	// IMP=0x00000000010e8e18
- (void)tintColorDidChange;	// IMP=0x00000000010e8d47
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000010e8b72
- (void)didMoveToSuperview;	// IMP=0x00000000010e8b31
@property(readonly, nonatomic) double totalConsumedSpace;
- (void)_updateHalo;	// IMP=0x00000000010e8153
- (void)_searchForFocusRegionsInContext:(id)arg1;	// IMP=0x00000000010e814d
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000010e7f36

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
