//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIButton.h>

@class MISSING_TYPE, NSString, SRCarPlayFocusView, SUICProgressIndicatorView, UIImageView, UILabel, UIView;

@interface SRStarkConfirmationButton : UIButton
{
    UIView *_backgroundView;	// 8 = 0x8
    SRCarPlayFocusView *_focusView;	// 16 = 0x10
    _Bool _messageReadingProgressHidden;	// 24 = 0x18
    _Bool _iconVibrancyDisabled;	// 25 = 0x19
    NSString *_title;	// 32 = 0x20
    UIImageView *_iconImageView;	// 40 = 0x28
    long long _iconType;	// 48 = 0x30
    MISSING_TYPE *_type;	// 56 = 0x38
    unsigned long long _style;	// 64 = 0x40
    NSString *_unreadMessagesCount;	// 72 = 0x48
    CDUnknownBlockType _handlerBlock;	// 80 = 0x50
    SUICProgressIndicatorView *_readingProgressIndicatorView;	// 88 = 0x58
    UILabel *_customTitleLabel;	// 96 = 0x60
    CDStruct_f0ed7c64 _layoutAttributes;	// 104 = 0x68
}

+ (CDStruct_f0ed7c64)_attributesForStyle:(unsigned long long)arg1;	// IMP=0x004000000002bdc0
+ (unsigned long long)_derivedStyleFromIconType:(long long)arg1 viewStyle:(unsigned long long)arg2;	// IMP=0x001000000002bda4
+ (id)_templateImageForIconType:(long long)arg1;	// IMP=0x0010000000029eeb
+ (id)buttonWithIconType:(long long)arg1 buttonType:(long long)arg2 title:(id)arg3 unreadMessagesCount:(id)arg4 viewStyle:(unsigned long long)arg5 handler:(CDUnknownBlockType)arg6;	// IMP=0x0010000000029624
- (void).cxx_destruct;	// IMP=0x002000000002cd6f
@property(nonatomic) CDStruct_f0ed7c64 layoutAttributes; // @synthesize layoutAttributes=_layoutAttributes;
@property(retain, nonatomic) UILabel *customTitleLabel; // @synthesize customTitleLabel=_customTitleLabel;
@property(retain, nonatomic) SUICProgressIndicatorView *readingProgressIndicatorView; // @synthesize readingProgressIndicatorView=_readingProgressIndicatorView;
@property(copy, nonatomic, getter=_handlerBlock) CDUnknownBlockType handlerBlock; // @synthesize handlerBlock=_handlerBlock;
@property(copy, nonatomic) NSString *unreadMessagesCount; // @synthesize unreadMessagesCount=_unreadMessagesCount;
@property(nonatomic, getter=isIconVibrancyDisabled) _Bool iconVibrancyDisabled; // @synthesize iconVibrancyDisabled=_iconVibrancyDisabled;
@property(nonatomic, getter=isMessageReadingProgressHidden) _Bool messageReadingProgressHidden; // @synthesize messageReadingProgressHidden=_messageReadingProgressHidden;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long iconType; // @synthesize iconType=_iconType;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)_updateCornerRadiusForLayer:(id)arg1;	// IMP=0x001000000002cb4e
- (void)_updateFocusFrameForStyle:(unsigned long long)arg1 iconType:(long long)arg2;	// IMP=0x001000000002c730
- (void)_updateViewAlphasForStyle:(unsigned long long)arg1 focused:(_Bool)arg2 selected:(_Bool)arg3 iconVibrancyDisabled:(_Bool)arg4;	// IMP=0x001000000002c3c1
- (void)_updateCompositingFilterForUserInterfaceStyle:(long long)arg1 iconVibrancyDisabled:(_Bool)arg2;	// IMP=0x001000000002c2d1
- (void)_updateIconAndProgressIndicatorColorsForTraitCollection:(id)arg1;	// IMP=0x001000000002c1bb
- (void)_updateTextColorForStyle:(unsigned long long)arg1 userInterfaceStyle:(long long)arg2 focused:(_Bool)arg3;	// IMP=0x001000000002c0f9
- (id)_stringForStyle:(unsigned long long)arg1;	// IMP=0x001000000002c094
- (id)_stringForButtonType:(long long)arg1;	// IMP=0x001000000002c010
- (id)_stringForIconType:(long long)arg1;	// IMP=0x001000000002be59
- (id)accessibilityIdentifier;	// IMP=0x001000000002bd90
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x001000000002bc61
- (id)description;	// IMP=0x001000000002bb15
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x001000000002ba89
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x001000000002b9fd
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x001000000002b825
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x001000000002b799
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x001000000002b70d
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x001000000002b536
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x001000000002b401
- (_Bool)canBecomeFocused;	// IMP=0x001000000002b3c8
- (void)setEnabled:(_Bool)arg1;	// IMP=0x001000000002b34c
- (_Bool)_isButtonIconTypeUnreadMessagesType:(long long)arg1;	// IMP=0x001000000002b33b
- (_Bool)_isButtonIconTypeReadingType:(long long)arg1;	// IMP=0x001000000002b32a
- (_Bool)isTypeEqual:(id)arg1;	// IMP=0x001000000002b1e8
- (void)_configureForButtonStyle:(unsigned long long)arg1;	// IMP=0x001000000002b00f
- (void)_invokeConfirmationHandler:(id)arg1;	// IMP=0x001000000002afcf
- (void)_maskImageView:(id)arg1 withText:(id)arg2;	// IMP=0x001000000002ad29
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000002acc6
- (_Bool)isEqualToStarkConfirmationButton:(id)arg1;	// IMP=0x001000000002ac41
- (void)layoutSubviews;	// IMP=0x001000000002a292
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x001000000002a0d0
- (void)updateMessageReadingProgress:(double)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000029d3c
- (void)updateButtonImageToIconType:(long long)arg1;	// IMP=0x0010000000029a42

@end

