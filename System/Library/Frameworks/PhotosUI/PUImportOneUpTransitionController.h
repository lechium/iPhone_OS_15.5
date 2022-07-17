//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUI/UIGestureRecognizerDelegate-Protocol.h>
#import <PhotosUI/UIViewControllerAnimatedTransitioning-Protocol.h>
#import <PhotosUI/UIViewControllerInteractiveTransitioning-Protocol.h>
#import <PhotosUI/UIViewControllerTransitioningDelegate-Protocol.h>

@class NSString, PUImportOneUpModalTransition, PUPhotoPinchGestureRecognizer, UIPanGestureRecognizer, UIViewController;

__attribute__((visibility("hidden")))
@interface PUImportOneUpTransitionController <UIGestureRecognizerDelegate, UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning>
{
    _Bool _hasInstalledDismissGestureRecognizers;	// 8 = 0x8
    PUPhotoPinchGestureRecognizer *_presentingPinchGestureRecognizer;	// 16 = 0x10
    PUPhotoPinchGestureRecognizer *_dismissPinchGestureRecognizer;	// 24 = 0x18
    UIPanGestureRecognizer *_dismissPanGestureRecognizer;	// 32 = 0x20
    UIViewController *_presentingViewController;	// 40 = 0x28
    long long _operation;	// 48 = 0x30
    PUImportOneUpModalTransition *_transition;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000001b803b
@property(retain, nonatomic) PUImportOneUpModalTransition *transition; // @synthesize transition=_transition;
@property(readonly, nonatomic) long long operation; // @synthesize operation=_operation;
@property(readonly, nonatomic) UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(retain, nonatomic) UIPanGestureRecognizer *dismissPanGestureRecognizer; // @synthesize dismissPanGestureRecognizer=_dismissPanGestureRecognizer;
@property(retain, nonatomic) PUPhotoPinchGestureRecognizer *dismissPinchGestureRecognizer; // @synthesize dismissPinchGestureRecognizer=_dismissPinchGestureRecognizer;
@property(readonly, nonatomic) PUPhotoPinchGestureRecognizer *presentingPinchGestureRecognizer; // @synthesize presentingPinchGestureRecognizer=_presentingPinchGestureRecognizer;
@property(nonatomic) _Bool hasInstalledDismissGestureRecognizers; // @synthesize hasInstalledDismissGestureRecognizers=_hasInstalledDismissGestureRecognizers;
- (void)installDismissGestureRecognizersOnView:(id)arg1;	// IMP=0x00000000001b7ebd
- (_Bool)continuousGestureRecognizerIsActive:(id)arg1;	// IMP=0x00000000001b7e5a
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x00000000001b7c17
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x00000000001b7c0f
- (void)maybeInitiateInteractiveDismiss:(id)arg1;	// IMP=0x00000000001b7b5a
@property(readonly, nonatomic) _Bool wantsInteractiveStart;
- (void)startInteractiveTransition:(id)arg1;	// IMP=0x00000000001b79c6
- (id)interactionControllerForDismissal:(id)arg1;	// IMP=0x00000000001b797b
- (id)interactionControllerForPresentation:(id)arg1;	// IMP=0x00000000001b7930
- (void)animationEnded:(_Bool)arg1;	// IMP=0x00000000001b78ed
- (id)interruptibleAnimatorForTransition:(id)arg1;	// IMP=0x00000000001b789d
- (id)initWithPresentingViewController:(id)arg1 pinchGestureRecognizer:(id)arg2;	// IMP=0x00000000001b7727

// Remaining properties
@property(readonly, nonatomic) long long completionCurve;
@property(readonly, nonatomic) double completionSpeed;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
