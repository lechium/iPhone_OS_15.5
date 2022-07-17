//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapKit/_MKBalloonCalloutViewConfiguring-Protocol.h>
#import <MapKit/_MKKVOProxyDelegate-Protocol.h>

@class NSString, UIBlurEffect, UIColor, UIImage, UIView, _MKKVOProxy, _MKUserLocationViewImageProvider;

@interface _MKUserLocationView <_MKBalloonCalloutViewConfiguring, _MKKVOProxyDelegate>
{
    double _externalMaxAccuracyRadius;	// 264 = 0x108
    _Bool _radiusBasedAccuracyOpacity;	// 272 = 0x110
    _Bool _hasExplicitCalloutStyle;	// 273 = 0x111
    _Bool _showingPreciseAuthorizedLocation;	// 274 = 0x112
    _MKUserLocationViewImageProvider *_imageProvider;	// 280 = 0x118
    UIImage *_balloonImage;	// 288 = 0x120
    UIColor *_balloonImageTintColor;	// 296 = 0x128
    _MKKVOProxy *_kvoProxy;	// 304 = 0x130
}

- (void).cxx_destruct;	// IMP=0x00000000001e9b34
@property(nonatomic, getter=_showingPreciseAuthorizedLocation, setter=_setShowingPreciseAuthorizedLocation:) _Bool showingPreciseAuthorizedLocation; // @synthesize showingPreciseAuthorizedLocation=_showingPreciseAuthorizedLocation;
- (void)_mkObserveValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000001e9aad
- (void)_setBalloonImageTintColor:(id)arg1;	// IMP=0x00000000001e9a99
@property(readonly, nonatomic, getter=_balloonImageTintColor) UIColor *balloonImageTintColor;
@property(readonly, nonatomic, getter=_balloonInnerStrokeColor) UIColor *balloonInnerStrokeColor;
@property(readonly, nonatomic, getter=_balloonStrokeColor) UIColor *balloonStrokeColor;
@property(readonly, nonatomic, getter=_balloonTintColor) UIColor *balloonTintColor;
- (void)_setBalloonImage:(id)arg1;	// IMP=0x00000000001e9a14
@property(readonly, nonatomic, getter=_balloonImage) UIImage *balloonImage;
@property(readonly, nonatomic, getter=_balloonCalloutStyle) long long balloonCalloutStyle;
@property(readonly, nonatomic, getter=_balloonCalloutShouldCenterWhenOffscreen) _Bool balloonCalloutShouldCenterWhenOffscreen;
- (void)_updateCalloutOffset;	// IMP=0x00000000001e98be
- (void)_updateCalloutStyle;	// IMP=0x00000000001e96e2
- (void)_dismissCallout:(_Bool)arg1;	// IMP=0x00000000001e9666
- (void)_showCallout:(_Bool)arg1;	// IMP=0x00000000001e9587
- (_Bool)shouldShowCallout;	// IMP=0x00000000001e953e
- (_Bool)_allowedToShowCallout;	// IMP=0x00000000001e94f4
- (void)setDetailCalloutAccessoryView:(id)arg1;	// IMP=0x00000000001e94b3
- (void)setRightCalloutAccessoryView:(id)arg1;	// IMP=0x00000000001e9472
- (void)setLeftCalloutAccessoryView:(id)arg1;	// IMP=0x00000000001e9431
- (void)_updateLegacyConfiguration;	// IMP=0x00000000001e93bc
- (void)_updateMaxRadiusToShowAccuracyRing;	// IMP=0x00000000001e917a
- (void)layoutSubviews;	// IMP=0x00000000001e9139
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x00000000001e90e7
- (void)_setCalloutStyle:(long long)arg1;	// IMP=0x00000000001e90ad
- (void)setMaxRadiusToShowAccuracyRing:(double)arg1;	// IMP=0x00000000001e908f
- (unsigned long long)_innerPulseFrameWhenDisabled:(unsigned long long)arg1;	// IMP=0x00000000001e9083
- (void)setAnnotation:(id)arg1;	// IMP=0x00000000001e8eb9
- (void)_stopObservingAnnotation;	// IMP=0x00000000001e8e31
- (void)_startObservingAnnotation;	// IMP=0x00000000001e8d63
- (void)dealloc;	// IMP=0x00000000001e8d25
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000000001e8b30

// Remaining properties
@property(readonly, nonatomic, getter=_balloonCalloutShouldShowArrow) _Bool balloonCalloutShouldShowArrow;
@property(readonly, nonatomic, getter=_balloonContentView) UIView *balloonContentView;
@property(readonly, nonatomic, getter=_balloonMaterial) UIBlurEffect *balloonMaterial;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
