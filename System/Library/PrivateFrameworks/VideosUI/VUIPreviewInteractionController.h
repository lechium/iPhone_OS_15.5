//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VideosUI/UIPreviewInteractionDelegate-Protocol.h>
#import <VideosUI/UIViewControllerAnimatedTransitioning-Protocol.h>
#import <VideosUI/UIViewControllerTransitioningDelegate-Protocol.h>

@class NSIndexPath, NSString, UICollectionView, UICollectionViewCell, UIPreviewInteraction, UIViewController, UIViewPropertyAnimator, VUIDialogPresentationController, VUIPresentationContainerViewController;
@protocol VUIPreviewInteractionControllerDelegate;

__attribute__((visibility("hidden")))
@interface VUIPreviewInteractionController : NSObject <UIPreviewInteractionDelegate, UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning>
{
    UIPreviewInteraction *_previewInteraction;	// 8 = 0x8
    UICollectionView *_collectionView;	// 16 = 0x10
    VUIPresentationContainerViewController *_wrapperViewController;	// 24 = 0x18
    VUIDialogPresentationController *_dialogPresentationController;	// 32 = 0x20
    UIViewPropertyAnimator *_previewPropertyAnimator;	// 40 = 0x28
    UIViewPropertyAnimator *_commitPropertyAnimator;	// 48 = 0x30
    UICollectionViewCell *_stashedCell;	// 56 = 0x38
    _Bool _previewTransitionEnded;	// 64 = 0x40
    id <VUIPreviewInteractionControllerDelegate> _delegate;	// 72 = 0x48
    UIViewController *_presentingViewController;	// 80 = 0x50
    UIViewController *_presentedViewController;	// 88 = 0x58
    NSIndexPath *_currentIndexPath;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000151e60
@property(readonly, nonatomic) NSIndexPath *currentIndexPath; // @synthesize currentIndexPath=_currentIndexPath;
@property(readonly, nonatomic) UIViewController *presentedViewController; // @synthesize presentedViewController=_presentedViewController;
@property(readonly, nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(nonatomic) __weak id <VUIPreviewInteractionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_applicationDidEnterBackground:(id)arg1;	// IMP=0x0000000000151dfd
- (void)_cleanupPreviewInteraction;	// IMP=0x0000000000151d56
- (void)animateTransition:(id)arg1;	// IMP=0x0000000000151b88
- (double)transitionDuration:(id)arg1;	// IMP=0x0000000000151b7a
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;	// IMP=0x0000000000151ae7
- (id)animationControllerForDismissedController:(id)arg1;	// IMP=0x0000000000151ade
- (void)previewInteractionDidCancel:(id)arg1;	// IMP=0x0000000000151a50
- (void)previewInteraction:(id)arg1 didUpdatePreviewTransition:(double)arg2 ended:(_Bool)arg3;	// IMP=0x0000000000151961
- (_Bool)previewInteractionShouldBegin:(id)arg1;	// IMP=0x0000000000150814
- (void)dismissConfirmation;	// IMP=0x000000000015077c
- (void)dealloc;	// IMP=0x00000000001506fa
- (id)initWithPresentingViewController:(id)arg1 collectionView:(id)arg2 controllerToPresent:(id)arg3;	// IMP=0x00000000001505b4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

