//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <ContactsUI/CNMeCardSharingEnabledDelegate-Protocol.h>
#import <ContactsUI/CNMeCardSharingSettingsHeaderViewControllerDelegate-Protocol.h>
#import <ContactsUI/CNPhotoPickerViewControllerDelegate-Protocol.h>
#import <ContactsUI/UITableViewDataSource-Protocol.h>
#import <ContactsUI/UITableViewDelegate-Protocol.h>
#import <ContactsUI/UITextFieldDelegate-Protocol.h>

@class CNContact, CNContactImage, CNContactStore, CNMeCardSharingAudienceDataSource, CNMeCardSharingContactAvatarProvider, CNMeCardSharingEnabledDataSource, CNMeCardSharingPickerLayoutAttributes, CNMeCardSharingSettingsHeaderViewController, CNMeCardSharingSettingsNameDataSource, CNMutableContact, CNPhotoPickerViewController, CNSharingProfileLogger, CNSharingProfileMeCardUpdater, NSArray, NSString, UISwitch, UITableView, UITextField;
@protocol CNMeCardSharingAvatarProvider, CNMeCardSharingNameProvider, CNMeCardSharingSettingsViewControllerDelegate;

@interface CNMeCardSharingSettingsViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate, CNMeCardSharingSettingsHeaderViewControllerDelegate, CNMeCardSharingEnabledDelegate, CNPhotoPickerViewControllerDelegate>
{
    _Bool _shouldSetAsMeContact;	// 8 = 0x8
    id <CNMeCardSharingSettingsViewControllerDelegate> _delegate;	// 16 = 0x10
    CNContactStore *_contactStore;	// 24 = 0x18
    CNContact *_contact;	// 32 = 0x20
    CNMutableContact *_editingContact;	// 40 = 0x28
    CNContactImage *_editingContactImage;	// 48 = 0x30
    NSString *_editingGivenName;	// 56 = 0x38
    NSString *_editingFamilyName;	// 64 = 0x40
    CNSharingProfileMeCardUpdater *_meCardUpdater;	// 72 = 0x48
    CNMeCardSharingPickerLayoutAttributes *_layoutAttributes;	// 80 = 0x50
    CNMeCardSharingSettingsHeaderViewController *_headerViewController;	// 88 = 0x58
    id <CNMeCardSharingAvatarProvider> _avatarProvider;	// 96 = 0x60
    id <CNMeCardSharingNameProvider> _nameProvider;	// 104 = 0x68
    CNMeCardSharingSettingsNameDataSource *_nameDataSource;	// 112 = 0x70
    CNMeCardSharingEnabledDataSource *_enabledDataSource;	// 120 = 0x78
    CNMeCardSharingAudienceDataSource *_sharingAudienceDataSource;	// 128 = 0x80
    CNPhotoPickerViewController *_photoPicker;	// 136 = 0x88
    NSArray *_sectionDataSources;	// 144 = 0x90
    UISwitch *_shareSwitch;	// 152 = 0x98
    UITableView *_tableView;	// 160 = 0xa0
    long long _nameOrder;	// 168 = 0xa8
    UITextField *_givenNameField;	// 176 = 0xb0
    UITextField *_familyNameField;	// 184 = 0xb8
    CNMeCardSharingContactAvatarProvider *_editingContactAvatarProvider;	// 192 = 0xc0
    CNSharingProfileLogger *_logger;	// 200 = 0xc8
    double _keyboardHeight;	// 208 = 0xd0
}

