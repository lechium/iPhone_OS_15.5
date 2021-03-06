//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ControlCenterUI/NSObject-Protocol.h>

@class CCUIAnimationBatch, CCUIOverlayTransitionState;
@protocol CCUIOverlayFlickGestureBehavior, CCUIOverlayMetricsProvider, CCUIOverlayViewProvider;

@protocol CCUIOverlayPresentationProvider <NSObject>
@property(nonatomic) __weak id <CCUIOverlayMetricsProvider> metricsProvider;
@property(nonatomic) __weak id <CCUIOverlayViewProvider> viewProvider;
@property(readonly, nonatomic) _Bool allowHotPocketDuringTransition;
@property(readonly, nonatomic, getter=isZoomEnabled) _Bool zoomEnabled;
@property(readonly, nonatomic, getter=isPanDismissalAvailable) _Bool panDismissalAvailable;
- (_Bool)backdropViewShouldUseAlphaTransformer;
- (_Bool)tapAllowsDismissalForLocation:(struct CGPoint)arg1;
- (CCUIAnimationBatch *)animationBatchForTransitionState:(CCUIOverlayTransitionState *)arg1 previousTransitionState:(CCUIOverlayTransitionState *)arg2;
- (void)layoutViews;
- (unsigned long long)finalTransitionTypeForState:(CCUIOverlayTransitionState *)arg1 gestureTranslation:(struct CGPoint)arg2 gestureVelocity:(struct CGPoint)arg3;
- (CCUIOverlayTransitionState *)transitionStateForType:(unsigned long long)arg1 interactive:(_Bool)arg2 translation:(struct CGPoint)arg3;

@optional
@property(readonly, copy, nonatomic) id <CCUIOverlayFlickGestureBehavior> flickGestureBehavior;
@property(readonly, nonatomic) unsigned long long headerMode;
- (double (^)(double))customBackdropScaleAdjustment;
- (CCUIAnimationBatch *)cleanupForDismissal;
- (CCUIAnimationBatch *)prepareForPresentation;
- (CCUIAnimationBatch *)secondaryAnimationBatchForTransitionState:(CCUIOverlayTransitionState *)arg1 previousTransitionState:(CCUIOverlayTransitionState *)arg2;
@end

