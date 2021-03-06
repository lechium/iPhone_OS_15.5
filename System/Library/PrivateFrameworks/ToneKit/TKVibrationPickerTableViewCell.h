//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ToneKit/UITextFieldDelegate-Protocol.h>

@class NSString, UIColor, UIFont, UITextField;
@protocol TKVibrationPickerTableViewCellDelegate;

@interface TKVibrationPickerTableViewCell <UITextFieldDelegate>
{
    UITextField *_removableTextField;	// 8 = 0x8
    _Bool _editable;	// 16 = 0x10
    id <TKVibrationPickerTableViewCellDelegate> _delegate;	// 24 = 0x18
    UIColor *_regularTextColor;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000022f00
@property(nonatomic, getter=isEditable) _Bool editable; // @synthesize editable=_editable;
@property(retain, nonatomic) UIColor *regularTextColor; // @synthesize regularTextColor=_regularTextColor;
@property(nonatomic) __weak id <TKVibrationPickerTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)textFieldDidEndEditing:(id)arg1;	// IMP=0x0000000000022dfa
- (void)textFieldDidBeginEditing:(id)arg1;	// IMP=0x0000000000022ddc
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x0000000000022dc4
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;	// IMP=0x0000000000022dab
- (void)_makeRemovableTextFieldEditable:(_Bool)arg1;	// IMP=0x0000000000022c0f
- (void)willTransitionToState:(unsigned long long)arg1;	// IMP=0x0000000000022bc0
- (void)didTransitionToState:(unsigned long long)arg1;	// IMP=0x0000000000022b61
- (void)layoutSubviews;	// IMP=0x0000000000022b20
- (void)_layoutRemovableTextField;	// IMP=0x0000000000022921
- (void)makeTextFieldResignFirstResponderIfNeeded;	// IMP=0x00000000000228e1
- (_Bool)_isDisplayingRemovableTextField;	// IMP=0x00000000000228a3
@property(nonatomic, getter=isChecked) _Bool checked;
@property(retain, nonatomic) UIColor *highlightedTextColor;
@property(retain, nonatomic) UIFont *regularTextFont;
@property(retain, nonatomic) NSString *placeholderText;
@property(retain, nonatomic) NSString *labelText;
- (id)initWithReuseIdentifier:(id)arg1;	// IMP=0x000000000002224e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

