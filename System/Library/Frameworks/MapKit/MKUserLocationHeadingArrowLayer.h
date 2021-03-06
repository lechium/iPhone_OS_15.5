//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CAShapeLayer.h>

#import <MapKit/MKUserLocationHeadingAnimatableIndicator-Protocol.h>
#import <MapKit/MKUserLocationHeadingIndicator-Protocol.h>

@class NSString, UITraitCollection, _MKPuckAnnotationView;

__attribute__((visibility("hidden")))
@interface MKUserLocationHeadingArrowLayer : CAShapeLayer <MKUserLocationHeadingIndicator, MKUserLocationHeadingAnimatableIndicator>
{
    double _maxUncertaintyAngleToShowArrow;	// 8 = 0x8
    double _baseRadius;	// 16 = 0x10
    double _tipRadius;	// 24 = 0x18
    double _baseHalfAngle;	// 32 = 0x20
    UITraitCollection *_traitCollection;	// 40 = 0x28
    double _minimumAccuracyRadius;	// 48 = 0x30
    unsigned long long _mapType;	// 56 = 0x38
    _MKPuckAnnotationView *_userLocationView;	// 64 = 0x40
    double _headingRadians;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000024b361
@property(nonatomic) unsigned long long mapType; // @synthesize mapType=_mapType;
@property(nonatomic) double minimumAccuracyRadius; // @synthesize minimumAccuracyRadius=_minimumAccuracyRadius;
@property(retain, nonatomic) UITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
@property(nonatomic) double headingRadians; // @synthesize headingRadians=_headingRadians;
@property(readonly, nonatomic) __weak _MKPuckAnnotationView *userLocationView; // @synthesize userLocationView=_userLocationView;
- (void)setAccuracyRadius:(double)arg1 duration:(double)arg2;	// IMP=0x000000000024b2b3
- (double)_tipRadiusWhenVisible:(_Bool)arg1;	// IMP=0x000000000024b28d
- (double)_baseRadiusWhenVisible:(_Bool)arg1;	// IMP=0x000000000024b210
- (struct CGPoint)_positionWhenVisible:(_Bool)arg1;	// IMP=0x000000000024b173
- (id)_bezierPathWithBaseRadius:(double)arg1 tipRadius:(double)arg2 baseHalfAngle:(double)arg3;	// IMP=0x000000000024b048
- (struct CGPath *)_pathWhenVisible:(_Bool)arg1;	// IMP=0x000000000024afb7
- (id)_animationToSetVisible:(_Bool)arg1;	// IMP=0x000000000024ad74
- (void)animateToSetVisible:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000024ac65
- (void)updateTintColor:(id)arg1;	// IMP=0x000000000024ac29
- (_Bool)_shouldBeVisibleForAccuracy:(double)arg1;	// IMP=0x000000000024ac10
- (void)updateHeadingAccuracy:(double)arg1 previousAccuracy:(double)arg2;	// IMP=0x000000000024ab55
- (void)updateHeading:(double)arg1;	// IMP=0x000000000024aa76
- (id)initWithUserLocationView:(id)arg1;	// IMP=0x000000000024a852

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

