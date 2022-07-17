//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/UITextFieldDelegate-Protocol.h>
#import <Preferences/UITextViewDelegate-Protocol.h>

@class NSString, PSListController, UIColor;

@interface PSEditableTableCell <UITextViewDelegate, UITextFieldDelegate>
{
    UIColor *_textColor;	// 120 = 0x78
    id _delegate;	// 128 = 0x80
    _Bool _forceFirstResponder;	// 136 = 0x88
    _Bool _delaySpecifierRelease;	// 137 = 0x89
    SEL _targetSetter;	// 144 = 0x90
    id _realTarget;	// 152 = 0x98
    _Bool _valueChanged;	// 160 = 0xa0
    _Bool _returnKeyTapped;	// 161 = 0xa1
    PSListController *_controllerDelegate;	// 168 = 0xa8
}

+ (long long)cellStyle;	// IMP=0x00000000000aec5a
- (void).cxx_destruct;	// IMP=0x00000000000b0d78
@property(nonatomic) __weak PSListController *controllerDelegate; // @synthesize controllerDelegate=_controllerDelegate;
@property(readonly, nonatomic) _Bool returnKeyTapped; // @synthesize returnKeyTapped=_returnKeyTapped;
- (id)textField;	// IMP=0x00000000000b0d29
- (void)setPlaceholderText:(id)arg1;	// IMP=0x00000000000b0d17
- (void)setValue:(id)arg1;	// IMP=0x00000000000b0b45
- (id)value;	// IMP=0x00000000000b0af5
- (_Bool)_cellIsEditing;	// IMP=0x00000000000b0ac6
- (_Bool)isEditing;	// IMP=0x00000000000b0ab4
- (_Bool)isTextFieldEditing;	// IMP=0x00000000000b0a70
- (_Bool)resignFirstResponder;	// IMP=0x00000000000b09d8
- (_Bool)becomeFirstResponder;	// IMP=0x00000000000b0994
- (_Bool)isFirstResponder;	// IMP=0x00000000000b0950
- (_Bool)canResignFirstResponder;	// IMP=0x00000000000b090c
- (_Bool)canBecomeFirstResponder;	// IMP=0x00000000000b08c8
- (void)layoutSubviews;	// IMP=0x00000000000b063b
- (void)setDelegate:(id)arg1;	// IMP=0x00000000000b0627
- (void)setTitle:(id)arg1;	// IMP=0x00000000000b0573
- (void)setCellEnabled:(_Bool)arg1;	// IMP=0x00000000000b03b5
- (id)_defaultTextColor;	// IMP=0x00000000000b02f8
- (void)setValueChangedTarget:(id)arg1 action:(SEL)arg2 specifier:(id)arg3;	// IMP=0x00000000000b0276
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x00000000000b020f
- (void)textFieldDidEndEditing:(id)arg1;	// IMP=0x00000000000b012d
- (_Bool)textFieldShouldClear:(id)arg1;	// IMP=0x00000000000b0087
- (void)textFieldDidBeginEditing:(id)arg1;	// IMP=0x00000000000afece
- (void)_saveForExit;	// IMP=0x00000000000afebc
- (void)_setValueChanged;	// IMP=0x00000000000afdfb
- (void)cellRemovedFromView;	// IMP=0x00000000000afd55
- (void)endEditingAndSave;	// IMP=0x00000000000afbf4
- (void)controlChanged:(id)arg1;	// IMP=0x00000000000afafd
- (_Bool)canReload;	// IMP=0x00000000000afacf
- (void)prepareForReuse;	// IMP=0x00000000000afa23
- (void)refreshCellContentsWithSpecifier:(id)arg1;	// IMP=0x00000000000aee0a
- (void)dealloc;	// IMP=0x00000000000aed14
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;	// IMP=0x00000000000aec65

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
