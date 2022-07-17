//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <PassKitUI/UIKeyInput-Protocol.h>

@class NSArray, NSCharacterSet, NSMutableString, NSString, UIImage, UILabel, UITextInputPasswordRules;
@protocol PKPinCodeFieldDelegate;

@interface PKPinCodeField : UIView <UIKeyInput>
{
    unsigned long long _pinCodeLength;	// 8 = 0x8
    NSCharacterSet *_numbersOnlyCharacterSet;	// 16 = 0x10
    NSMutableString *_pinCode;	// 24 = 0x18
    double _fontHeight;	// 32 = 0x20
    NSArray *_numberLabels;	// 40 = 0x28
    NSArray *_dashViews;	// 48 = 0x30
    NSArray *_dotViews;	// 56 = 0x38
    UIImage *_dotImage;	// 64 = 0x40
    UILabel *_hyphenLabel;	// 72 = 0x48
    _Bool _keyboardOverrideEnabled;	// 80 = 0x50
    unsigned long long _style;	// 88 = 0x58
    CDStruct_07baa4ee _config;	// 96 = 0x60
    _Bool _hyphenatePinCode;	// 120 = 0x78
    _Bool _secureTextEntry;	// 121 = 0x79
    id <PKPinCodeFieldDelegate> _delegate;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x000000000041d851
@property(nonatomic) __weak id <PKPinCodeFieldDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry; // @synthesize secureTextEntry=_secureTextEntry;
@property(nonatomic) _Bool hyphenatePinCode; // @synthesize hyphenatePinCode=_hyphenatePinCode;
@property(nonatomic) long long keyboardType;
- (void)deleteBackward;	// IMP=0x000000000041d74f
- (void)insertText:(id)arg1;	// IMP=0x000000000041d434
@property(readonly, nonatomic) _Bool hasText;
- (_Bool)canBecomeFirstResponder;	// IMP=0x000000000041d408
- (void)layoutSubviews;	// IMP=0x000000000041cf83
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000041ced2
- (void)updateCharacterVisibility;	// IMP=0x000000000041cd3a
@property(copy, nonatomic) NSString *pinCode;
- (id)initWithPinCodeLength:(unsigned long long)arg1 style:(unsigned long long)arg2 delegate:(id)arg3;	// IMP=0x000000000041c5e7
- (id)initWithPinCodeLength:(unsigned long long)arg1 delegate:(id)arg2;	// IMP=0x000000000041c5d0

// Remaining properties
@property(nonatomic) long long autocapitalizationType;
@property(nonatomic) long long autocorrectionType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool enablesReturnKeyAutomatically;
@property(readonly) unsigned long long hash;
@property(nonatomic) long long keyboardAppearance;
@property(copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property(nonatomic) long long returnKeyType;
@property(nonatomic) long long smartDashesType;
@property(nonatomic) long long smartInsertDeleteType;
@property(nonatomic) long long smartQuotesType;
@property(nonatomic) long long spellCheckingType;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *textContentType;

@end
