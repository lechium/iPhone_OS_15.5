//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOFeatureStyleAttributes, MKWalletMerchantStylingInfo, NSString, UIColor, UIImage, UIImageView, UIView, _MKBezierPathView, _MKUILabel;

@interface MKMarkerAnnotationView
{
    UIImageView *_shadow;	// 256 = 0x100
    _MKBezierPathView *_markerView;	// 264 = 0x108
    UIImageView *_glyphImageView;	// 272 = 0x110
    _MKUILabel *_glyphLabel;	// 280 = 0x118
    _MKBezierPathView *_selectedMarkerView;	// 288 = 0x120
    UIImageView *_selectedGlyphImageView;	// 296 = 0x128
    _MKUILabel *_selectedGlyphLabel;	// 304 = 0x130
    _MKBezierPathView *_selectedDotView;	// 312 = 0x138
    UIView *_contentMaskView;	// 320 = 0x140
    GEOFeatureStyleAttributes *_customStyleAttributes;	// 328 = 0x148
    MKWalletMerchantStylingInfo *_walletMerchantStylingInfo;	// 336 = 0x150
    _Bool _isObserving;	// 344 = 0x158
    _Bool _animatesWhenAdded;	// 345 = 0x159
    UIColor *_markerTintColor;	// 352 = 0x160
    UIColor *_glyphTintColor;	// 360 = 0x168
    NSString *_glyphText;	// 368 = 0x170
    UIImage *_glyphImage;	// 376 = 0x178
    UIImage *_selectedGlyphImage;	// 384 = 0x180
    UIColor *_markerStrokeTintColor;	// 392 = 0x188
    double _markerStrokeWidth;	// 400 = 0x190
}

+ (float)_defaultDisplayPriority;	// IMP=0x000000000003ac20
+ (Class)_mapkitLeafClass;	// IMP=0x0000000000039de5
- (void).cxx_destruct;	// IMP=0x000000000003deb7
@property(nonatomic) double markerStrokeWidth; // @synthesize markerStrokeWidth=_markerStrokeWidth;
@property(copy, nonatomic) UIColor *markerStrokeTintColor; // @synthesize markerStrokeTintColor=_markerStrokeTintColor;
@property(nonatomic) _Bool animatesWhenAdded; // @synthesize animatesWhenAdded=_animatesWhenAdded;
@property(copy, nonatomic) UIImage *selectedGlyphImage; // @synthesize selectedGlyphImage=_selectedGlyphImage;
@property(copy, nonatomic) UIImage *glyphImage; // @synthesize glyphImage=_glyphImage;
@property(copy, nonatomic) NSString *glyphText; // @synthesize glyphText=_glyphText;
@property(copy, nonatomic) UIColor *glyphTintColor; // @synthesize glyphTintColor=_glyphTintColor;
@property(copy, nonatomic) UIColor *markerTintColor; // @synthesize markerTintColor=_markerTintColor;
@property(retain, nonatomic, getter=_styleAttributes, setter=_setStyleAttributes:) GEOFeatureStyleAttributes *styleAttributes; // @synthesize styleAttributes=_customStyleAttributes;
- (struct UIEdgeInsets)_defaultCollisionAlignmentRectInsets;	// IMP=0x000000000003ddf0
- (struct UIEdgeInsets)alignmentRectInsets;	// IMP=0x000000000003ddd1
- (id)_effectiveSubtitlesIsCollidable:(_Bool *)arg1;	// IMP=0x000000000003dcf4
- (_Bool)isProvidingCustomFeature;	// IMP=0x000000000003dcbc
- (_Bool)_shouldDeselectWhenDragged;	// IMP=0x000000000003dcb4
- (void)_swayAnimation;	// IMP=0x000000000003dc3a
- (void)dealloc;	// IMP=0x000000000003d8d4
- (_Bool)updateCalloutViewIfNeededAnimated:(_Bool)arg1;	// IMP=0x000000000003d866
- (void)_setSelected:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000003d7b2
- (void)setDragState:(unsigned long long)arg1 animated:(_Bool)arg2;	// IMP=0x000000000003d66d
- (void)_configureAnimated:(_Bool)arg1 fromState:(long long)arg2 toState:(long long)arg3;	// IMP=0x000000000003d4b7
- (void)_setupSelectedViewsIfNeededUsesCallout:(_Bool)arg1;	// IMP=0x000000000003d131
- (void)_setupNormalViewsIfNeeded;	// IMP=0x000000000003cd34
- (void)_didDragWithVelocity:(struct CGPoint)arg1;	// IMP=0x000000000003cad1
- (long long)_stateForIsSelected:(_Bool)arg1;	// IMP=0x000000000003cac9
- (void)_setShadowAlpha:(double)arg1 transform:(struct CGAffineTransform)arg2 duration:(double)arg3;	// IMP=0x000000000003c940
- (void)_configureViewsForState:(long long)arg1 usesCallout:(_Bool)arg2 animated:(_Bool)arg3;	// IMP=0x000000000003bc81
- (CDStruct_45683352)_metricsForState:(long long)arg1;	// IMP=0x000000000003bb36
- (void)_updateStyle;	// IMP=0x000000000003bb05
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000003ba6e
- (void)prepareForSnapshotting;	// IMP=0x000000000003ba0d
- (void)_unhideForDisplay;	// IMP=0x000000000003b838
- (void)prepareForDisplay;	// IMP=0x000000000003b774
- (void)prepareForReuse;	// IMP=0x000000000003b696
- (long long)_currentMarkerState;	// IMP=0x000000000003b654
- (void)_updateContentForState:(long long)arg1 forceUpdate:(_Bool)arg2;	// IMP=0x000000000003b219
- (void)_updateContentForState:(long long)arg1;	// IMP=0x000000000003b205
- (void)layoutSubviews;	// IMP=0x000000000003b044
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000003b014
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000003af35
@property(nonatomic) long long subtitleVisibility; // @dynamic subtitleVisibility;
@property(nonatomic) long long titleVisibility; // @dynamic titleVisibility;
- (void)setAnnotation:(id)arg1;	// IMP=0x000000000003adce
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x000000000003ad83
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000000003ac99
- (void)layoutSublayersOfLayer:(id)arg1;	// IMP=0x000000000003ac2e
- (id)_effectiveGlyphText;	// IMP=0x000000000003aa7f
- (id)_effectiveGlyphImageForState:(long long)arg1 isSystemProvided:(_Bool *)arg2;	// IMP=0x000000000003a93c
- (id)_effectiveGlyphTintColorForState:(long long)arg1;	// IMP=0x000000000003a6e4
- (id)_effectiveMarkerStrokeTintColorForState:(long long)arg1;	// IMP=0x000000000003a59c
- (double)_effectiveMarkerStrokeWidthForState:(long long)arg1;	// IMP=0x000000000003a4d3
@property(retain, nonatomic) UIView *selectedContentView;
- (double)_effectiveShadowAlphaForState:(long long)arg1;	// IMP=0x000000000003a081
- (id)_effectiveMarkerTintColorForState:(long long)arg1;	// IMP=0x0000000000039fac
- (_Bool)canShowCallout;	// IMP=0x0000000000039e89
- (_Bool)_hasDataRequiringCallout;	// IMP=0x0000000000039df6
@property(retain, nonatomic, getter=_walletMerchantStylingInfo, setter=_setWalletMerchantStylingInfo:) MKWalletMerchantStylingInfo *walletMerchantStylingInfo;

@end

