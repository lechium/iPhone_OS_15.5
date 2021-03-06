//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BFFPasscodeInputView, UIViewController;

@interface BFFPasscodeView
{
    BFFPasscodeInputView *_passcodeInputView;	// 8 = 0x8
    UIViewController *_passcodeViewController;	// 16 = 0x10
    struct CGRect _currentKeyboardFrame;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000142d8
@property(nonatomic) struct CGRect currentKeyboardFrame; // @synthesize currentKeyboardFrame=_currentKeyboardFrame;
@property(nonatomic) __weak UIViewController *passcodeViewController; // @synthesize passcodeViewController=_passcodeViewController;
- (_Bool)alwaysBounceVertical;	// IMP=0x00000000000141ac
- (void)layoutSubviews;	// IMP=0x0000000000013c52
- (void)keyboardWillShow:(id)arg1;	// IMP=0x0000000000013acd
- (void)animateTransitionToPasscodeInput:(id)arg1 animation:(unsigned long long)arg2;	// IMP=0x00000000000135db
- (void)transitionToPasscodeInput:(id)arg1 delegate:(id)arg2;	// IMP=0x00000000000134a0
- (id)passcodeInputView;	// IMP=0x000000000001348b
- (void)dealloc;	// IMP=0x0000000000013416
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000013311

@end

