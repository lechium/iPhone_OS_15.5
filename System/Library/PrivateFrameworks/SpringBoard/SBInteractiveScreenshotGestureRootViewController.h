//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <SpringBoard/BSInvalidatable-Protocol.h>

@class FBScene, NSMutableArray, NSObject, NSString, SBFFluidBehaviorSettings, SBInteractiveScreenshotGestureCropsView, SBInteractiveScreenshotSettings, SBOrientationTransformWrapperView, SSChromePlaceholderViewController, SSFlashView, UIImageView, UIStatusBar, UIView, UIViewFloatAnimatableProperty, _SBInteractiveScreenshotGestureBackdropView, _SBInteractiveScreenshotGestureReplicatorView;
@protocol OS_dispatch_queue, SBInteractiveScreenshotGestureRootViewControllerDelegate, UIScenePresentation, UIScenePresenter;

@interface SBInteractiveScreenshotGestureRootViewController : UIViewController <BSInvalidatable>
{
    _SBInteractiveScreenshotGestureBackdropView *_contentCapturingView;	// 8 = 0x8
    SSChromePlaceholderViewController *_chromePlaceholderViewController;	// 16 = 0x10
    SBOrientationTransformWrapperView *_chromePlaceholderOrientationWrapperView;	// 24 = 0x18
    UIStatusBar *_chromePlaceholderStatusBar;	// 32 = 0x20
    _SBInteractiveScreenshotGestureBackdropView *_contentBackdropView;	// 40 = 0x28
    SBInteractiveScreenshotGestureCropsView *_cropsView;	// 48 = 0x30
    SSFlashView *_flashView;	// 56 = 0x38
    struct CGPoint _gesturePortraitAnchorPoint;	// 64 = 0x40
    _Bool _hasCrossedCommitThreshold;	// 80 = 0x50
    _Bool _hasPreparedInitialLayout;	// 81 = 0x51
    UIView *_materialView;	// 88 = 0x58
    UIViewFloatAnimatableProperty *_cancellationCommitProgressAnimatableProperty;	// 96 = 0x60
    NSMutableArray *_cropLinesAlphaMultiPartAnimations;	// 104 = 0x68
    UIViewFloatAnimatableProperty *_cropsTrackingDiscreteAnimationProgressAnimatableProperty;	// 112 = 0x70
    UIViewFloatAnimatableProperty *_cropsProgressPresentationValueAnimatableProperty;	// 120 = 0x78
    UIViewFloatAnimatableProperty *_cropsProgressSeparatedValuesAnimatableProperty;	// 128 = 0x80
    UIViewFloatAnimatableProperty *_transformProgressAnimatableProperty;	// 136 = 0x88
    UIViewFloatAnimatableProperty *_translationXAnimatableProperty;	// 144 = 0x90
    UIViewFloatAnimatableProperty *_translationYAnimatableProperty;	// 152 = 0x98
    _SBInteractiveScreenshotGestureReplicatorView *_replicatorView;	// 160 = 0xa0
    UIImageView *_screenshotImageView;	// 168 = 0xa8
    UIView *_screenshotContainerView;	// 176 = 0xb0
    SBInteractiveScreenshotSettings *_settings;	// 184 = 0xb8
    FBScene *_sourceScene;	// 192 = 0xc0
    UIView<UIScenePresentation> *_sourceScenePresentationView;	// 200 = 0xc8
    id <UIScenePresenter> _sourceScenePresenter;	// 208 = 0xd0
    UIView *_topContentContainerView;	// 216 = 0xd8
    SBFFluidBehaviorSettings *_trackingCropsAnimationSettings;	// 224 = 0xe0
    NSMutableArray *_gestureCommitProgressUpdates;	// 232 = 0xe8
    NSMutableArray *_gestureCommitProgressUpdateTimestamps;	// 240 = 0xf0
    NSObject<OS_dispatch_queue> *_accessQueue;	// 248 = 0xf8
    double _queue_cropsCornerContentPadding;	// 256 = 0x100
    double _queue_cropsCornerLineWidth;	// 264 = 0x108
    double _queue_displayCornerRadius;	// 272 = 0x110
    double _queue_displayScale;	// 280 = 0x118
    long long _queue_gestureStyle;	// 288 = 0x120
    long long _queue_gestureTouchInterfaceOrientation;	// 296 = 0x128
    _Bool _queue_hasCommittedScreenshot;	// 304 = 0x130
    struct CGRect _queue_portraitBounds;	// 312 = 0x138
    struct CGRect _queue_screenshotContentFrame;	// 344 = 0x158
    id <SBInteractiveScreenshotGestureRootViewControllerDelegate> _delegate;	// 376 = 0x178
}