+ (id)descriptorForRequiredKeys;	// IMP=0x0000000000042b83
- (void).cxx_destruct;	// IMP=0x000000000004276a
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(readonly, nonatomic) CNSharingProfileLogger *logger; // @synthesize logger=_logger;
@property(nonatomic) _Bool shouldSetAsMeContact; // @synthesize shouldSetAsMeContact=_shouldSetAsMeContact;
@property(retain, nonatomic) CNMeCardSharingContactAvatarProvider *editingContactAvatarProvider; // @synthesize editingContactAvatarProvider=_editingContactAvatarProvider;
@property(retain, nonatomic) UITextField *familyNameField; // @synthesize familyNameField=_familyNameField;
@property(retain, nonatomic) UITextField *givenNameField; // @synthesize givenNameField=_givenNameField;
@property(nonatomic) long long nameOrder; // @synthesize nameOrder=_nameOrder;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UISwitch *shareSwitch; // @synthesize shareSwitch=_shareSwitch;
@property(retain, nonatomic) NSArray *sectionDataSources; // @synthesize sectionDataSources=_sectionDataSources;
@property(retain, nonatomic) CNPhotoPickerViewController *photoPicker; // @synthesize photoPicker=_photoPicker;
@property(readonly, nonatomic) CNMeCardSharingAudienceDataSource *sharingAudienceDataSource; // @synthesize sharingAudienceDataSource=_sharingAudienceDataSource;
@property(readonly, nonatomic) CNMeCardSharingEnabledDataSource *enabledDataSource; // @synthesize enabledDataSource=_enabledDataSource;
@property(readonly, nonatomic) CNMeCardSharingSettingsNameDataSource *nameDataSource; // @synthesize nameDataSource=_nameDataSource;
@property(readonly, nonatomic) id <CNMeCardSharingNameProvider> nameProvider; // @synthesize nameProvider=_nameProvider;
@property(readonly, nonatomic) id <CNMeCardSharingAvatarProvider> avatarProvider; // @synthesize avatarProvider=_avatarProvider;
@property(retain, nonatomic) CNMeCardSharingSettingsHeaderViewController *headerViewController; // @synthesize headerViewController=_headerViewController;
@property(readonly, nonatomic) CNMeCardSharingPickerLayoutAttributes *layoutAttributes; // @synthesize layoutAttributes=_layoutAttributes;
@property(retain, nonatomic) CNSharingProfileMeCardUpdater *meCardUpdater; // @synthesize meCardUpdater=_meCardUpdater;
@property(retain, nonatomic) NSString *editingFamilyName; // @synthesize editingFamilyName=_editingFamilyName;
@property(retain, nonatomic) NSString *editingGivenName; // @synthesize editingGivenName=_editingGivenName;
@property(retain, nonatomic) CNContactImage *editingContactImage; // @synthesize editingContactImage=_editingContactImage;
@property(retain, nonatomic) CNMutableContact *editingContact; // @synthesize editingContact=_editingContact;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(readonly, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(nonatomic) __weak id <CNMeCardSharingSettingsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)sharingEnabledDataSource:(id)arg1 didChangeEnabledState:(_Bool)arg2;	// IMP=0x000000000004239a
- (void)photoPicker:(id)arg1 didUpdatePhotoForContact:(id)arg2 withContactImage:(id)arg3;	// IMP=0x0000000000042201
- (void)photoPickerDidCancel:(id)arg1;	// IMP=0x00000000000421bd
- (void)presentPhotoPickerControllerForContact:(id)arg1;	// IMP=0x0000000000041f75
- (void)sharingSettingsHeaderWasTapped:(id)arg1;	// IMP=0x0000000000041d2e
- (void)updateContact:(id)arg1 withImagePropertiesFromContact:(id)arg2;	// IMP=0x0000000000041b50
- (void)saveDraftContact;	// IMP=0x00000000000416e4
- (void)promptForSavingToMeCard;	// IMP=0x00000000000413e5
- (void)processSelectionForTableView:(id)arg1 indexPath:(id)arg2;	// IMP=0x000000000004118d
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000040fcb
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000040f09
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000040c1b
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;	// IMP=0x0000000000040bbd
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x0000000000040b5f
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000040b0d
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000040a7d
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000000040a60
- (id)textFieldForIndex:(long long)arg1;	// IMP=0x000000000004098a
@property(readonly, nonatomic) unsigned long long selectedSharingAudience;
@property(readonly, nonatomic) _Bool sharingEnabled;
- (void)textFieldDidEndEditing:(id)arg1;	// IMP=0x00000000000408be
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x0000000000040840
- (void)contentSizeCategoryDidChange:(id)arg1;	// IMP=0x000000000004071e
- (void)adjustInsetsForKeyboardOverlap:(double)arg1;	// IMP=0x00000000000402da
- (void)keyboardWillHide:(id)arg1;	// IMP=0x00000000000402c5
- (void)keyboardWillShow:(id)arg1;	// IMP=0x00000000000400b2
- (void)updateVisibilityOfAudienceSection;	// IMP=0x000000000003ff3a
- (void)familyNameDidChange:(id)arg1;	// IMP=0x000000000003fefe
- (void)givenNameDidChange:(id)arg1;	// IMP=0x000000000003fec2
- (void)notifyDelegateOfChangesWithDidSaveToMeCard:(_Bool)arg1;	// IMP=0x000000000003fb9d
- (void)presentErrorAlertForEmptyPhotoIfNeededWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000003f987
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000003f83a
- (void)viewDidLayoutSubviews;	// IMP=0x000000000003f7e7
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000003f7b8
- (void)viewDidLoad;	// IMP=0x000000000003ed8c
- (void)dealloc;	// IMP=0x000000000003ed17
- (id)initWithContactStore:(id)arg1 contact:(id)arg2 avatarProvider:(id)arg3 nameProvider:(id)arg4 sharingEnabled:(_Bool)arg5 selectedSharingAudience:(unsigned long long)arg6;	// IMP=0x000000000003e974

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
