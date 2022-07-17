//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreKitUI/UITextFieldDelegate-Protocol.h>

@class CALayer, NSString, SKUIClientContext, SKUIEditProfileSettingDescription, SKUIImageView, UIButton, UITextField;

__attribute__((visibility("hidden")))
@interface SKUIEditProfileSettingDescriptionView <UITextFieldDelegate>
{
    CALayer *_divider1;	// 8 = 0x8
    SKUIClientContext *_clientContext;	// 16 = 0x10
    UIButton *_editButton;	// 24 = 0x18
    UITextField *_nameField;	// 32 = 0x20
    UITextField *_handleField;	// 40 = 0x28
    SKUIImageView *_imageView;	// 48 = 0x30
    SKUIEditProfileSettingDescription *_settingDescription;	// 56 = 0x38
}

+ (id)_baselineFontForTextStyle:(id)arg1;	// IMP=0x000000000033b844
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 settingDescription:(id)arg2 context:(id)arg3;	// IMP=0x000000000033a7ea
+ (void)requestLayoutForSettingDescription:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x000000000033a7e4
+ (struct CGSize)preferredSizeForSettingDescription:(id)arg1 context:(id)arg2;	// IMP=0x000000000033a7ce
+ (_Bool)prefetchResourcesForSettingDescription:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x000000000033a7c6
- (void).cxx_destruct;	// IMP=0x000000000033bb32
- (id)_textFieldWithPlaceholder:(id)arg1;	// IMP=0x000000000033b995
- (void)_editProfilePhoto;	// IMP=0x000000000033b978
- (void)_updateHandleTextFieldValidity;	// IMP=0x000000000033b8ad
- (void)layoutSubviews;	// IMP=0x000000000033b13c
- (void)textFieldDidEndEditing:(id)arg1;	// IMP=0x000000000033b05e
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;	// IMP=0x000000000033af3e
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x000000000033aee6
- (void)textFieldDidBeginEditing:(id)arg1;	// IMP=0x000000000033ae9e
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x000000000033ae96
- (void)reloadWithSettingDescription:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x000000000033a85a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
