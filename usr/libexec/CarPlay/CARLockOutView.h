//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CAREnvironmentConfiguration, UIImageView, UILabel, UIStackView, UITapGestureRecognizer;
@protocol CARLockOutViewDelegate;

@interface CARLockOutView : UIView
{
    long long _mode;	// 8 = 0x8
    id <CARLockOutViewDelegate> _delegate;	// 16 = 0x10
    CAREnvironmentConfiguration *_environmentConfiguration;	// 24 = 0x18
    UILabel *_titleLabel;	// 32 = 0x20
    UIImageView *_imageView;	// 40 = 0x28
    UILabel *_messageLabel;	// 48 = 0x30
    UIStackView *_buttonStackView;	// 56 = 0x38
    UITapGestureRecognizer *_backToOEMGestureRecognizer;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x002000000007b71e
@property(retain, nonatomic) UITapGestureRecognizer *backToOEMGestureRecognizer; // @synthesize backToOEMGestureRecognizer=_backToOEMGestureRecognizer;
@property(retain, nonatomic) UIStackView *buttonStackView; // @synthesize buttonStackView=_buttonStackView;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) CAREnvironmentConfiguration *environmentConfiguration; // @synthesize environmentConfiguration=_environmentConfiguration;
@property(nonatomic) __weak id <CARLockOutViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long mode; // @synthesize mode=_mode;
- (void)_backToOEM;	// IMP=0x001000000007b5b1
- (void)_buttonTapped:(id)arg1;	// IMP=0x001000000007b52c
- (id)_buttonTitleForType:(unsigned long long)arg1;	// IMP=0x001000000007b3be
- (id)_buttonOfType:(unsigned long long)arg1;	// IMP=0x001000000007b10e
- (id)_buttonFont;	// IMP=0x001000000007b08f
- (id)_titleFont;	// IMP=0x001000000007afd1
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x001000000007afa2
- (void)layoutSubviews;	// IMP=0x001000000007af9c
- (id)initWithMode:(long long)arg1 environmentConfiguration:(id)arg2;	// IMP=0x0010000000079724

@end

