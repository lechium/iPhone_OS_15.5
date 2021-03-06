//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSListController.h>

#import <NanoTimeKitCompanion/UITextFieldDelegate-Protocol.h>

@class NSString, UITextField;

@interface NTKCompanionMonogramEntryViewController : PSListController <UITextFieldDelegate>
{
    _Bool _showsDoneButton;	// 192 = 0xc0
    UITextField *_monogramEntry;	// 200 = 0xc8
}

+ (id)localizedDescription;	// IMP=0x00000000001a6ee8
+ (id)localizedTitle;	// IMP=0x00000000001a6ed0
- (void).cxx_destruct;	// IMP=0x00000000001a7892
@property(nonatomic) _Bool showsDoneButton; // @synthesize showsDoneButton=_showsDoneButton;
@property(retain, nonatomic) UITextField *monogramEntry; // @synthesize monogramEntry=_monogramEntry;
- (void)_doneTapped;	// IMP=0x00000000001a7819
- (void)_resetEntryField;	// IMP=0x00000000001a77b7
- (id)customMonogram:(id)arg1;	// IMP=0x00000000001a76d0
- (void)setCustomMonogram:(id)arg1 specifier:(id)arg2;	// IMP=0x00000000001a7657
- (void)textFieldDidEndEditing:(id)arg1;	// IMP=0x00000000001a741a
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;	// IMP=0x00000000001a7405
- (_Bool)textFieldShouldEndEditing:(id)arg1;	// IMP=0x00000000001a73fd
- (void)returnPressedAtEnd;	// IMP=0x00000000001a738c
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000001a723a
- (id)specifiers;	// IMP=0x00000000001a70ca
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000001a7054
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000001a6fd4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

