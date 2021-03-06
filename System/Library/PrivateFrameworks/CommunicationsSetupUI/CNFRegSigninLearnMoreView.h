//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <CommunicationsSetupUI/PSHeaderFooterView-Protocol.h>

@class CNFRegSplashSignInController, PSSpecifier, UIActivityIndicatorView, UIButton, UIImageView, UILabel;

@interface CNFRegSigninLearnMoreView : UIView <PSHeaderFooterView>
{
    long long _serviceType;	// 8 = 0x8
    PSSpecifier *_specifier;	// 16 = 0x10
    UILabel *_signingInLabel;	// 24 = 0x18
    UIActivityIndicatorView *_signingInSpinner;	// 32 = 0x20
    CNFRegSplashSignInController *_controller;	// 40 = 0x28
    UIImageView *_splashImageView;	// 48 = 0x30
    UILabel *_titleLabel;	// 56 = 0x38
    UILabel *_verbiageLabel;	// 64 = 0x40
    UIButton *_learnMoreButton;	// 72 = 0x48
    UIView *_authKitSignInView;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000007217a
@property(retain, nonatomic) UIView *authKitSignInView; // @synthesize authKitSignInView=_authKitSignInView;
@property(retain, nonatomic) UIButton *learnMoreButton; // @synthesize learnMoreButton=_learnMoreButton;
@property(retain, nonatomic) UILabel *verbiageLabel; // @synthesize verbiageLabel=_verbiageLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *splashImageView; // @synthesize splashImageView=_splashImageView;
@property(nonatomic) CNFRegSplashSignInController *controller; // @synthesize controller=_controller;
@property(nonatomic) long long serviceType; // @synthesize serviceType=_serviceType;
- (void)_learnMorePressed:(id)arg1;	// IMP=0x00000000000720a3
- (double)preferredHeightForWidth:(double)arg1;	// IMP=0x0000000000071d98
- (void)layoutSubviews;	// IMP=0x0000000000071413
- (id)signingInSpinner;	// IMP=0x0000000000071261
- (id)signingInLabel;	// IMP=0x0000000000070fae
- (id)_splashImage;	// IMP=0x0000000000070749
- (void)setSigningIn:(_Bool)arg1;	// IMP=0x0000000000070604
- (id)initWithSpecifier:(id)arg1;	// IMP=0x00000000000704c0

@end

