//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UINavigationController.h>

#import <_GroupActivities_UIKit/_EXHostViewControllerDelegate-Protocol.h>

@class MISSING_TYPE;

@interface _TtC22_GroupActivities_UIKit41GroupActivityPlaceholderSharingController : UINavigationController <_EXHostViewControllerDelegate>
{
    MISSING_TYPE *rootViewController;	// 8 = 0x8
    MISSING_TYPE *placeholderControllerDidCancel;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000c6e0
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000000c680
- (id)initWithRootViewController:(id)arg1;	// IMP=0x000000000000c5b0
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;	// IMP=0x000000000000c510
- (void)hostViewController:(id)arg1 didEndHosting:(id)arg2 error:(id)arg3;	// IMP=0x000000000000c3d0
- (void)hostViewController:(id)arg1 didFailToHost:(id)arg2 error:(id)arg3;	// IMP=0x000000000000c9e0
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000c330
- (void)cancelButtonTapped:(id)arg1;	// IMP=0x000000000000c250
- (void)viewDidLoad;	// IMP=0x000000000000c210
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000000bff0
- (id)init;	// IMP=0x000000000000bdf0

@end

