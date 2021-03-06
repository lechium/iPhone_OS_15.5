//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, SBHScaleZoomSettings, SBIcon, SBIconView, SBReversibleLayerPropertyAnimator, UIView;
@protocol SBScaleIconZoomAnimationContaining;

@interface SBScaleIconZoomAnimator
{
    struct UIEdgeInsets _iconScootch;	// 8 = 0x8
    double _naturalVisualAltitude;	// 40 = 0x28
    UIView *_scalingView;	// 48 = 0x30
    SBIconView *_targetIconView;	// 56 = 0x38
    SBReversibleLayerPropertyAnimator *_homeScreenScaleAnimator;	// 64 = 0x40
    SBReversibleLayerPropertyAnimator *_targetIconScaleXAnimator;	// 72 = 0x48
    SBReversibleLayerPropertyAnimator *_targetIconScaleYAnimator;	// 80 = 0x50
    NSMutableArray *_animationCompletions;	// 88 = 0x58
    SBIcon *_targetIcon;	// 96 = 0x60
    UIView *_targetIconPositioningView;	// 104 = 0x68
    struct CGPoint _zoomScaleDimension;	// 112 = 0x70
    struct CGPoint _zoomedTargetIconCenter;	// 128 = 0x80
    struct CGPoint _targetIconCenter;	// 144 = 0x90
}

+ (_Bool)validateAnimationContainer:(id)arg1 targetIcon:(id)arg2;	// IMP=0x000000000001a51a
- (void).cxx_destruct;	// IMP=0x000000000001d1fb
@property(readonly, nonatomic) struct CGPoint targetIconCenter; // @synthesize targetIconCenter=_targetIconCenter;
@property(readonly, nonatomic) struct CGPoint zoomedTargetIconCenter; // @synthesize zoomedTargetIconCenter=_zoomedTargetIconCenter;
@property(readonly, nonatomic) struct CGPoint zoomScaleDimension; // @synthesize zoomScaleDimension=_zoomScaleDimension;
@property(readonly, nonatomic) UIView *targetIconPositioningView; // @synthesize targetIconPositioningView=_targetIconPositioningView;
@property(readonly, nonatomic) SBIcon *targetIcon; // @synthesize targetIcon=_targetIcon;
@property(retain, nonatomic) NSMutableArray *animationCompletions; // @synthesize animationCompletions=_animationCompletions;
@property(retain, nonatomic) SBReversibleLayerPropertyAnimator *targetIconScaleYAnimator; // @synthesize targetIconScaleYAnimator=_targetIconScaleYAnimator;
@property(retain, nonatomic) SBReversibleLayerPropertyAnimator *targetIconScaleXAnimator; // @synthesize targetIconScaleXAnimator=_targetIconScaleXAnimator;
@property(retain, nonatomic) SBReversibleLayerPropertyAnimator *homeScreenScaleAnimator; // @synthesize homeScreenScaleAnimator=_homeScreenScaleAnimator;
- (void)_applyIconGridFadeFraction:(double)arg1;	// IMP=0x000000000001d065
- (void)_applyVisualAltitudeFraction:(double)arg1;	// IMP=0x000000000001cef6
- (struct CGPoint)_targetIconScaleForZoomFraction:(double)arg1;	// IMP=0x000000000001cebc
- (double)_homeScreenScaleForZoomFraction:(double)arg1;	// IMP=0x000000000001ce5e
- (void)_applyZoomFraction:(double)arg1;	// IMP=0x000000000001cd62
- (void)_setIconAlpha:(double)arg1;	// IMP=0x000000000001cd02
- (struct CGPoint)_referenceIconImageCenter;	// IMP=0x000000000001cca8
- (double)_zoomedVisualAltitude;	// IMP=0x000000000001cc9f
- (struct CGPoint)_zoomedIconCenter;	// IMP=0x000000000001cc64
- (struct CGRect)_zoomedFrame;	// IMP=0x000000000001cc06
- (void)_performAnimationToFraction:(double)arg1 withCentralAnimationSettings:(id)arg2 delay:(double)arg3 alreadyAnimating:(_Bool)arg4 sharedCompletion:(CDUnknownBlockType)arg5;	// IMP=0x000000000001c18c
- (unsigned long long)_numberOfSignificantAnimations;	// IMP=0x000000000001c159
- (void)_cleanupAnimation;	// IMP=0x000000000001be49
- (void)_setAnimationFraction:(double)arg1;	// IMP=0x000000000001bdd2
- (void)_configureTargetIconPositioningView:(id)arg1;	// IMP=0x000000000001bd17
- (void)_prepareAnimation;	// IMP=0x000000000001a989
- (_Bool)shouldMatchMoveWithDock;	// IMP=0x000000000001a981
@property(readonly, nonatomic) SBIconView *referenceIconView;
@property(readonly, nonatomic) SBIconView *targetIconView;
- (void)_setZoomScale:(struct CGPoint)arg1;	// IMP=0x000000000001a888
- (_Bool)_forceSquareZoomDimension;	// IMP=0x000000000001a880
@property(readonly, nonatomic) _Bool fadesHomeScreen;
@property(readonly, nonatomic) UIView *defaultTargetIconContainerView;
@property(readonly, nonatomic) UIView *targetIconContainerView;
@property(readonly, nonatomic) double maxHomeScreenZoomScale;
@property(readonly, nonatomic) double zoomScale;
- (id)initWithAnimationContainer:(id)arg1 targetIcon:(id)arg2;	// IMP=0x000000000001a618

// Remaining properties
@property(readonly, nonatomic) id <SBScaleIconZoomAnimationContaining> animationContainer; // @dynamic animationContainer;
@property(retain, nonatomic) SBHScaleZoomSettings *settings; // @dynamic settings;

@end