- (void).cxx_destruct;	// IMP=0x0000000000413010
@property(nonatomic) __weak id <SBInteractiveScreenshotGestureRootViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateWithUpdateMode:(long long)arg1 contentAnimationSettings:(id)arg2 commitProgress:(double)arg3 additionalContentTranslation:(struct CGPoint)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000412842
- (void)_updateWithUpdateMode:(long long)arg1 commitProgress:(double)arg2 additionalContentTranslation:(struct CGPoint)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000041279f
- (void)_updateCropLinesMultiPartAnimationForCropsProgress;	// IMP=0x0000000000412607
- (_Bool)_isGestureStyleReducedMotion:(long long)arg1;	// IMP=0x00000000004125f6
- (_Bool)_isGestureStyleDisabled:(long long)arg1;	// IMP=0x00000000004125e5
- (void)_injectCommitProgressVelocity:(double)arg1;	// IMP=0x00000000004125c8
- (void)_updateContentTransformUsingPresentationValues:(_Bool)arg1;	// IMP=0x00000000004113e4
- (void)_prepareViewHierarchyForCommittedScreenshot:(_Bool)arg1 gestureStyle:(long long)arg2;	// IMP=0x0000000000410ce6
- (void)_getDistanceTraveled:(double *)arg1 fullDistance:(double *)arg2 commitProgress:(double *)arg3 forTranslationFromCorner:(struct CGPoint)arg4 bounds:(struct CGRect)arg5;	// IMP=0x0000000000410bf1
- (void)_getContentTranslation:(struct CGPoint *)arg1 scale:(struct CGPoint *)arg2 forCommitProgress:(double)arg3 contentInsets:(struct UIEdgeInsets)arg4 additionalContentTranslation:(struct CGPoint)arg5;	// IMP=0x0000000000410a5b
- (double)_gestureCommitProgressUpdateVelocityOverTimeInterval:(double)arg1;	// IMP=0x000000000041080f
- (void)_addGestureUpdateWithCommitProgress:(double)arg1 timestamp:(double)arg2;	// IMP=0x0000000000410657
- (double)_currentCommitProgressVelocity;	// IMP=0x000000000041063a
- (id)_createScreenshotImageViewWithFrame:(struct CGRect)arg1;	// IMP=0x000000000041059d
- (id)_createMaterialViewWithFrame:(struct CGRect)arg1 groupName:(id)arg2 isCaptureOnly:(_Bool)arg3;	// IMP=0x00000000004103ce
- (id)_createFlashViewWithFrame:(struct CGRect)arg1;	// IMP=0x000000000041032a
- (struct CATransform3D)_inverseContentTransformForCommitProgress:(double)arg1 contentInsets:(struct UIEdgeInsets)arg2 additionalContentTranslation:(struct CGPoint)arg3;	// IMP=0x0000000000410187
- (struct CATransform3D)_contentTransformForCommitProgress:(double)arg1 contentInsets:(struct UIEdgeInsets)arg2 additionalContentTranslation:(struct CGPoint)arg3;	// IMP=0x000000000040fffd
- (void)_cancellationCommitProgressAnimatablePropertyPresentationValueDidChange;	// IMP=0x000000000040fdb4
- (struct CATransform3D)_anchoredTransformForAnchorPoint:(struct CGPoint)arg1 bounds:(struct CGRect)arg2 center:(struct CGPoint)arg3 transform:(struct CATransform3D)arg4;	// IMP=0x000000000040fc4e
- (void)removePlaceholderChrome;	// IMP=0x000000000040fb61
- (void)handlePanGestureRecognizerAction:(id)arg1;	// IMP=0x000000000040efe7
- (void)commitInteractionWithScreenshotImage:(id)arg1 screenshotInterfaceOrientation:(long long)arg2 settlingCompletionHandler:(CDUnknownBlockType)arg3 flashCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000040e3d1
- (void)captureScreenshotWithInterfaceOrientation:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000040e261
- (void)cancelInteractionWithStyle:(long long)arg1 settlingCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000040e09b
@property(nonatomic) long long gestureStyle;
@property(readonly, nonatomic) unsigned long long flashViewLayerRenderID;
@property(readonly, nonatomic) unsigned int flashViewLayerContextID;
- (void)invalidate;	// IMP=0x000000000040dce7
- (_Bool)_canShowWhileLocked;	// IMP=0x000000000040dcdf
- (struct UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(_Bool *)arg2;	// IMP=0x000000000040db95
- (void)viewDidLoad;	// IMP=0x000000000040ce7b
- (void)viewDidLayoutSubviews;	// IMP=0x000000000040ce4c
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x000000000040ce41
- (id)initWithSourceScene:(id)arg1;	// IMP=0x000000000040cd2c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
