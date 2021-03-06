//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSTableCell.h>

#import <AccessibilityUIUtilities/UITextFieldDelegate-Protocol.h>

@class NSString, UITextField;

@interface AXUISettingsEditableTextCell : PSTableCell <UITextFieldDelegate>
{
    _Bool _shouldDisableTextFieldWhenNotEditing;	// 120 = 0x78
    _Bool _shouldAllowSelection;	// 121 = 0x79
    UITextField *_nameTextField;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x000000000003d35d
@property(nonatomic) _Bool shouldAllowSelection; // @synthesize shouldAllowSelection=_shouldAllowSelection;
@property(nonatomic) _Bool shouldDisableTextFieldWhenNotEditing; // @synthesize shouldDisableTextFieldWhenNotEditing=_shouldDisableTextFieldWhenNotEditing;
@property(retain, nonatomic) UITextField *nameTextField; // @synthesize nameTextField=_nameTextField;
- (void)textFieldDidEndEditing:(id)arg1;	// IMP=0x000000000003d22e
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x000000000003d209
- (void)setTextFieldValue:(id)arg1 specifier:(id)arg2;	// IMP=0x000000000003d0f3
- (id)textFieldValue:(id)arg1;	// IMP=0x000000000003d009
- (void)updateText;	// IMP=0x000000000003cf90
- (void)layoutSubviews;	// IMP=0x000000000003cd5a
- (void)setSelectionStyle:(long long)arg1;	// IMP=0x000000000003cd0e
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000003cc89
- (void)initializeView;	// IMP=0x000000000003ca63
- (void)_accessibilityLoadAccessibilityInformation;	// IMP=0x000000000003ca22
- (void)markNameTextFieldAccessible;	// IMP=0x000000000003c9d5
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;	// IMP=0x000000000003c93f
- (_Bool)_accessibilityIgnoreInternalLabels;	// IMP=0x000000000003c937

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

