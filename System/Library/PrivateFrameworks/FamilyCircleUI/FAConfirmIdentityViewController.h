//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <FamilyCircleUI/UIActionSheetDelegate-Protocol.h>
#import <FamilyCircleUI/UIImagePickerControllerDelegate-Protocol.h>
#import <FamilyCircleUI/UINavigationControllerDelegate-Protocol.h>

@class AAUIProfilePictureStore, ACAccount, NSString, NSValue, UIButton, UIImage, UIImagePickerController, UILabel, UIScrollView, UIView;
@protocol FAConfirmIdentityViewControllerDelegate;

@interface FAConfirmIdentityViewController : UIViewController <UIImagePickerControllerDelegate, UIActionSheetDelegate, UINavigationControllerDelegate>
{
    ACAccount *_appleAccount;	// 8 = 0x8
    UIScrollView *_scrollView;	// 16 = 0x10
    UIView *_contentView;	// 24 = 0x18
    UILabel *_titleLabel;	// 32 = 0x20
    UILabel *_descriptionLabel;	// 40 = 0x28
    UIView *_profilePhotoView;	// 48 = 0x30
    UILabel *_nameLabel;	// 56 = 0x38
    UILabel *_emailLabel;	// 64 = 0x40
    UIButton *_continueButton;	// 72 = 0x48
    UIButton *_useDifferentIDButton;	// 80 = 0x50
    AAUIProfilePictureStore *_profilePictureStore;	// 88 = 0x58
    UIImage *_newProfilePicture;	// 96 = 0x60
    NSValue *_newProfilePictureCropRect;	// 104 = 0x68
    UIImagePickerController *_imagePicker;	// 112 = 0x70
    id <FAConfirmIdentityViewControllerDelegate> _delegate;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x0000000000013260
@property(nonatomic) __weak id <FAConfirmIdentityViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000013140
- (void)_updateFonts;	// IMP=0x0000000000012ee1
- (void)_showImagePickerForAvailableSources;	// IMP=0x0000000000012d8d
- (void)_useDifferentIDButtonWasTapped:(id)arg1;	// IMP=0x0000000000012d02
- (void)continueButtonWasTapped:(id)arg1;	// IMP=0x0000000000012bfd
- (void)_addPhotoButtonWasTapped:(id)arg1;	// IMP=0x0000000000012beb
- (void)_photoWasTapped:(id)arg1;	// IMP=0x0000000000012bd9
- (void)_updateViewsInPhotoArea:(id)arg1;	// IMP=0x0000000000012a94
- (double)_heightForText:(id)arg1 width:(double)arg2;	// IMP=0x0000000000012974
- (_Bool)shouldShowInviteeInstructions;	// IMP=0x000000000001296c
- (id)titleForContinuebutton;	// IMP=0x00000000000128f5
- (id)instructions;	// IMP=0x000000000001287e
- (id)pageTitle;	// IMP=0x0000000000012807
- (void)viewWillLayoutSubviews;	// IMP=0x0000000000011cbe
- (void)loadView;	// IMP=0x0000000000011225
- (id)initWithAppleAccount:(id)arg1 grandSlamSigner:(id)arg2;	// IMP=0x0000000000011133

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

