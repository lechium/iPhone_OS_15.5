//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

#import <PassKitUI/MKLocalSearchCompleterDelegate-Protocol.h>
#import <PassKitUI/PKAddressTextFieldDelegate-Protocol.h>
#import <PassKitUI/PKCountryPickerViewControllerDelegate-Protocol.h>
#import <PassKitUI/UIPickerViewDataSource-Protocol.h>
#import <PassKitUI/UIPickerViewDelegate-Protocol.h>
#import <PassKitUI/UITableViewDataSource-Protocol.h>
#import <PassKitUI/UITableViewDelegate-Protocol.h>
#import <PassKitUI/UITextFieldDelegate-Protocol.h>

@class CNMutablePostalAddress, CNPostalAddressFormattingSpecification, MKLocalSearchCompleter, NSArray, NSString, PKAddressTextField, PKContactFormatValidator;
@protocol PKAddressEditorViewControllerDelegate;

@interface PKAddressEditorViewController : UITableViewController <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate, MKLocalSearchCompleterDelegate, PKCountryPickerViewControllerDelegate, PKAddressTextFieldDelegate, UIPickerViewDataSource, UIPickerViewDelegate>
{
    _Bool _preselectedNameField;	// 8 = 0x8
    _Bool _displayGivenNameFirst;	// 9 = 0x9
    _Bool _displayPhoneticName;	// 10 = 0xa
    _Bool _isEditingBlankField;	// 11 = 0xb
    _Bool _readOnly;	// 12 = 0xc
    _Bool _countryIsEditable;	// 13 = 0xd
    _Bool _requirementsMet;	// 14 = 0xe
    id <PKAddressEditorViewControllerDelegate> _delegate;	// 16 = 0x10
    PKContactFormatValidator *_contactFormatValidator;	// 24 = 0x18
    NSString *_givenName;	// 32 = 0x20
    NSString *_familyName;	// 40 = 0x28
    NSString *_phoneticGivenName;	// 48 = 0x30
    NSString *_phoneticFamilyName;	// 56 = 0x38
    CNMutablePostalAddress *_inputAddress;	// 64 = 0x40
    NSString *_inputLabel;	// 72 = 0x48
    NSString *_originalGivenName;	// 80 = 0x50
    NSString *_originalFamilyName;	// 88 = 0x58
    NSString *_originalPhoneticGivenName;	// 96 = 0x60
    NSString *_originalPhoneticFamilyName;	// 104 = 0x68
    NSString *_originalCountry;	// 112 = 0x70
    CNMutablePostalAddress *_originalAddress;	// 120 = 0x78
    CNPostalAddressFormattingSpecification *_addressFormatter;	// 128 = 0x80
    NSArray *_suggestions;	// 136 = 0x88
    MKLocalSearchCompleter *_searchCompleter;	// 144 = 0x90
    PKAddressTextField *_currentlySelectedField;	// 152 = 0x98
    PKAddressTextField *_firstTextFieldForName;	// 160 = 0xa0
    NSArray *_editingFields;	// 168 = 0xa8
    NSArray *_highlightedFieldKeys;	// 176 = 0xb0
    NSArray *_requiredFieldKeys;	// 184 = 0xb8
    NSArray *_errors;	// 192 = 0xc0
    long long _style;	// 200 = 0xc8
    PKAddressTextField *_givenNameTextField;	// 208 = 0xd0
    PKAddressTextField *_familyNameTextField;	// 216 = 0xd8
    PKAddressTextField *_phoneticGivenNameTextField;	// 224 = 0xe0
    PKAddressTextField *_phoneticFamilyNameTextField;	// 232 = 0xe8
    PKAddressTextField *_street1TextField;	// 240 = 0xf0
    PKAddressTextField *_street2TextField;	// 248 = 0xf8
}

