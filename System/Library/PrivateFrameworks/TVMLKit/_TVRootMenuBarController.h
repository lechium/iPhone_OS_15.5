//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITabBarController.h>

#import <TVMLKit/IKAppTabBarController-Protocol.h>
#import <TVMLKit/TVAppRootViewController-Protocol.h>
#import <TVMLKit/UITabBarControllerDelegate-Protocol.h>

@class IKAppTabBar, NSArray, NSString, UINavigationController, UIViewController;
@protocol IKAppNavigationController, _TVAppNavigationControllerDelegate;

@interface _TVRootMenuBarController : UITabBarController <UITabBarControllerDelegate, TVAppRootViewController, IKAppTabBarController>
{
    IKAppTabBar *_appTabBar;	// 8 = 0x8
    NSArray *_appTabBarItems;	// 16 = 0x10
    unsigned long long _previousSelectedIndex;	// 24 = 0x18
    id <_TVAppNavigationControllerDelegate> _appNavigationControllerDelegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000bea5c
@property(retain, nonatomic) id <_TVAppNavigationControllerDelegate> appNavigationControllerDelegate; // @synthesize appNavigationControllerDelegate=_appNavigationControllerDelegate;
@property(nonatomic) unsigned long long previousSelectedIndex; // @synthesize previousSelectedIndex=_previousSelectedIndex;
@property(retain, nonatomic) NSArray *appTabBarItems; // @synthesize appTabBarItems=_appTabBarItems;
@property(readonly, nonatomic) IKAppTabBar *appTabBar; // @synthesize appTabBar=_appTabBar;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000be84e
- (id)transientTabItemForTabBar:(id)arg1;	// IMP=0x00000000000be846
- (void)tabBar:(id)arg1 setSelectedTabItem:(id)arg2;	// IMP=0x00000000000be617
- (id)selectedTabItemForTabBar:(id)arg1;	// IMP=0x00000000000be575
- (id)tabBar:(id)arg1 setTabItems:(id)arg2;	// IMP=0x00000000000bd650
- (id)tabBar:(id)arg1 tabItemAtIndex:(unsigned long long)arg2;	// IMP=0x00000000000bd630
- (unsigned long long)numberOfTabsInTabBar:(id)arg1;	// IMP=0x00000000000bd613
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;	// IMP=0x00000000000bd33e
@property(readonly, nonatomic) id <IKAppNavigationController> appNavigationController;
@property(readonly, nonatomic) UIViewController *currentViewController;
@property(readonly, nonatomic) UINavigationController *currentNavigationController;
- (void)setAppNavigationControllersDelegate:(id)arg1;	// IMP=0x00000000000bd0e7
- (unsigned long long)tabBarControllerSupportedInterfaceOrientations:(id)arg1;	// IMP=0x00000000000bd080
- (void)viewDidLoad;	// IMP=0x00000000000bd014
- (void)dealloc;	// IMP=0x00000000000bcfd4
- (id)init;	// IMP=0x00000000000bcf37

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
