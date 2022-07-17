//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <AuthenticationServices/UINavigationControllerDelegate-Protocol.h>
#import <AuthenticationServices/UIViewControllerTransitioningDelegate-Protocol.h>

@class NSString, UITapGestureRecognizer, UIVisualEffectView;
@protocol ASCredentialRequestContainerViewControllerDelegate, ASCredentialRequestPaneViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface ASCredentialRequestContainerViewController : UIViewController <UIViewControllerTransitioningDelegate, UINavigationControllerDelegate>
{
    UITapGestureRecognizer *_tapGestureRecognizer;	// 8 = 0x8
    UIViewController *_rootViewController;	// 16 = 0x10
    id <ASCredentialRequestContainerViewControllerDelegate> _delegate;	// 24 = 0x18
    id <ASCredentialRequestPaneViewControllerDelegate> _paneDelegate;	// 32 = 0x20
    UIVisualEffectView *_blurBackgroundView;	// 40 = 0x28
    struct CGSize _containerContentSize;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000008879
@property(nonatomic) struct CGSize containerContentSize; // @synthesize containerContentSize=_containerContentSize;
@property(retain, nonatomic) UIVisualEffectView *blurBackgroundView; // @synthesize blurBackgroundView=_blurBackgroundView;
@property(nonatomic) __weak id <ASCredentialRequestPaneViewControllerDelegate> paneDelegate; // @synthesize paneDelegate=_paneDelegate;
@property(nonatomic) __weak id <ASCredentialRequestContainerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
- (id)animationControllerForDismissedController:(id)arg1;	// IMP=0x000000000000878a
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;	// IMP=0x0000000000008740
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x000000000000864c
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;	// IMP=0x0000000000008276
- (void)setContainerContentSize:(struct CGSize)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000008163
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00000000000080c7
- (void)_setPaneDelegate:(id)arg1 forViewController:(id)arg2;	// IMP=0x0000000000008054
- (void)_clearPaneDelegateForViewController:(id)arg1;	// IMP=0x000000000000803d
- (void)_setPaneDelegateForViewController:(id)arg1;	// IMP=0x0000000000007fc8
- (void)_setPaneDelegateForTopViewController;	// IMP=0x0000000000007f0d
- (struct CGRect)_dismissalFrameForContentSize:(struct CGSize)arg1;	// IMP=0x0000000000007e18
- (struct CGRect)_layoutFrameForContentSize:(struct CGSize)arg1;	// IMP=0x0000000000007d25
- (void)_layoutContainerView:(_Bool)arg1;	// IMP=0x0000000000007b20
- (_Bool)_shouldDismiss;	// IMP=0x0000000000007ac0
- (void)_handleTapGesture:(id)arg1;	// IMP=0x0000000000007967
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x000000000000793d
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000000076ac
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000007607
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000072f4
- (void)viewDidLoad;	// IMP=0x000000000000717d
- (id)initWithRootViewController:(id)arg1;	// IMP=0x0000000000007041

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
