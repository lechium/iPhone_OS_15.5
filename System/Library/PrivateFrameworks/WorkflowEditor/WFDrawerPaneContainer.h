//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <WorkflowEditor/WFDrawerGestureCoordinatorDelegate-Protocol.h>

@class NSString, UIView, WFDrawerAnimationManager, WFDrawerDismissalHelper, WFDrawerGestureCoordinator;
@protocol WFDrawerPane, WFDrawerPaneContainerDelegate;

@interface WFDrawerPaneContainer : UIViewController <WFDrawerGestureCoordinatorDelegate>
{
    _Bool _userInteractionEnabled;	// 8 = 0x8
    _Bool _inactive;	// 9 = 0x9
    id <WFDrawerPaneContainerDelegate> _delegate;	// 16 = 0x10
    UIViewController<WFDrawerPane> *_drawerPane;	// 24 = 0x18
    unsigned long long _visibility;	// 32 = 0x20
    unsigned long long _dimming;	// 40 = 0x28
    WFDrawerGestureCoordinator *_gestureCoordinator;	// 48 = 0x30
    WFDrawerAnimationManager *_animationManager;	// 56 = 0x38
    WFDrawerDismissalHelper *_dismissalHelper;	// 64 = 0x40
    UIView *_backgroundDimmingView;	// 72 = 0x48
    UIView *_foregroundDimmingView;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000002dc94d
@property(readonly, nonatomic) __weak UIView *foregroundDimmingView; // @synthesize foregroundDimmingView=_foregroundDimmingView;
@property(readonly, nonatomic) __weak UIView *backgroundDimmingView; // @synthesize backgroundDimmingView=_backgroundDimmingView;
@property(readonly, nonatomic) WFDrawerDismissalHelper *dismissalHelper; // @synthesize dismissalHelper=_dismissalHelper;
@property(readonly, nonatomic) WFDrawerAnimationManager *animationManager; // @synthesize animationManager=_animationManager;
@property(readonly, nonatomic) WFDrawerGestureCoordinator *gestureCoordinator; // @synthesize gestureCoordinator=_gestureCoordinator;
@property(nonatomic, getter=isInactive) _Bool inactive; // @synthesize inactive=_inactive;
@property(nonatomic) _Bool userInteractionEnabled; // @synthesize userInteractionEnabled=_userInteractionEnabled;
@property(readonly, nonatomic) unsigned long long dimming; // @synthesize dimming=_dimming;
@property(readonly, nonatomic) unsigned long long visibility; // @synthesize visibility=_visibility;
@property(readonly, nonatomic) UIViewController<WFDrawerPane> *drawerPane; // @synthesize drawerPane=_drawerPane;
@property(nonatomic) __weak id <WFDrawerPaneContainerDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned long long)growingVisibilityForHeight:(double)arg1;	// IMP=0x00000000002dc7e8
- (unsigned long long)shrinkingVisibilityForHeight:(double)arg1;	// IMP=0x00000000002dc764
- (unsigned long long)closestVisibilityForHeight:(double)arg1;	// IMP=0x00000000002dc6da
- (double)heightForVisibility:(unsigned long long)arg1;	// IMP=0x00000000002dc2fa
- (unsigned long long)closestVisibilityWithVelocity:(double)arg1 acceleration:(double)arg2 previousVisibility:(unsigned long long)arg3;	// IMP=0x00000000002dc24e
- (void)gestureCoordinator:(id)arg1 didFinishInteractionWithVelocity:(double)arg2 acceleration:(double)arg3 animation:(id)arg4;	// IMP=0x00000000002dc0d9
- (void)gestureCoordinator:(id)arg1 didContinueInteractionWithDrawerHeight:(double)arg2;	// IMP=0x00000000002dbf8d
- (void)gestureCoordinatorDidBeginInteraction:(id)arg1;	// IMP=0x00000000002dbf1e
@property(readonly, nonatomic) struct CGRect grabberAreaBounds;
@property(readonly, nonatomic) double drawerHeight;
@property(readonly, nonatomic) double maximumDrawerHeight;
@property(readonly, nonatomic) double minimumDrawerHeight;
@property(readonly, nonatomic) UIView *drawerView;
@property(readonly, nonatomic) UIView *containerView;
- (void)removeForegroundDimmingViewIfUnused;	// IMP=0x00000000002dbc80
- (void)installForegroundDimmingViewIfNeeded;	// IMP=0x00000000002db9f1
- (void)setupDimmingViewsForAnimationToDimming:(unsigned long long)arg1;	// IMP=0x00000000002db906
- (void)transitionToVisibility:(unsigned long long)arg1 withDimming:(unsigned long long)arg2 animated:(_Bool)arg3 interruptible:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000002db7c5
- (void)transitionWithPushedAnimationToVisibility:(unsigned long long)arg1 withDimming:(unsigned long long)arg2 animated:(_Bool)arg3 interruptible:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000002db343
- (void)layoutDrawerViewControllerForDrawerHeight:(double)arg1;	// IMP=0x00000000002dafa3
- (void)layoutDrawerViewController;	// IMP=0x00000000002daf65
- (void)viewSafeAreaInsetsDidChange;	// IMP=0x00000000002dade8
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000000002dad36
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000002dac5c
- (void)loadView;	// IMP=0x00000000002da96b
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x00000000002da8dc
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00000000002da86a
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x00000000002da76b
- (id)initWithDrawerPane:(id)arg1;	// IMP=0x00000000002da68d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
