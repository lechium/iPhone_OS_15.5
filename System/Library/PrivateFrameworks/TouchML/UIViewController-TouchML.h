//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSArray, NSDictionary, NSString, TMLContext;

@interface UIViewController (TouchML)
+ (void)tmlLoadCategory;	// IMP=0x000000000005f1f3
- (long long)tmlPreferredInterfaceOrientationForPresentation;	// IMP=0x00000000000616a6
- (unsigned long long)tmlSupportedInterfaceOrientations;	// IMP=0x000000000006161f
- (_Bool)tmlShouldAutorotate;	// IMP=0x000000000006159a
- (_Bool)tmlAccessibilityPerformMagicTap;	// IMP=0x00000000000614f3
- (_Bool)tmlAccessibilityPerformEscape;	// IMP=0x000000000006144c
- (void)setChildViewControllerForStatusBarHidden:(id)arg1;	// IMP=0x000000000006141c
- (id)tmlChildViewControllerForStatusBarHidden;	// IMP=0x00000000000613a5
- (void)setChildViewControllerForStatusBarStyle:(id)arg1;	// IMP=0x0000000000061375
- (id)tmlChildViewControllerForStatusBarStyle;	// IMP=0x00000000000612fe
- (void)setPreferredStatusBarUpdateAnimation:(long long)arg1;	// IMP=0x0000000000061295
- (long long)tmlPreferredStatusBarUpdateAnimation;	// IMP=0x0000000000061225
- (void)setPrefersStatusBarHidden:(_Bool)arg1;	// IMP=0x00000000000611bc
- (_Bool)tmlPrefersStatusBarHidden;	// IMP=0x000000000006114e
- (void)setPreferredStatusBarStyle:(long long)arg1;	// IMP=0x00000000000610e5
- (long long)tmlPreferredStatusBarStyle;	// IMP=0x0000000000061075
@property(copy, nonatomic) NSArray *previewActionItems;
- (id)tmlPreviewActionItems;	// IMP=0x000000000006104e
- (void)tmlWillMoveToParentViewController:(id)arg1;	// IMP=0x0000000000060f5a
- (void)tmlTraitCollectionDidChange:(id)arg1;	// IMP=0x0000000000060eb4
- (void)tmlWillTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000000060bbd
- (void)tmlViewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000000000608b3
- (void)tmlDecodeRestorableStateWithCoder:(id)arg1;	// IMP=0x00000000000607b7
- (void)tmlEncodeRestorableStateWithCoder:(id)arg1;	// IMP=0x00000000000606f7
- (void)tmlUpdateViewConstraints;	// IMP=0x00000000000606c0
- (void)tmlViewDidLayoutSubviews;	// IMP=0x0000000000060689
- (void)tmlViewWillLayoutSubviews;	// IMP=0x0000000000060652
- (void)tmlViewDidDisappear:(_Bool)arg1;	// IMP=0x000000000006058d
- (void)tmlViewWillDisappear:(_Bool)arg1;	// IMP=0x00000000000604c8
- (void)tmlViewDidAppear:(_Bool)arg1;	// IMP=0x0000000000060403
- (void)tmlViewWillAppear:(_Bool)arg1;	// IMP=0x000000000006033e
- (void)tmlViewDidLoad;	// IMP=0x0000000000060307
- (void)tmlLoadViewOverride;	// IMP=0x000000000006027b
- (void)setTMLValue:(id)arg1 forKeyPath:(id)arg2;	// IMP=0x00000000000601c1
- (_Bool)tmlLoadViewControllerWithSource:(id)arg1;	// IMP=0x0000000000060015
- (_Bool)tmlLoadViewControllerFromPath:(id)arg1;	// IMP=0x000000000005fe69
- (id)tmlLoadViewFromPath:(id)arg1;	// IMP=0x000000000005fda7
- (id)tmlLoadView:(id)arg1;	// IMP=0x000000000005fce5
- (_Bool)tmlLoadViewWithSource:(id)arg1;	// IMP=0x000000000005fb54
- (_Bool)tmlLoadView;	// IMP=0x000000000005f9c6
- (void)_tmlUnloadContext;	// IMP=0x000000000005f96a
- (id)_tmlEnsureContext;	// IMP=0x000000000005f750
@property(copy, nonatomic) NSDictionary *tmlObjects;
@property(readonly, nonatomic) NSString *tmlViewPath;
@property(readonly, nonatomic) TMLContext *tmlContext;
@end
