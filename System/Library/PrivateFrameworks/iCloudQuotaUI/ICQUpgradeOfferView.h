//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iCloudQuotaUI/UIScrollViewDelegate-Protocol.h>
#import <iCloudQuotaUI/UITextViewDelegate-Protocol.h>

@class ICQLink, NSArray, NSString, UIActivityIndicatorView, UIButton, UIColor, UIFont, UIImageView, UILabel, UILayoutGuide, UIScrollView, UIView, UIVisualEffectView, _ICQTextView, _ICQUpgradeOfferPageSpecification;
@protocol ICQPageDelegate;

@interface ICQUpgradeOfferView <UITextViewDelegate, UIScrollViewDelegate>
{
    _ICQUpgradeOfferPageSpecification *_upgradeOfferPageSpecification;	// 8 = 0x8
    long long _upgradeMode;	// 16 = 0x10
    UIColor *_buttonTintColor;	// 24 = 0x18
    id <ICQPageDelegate> _delegate;	// 32 = 0x20
    UIImageView *_iconView;	// 40 = 0x28
    UILabel *_titleLabel;	// 48 = 0x30
    _ICQTextView *_messageView;	// 56 = 0x38
    _ICQTextView *_fineprintView;	// 64 = 0x40
    UIButton *_purchaseButton;	// 72 = 0x48
    UIButton *_purchase2Button;	// 80 = 0x50
    UIButton *_bottomButton;	// 88 = 0x58
    UIActivityIndicatorView *_spinner;	// 96 = 0x60
    ICQLink *_purchaseLink;	// 104 = 0x68
    ICQLink *_purchase2Link;	// 112 = 0x70
    ICQLink *_bottomLink;	// 120 = 0x78
    UIScrollView *_scrollView;	// 128 = 0x80
    UIView *_contentView;	// 136 = 0x88
    UIView *_headerView;	// 144 = 0x90
    UIView *_footerView;	// 152 = 0x98
    UIView *_trayView;	// 160 = 0xa0
    UIVisualEffectView *_blurBackdrop;	// 168 = 0xa8
    UILayoutGuide *_scrollVisibleLayoutGuide;	// 176 = 0xb0
    UILayoutGuide *_aboveSpinnerLayoutGuide;	// 184 = 0xb8
    UILayoutGuide *_belowSpinnerLayoutGuide;	// 192 = 0xc0
    NSArray *_activeConstraints;	// 200 = 0xc8
}

- (void).cxx_destruct;	// IMP=0x000000000001d7bd
@property(retain, nonatomic) NSArray *activeConstraints; // @synthesize activeConstraints=_activeConstraints;
@property(readonly, nonatomic) UILayoutGuide *belowSpinnerLayoutGuide; // @synthesize belowSpinnerLayoutGuide=_belowSpinnerLayoutGuide;
@property(readonly, nonatomic) UILayoutGuide *aboveSpinnerLayoutGuide; // @synthesize aboveSpinnerLayoutGuide=_aboveSpinnerLayoutGuide;
@property(readonly, nonatomic) UILayoutGuide *scrollVisibleLayoutGuide; // @synthesize scrollVisibleLayoutGuide=_scrollVisibleLayoutGuide;
@property(readonly, nonatomic) UIVisualEffectView *blurBackdrop; // @synthesize blurBackdrop=_blurBackdrop;
@property(readonly, nonatomic) UIView *trayView; // @synthesize trayView=_trayView;
@property(readonly, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(readonly, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(readonly, nonatomic) ICQLink *bottomLink; // @synthesize bottomLink=_bottomLink;
@property(readonly, nonatomic) ICQLink *purchase2Link; // @synthesize purchase2Link=_purchase2Link;
@property(readonly, nonatomic) ICQLink *purchaseLink; // @synthesize purchaseLink=_purchaseLink;
@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(retain, nonatomic) UIButton *bottomButton; // @synthesize bottomButton=_bottomButton;
@property(retain, nonatomic) UIButton *purchase2Button; // @synthesize purchase2Button=_purchase2Button;
@property(retain, nonatomic) UIButton *purchaseButton; // @synthesize purchaseButton=_purchaseButton;
@property(retain, nonatomic) _ICQTextView *fineprintView; // @synthesize fineprintView=_fineprintView;
@property(retain, nonatomic) _ICQTextView *messageView; // @synthesize messageView=_messageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) __weak id <ICQPageDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long upgradeMode; // @synthesize upgradeMode=_upgradeMode;
@property(copy, nonatomic) UIColor *buttonTintColor; // @synthesize buttonTintColor=_buttonTintColor;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3;	// IMP=0x000000000001cfe5
- (void)_updateTrayVisibility;	// IMP=0x000000000001cec4
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x000000000001ceb2
- (void)flashScrollIndicatorsIfNeeded;	// IMP=0x000000000001cdf3
- (void)layoutSubviews;	// IMP=0x000000000001cc1d
- (void)updateConstraints;	// IMP=0x000000000001b22f
- (id)_constraintsForView:(id)arg1 equalToView:(id)arg2;	// IMP=0x000000000001afce
- (id)horizontalConstraintsForView:(id)arg1 margin:(double)arg2;	// IMP=0x000000000001acac
@property(retain, nonatomic) _ICQUpgradeOfferPageSpecification *upgradeOfferPageSpecification;
- (id)_imageForBundleIdentifier:(id)arg1;	// IMP=0x000000000001a467
- (id)_imageForGenericCloud;	// IMP=0x000000000001a3c7
- (id)fineprintAttributes;	// IMP=0x000000000001a28c
- (id)fineprintParagraphStyle;	// IMP=0x000000000001a1f9
- (id)messageAttributes;	// IMP=0x000000000001a0d3
- (id)messageParagraphStyle;	// IMP=0x0000000000019ff9
- (void)bottomButtonTapped:(id)arg1;	// IMP=0x0000000000019cef
- (void)purchase2ButtonTapped:(id)arg1;	// IMP=0x00000000000199e5
- (void)purchaseButtonTapped:(id)arg1;	// IMP=0x00000000000196db
- (void)_setButtonTintColor:(id)arg1;	// IMP=0x000000000001943f
- (void)_setLinkTextColor:(id)arg1;	// IMP=0x00000000000192d0
- (void)_setButton:(id)arg1 backgroundColor:(id)arg2;	// IMP=0x000000000001916f
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000018986
- (id)_makeLinkButton;	// IMP=0x0000000000018850
- (id)_makePurchaseButton;	// IMP=0x0000000000018698
- (id)_buttons;	// IMP=0x000000000001846c
- (double)_marginForButton:(id)arg1;	// IMP=0x0000000000018451
- (double)_spacingFromUpperView:(id)arg1 toLowerView:(id)arg2;	// IMP=0x0000000000018372
- (id)_anchorForLowerView:(id)arg1;	// IMP=0x00000000000182e3
- (id)_anchorForUpperView:(id)arg1;	// IMP=0x0000000000018247
- (long long)_styleOfView:(id)arg1;	// IMP=0x00000000000181cd
- (id)messageTextColor;	// IMP=0x00000000000181b4
@property(readonly, nonatomic) UIColor *fineprintColor;
- (id)defaultButtonColor;	// IMP=0x0000000000018182
@property(readonly, nonatomic) UIFont *fineprintFont;
@property(readonly, nonatomic) UIFont *linkButtonFont;
@property(readonly, nonatomic) UIFont *purchaseButtonFont;
@property(readonly, nonatomic) UIFont *messageFont;
@property(readonly, nonatomic) UIFont *titleFont;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

