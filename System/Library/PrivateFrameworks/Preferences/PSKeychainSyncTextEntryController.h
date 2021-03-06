//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/KeychainSyncPasscodeFieldDelegate-Protocol.h>

@class NSString, PSSpecifier, PSTableCell, UIView;
@protocol UIKeyInput;

@interface PSKeychainSyncTextEntryController <KeychainSyncPasscodeFieldDelegate>
{
    PSTableCell *_textEntryCell;	// 184 = 0xb8
    UIView<UIKeyInput> *_textEntryView;	// 192 = 0xc0
    PSSpecifier *_textEntrySpecifier;	// 200 = 0xc8
    _Bool _hidesNextButton;	// 208 = 0xd0
    _Bool _secureTextEntry;	// 209 = 0xd1
    _Bool _textFieldHasRoundBorder;	// 210 = 0xd2
    _Bool _convertsNumeralsToASCII;	// 211 = 0xd3
    int _textEntryType;	// 212 = 0xd4
    unsigned long long _numberOfPasscodeFields;	// 216 = 0xd8
    NSString *_textValue;	// 224 = 0xe0
}

- (void).cxx_destruct;	// IMP=0x00000000000c9109
@property(retain, nonatomic) NSString *textValue; // @synthesize textValue=_textValue;
@property(nonatomic) unsigned long long numberOfPasscodeFields; // @synthesize numberOfPasscodeFields=_numberOfPasscodeFields;
@property(nonatomic) _Bool convertsNumeralsToASCII; // @synthesize convertsNumeralsToASCII=_convertsNumeralsToASCII;
@property(nonatomic) _Bool textFieldHasRoundBorder; // @synthesize textFieldHasRoundBorder=_textFieldHasRoundBorder;
@property(nonatomic) _Bool secureTextEntry; // @synthesize secureTextEntry=_secureTextEntry;
@property(nonatomic) _Bool hidesNextButton; // @synthesize hidesNextButton=_hidesNextButton;
@property(nonatomic) int textEntryType; // @synthesize textEntryType=_textEntryType;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x00000000000c8d24
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000000c8bf5
- (void)passcodeField:(id)arg1 didUpdateEnteredPasscode:(id)arg2;	// IMP=0x00000000000c8ba9
- (void)textFieldChanged:(id)arg1;	// IMP=0x00000000000c8a61
- (void)textEntryViewDidChange:(id)arg1;	// IMP=0x00000000000c8a5b
- (id)textEntryView;	// IMP=0x00000000000c89c5
- (id)textEntryCell;	// IMP=0x00000000000c8793
- (Class)textEntryCellClass;	// IMP=0x00000000000c8759
- (id)textEntrySpecifier;	// IMP=0x00000000000c85ba
- (id)placeholderText;	// IMP=0x00000000000c85b2
- (id)specifiers;	// IMP=0x00000000000c8473
- (id)textEntryText;	// IMP=0x00000000000c83e4
- (void)setTextEntryText:(id)arg1;	// IMP=0x00000000000c8321
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000000000c826a
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000000c81b0
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000c813e
- (void)willBecomeActive;	// IMP=0x00000000000c80d3
- (_Bool)becomeFirstResponder;	// IMP=0x00000000000c8060
- (id)getTextValueForSpecifier:(id)arg1;	// IMP=0x00000000000c804e
- (void)setTextValue:(id)arg1 forSpecifier:(id)arg2;	// IMP=0x00000000000c803c
- (void)didFinishEnteringText:(id)arg1;	// IMP=0x00000000000c7f52
- (void)nextPressed;	// IMP=0x00000000000c7ed6
- (void)updateNextButton;	// IMP=0x00000000000c7dc1
- (void)loadView;	// IMP=0x00000000000c7d55
- (void)dealloc;	// IMP=0x00000000000c7ce0
- (id)init;	// IMP=0x00000000000c7c3d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

