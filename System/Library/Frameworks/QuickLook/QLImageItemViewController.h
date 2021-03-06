//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuickLook/QLAnimationTimerObserver-Protocol.h>
#import <QuickLook/QLImageAnalysisManagerDelegate-Protocol.h>
#import <QuickLook/UIAdaptivePresentationControllerDelegate-Protocol.h>

@class NSDictionary, NSLayoutConstraint, NSNumber, NSString, QLAnimatedImage, QLImageAnalysisManager, UIImage, UIImageView, UIView;

@interface QLImageItemViewController <QLAnimationTimerObserver, UIAdaptivePresentationControllerDelegate, QLImageAnalysisManagerDelegate>
{
    UIImageView *_imageView;	// 8 = 0x8
    QLAnimatedImage *_animatedImage;	// 16 = 0x10
    QLImageAnalysisManager *_imageAnalysisManager;	// 24 = 0x18
    double _initialTimeStamp;	// 32 = 0x20
    double _currentPlaybackTime;	// 40 = 0x28
    struct CGSize _imageSize;	// 48 = 0x30
    _Bool _imageIsAnimated;	// 64 = 0x40
    _Bool _isFullScreen;	// 65 = 0x41
    NSNumber *_savedFullScreenState;	// 72 = 0x48
    UIView *_analysisButtonContainer;	// 80 = 0x50
    NSLayoutConstraint *_analysisButtonContainerRightConstraint;	// 88 = 0x58
    NSLayoutConstraint *_analysisButtonContainerBottomConstraint;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000000007a734
- (_Bool)shouldAcceptTouch:(id)arg1 ofGestureRecognizer:(id)arg2;	// IMP=0x000000000007a5a1
- (void)performFirstTimeAppearanceActions:(unsigned long long)arg1;	// IMP=0x000000000007a56c
- (_Bool)canPerformFirstTimeAppearanceActions:(unsigned long long)arg1;	// IMP=0x000000000007a526
- (void)didScroll:(id)arg1;	// IMP=0x000000000007a514
- (void)didZoom:(id)arg1;	// IMP=0x000000000007a502
- (void)adjustImageInteractionForScrollEvent:(id)arg1;	// IMP=0x000000000007a2ac
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000007a1a1
- (void)previewBecameFullScreen:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000007a12e
- (void)_updateAnalysisButtonsContainerConstraints;	// IMP=0x000000000007a0a6
- (void)_setupAndStartImageAnalysis;	// IMP=0x0000000000079fd7
- (void)imageAnalysisInteractionDidDismissVisualSearchController;	// IMP=0x0000000000079f23
- (void)imageAnalysisInteractionWillPresentVisualSearchController;	// IMP=0x0000000000079e94
- (void)imageAnalyzerWantsUpdateInfoButtonWithAnimation:(_Bool)arg1;	// IMP=0x0000000000079e43
@property(readonly, nonatomic) NSDictionary *clientPreviewOptions;
@property(readonly, nonatomic) UIView *imageAnalysisView;
- (_Bool)draggableViewShouldStartDragSession:(id)arg1;	// IMP=0x0000000000079d1c
- (id)draggableView;	// IMP=0x0000000000079d07
- (void)presentationControllerDidDismiss:(id)arg1;	// IMP=0x0000000000079cb9
- (void)buttonPressedWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000079bec
- (id)toolbarButtonsForTraitCollection:(id)arg1;	// IMP=0x0000000000079ae0
- (void)animationTimerFired:(double)arg1;	// IMP=0x00000000000799fb
- (long long)preferredWhitePointAdaptivityStyle;	// IMP=0x00000000000799f0
@property(readonly, nonatomic) UIImage *image;
- (struct CGSize)imageSize;	// IMP=0x00000000000799bb
- (void)setAppearance:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000797e7
- (void)previewDidDisappear:(_Bool)arg1;	// IMP=0x000000000007972b
- (void)previewDidAppear:(_Bool)arg1;	// IMP=0x0000000000079600
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000792b4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

