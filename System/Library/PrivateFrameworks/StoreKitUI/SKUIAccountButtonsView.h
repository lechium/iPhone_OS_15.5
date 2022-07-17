//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, SKUIClientContext, SKUILinkButton, SKUIRoundedRectButton, UIButton, UIControl, UILabel;

__attribute__((visibility("hidden")))
@interface SKUIAccountButtonsView : UIView
{
    UILabel *_accountCreditsLabel;	// 8 = 0x8
    SKUIRoundedRectButton *_appleIDButton;	// 16 = 0x10
    SKUIClientContext *_clientContext;	// 24 = 0x18
    SKUILinkButton *_ecommerceButton;	// 32 = 0x20
    SKUIRoundedRectButton *_giftingButton;	// 40 = 0x28
    UIButton *_termsAndConditionsButton;	// 48 = 0x30
    SKUIRoundedRectButton *_usernameButton;	// 56 = 0x38
    _Bool _ecommerceVisibilityHidden;	// 64 = 0x40
    _Bool _giftingVisibilityHidden;	// 65 = 0x41
    UIButton *_redeemButton;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000263200
@property(readonly, nonatomic) UIButton *termsAndConditionsButton; // @synthesize termsAndConditionsButton=_termsAndConditionsButton;
@property(readonly, nonatomic) UIButton *redeemButton; // @synthesize redeemButton=_redeemButton;
@property(readonly, nonatomic) UIButton *giftingButton; // @synthesize giftingButton=_giftingButton;
@property(readonly, nonatomic) UIControl *ECommerceButton; // @synthesize ECommerceButton=_ecommerceButton;
@property(readonly, nonatomic) UIButton *appleIDButton; // @synthesize appleIDButton=_appleIDButton;
- (void)_reloadFonts;	// IMP=0x00000000002630e4
- (id)_newLinkButtonWithTitle:(id)arg1;	// IMP=0x000000000026303c
- (void)_layoutTwoRows;	// IMP=0x0000000000262b32
- (void)_layoutOneRow;	// IMP=0x0000000000262480
- (void)tintColorDidChange;	// IMP=0x00000000002623eb
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000262273
- (void)layoutSubviews;	// IMP=0x000000000026221a
@property(nonatomic, getter=isTermsAndConditionsHidden) _Bool termsAndConditionsHidden;
@property(nonatomic, getter=isGiftingHidden) _Bool giftingHidden;
@property(copy, nonatomic) NSString *accountCredits;
- (_Bool)isRedeemHidden;	// IMP=0x0000000000261f18
- (_Bool)isEcommerceHidden;	// IMP=0x0000000000261e9f
@property(copy, nonatomic) NSString *ECommerceLinkTitle;
- (void)dealloc;	// IMP=0x0000000000261d33
- (id)initWithClientContext:(id)arg1;	// IMP=0x00000000002619dd

@end
