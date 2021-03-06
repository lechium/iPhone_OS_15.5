//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/PKDatePickerDelegate-Protocol.h>
#import <PassKitUI/UIPickerViewDataSource-Protocol.h>
#import <PassKitUI/UIPickerViewDelegate-Protocol.h>
#import <PassKitUI/UITextFieldDelegate-Protocol.h>

@class NSArray, NSString, PKDatePicker, PKPaymentSetupField, PKUITextField, UIColor, UIPickerView;
@protocol PKPaymentSetupFieldCellDelegate;

@interface PKPaymentSetupFieldCell <UITextFieldDelegate, PKDatePickerDelegate, UIPickerViewDelegate, UIPickerViewDataSource>
{
    PKDatePicker *_dateInputView;	// 8 = 0x8
    UIPickerView *_pickerInputView;	// 16 = 0x10
    _Bool _ignoreCurrentValueChangedNotifications;	// 24 = 0x18
    NSArray *_defaultLeadingBarButtonGroups;	// 32 = 0x20
    NSArray *_defaultTrailingBarButtonGroups;	// 40 = 0x28
    NSArray *_defaultCenterBarButtonGroups;	// 48 = 0x30
    _Bool _canResignFirstResponder;	// 56 = 0x38
    PKUITextField *_textField;	// 64 = 0x40
    _Bool _enabled;	// 72 = 0x48
    _Bool _shouldDrawSeperator;	// 73 = 0x49
    _Bool _shouldDrawFullWidthSeperator;	// 74 = 0x4a
    id <PKPaymentSetupFieldCellDelegate> _delegate;	// 80 = 0x50
    PKPaymentSetupField *_paymentSetupField;	// 88 = 0x58
    double _minimumTextLabelWidth;	// 96 = 0x60
    UIColor *_editableTextFieldTextColor;	// 104 = 0x68
    UIColor *_editableTextFieldDisabledTextColor;	// 112 = 0x70
    UIColor *_editableTextFieldCameraCapturedTextColor;	// 120 = 0x78
}

+ (id)reuseIdentifier;	// IMP=0x000000000022230d
+ (double)minimumCellHeight;	// IMP=0x0000000000222261
+ (id)paymentSetupFieldCellForField:(id)arg1 fromTableView:(id)arg2;	// IMP=0x0000000000220264
- (void).cxx_destruct;	// IMP=0x0000000000223e6d
@property(copy, nonatomic) UIColor *editableTextFieldCameraCapturedTextColor; // @synthesize editableTextFieldCameraCapturedTextColor=_editableTextFieldCameraCapturedTextColor;
@property(copy, nonatomic) UIColor *editableTextFieldDisabledTextColor; // @synthesize editableTextFieldDisabledTextColor=_editableTextFieldDisabledTextColor;
@property(copy, nonatomic) UIColor *editableTextFieldTextColor; // @synthesize editableTextFieldTextColor=_editableTextFieldTextColor;
@property(nonatomic) _Bool shouldDrawFullWidthSeperator; // @synthesize shouldDrawFullWidthSeperator=_shouldDrawFullWidthSeperator;
@property(nonatomic) _Bool shouldDrawSeperator; // @synthesize shouldDrawSeperator=_shouldDrawSeperator;
@property(nonatomic) double minimumTextLabelWidth; // @synthesize minimumTextLabelWidth=_minimumTextLabelWidth;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) PKPaymentSetupField *paymentSetupField; // @synthesize paymentSetupField=_paymentSetupField;
@property(nonatomic) __weak id <PKPaymentSetupFieldCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;	// IMP=0x0000000000223cd2
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;	// IMP=0x0000000000223bc5
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;	// IMP=0x0000000000223af4
- (long long)numberOfComponentsInPickerView:(id)arg1;	// IMP=0x0000000000223ae9
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;	// IMP=0x0000000000222e68
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x0000000000222de2
- (_Bool)textFieldShouldClear:(id)arg1;	// IMP=0x0000000000222d05
- (_Bool)textFieldShouldEndEditing:(id)arg1;	// IMP=0x0000000000222cf3
- (_Bool)textFieldShouldBeginEditing:(id)arg1;	// IMP=0x0000000000222c0b
- (void)datePicker:(id)arg1 didChangeDate:(id)arg2;	// IMP=0x0000000000222b65
- (void)_editableTextFieldValueChanged:(id)arg1;	// IMP=0x0000000000222a9a
- (void)_editableTextFieldDidBeginEditing:(id)arg1;	// IMP=0x00000000002229bc
- (void)_pullCurrentValueFromField;	// IMP=0x00000000002225b9
- (void)_pushCurrentValueToField;	// IMP=0x00000000002223d8
- (void)updatePaymentSetupFieldWithCurrentCellValue;	// IMP=0x00000000002223c6
- (id)editableTextField;	// IMP=0x00000000002223b1
- (struct CGRect)_separatorFrame;	// IMP=0x000000000022231f
@property(nonatomic) _Bool canResignFirstResponder;
- (void)prepareForReuse;	// IMP=0x000000000022228d
- (double)heightForWidth:(double)arg1;	// IMP=0x000000000022226f
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000222231
- (void)_paymentSetupFieldCurrentValueChangedNotification:(id)arg1;	// IMP=0x00000000002221ad
- (void)_updateDisplayForFieldTypePicker:(id)arg1;	// IMP=0x0000000000221f11
- (void)_updateDisplayForFieldTypeDate:(id)arg1;	// IMP=0x0000000000221b02
- (void)_updateDisplayForFieldTypeText:(id)arg1;	// IMP=0x000000000022169e
- (void)_applyDefaultValues;	// IMP=0x000000000022135e
- (void)_updateDisplay:(_Bool)arg1;	// IMP=0x00000000002210c7
- (void)layoutSubviews;	// IMP=0x000000000022089f
- (void)dealloc;	// IMP=0x000000000022082a
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000220818
- (id)initWithSetupField:(id)arg1;	// IMP=0x00000000002207c6
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000000002207b2
- (id)init;	// IMP=0x00000000002203f3
- (void)pk_applyAppearance:(id)arg1;	// IMP=0x000000000001046c
- (id)pk_childrenForAppearance;	// IMP=0x000000000001045f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

