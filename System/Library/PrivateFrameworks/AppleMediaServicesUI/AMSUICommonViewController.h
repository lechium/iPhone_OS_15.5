//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class AMSUICommonView;

@interface AMSUICommonViewController : UIViewController
{
}

- (void)_unregisterNotifications;	// IMP=0x000000000001bf64
- (void)_registerNotifications;	// IMP=0x000000000001bf52
- (void)loadView;	// IMP=0x000000000001bf19
- (void)unsetChildViewController:(id)arg1;	// IMP=0x000000000001be9a
- (void)setChildViewController:(id)arg1;	// IMP=0x000000000001bd5f
@property(retain, nonatomic) AMSUICommonView *view;
- (void)dealloc;	// IMP=0x000000000001bcab
- (id)init;	// IMP=0x000000000001bc78

// Remaining properties
@property(nonatomic, getter=isMovingFromParentViewController, setter=setIsMovingFromParentViewController:) _Bool movingFromParentViewController;
@property(nonatomic, getter=isMovingToParentViewController, setter=setIsMovingToParentViewController:) _Bool movingToParentViewController;

@end
