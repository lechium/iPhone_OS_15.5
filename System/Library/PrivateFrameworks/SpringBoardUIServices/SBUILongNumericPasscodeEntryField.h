//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SBUIButton, UIButton, UILabel, UIView;

@interface SBUILongNumericPasscodeEntryField
{
    SBUIButton *_okButton;	// 8 = 0x8
    _Bool _showsOkButton;	// 16 = 0x10
    UILabel *_promptLabel;	// 24 = 0x18
    _Bool _showsPromptLabel;	// 32 = 0x20
    _Bool _firstResponder;	// 33 = 0x21
    UIView *_springView;	// 40 = 0x28
    UIView *_springViewParent;	// 48 = 0x30
}

+ (_Bool)_usesTextFieldForFirstResponder;	// IMP=0x00000000000165f7
+ (_Bool)_shouldResetAutoAcceptWhenMaxNumbersMetInResignFirstResponder;	// IMP=0x00000000000165ef
- (void).cxx_destruct;	// IMP=0x0000000000016e8b
@property(nonatomic) _Bool showsPromptLabel; // @synthesize showsPromptLabel=_showsPromptLabel;
@property(readonly, nonatomic) UILabel *promptLabel; // @synthesize promptLabel=_promptLabel;
@property(nonatomic) _Bool showsOkButton; // @synthesize showsOkButton=_showsOkButton;
@property(readonly, nonatomic) UIButton *okButton; // @synthesize okButton=_okButton;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;	// IMP=0x0000000000016e41
- (void)_resetForFailedPasscode:(_Bool)arg1;	// IMP=0x0000000000016acd
- (void)_autofillForBiometricAuthenticationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000001689c
- (struct CGSize)_viewSize;	// IMP=0x00000000000167f7
- (void)_getPasscodeFieldSize:(struct CGSize *)arg1 okButtonSize:(struct CGSize *)arg2;	// IMP=0x0000000000016620
- (void)_okButtonHit;	// IMP=0x00000000000165ff
- (void)_handleKeyUIEvent:(id)arg1;	// IMP=0x0000000000016489
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000000001638d
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000000162c4
- (void)layoutSubviews;	// IMP=0x000000000001612a
- (_Bool)resignFirstResponder;	// IMP=0x00000000000160e4
- (_Bool)canResignFirstResponder;	// IMP=0x00000000000160d4
- (_Bool)isFirstResponder;	// IMP=0x00000000000160c4
- (_Bool)becomeFirstResponder;	// IMP=0x0000000000016089
- (_Bool)canBecomeFirstResponder;	// IMP=0x0000000000016081
- (id)initWithDefaultSizeAndLightStyle:(_Bool)arg1;	// IMP=0x00000000000158c1

@end

