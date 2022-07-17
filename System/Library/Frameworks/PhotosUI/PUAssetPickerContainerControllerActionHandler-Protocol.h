//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUI/NSObject-Protocol.h>

@class PHAsset, UIBarButtonItem, UIButton, UISearchBar, UIViewController;

@protocol PUAssetPickerContainerControllerActionHandler <NSObject>
- (void)containerController:(UIViewController *)arg1 didTapSearchBar:(UISearchBar *)arg2 canBeginEditing:(_Bool)arg3;
- (void)containerController:(UIViewController *)arg1 didTapSelectedItemsButton:(UIButton *)arg2;
- (void)containerController:(UIViewController *)arg1 didTapAddButton:(UIBarButtonItem *)arg2;
- (void)containerController:(UIViewController *)arg1 didTapClearButton:(UIBarButtonItem *)arg2;
- (void)containerController:(UIViewController *)arg1 didTapCancelButton:(UIBarButtonItem *)arg2;
- (void)containerController:(UIViewController *)arg1 didTapAsset:(PHAsset *)arg2;
- (void)containerControllerDidAppear:(UIViewController *)arg1;
@end
