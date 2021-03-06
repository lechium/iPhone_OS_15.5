//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/CNContactPickerDelegate-Protocol.h>
#import <PassKitUI/PKAddressEditorViewControllerDelegate-Protocol.h>
#import <PassKitUI/PKAddressSearcherViewControllerDelegate-Protocol.h>
#import <PassKitUI/PKPaymentPreferenceContactSectionControllerDelegate-Protocol.h>
#import <PassKitUI/PKPaymentPreferenceSectionControllerDelegate-Protocol.h>

@class NSArray, NSString, PKContactFormatValidator, PKPaymentPreferenceContactSectionController, PKPaymentPreferenceOptionListItem;

@interface PKPaymentPreferencesListViewController <PKPaymentPreferenceSectionControllerDelegate, PKPaymentPreferenceContactSectionControllerDelegate, PKAddressEditorViewControllerDelegate, CNContactPickerDelegate, PKAddressSearcherViewControllerDelegate>
{
    CDUnknownBlockType _handler;	// 8 = 0x8
    PKContactFormatValidator *_contactFormatValidator;	// 16 = 0x10
    PKPaymentPreferenceContactSectionController *_editingContactSectionController;	// 24 = 0x18
    PKPaymentPreferenceOptionListItem *_editingItem;	// 32 = 0x20
    NSArray *_preferences;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000004728f7
@property(retain, nonatomic) NSArray *preferences; // @synthesize preferences=_preferences;
- (void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2;	// IMP=0x000000000047276d
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;	// IMP=0x0000000000472747
- (void)addressSearcherViewControllerDidCancel:(id)arg1;	// IMP=0x000000000047272e
- (void)addressSearcherViewController:(id)arg1 selectedContact:(id)arg2;	// IMP=0x0000000000472708
- (void)addressEditorViewControllerDidCancel:(id)arg1;	// IMP=0x00000000004726ef
- (void)addressEditorViewController:(id)arg1 selectedContact:(id)arg2;	// IMP=0x0000000000472551
- (void)_updateContactAtIndex:(unsigned long long)arg1 withCell:(id)arg2;	// IMP=0x0000000000471e5e
- (void)_endCurrentInlineEditing;	// IMP=0x0000000000471cf2
- (void)_handleSelectedContact:(id)arg1;	// IMP=0x0000000000471bb9
- (id)_requiredKeysForContactPreference:(id)arg1;	// IMP=0x0000000000471a5f
- (void)_reloadEditedSection:(id)arg1;	// IMP=0x00000000004719c4
- (void)startInlineEditingForContactItem:(id)arg1 inSectionController:(id)arg2;	// IMP=0x0000000000471768
- (void)presentMeCardAlertControllerWithContact:(id)arg1 contactKey:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000000004714a4
- (void)showContactsPickerForPreference:(id)arg1 inSectionController:(id)arg2;	// IMP=0x0000000000471128
- (void)showAddressPickerForPreference:(id)arg1 inSectionController:(id)arg2;	// IMP=0x0000000000470ed5
- (void)showAddressEditorForContactItem:(id)arg1 inSectionController:(id)arg2;	// IMP=0x0000000000470c11
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2 forSectionController:(id)arg3;	// IMP=0x0000000000470bff
- (_Bool)collectionViewIsEditingForSectionController:(id)arg1;	// IMP=0x0000000000470bbb
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000000470b2c
- (void)_keyboardWillHide:(id)arg1;	// IMP=0x0000000000470a7a
- (void)_keyboardDidShow:(id)arg1;	// IMP=0x0000000000470825
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000004707c1
- (void)_updateNavigationBarButtons;	// IMP=0x000000000047055d
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000000047041b
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000470334
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000470240
- (void)viewDidLoad;	// IMP=0x0000000000470152
- (id)initWithPreferences:(id)arg1 title:(id)arg2 style:(long long)arg3 handler:(CDUnknownBlockType)arg4 contactFormatValidator:(id)arg5;	// IMP=0x000000000046fc61

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

