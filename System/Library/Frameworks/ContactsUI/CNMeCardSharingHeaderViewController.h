//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class CNMeCardSharingAvatarViewController, CNMeCardSharingPickerLayoutAttributes, NSString, UILabel;

__attribute__((visibility("hidden")))
@interface CNMeCardSharingHeaderViewController : UIViewController
{
    CNMeCardSharingAvatarViewController *_avatarViewController;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    unsigned long long _mode;	// 24 = 0x18
    CNMeCardSharingPickerLayoutAttributes *_layoutAttributes;	// 32 = 0x20
    UILabel *_nameLabel;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000000e553
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) CNMeCardSharingPickerLayoutAttributes *layoutAttributes; // @synthesize layoutAttributes=_layoutAttributes;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) CNMeCardSharingAvatarViewController *avatarViewController; // @synthesize avatarViewController=_avatarViewController;
- (double)desiredHeight;	// IMP=0x000000000000e48f
- (void)viewWillLayoutSubviews;	// IMP=0x000000000000e214
- (void)viewDidLoad;	// IMP=0x000000000000e088
- (id)initWithAvatarViewController:(id)arg1 name:(id)arg2 layoutAttributes:(id)arg3;	// IMP=0x000000000000dfb0

@end
