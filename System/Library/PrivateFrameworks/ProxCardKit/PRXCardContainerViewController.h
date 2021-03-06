//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <ProxCardKit/PRXCardContainerViewDelegate-Protocol.h>
#import <ProxCardKit/PRXPullDismissalProvider-Protocol.h>
#import <ProxCardKit/UINavigationControllerDelegate-Protocol.h>

@class NSString, PRXCardContainerView, PRXFlowConfiguration, PRXPullDismissalInteractionDriver, PRXTransitioningController, UINavigationController;
@protocol PRXFlowDelegate;

@interface PRXCardContainerViewController : UIViewController <PRXPullDismissalProvider, PRXCardContainerViewDelegate, UINavigationControllerDelegate>
{
    PRXTransitioningController *_transitionController;	// 8 = 0x8
    PRXCardContainerView *_container;	// 16 = 0x10
    UINavigationController *_mainNavigationController;	// 24 = 0x18
    struct NSDirectionalEdgeInsets _containerLayoutMargins;	// 32 = 0x20
    _Bool _legacyCard;	// 64 = 0x40
    PRXPullDismissalInteractionDriver *_pullDismissalInteractionDriver;	// 72 = 0x48
    PRXFlowConfiguration *_configuration;	// 80 = 0x50
    UIViewController *_contentViewController;	// 88 = 0x58
    id <PRXFlowDelegate> _flowDelegate;	// 96 = 0x60
    CDUnknownBlockType _didShowViewController;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000000000045b0
@property(copy, nonatomic) CDUnknownBlockType didShowViewController; // @synthesize didShowViewController=_didShowViewController;
@property(nonatomic) __weak id <PRXFlowDelegate> flowDelegate; // @synthesize flowDelegate=_flowDelegate;
@property(readonly, nonatomic) UINavigationController *mainNavigationController; // @synthesize mainNavigationController=_mainNavigationController;
@property(readonly, nonatomic) UIViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(readonly, nonatomic) PRXFlowConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) PRXPullDismissalInteractionDriver *pullDismissalInteractionDriver; // @synthesize pullDismissalInteractionDriver=_pullDismissalInteractionDriver;
- (void)backgroundTapped:(id)arg1;	// IMP=0x00000000000044d9
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000004459
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000000000418c
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;	// IMP=0x0000000000003f76
- (_Bool)_canShowWhileLocked;	// IMP=0x0000000000003f27
- (_Bool)_shouldLayoutViewControllerBeforeCalculatingSize:(id)arg1;	// IMP=0x0000000000003e04
- (void)_updateContainerPreferredContentSize;	// IMP=0x0000000000003d50
- (void)_updatePreferredContentSizeForViewController:(id)arg1 containerSize:(struct CGSize)arg2;	// IMP=0x0000000000003c67
- (void)_updateCardSizeClassForContainerSize:(struct CGSize)arg1;	// IMP=0x0000000000003ba2
- (long long)_cardStyleForContentContainer:(id)arg1;	// IMP=0x0000000000003b03
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;	// IMP=0x0000000000003a88
- (struct CGSize)_maximumCardSizeForContainerSize:(struct CGSize)arg1;	// IMP=0x0000000000003a10
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;	// IMP=0x00000000000039af
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000000000038c0
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000000000382d
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000035aa
- (void)viewDidLayoutSubviews;	// IMP=0x0000000000003372
- (void)viewDidLoad;	// IMP=0x00000000000031a3
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x0000000000003194
- (void)loadView;	// IMP=0x000000000000303c
- (void)_commonInit;	// IMP=0x0000000000002f79
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000002f1f
- (id)init;	// IMP=0x0000000000002ec5
- (id)initWithConfiguration:(id)arg1;	// IMP=0x0000000000002da9
- (id)initAsSingleCardWithContentViewController:(id)arg1 containerLayoutMargins:(struct NSDirectionalEdgeInsets)arg2 configuration:(id)arg3;	// IMP=0x0000000000002cc9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

