//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class HMCameraSource, HMCameraView, HUCameraBadgeView, HUCameraErrorContent, HUCameraErrorView, HURemoteContextHostingView, NADecayingTimer, NSArray, NSLayoutConstraint, NSLayoutYAxisAnchor, UIActivityIndicatorView, UIImageView;

@interface HUCameraView : UIView
{
    _Bool _showActivityIndicator;	// 8 = 0x8
    _Bool _shouldRespectAspectRatio;	// 9 = 0x9
    unsigned long long _maskedCameraCorners;	// 16 = 0x10
    NSLayoutYAxisAnchor *_badgeBottomAnchor;	// 24 = 0x18
    HUCameraErrorContent *_errorContent;	// 32 = 0x20
    UIImageView *_demoSnapshotImageView;	// 40 = 0x28
    HURemoteContextHostingView *_cameraContainerView;	// 48 = 0x30
    HUCameraBadgeView *_badgeView;	// 56 = 0x38
    UIView *_cameraOverlayView;	// 64 = 0x40
    UIView *_cameraDimmingView;	// 72 = 0x48
    UIView *_backgroundView;	// 80 = 0x50
    HUCameraErrorView *_errorView;	// 88 = 0x58
    UIActivityIndicatorView *_activityIndicatorView;	// 96 = 0x60
    NADecayingTimer *_snapshotAgeUpdateTimer;	// 104 = 0x68
    NSArray *_staticConstraints;	// 112 = 0x70
    NSLayoutConstraint *_cameraAspectRatioConstraint;	// 120 = 0x78
    NSLayoutConstraint *_badgeBottomConstraint;	// 128 = 0x80
    NSLayoutConstraint *_badgeTrailingConstraint;	// 136 = 0x88
    struct UIOffset _badgeOffset;	// 144 = 0x90
}

+ (_Bool)requiresConstraintBasedLayout;	// IMP=0x00000000002dfa0a
- (void).cxx_destruct;	// IMP=0x00000000002e30a6
@property(retain, nonatomic) NSLayoutConstraint *badgeTrailingConstraint; // @synthesize badgeTrailingConstraint=_badgeTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *badgeBottomConstraint; // @synthesize badgeBottomConstraint=_badgeBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *cameraAspectRatioConstraint; // @synthesize cameraAspectRatioConstraint=_cameraAspectRatioConstraint;
@property(retain, nonatomic) NSArray *staticConstraints; // @synthesize staticConstraints=_staticConstraints;
@property(retain, nonatomic) NADecayingTimer *snapshotAgeUpdateTimer; // @synthesize snapshotAgeUpdateTimer=_snapshotAgeUpdateTimer;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) HUCameraErrorView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *cameraDimmingView; // @synthesize cameraDimmingView=_cameraDimmingView;
@property(readonly, nonatomic) UIView *cameraOverlayView; // @synthesize cameraOverlayView=_cameraOverlayView;
@property(readonly, nonatomic) HUCameraBadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property(readonly, nonatomic) HURemoteContextHostingView *cameraContainerView; // @synthesize cameraContainerView=_cameraContainerView;
@property(nonatomic) _Bool shouldRespectAspectRatio; // @synthesize shouldRespectAspectRatio=_shouldRespectAspectRatio;
@property(retain, nonatomic) UIImageView *demoSnapshotImageView; // @synthesize demoSnapshotImageView=_demoSnapshotImageView;
@property(nonatomic) _Bool showActivityIndicator; // @synthesize showActivityIndicator=_showActivityIndicator;
@property(retain, nonatomic) HUCameraErrorContent *errorContent; // @synthesize errorContent=_errorContent;
@property(retain, nonatomic) NSLayoutYAxisAnchor *badgeBottomAnchor; // @synthesize badgeBottomAnchor=_badgeBottomAnchor;
@property(nonatomic) struct UIOffset badgeOffset; // @synthesize badgeOffset=_badgeOffset;
@property(nonatomic) unsigned long long maskedCameraCorners; // @synthesize maskedCameraCorners=_maskedCameraCorners;
- (void)_scheduleNextSnapshotAgeUpdateForCaptureDate:(id)arg1;	// IMP=0x00000000002e2d1f
- (void)_updateBadgeViewReschedulingTimerIfNecessary:(_Bool)arg1;	// IMP=0x00000000002e291d
- (void)_updateBadgeView;	// IMP=0x00000000002e2906
- (void)_updateErrorAndActivityIndicatorVisibilityAnimated:(_Bool)arg1;	// IMP=0x00000000002e2425
- (void)_updateMaskedCameraCorners;	// IMP=0x00000000002e226d
@property(readonly, nonatomic) UIView *cameraOverlaySnapshot;
- (id)cameraContentSnapshot;	// IMP=0x00000000002e2051
@property(readonly, nonatomic) struct CGRect derivedCameraContentFrame;
@property(readonly, nonatomic) struct CGRect cameraContentFrame;
@property(nonatomic, getter=isBadgeHidden) _Bool badgeHidden;
- (void)setShowActivityIndicator:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000002e184b
- (void)setErrorContent:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000002e1364
@property(retain, nonatomic) HMCameraSource *cameraSource;
- (void)setCameraSource:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000002e1048
- (long long)contentModeForAspectRatio:(double)arg1;	// IMP=0x00000000002e100b
- (void)setCameraSource:(id)arg1 withDemoSnapshotURL:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00000000002e0dbd
- (void)setCameraContentMode:(long long)arg1;	// IMP=0x00000000002e0d0c
- (void)layoutSubviews;	// IMP=0x00000000002e0ac4
- (void)updateConstraints;	// IMP=0x00000000002e025a
@property(readonly, nonatomic) HMCameraView *cameraView;
- (void)setBackgroundColor:(id)arg1;	// IMP=0x00000000002dff4a
- (id)backgroundColor;	// IMP=0x00000000002dfefa
- (void)setContentMode:(long long)arg1;	// IMP=0x00000000002dfe35
- (void)_setContinuousCornerRadius:(double)arg1;	// IMP=0x00000000002dfd14
- (double)_continuousCornerRadius;	// IMP=0x00000000002dfcc4
- (void)dealloc;	// IMP=0x00000000002dfc59
- (id)initWithBadgeView:(id)arg1;	// IMP=0x00000000002dfa26
- (id)init;	// IMP=0x00000000002dfa12

@end