- (void).cxx_destruct;	// IMP=0x000000000042e260
@property(nonatomic) _Bool requirementsMet; // @synthesize requirementsMet=_requirementsMet;
@property(nonatomic) __weak PKAddressTextField *street2TextField; // @synthesize street2TextField=_street2TextField;
@property(nonatomic) __weak PKAddressTextField *street1TextField; // @synthesize street1TextField=_street1TextField;
@property(nonatomic) __weak PKAddressTextField *phoneticFamilyNameTextField; // @synthesize phoneticFamilyNameTextField=_phoneticFamilyNameTextField;
@property(nonatomic) __weak PKAddressTextField *phoneticGivenNameTextField; // @synthesize phoneticGivenNameTextField=_phoneticGivenNameTextField;
@property(nonatomic) __weak PKAddressTextField *familyNameTextField; // @synthesize familyNameTextField=_familyNameTextField;
@property(nonatomic) __weak PKAddressTextField *givenNameTextField; // @synthesize givenNameTextField=_givenNameTextField;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(retain, nonatomic) NSArray *errors; // @synthesize errors=_errors;
@property(retain, nonatomic) NSArray *requiredFieldKeys; // @synthesize requiredFieldKeys=_requiredFieldKeys;
@property(retain, nonatomic) NSArray *highlightedFieldKeys; // @synthesize highlightedFieldKeys=_highlightedFieldKeys;
@property(retain, nonatomic) NSArray *editingFields; // @synthesize editingFields=_editingFields;
@property(retain, nonatomic) PKAddressTextField *firstTextFieldForName; // @synthesize firstTextFieldForName=_firstTextFieldForName;
@property(retain, nonatomic) PKAddressTextField *currentlySelectedField; // @synthesize currentlySelectedField=_currentlySelectedField;
@property(retain, nonatomic) MKLocalSearchCompleter *searchCompleter; // @synthesize searchCompleter=_searchCompleter;
@property(retain, nonatomic) NSArray *suggestions; // @synthesize suggestions=_suggestions;
@property(retain, nonatomic) CNPostalAddressFormattingSpecification *addressFormatter; // @synthesize addressFormatter=_addressFormatter;
@property(retain, nonatomic) CNMutablePostalAddress *originalAddress; // @synthesize originalAddress=_originalAddress;
@property(retain, nonatomic) NSString *originalCountry; // @synthesize originalCountry=_originalCountry;
@property(retain, nonatomic) NSString *originalPhoneticFamilyName; // @synthesize originalPhoneticFamilyName=_originalPhoneticFamilyName;
@property(retain, nonatomic) NSString *originalPhoneticGivenName; // @synthesize originalPhoneticGivenName=_originalPhoneticGivenName;
@property(retain, nonatomic) NSString *originalFamilyName; // @synthesize originalFamilyName=_originalFamilyName;
@property(retain, nonatomic) NSString *originalGivenName; // @synthesize originalGivenName=_originalGivenName;
@property(retain, nonatomic) NSString *inputLabel; // @synthesize inputLabel=_inputLabel;
@property(retain, nonatomic) CNMutablePostalAddress *inputAddress; // @synthesize inputAddress=_inputAddress;
@property(retain, nonatomic) NSString *phoneticFamilyName; // @synthesize phoneticFamilyName=_phoneticFamilyName;
@property(retain, nonatomic) NSString *phoneticGivenName; // @synthesize phoneticGivenName=_phoneticGivenName;
@property(retain, nonatomic) NSString *familyName; // @synthesize familyName=_familyName;
@property(retain, nonatomic) NSString *givenName; // @synthesize givenName=_givenName;
@property(retain, nonatomic) PKContactFormatValidator *contactFormatValidator; // @synthesize contactFormatValidator=_contactFormatValidator;
@property(nonatomic) _Bool countryIsEditable; // @synthesize countryIsEditable=_countryIsEditable;
@property(nonatomic) _Bool readOnly; // @synthesize readOnly=_readOnly;
@property(nonatomic) __weak id <PKAddressEditorViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;	// IMP=0x000000000042dc13
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;	// IMP=0x000000000042db27
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;	// IMP=0x000000000042da7c
- (long long)numberOfComponentsInPickerView:(id)arg1;	// IMP=0x000000000042da71
- (void)countryPicker:(id)arg1 didPickCountryCode:(id)arg2;	// IMP=0x000000000042d385
- (void)completer:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x000000000042d261
- (void)completerDidUpdateResults:(id)arg1;	// IMP=0x000000000042ceb4
- (void)_updateUniqueAddressField:(id)arg1 withNewString:(id)arg2;	// IMP=0x000000000042cb89
- (void)_checkFormatOfAddressTextField:(id)arg1;	// IMP=0x000000000042c678
- (void)addressTextField:(id)arg1 didEndEditing:(id)arg2;	// IMP=0x000000000042c64a
- (void)addressTextField:(id)arg1 textDidChange:(id)arg2;	// IMP=0x000000000042c271
- (void)textFieldDidEndEditing:(id)arg1;	// IMP=0x000000000042c1cc
- (void)textFieldDidBeginEditing:(id)arg1;	// IMP=0x000000000042c138
- (void)textDidChange:(id)arg1;	// IMP=0x000000000042c0b7
- (_Bool)textFieldShouldBeginEditing:(id)arg1;	// IMP=0x000000000042bfcb
- (_Bool)canChangeCountry;	// IMP=0x000000000042bfa6
- (struct CGSize)preferredContentSize;	// IMP=0x000000000042bf05
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000042bee8
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000000042bedd
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000042aa4b
- (void)_validateAddressRequirements;	// IMP=0x000000000042a342
- (long long)_fieldIndexForNameComponent:(unsigned long long)arg1;	// IMP=0x000000000042a2d5
- (unsigned long long)_nameComponentForFieldIndex:(unsigned long long)arg1;	// IMP=0x000000000042a264
- (void)_showCountryPicker;	// IMP=0x000000000042a1cd
- (void)_updateWithPostalAddress:(id)arg1;	// IMP=0x000000000042a0c9
- (void)assignErrorToField:(id)arg1;	// IMP=0x0000000000429751
- (void)recomputeEditingFields;	// IMP=0x0000000000428e53
- (void)cancel;	// IMP=0x0000000000428e07
- (void)donePressed;	// IMP=0x0000000000428b9a
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000428b2d
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000428a89
- (void)willMoveToParentViewController:(id)arg1;	// IMP=0x0000000000428978
- (void)viewDidLoad;	// IMP=0x000000000042887e
- (id)initWithContact:(id)arg1 requiredKeys:(id)arg2 highlightedKeys:(id)arg3 errors:(id)arg4 style:(long long)arg5;	// IMP=0x0000000000428752
- (id)initWithContact:(id)arg1 style:(long long)arg2;	// IMP=0x0000000000427f9c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
