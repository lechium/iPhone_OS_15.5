//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

__attribute__((visibility("hidden")))
@interface _UIUserDefaultsActivityPresentableViewController : UIViewController
{
    UIViewController *_navigationController;	// 8 = 0x8
    UIViewController *_userDefaultsViewController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000056ba7
@property(retain, nonatomic) UIViewController *userDefaultsViewController; // @synthesize userDefaultsViewController=_userDefaultsViewController;
@property(retain, nonatomic) UIViewController *navigationController; // @synthesize navigationController=_navigationController;
- (void)_loadNavigationController;	// IMP=0x001000000005678a
- (void)viewDidLoad;	// IMP=0x0010000000056749
- (id)initWithUserDefaultsViewController:(id)arg1;	// IMP=0x001000000005667a

@end
