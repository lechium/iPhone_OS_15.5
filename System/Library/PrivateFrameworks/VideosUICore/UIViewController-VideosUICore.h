//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSArray, NSString, UINavigationController, UINavigationItem, UIPresentationController, UIScrollView, UITabBarController, UITabBarItem, UITraitCollection, UIView;
@protocol UIViewControllerTransitioningDelegate;

@interface UIViewController (VideosUICore)
- (void)vui_setContentScrollView:(id)arg1 forEdge:(unsigned long long)arg2;	// IMP=0x0000000000012635
- (id)vui_contentScrollViewForEdge:(unsigned long long)arg1;	// IMP=0x0000000000012623
- (_Bool)vui_addSubview:(id)arg1 oldView:(id)arg2;	// IMP=0x0000000000012598
- (void)vui_updateViewConstraints;	// IMP=0x0000000000012592
- (void)vui_didMoveToParentViewController:(id)arg1;	// IMP=0x000000000001258c
- (void)vui_willMoveToParentViewController:(id)arg1;	// IMP=0x0000000000012586
- (void)vui_setOverrideTraitCollection:(id)arg1 forChildViewController:(id)arg2;	// IMP=0x0000000000012574
- (void)vui_endAppearanceTransition;	// IMP=0x0000000000012562
- (void)vui_beginAppearanceTransition:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000012550
- (void)vui_removeFromParentViewController;	// IMP=0x000000000001253e
- (void)vui_addChildViewController:(id)arg1;	// IMP=0x000000000001252c
- (void)vui_showViewController:(id)arg1 sender:(id)arg2;	// IMP=0x000000000001251a
- (void)vui_dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000012508
- (void)vui_presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000124f6
- (void)vui_viewDidLayoutSubviews;	// IMP=0x00000000000124f0
- (void)vui_viewWillLayoutSubviews;	// IMP=0x00000000000124ea
- (void)vui_viewDidDisappear:(_Bool)arg1;	// IMP=0x00000000000124e4
- (void)vui_viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000000124de
- (void)vui_viewDidAppear:(_Bool)arg1;	// IMP=0x00000000000124d8
- (void)vui_viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000124d2
- (void)vui_viewDidLoad;	// IMP=0x00000000000124cc
- (void)vui_loadView;	// IMP=0x00000000000124c6
- (id)vui_initWithCoder:(id)arg1;	// IMP=0x0000000000012496
- (id)vui_initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000012461
@property(copy, nonatomic) NSString *vuiViewControllerIdentifier;
@property(readonly, nonatomic, getter=vuiPPTIsLoading) _Bool vuiPPTLoading;
@property(retain, nonatomic) UIScrollView *vuiTabBarObservedScrollView;
@property(readonly, nonatomic) UITabBarController *vuiTabBarController;
@property(retain, nonatomic) UITabBarItem *vuiTabBarItem;
@property(readonly, nonatomic) _Bool vuiIsNavigationRoot;
@property(readonly, nonatomic) UINavigationController *vuiNavigationController;
@property(readonly, nonatomic) UINavigationItem *vuiNavigationItem;
@property(nonatomic, getter=vuiIsModalInPresentation) _Bool vuiModalInPresentation;
@property(readonly, nonatomic) UIPresentationController *vuiPresentationController;
@property(nonatomic) __weak id <UIViewControllerTransitioningDelegate> vuiTransitioningDelegate;
@property(readonly, nonatomic) _Bool vuiShouldAutomaticallyForwardAppearanceMethods;
@property(readonly, nonatomic) NSArray *vuiChildViewControllers;
@property(readonly, nonatomic) _Bool vuiIsRTL;
@property(readonly, nonatomic) UITraitCollection *vuiTraitCollection;
- (void)vui_setOverrideUserInterfaceStyle:(unsigned long long)arg1;	// IMP=0x0000000000012248
@property(readonly, nonatomic) unsigned long long vuiOverrideUserInterfaceStyle;
@property(readonly, nonatomic) unsigned long long vuiUserInterfaceStyle;
@property(nonatomic) struct CGSize vuiPreferredContentSize;
@property(nonatomic) _Bool vuiAutomaticallyAdjustsScrollViewInsets;
@property(nonatomic) _Bool vuiModalPresentationCapturesStatusBarAppearance;
@property(nonatomic) long long vuiModalPresentationStyle;
@property(readonly, nonatomic, getter=vuiIsMovingFromParentViewController) _Bool vuiMovingFromParentViewController;
@property(readonly, nonatomic, getter=vuiIsMovingToParentViewController) _Bool vuiMovingToParentViewController;
@property(readonly, nonatomic, getter=vuiIsBeingDismissed) _Bool vuiBeingDismissed;
@property(readonly, nonatomic, getter=vuiIsBeingPresented) _Bool vuiBeingPresented;
@property(readonly, nonatomic) UIViewController *vuiPresentingViewController;
@property(readonly, nonatomic) UIViewController *vuiPresentedViewController;
@property(readonly, nonatomic) __weak UIViewController *vuiParentViewController;
@property(copy, nonatomic) NSString *vuiTitle;
@property(readonly, nonatomic, getter=vuiIsViewLoaded) _Bool vuiViewLoaded;
@property(retain, nonatomic) UIView *vuiView;
@end
