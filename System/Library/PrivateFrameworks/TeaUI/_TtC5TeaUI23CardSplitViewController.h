//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UISplitViewController.h>

@class MISSING_TYPE, NSArray, UIViewController;

@interface _TtC5TeaUI23CardSplitViewController : UISplitViewController
{
    MISSING_TYPE *primaryCardContainerController;	// 8 = 0x8
    MISSING_TYPE *commands;	// 16 = 0x10
    MISSING_TYPE *preservedItems;	// 24 = 0x18
    MISSING_TYPE *eventManager;	// 32 = 0x20
    MISSING_TYPE *splitViewFocus;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000fe260
- (id)initWithStyle:(long long)arg1;	// IMP=0x00000000000fe1e0
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000000fe150
- (void)viewDidLayoutSubviews;	// IMP=0x00000000000fe050
@property(nonatomic, readonly) UIViewController *childViewControllerForStatusBarHidden;
@property(nonatomic, readonly) UIViewController *childViewControllerForStatusBarStyle;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000fdd50
@property(nonatomic, copy) NSArray *viewControllers;
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000000fd540
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000fd500
- (void)viewDidLoad;	// IMP=0x00000000000fd380
- (void)loadView;	// IMP=0x00000000000fd2c0
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000fd220

@end
