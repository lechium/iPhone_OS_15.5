//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsUI/CNContactPickerPrivateDelegate-Protocol.h>
#import <ContactsUI/CNContactViewControllerDelegate-Protocol.h>
#import <ContactsUI/CNFamilyMemberAddContactsOptionsSheetDelegate-Protocol.h>
#import <ContactsUI/CNUICoreFamilyMemberContactsObserver-Protocol.h>
#import <ContactsUI/CNUIFamilyMemberDowntimeContactPickerControllerDelegate-Protocol.h>

@class CNContactPickerViewController, CNContactStore, FAFamilyMember, NSString;
@protocol CNSchedulerProvider, CNUICoreFamilyMemberContactsDataSource, CNUIFamilyMemberContactsControllerDelegate, CNUIFamilyMemberContactsPresentation;

@interface CNUIFamilyMemberContactsController : NSObject <CNContactViewControllerDelegate, CNContactPickerPrivateDelegate, CNFamilyMemberAddContactsOptionsSheetDelegate, CNUIFamilyMemberDowntimeContactPickerControllerDelegate, CNUICoreFamilyMemberContactsObserver>
{
    id <CNUIFamilyMemberContactsPresentation> _familyMemberContactsPresentation;	// 8 = 0x8
    FAFamilyMember *_familyMember;	// 16 = 0x10
    id <CNUIFamilyMemberContactsControllerDelegate> _delegate;	// 24 = 0x18
    CNContactStore *_familyMemberScopedContactStore;	// 32 = 0x20
    id <CNUICoreFamilyMemberContactsDataSource> _dataSource;	// 40 = 0x28
    id <CNSchedulerProvider> _schedulerProvider;	// 48 = 0x30
    CNContactPickerViewController *_contactPickerViewController;	// 56 = 0x38
}

+ (_Bool)isViewController:(id)arg1 presentedByContactPicker:(id)arg2;	// IMP=0x00000000001c2dc1
- (void).cxx_destruct;	// IMP=0x00000000001c2d66
@property(nonatomic) __weak CNContactPickerViewController *contactPickerViewController; // @synthesize contactPickerViewController=_contactPickerViewController;
@property(readonly, nonatomic) id <CNSchedulerProvider> schedulerProvider; // @synthesize schedulerProvider=_schedulerProvider;
@property(readonly, nonatomic) id <CNUICoreFamilyMemberContactsDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) CNContactStore *familyMemberScopedContactStore; // @synthesize familyMemberScopedContactStore=_familyMemberScopedContactStore;
@property(nonatomic) __weak id <CNUIFamilyMemberContactsControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) FAFamilyMember *familyMember; // @synthesize familyMember=_familyMember;
- (void)downtimePickerController:(id)arg1 didFinishWithContacts:(id)arg2;	// IMP=0x00000000001c2c23
- (void)contactPickerDidCancel:(id)arg1;	// IMP=0x00000000001c2bcf
- (void)pickerDidSelectAddNewContact:(id)arg1;	// IMP=0x00000000001c2aa2
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;	// IMP=0x00000000001c2a53
- (void)cancelPresentationOfViewController:(id)arg1;	// IMP=0x00000000001c290b
- (void)dismissPresentedViewController:(id)arg1;	// IMP=0x00000000001c2807
- (void)presentViewController:(id)arg1;	// IMP=0x00000000001c2737
- (void)addContactsOptionsSheetViewControllerDidCancel:(id)arg1;	// IMP=0x00000000001c2725
- (void)addContactsOptionsSheetViewControllerDidSelectAddNewContact:(id)arg1;	// IMP=0x00000000001c25ed
- (void)addContactsOptionsSheetViewControllerDidSelectAddFromLocalContacts:(id)arg1;	// IMP=0x00000000001c2497
- (id)anchorViewForAddContactsInteraction;	// IMP=0x00000000001c236d
- (void)performAddContactsInteraction;	// IMP=0x00000000001c2138
- (void)performAddFromMainContactsInteraction;	// IMP=0x00000000001c1fd6
- (void)performDisplayContactsInteraction;	// IMP=0x00000000001c1e7b
- (void)performDefaultInteraction;	// IMP=0x00000000001c1e28
- (void)performInteraction:(long long)arg1;	// IMP=0x00000000001c1e07
- (void)familyMemberContactItemsDidChange;	// IMP=0x00000000001c1dca
@property(readonly, nonatomic) long long countOfFamilyMemberContacts;
@property(readonly, nonatomic) long long fetchStatus;
@property(readonly, nonatomic) id <CNUIFamilyMemberContactsPresentation> familyMemberContactsPresentation; // @synthesize familyMemberContactsPresentation=_familyMemberContactsPresentation;
- (id)initWithFamilyMember:(id)arg1 familyMemberContactsPresentation:(id)arg2;	// IMP=0x00000000001c1aa7
- (id)init;	// IMP=0x00000000001c1a6a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

