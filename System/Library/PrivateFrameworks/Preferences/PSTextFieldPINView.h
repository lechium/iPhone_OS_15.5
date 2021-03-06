//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/UITableViewDataSource-Protocol.h>

@class AlphanumericPINTableViewCell, NSString, UITableView, UITextField;

@interface PSTextFieldPINView <UITableViewDataSource>
{
    UITextField *_passcodeField;	// 80 = 0x50
    AlphanumericPINTableViewCell *_cell;	// 88 = 0x58
    UITableView *_table;	// 96 = 0x60
    _Bool _usesNumericKeyboard;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x000000000007781d
@property(nonatomic) _Bool usesNumericKeyboard; // @synthesize usesNumericKeyboard=_usesNumericKeyboard;
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x0000000000077805
- (void)deleteLastCharacter;	// IMP=0x0000000000077759
- (void)appendString:(id)arg1;	// IMP=0x000000000007766b
- (void)setStringValue:(id)arg1;	// IMP=0x0000000000077632
- (_Bool)resignFirstResponder;	// IMP=0x00000000000775c5
- (_Bool)becomeFirstResponder;	// IMP=0x00000000000775a8
- (_Bool)canBecomeFirstResponder;	// IMP=0x000000000007758b
- (_Bool)isFirstResponder;	// IMP=0x000000000007756e
- (void)hidePasscodeField:(_Bool)arg1;	// IMP=0x0000000000077392
- (void)okButtonPressed:(id)arg1;	// IMP=0x000000000007731b
- (id)stringValue;	// IMP=0x00000000000772fe
- (void)dealloc;	// IMP=0x0000000000077272
- (void)showError:(id)arg1 animate:(_Bool)arg2;	// IMP=0x0000000000077243
- (void)setTextFieldKeyboardAppearance:(long long)arg1;	// IMP=0x0000000000077226
- (void)setTextFieldKeyboardType:(long long)arg1;	// IMP=0x0000000000077209
- (_Bool)keyboardInputChanged:(id)arg1;	// IMP=0x000000000007718a
- (void)setBlocked:(_Bool)arg1;	// IMP=0x0000000000077152
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000007713d
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000077132
- (void)layoutSubviews;	// IMP=0x0000000000076e8a
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000076a5b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

