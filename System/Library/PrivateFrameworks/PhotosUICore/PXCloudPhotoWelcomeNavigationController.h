//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UINavigationController.h>

@protocol PXCloudPhotoWelcomeNavigationControllerDismissDelegate;

@interface PXCloudPhotoWelcomeNavigationController : UINavigationController
{
    id <PXCloudPhotoWelcomeNavigationControllerDismissDelegate> _dismissDelegate;	// 8 = 0x8
}

+ (id)new;	// IMP=0x00000000000c5637
+ (_Bool)shouldPresentWelcomeViewController:(_Bool *)arg1;	// IMP=0x00000000000c4fa6
- (void).cxx_destruct;	// IMP=0x00000000000c4f95
@property(nonatomic) __weak id <PXCloudPhotoWelcomeNavigationControllerDismissDelegate> dismissDelegate; // @synthesize dismissDelegate=_dismissDelegate;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c4ef7
- (id)initWithWelcomeController:(id)arg1;	// IMP=0x00000000000c4e60
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;	// IMP=0x00000000000c4de6
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000000c4d56
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000c4cd3
- (id)initWithRootViewController:(id)arg1;	// IMP=0x00000000000c4c50
- (id)init;	// IMP=0x00000000000c4bd6

@end

