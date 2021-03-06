//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <HomeUI/CNContactPickerDelegate-Protocol.h>
#import <HomeUI/HFContactControllerDelegate-Protocol.h>
#import <HomeUI/IDSBatchIDQueryControllerDelegate-Protocol.h>
#import <HomeUI/MFComposeRecipientTextViewDelegate-Protocol.h>
#import <HomeUI/MFContactsSearchConsumer-Protocol.h>
#import <HomeUI/UITableViewDataSource-Protocol.h>
#import <HomeUI/UITableViewDelegate-Protocol.h>

@class HFContactController, HMHome, IDSBatchIDQueryController, MFComposeRecipientTextView, MFContactsSearchManager, NSArray, NSLayoutConstraint, NSMutableArray, NSNumber, NSString, NSTimer, UIActivityIndicatorView, UIColor, UITableView, UIView;
@protocol HUAddPeopleViewControllerDelegate;

@interface HUAddPeopleViewController : UIViewController <MFComposeRecipientTextViewDelegate, MFContactsSearchConsumer, UITableViewDelegate, UITableViewDataSource, IDSBatchIDQueryControllerDelegate, HFContactControllerDelegate, CNContactPickerDelegate>
{
    _Bool _addressBookAccessDenied;	// 8 = 0x8
    _Bool _showingAutoCompleteResults;	// 9 = 0x9
    id <HUAddPeopleViewControllerDelegate> _delegate;	// 16 = 0x10
    HMHome *_home;	// 24 = 0x18
    unsigned long long _state;	// 32 = 0x20
    MFComposeRecipientTextView *_composeView;	// 40 = 0x28
    UIView *_separatorView;	// 48 = 0x30
    UITableView *_tableView;	// 56 = 0x38
    NSLayoutConstraint *_composeViewBottomConstraint;	// 64 = 0x40
    NSArray *_constraints;	// 72 = 0x48
    UIActivityIndicatorView *_spinner;	// 80 = 0x50
    UIColor *_effectiveTintColor;	// 88 = 0x58
    HFContactController *_contactsController;	// 96 = 0x60
    MFContactsSearchManager *_searchManager;	// 104 = 0x68
    NSNumber *_lastSearchID;	// 112 = 0x70
    NSArray *_autoCompleteResults;	// 120 = 0x78
    NSMutableArray *_additionalAutoCompleteResults;	// 128 = 0x80
    NSArray *_familyMembers;	// 136 = 0x88
    NSString *_unatomizedAddress;	// 144 = 0x90
    NSTimer *_statusQueryDebounceTimer;	// 152 = 0x98
    IDSBatchIDQueryController *_statusQueryController;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x000000000019f59e
@property(retain, nonatomic) IDSBatchIDQueryController *statusQueryController; // @synthesize statusQueryController=_statusQueryController;
@property(retain, nonatomic) NSTimer *statusQueryDebounceTimer; // @synthesize statusQueryDebounceTimer=_statusQueryDebounceTimer;
@property(retain, nonatomic) NSString *unatomizedAddress; // @synthesize unatomizedAddress=_unatomizedAddress;
@property(retain, nonatomic) NSArray *familyMembers; // @synthesize familyMembers=_familyMembers;
@property(retain, nonatomic) NSMutableArray *additionalAutoCompleteResults; // @synthesize additionalAutoCompleteResults=_additionalAutoCompleteResults;
@property(retain, nonatomic) NSArray *autoCompleteResults; // @synthesize autoCompleteResults=_autoCompleteResults;
@property(nonatomic) _Bool showingAutoCompleteResults; // @synthesize showingAutoCompleteResults=_showingAutoCompleteResults;
@property(retain, nonatomic) NSNumber *lastSearchID; // @synthesize lastSearchID=_lastSearchID;
@property(retain, nonatomic) MFContactsSearchManager *searchManager; // @synthesize searchManager=_searchManager;
@property(retain, nonatomic) HFContactController *contactsController; // @synthesize contactsController=_contactsController;
@property(nonatomic) _Bool addressBookAccessDenied; // @synthesize addressBookAccessDenied=_addressBookAccessDenied;
@property(retain, nonatomic) UIColor *effectiveTintColor; // @synthesize effectiveTintColor=_effectiveTintColor;
@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(retain, nonatomic) NSArray *constraints; // @synthesize constraints=_constraints;
@property(retain, nonatomic) NSLayoutConstraint *composeViewBottomConstraint; // @synthesize composeViewBottomConstraint=_composeViewBottomConstraint;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) MFComposeRecipientTextView *composeView; // @synthesize composeView=_composeView;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) HMHome *home; // @synthesize home=_home;
@property(nonatomic) __weak id <HUAddPeopleViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)sendInvites;	// IMP=0x000000000019dd3e
- (id)recipientsWithStatusPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x000000000019da83
- (void)lookupIDSDestinations:(id)arg1;	// IMP=0x000000000019d85d
- (void)lookupVisibleRecipients;	// IMP=0x000000000019d352
- (void)scheduleDelayedLookupVisibleRecipients;	// IMP=0x000000000019d2ba
- (id)composeRecipientForAddress:(id)arg1;	// IMP=0x000000000019d1c6
- (id)IDSDestinationForRecipient:(id)arg1;	// IMP=0x000000000019d0f3
- (id)requiredKeyDescriptors;	// IMP=0x000000000019d025
- (void)updateStateDependentUI;	// IMP=0x000000000019ca99
- (id)tintColorForRecipient:(id)arg1;	// IMP=0x000000000019c9c5
- (void)batchQueryController:(id)arg1 updatedDestinationsStatus:(id)arg2 onService:(id)arg3 error:(id)arg4;	// IMP=0x000000000019c345
- (void)finishedSearchingForAutocompleteResults;	// IMP=0x000000000019c237
- (void)consumeAutocompleteSearchResults:(id)arg1 taskID:(id)arg2;	// IMP=0x000000000019c002
- (void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2;	// IMP=0x000000000019bd08
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;	// IMP=0x000000000019ba8f
- (void)contactPickerDidCancel:(id)arg1;	// IMP=0x000000000019ba43
- (void)contactController:(id)arg1 didFinishDownloadingFamilyMemberAvatar:(id)arg2;	// IMP=0x000000000019ba3d
- (void)composeRecipientViewDidFinishPickingRecipient:(id)arg1;	// IMP=0x000000000019b9f9
- (void)composeRecipientViewRequestAddRecipient:(id)arg1;	// IMP=0x000000000019b7db
- (void)composeRecipientView:(id)arg1 didChangeSize:(struct CGSize)arg2;	// IMP=0x000000000019b78c
- (void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2;	// IMP=0x000000000019b5c3
- (void)composeRecipientView:(id)arg1 didRemoveRecipient:(id)arg2;	// IMP=0x000000000019b58f
- (void)composeRecipientView:(id)arg1 didAddRecipient:(id)arg2;	// IMP=0x000000000019b468
- (void)composeRecipientView:(id)arg1 textDidChange:(id)arg2;	// IMP=0x000000000019b20b
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x000000000019b0fe
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;	// IMP=0x000000000019afba
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000019abd6
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x000000000019aba7
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x000000000019ab70
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000019a8a7
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000019a843
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000000019a7e0
- (void)sendButtonPressed:(id)arg1;	// IMP=0x000000000019a5ad
- (void)cancelButtonPressed:(id)arg1;	// IMP=0x000000000019a561
- (void)updateViewConstraints;	// IMP=0x0000000000199bdf
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x0000000000199bcd
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x0000000000199bb5
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x0000000000199b15
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000199a85
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000001999bf
- (void)viewDidLoad;	// IMP=0x0000000000199190
- (void)dealloc;	// IMP=0x0000000000199127
- (id)initWithHome:(id)arg1;	// IMP=0x0000000000198e58
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000198da3
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000198cee

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

