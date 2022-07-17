//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>

@class NSArray, NSHashTable, NSString, UIResponder, UITapGestureRecognizer, UIView, UIVisualEffectView, UIWindow;
@protocol UIPreviewPresentationControllerDelegate;

@interface UIPreviewPresentationController <UIGestureRecognizerDelegate>
{
    _Bool _appliesVisualEffectsToPresentingView;	// 8 = 0x8
    id <UIPreviewPresentationControllerDelegate> _previewPresentationDelegate;	// 16 = 0x10
    UITapGestureRecognizer *_dismissGestureRecognizer;	// 24 = 0x18
    UIVisualEffectView *_presentationContainerEffectView;	// 32 = 0x20
    UIView *_localStatusBar;	// 40 = 0x28
    NSArray *_keyboardSnapshotters;	// 48 = 0x30
    NSHashTable *_keyboardWindows;	// 56 = 0x38
    UIResponder *_currentPinnedResponder;	// 64 = 0x40
    UIWindow *_presentationWindow;	// 72 = 0x48
    CDUnknownBlockType _containerViewConfigurationBlock;	// 80 = 0x50
    CDUnknownBlockType _dismissalTransitionDidEndBlock;	// 88 = 0x58
}

+ (_Bool)_shouldApplyVisualEffectsToPresentingView;	// IMP=0x0000000000c397fd
+ (_Bool)_shouldInterdictServiceViewTouches;	// IMP=0x0000000000c38735
+ (id)_backgroundEffectForTraitCollection:(id)arg1 interactive:(_Bool)arg2;	// IMP=0x0000000000c38709
- (void).cxx_destruct;	// IMP=0x0000000000c39bae
@property(copy, nonatomic) CDUnknownBlockType dismissalTransitionDidEndBlock; // @synthesize dismissalTransitionDidEndBlock=_dismissalTransitionDidEndBlock;
@property(copy, nonatomic) CDUnknownBlockType containerViewConfigurationBlock; // @synthesize containerViewConfigurationBlock=_containerViewConfigurationBlock;
@property(nonatomic) __weak UIWindow *presentationWindow; // @synthesize presentationWindow=_presentationWindow;
@property(nonatomic) __weak UIResponder *currentPinnedResponder; // @synthesize currentPinnedResponder=_currentPinnedResponder;
@property(copy, nonatomic) NSHashTable *keyboardWindows; // @synthesize keyboardWindows=_keyboardWindows;
@property(copy, nonatomic) NSArray *keyboardSnapshotters; // @synthesize keyboardSnapshotters=_keyboardSnapshotters;
@property(retain, nonatomic) UIView *localStatusBar; // @synthesize localStatusBar=_localStatusBar;
@property(retain, nonatomic) UIVisualEffectView *presentationContainerEffectView; // @synthesize presentationContainerEffectView=_presentationContainerEffectView;
@property(nonatomic) _Bool appliesVisualEffectsToPresentingView; // @synthesize appliesVisualEffectsToPresentingView=_appliesVisualEffectsToPresentingView;
@property(retain, nonatomic) UITapGestureRecognizer *dismissGestureRecognizer; // @synthesize dismissGestureRecognizer=_dismissGestureRecognizer;
@property(nonatomic) __weak id <UIPreviewPresentationControllerDelegate> previewPresentationDelegate; // @synthesize previewPresentationDelegate=_previewPresentationDelegate;
- (void)_animatePreviewTransitionIfNeeded:(id)arg1;	// IMP=0x0000000000c398cb
- (void)_applyVisualEffectsForPresentationPhase:(unsigned long long)arg1;	// IMP=0x0000000000c39805
- (void)_cancelTransitionDidEnd:(_Bool)arg1;	// IMP=0x0000000000c397f7
- (void)_layoutForCancel;	// IMP=0x0000000000c397e3
- (void)_previewTransitionDidEnd:(_Bool)arg1;	// IMP=0x0000000000c397dd
- (void)_layoutForPreview;	// IMP=0x0000000000c397c6
- (void)_interactiveHighlightTransitionDidEnd:(_Bool)arg1;	// IMP=0x0000000000c397c0
- (void)_layoutForInteractiveHighlight;	// IMP=0x0000000000c397a9
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x0000000000c396ac
- (void)_handleDismissGestureRecognizer:(id)arg1;	// IMP=0x0000000000c3961f
- (void)_prepareDismissGestureRecognizersIfNeeded;	// IMP=0x0000000000c3953d
- (void)_prepareDismissAnimationsForTransitionCoordinator:(id)arg1;	// IMP=0x0000000000c3948d
- (void)_preparePresentationAnimationsForTransitionCoordinator:(id)arg1;	// IMP=0x0000000000c39347
- (id)_presentationContainerView;	// IMP=0x0000000000c392f7
- (void)_finalizeAfterDismissalTransition;	// IMP=0x0000000000c39015
- (void)_presentationTransitionWillBeginForContainerEffectView:(id)arg1;	// IMP=0x0000000000c3900f
- (void)_prepareKeyboardForPresentationTransition;	// IMP=0x0000000000c38afb
- (void)_prepareStatusBarForPresentationTransition;	// IMP=0x0000000000c389ca
- (void)_prepareContainerViewForPresentationTransition;	// IMP=0x0000000000c38745
- (_Bool)_allowsAutorotation;	// IMP=0x0000000000c3873d
- (struct CGRect)_frameForTransitionViewInPresentationSuperview:(id)arg1;	// IMP=0x0000000000c386d3
- (_Bool)_shouldSavePresentedViewControllerForStateRestoration;	// IMP=0x0000000000c386cb
- (_Bool)_keyboardShouldAnimateAlongsideForInteractiveTransitions;	// IMP=0x0000000000c386c3
- (_Bool)_presentationPotentiallyUnderlapsStatusBar;	// IMP=0x0000000000c386bb
- (_Bool)_shouldDisableInteractionDuringTransitions;	// IMP=0x0000000000c386b3
- (_Bool)_shouldKeepCurrentFirstResponder;	// IMP=0x0000000000c386ab
- (void)dismissalTransitionDidEnd:(_Bool)arg1;	// IMP=0x0000000000c3864d
- (void)dismissalTransitionWillBegin;	// IMP=0x0000000000c385b2
- (void)presentationTransitionDidEnd:(_Bool)arg1;	// IMP=0x0000000000c38567
- (void)presentationTransitionWillBegin;	// IMP=0x0000000000c383f6
- (long long)presentationStyle;	// IMP=0x0000000000c383eb
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;	// IMP=0x0000000000c38392

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
