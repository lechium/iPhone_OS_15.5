//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsUI/CNContactPickerDelegate-Protocol.h>
#import <ContactsUI/CNContactViewControllerPrivateDelegate-Protocol.h>
#import <ContactsUI/CNFamilyMemberAddContactsToWhitelistOptionSheetDelegate-Protocol.h>
#import <ContactsUI/CNUICoreFamilyMemberContactsObserver-Protocol.h>
#import <ContactsUI/CNUIFamilyMemberDowntimeContactPickerControllerDelegate-Protocol.h>

@class CNContactFormatter, CNContactStore, CNContactViewController, FAFamilyMember, NSArray, NSString;
@protocol CNDowntimeWhitelistContainerFetching, CNSchedulerProvider, CNUICoreContactManagementConsentCheck, CNUICoreFamilyMemberWhitelistedContactsDataSource, CNUIFamilyMemberContactsPresentation, CNUIFamilyMemberWhitelistedContactsControllerDelegate;

@interface CNUIFamilyMemberWhitelistedContactsController : NSObject <CNContactViewControllerPrivateDelegate, CNContactPickerDelegate, CNFamilyMemberAddContactsToWhitelistOptionSheetDelegate, CNUIFamilyMemberDowntimeContactPickerControllerDelegate, CNUICoreFamilyMemberContactsObserver>
{
    id <CNUIFamilyMemberContactsPresentation> _familyMemberContactsPresentation;	// 8 = 0x8
    FAFamilyMember *_familyMember;	// 16 = 0x10
    id <CNUIFamilyMemberWhitelistedContactsControllerDelegate> _delegate;	// 24 = 0x18
    CNContactStore *_familyMemberScopedContactStore;	// 32 = 0x20
    CNContactFormatter *_contactCardWarningFormatter;	// 40 = 0x28
    id <CNUICoreFamilyMemberWhitelistedContactsDataSource> _dataSource;	// 48 = 0x30
    id <CNUICoreContactManagementConsentCheck> _contactManagentConsentCheck;	// 56 = 0x38
    id <CNDowntimeWhitelistContainerFetching> _downtimeContaienerFetcher;	// 64 = 0x40
    id <CNSchedulerProvider> _schedulerProvider;	// 72 = 0x48
    CNContactViewController *_contactViewControllerPresentingItemDetails;	// 80 = 0x50
}

+ (id)contactPickerWithDelegate:(id)arg1 familyMember:(id)arg2 parentContainer:(id)arg3;	// IMP=0x00000000000b81a0
- (void).cxx_destruct;	// IMP=0x00000000000b8124
@property(nonatomic) __weak CNContactViewController *contactViewControllerPresentingItemDetails; // @synthesize contactViewControllerPresentingItemDetails=_contactViewControllerPresentingItemDetails;
@property(readonly, nonatomic) id <CNSchedulerProvider> schedulerProvider; // @synthesize schedulerProvider=_schedulerProvider;
@property(readonly, nonatomic) id <CNDowntimeWhitelistContainerFetching> downtimeContaienerFetcher; // @synthesize downtimeContaienerFetcher=_downtimeContaienerFetcher;
@property(readonly, nonatomic) id <CNUICoreContactManagementConsentCheck> contactManagentConsentCheck; // @synthesize contactManagentConsentCheck=_contactManagentConsentCheck;
@property(readonly, nonatomic) id <CNUICoreFamilyMemberWhitelistedContactsDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) CNContactFormatter *contactCardWarningFormatter; // @synthesize contactCardWarningFormatter=_contactCardWarningFormatter;
@property(readonly, nonatomic) CNContactStore *familyMemberScopedContactStore; // @synthesize familyMemberScopedContactStore=_familyMemberScopedContactStore;
@property(nonatomic) __weak id <CNUIFamilyMemberWhitelistedContactsControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) FAFamilyMember *familyMember; // @synthesize familyMember=_familyMember;
- (void)addContactsToWhitelist:(id)arg1;	// IMP=0x00000000000b801e
- (void)downtimePickerController:(id)arg1 didFinishWithContacts:(id)arg2;	// IMP=0x00000000000b7f27
- (void)contactPicker:(id)arg1 didSelectContacts:(id)arg2;	// IMP=0x00000000000b7e8f
- (void)contactPickerDidCancel:(id)arg1;	// IMP=0x00000000000b7dd8
- (void)contactViewController:(id)arg1 didDeleteContact:(id)arg2;	// IMP=0x00000000000b7d48
- (void)contactViewControllerDidExecuteDeleteFromDowntimeWhitelistAction:(id)arg1;	// IMP=0x00000000000b7c13
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;	// IMP=0x00000000000b7add
- (void)addContactsToWhitelistOptionsSheetDidCancel:(id)arg1;	// IMP=0x00000000000b7a6b
- (void)performAddNewContact;	// IMP=0x00000000000b78d6
- (void)addContactsToWhitelistOptionsSheetDidSelectAddNewContact:(id)arg1;	// IMP=0x00000000000b7857
- (void)performAddFromFamilyMemberContacts;	// IMP=0x00000000000b76c2
- (void)addContactsToWhitelistOptionsSheetDidSelectAddFromFamilyMemberContacts:(id)arg1;	// IMP=0x00000000000b7643
- (void)performAddFromMainContactsForThisDevice;	// IMP=0x00000000000b7574
- (void)performAddFromMainContactsForFamilyMember;	// IMP=0x00000000000b73e4
- (void)performAddFromMainContacts;	// IMP=0x00000000000b7388
- (void)addContactsToWhitelistOptionsSheetDidSelectAddFromMainContacts:(id)arg1;	// IMP=0x00000000000b7309
- (id)anchorViewForDefaultInteraction;	// IMP=0x00000000000b71e2
- (id)generateContactSourceOptionSheet;	// IMP=0x00000000000b6fc9
- (void)performDefaultInteraction;	// IMP=0x00000000000b6f59
- (void)performInteraction:(long long)arg1;	// IMP=0x00000000000b6f38
- (void)deleteFamilyMemberContactItem:(id)arg1;	// IMP=0x00000000000b6dd2
- (void)cancelPresentationOfDetailsOfFamilyMemberContactItem:(id)arg1;	// IMP=0x00000000000b6d45
- (id)warningMessageForContact:(id)arg1;	// IMP=0x00000000000b6b85
- (void)presentDetailsOfFamilyMemberContactItem:(id)arg1;	// IMP=0x00000000000b68b0
- (_Bool)contactManagementEnabled;	// IMP=0x00000000000b67d0
- (void)familyMemberContactItemsDidChange;	// IMP=0x00000000000b6793
@property(readonly, nonatomic) NSArray *familyMemberContactItems;
@property(readonly, nonatomic) long long fetchStatus;
@property(readonly, nonatomic) long long status;
@property(readonly, nonatomic) id <CNUIFamilyMemberContactsPresentation> familyMemberContactsPresentation; // @synthesize familyMemberContactsPresentation=_familyMemberContactsPresentation;
- (id)initWithFamilyMember:(id)arg1 familyMemberContactsPresentation:(id)arg2;	// IMP=0x00000000000b631d
- (id)init;	// IMP=0x00000000000b62e0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

