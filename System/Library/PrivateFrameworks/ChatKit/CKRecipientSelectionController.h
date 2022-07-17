//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChatKit/CKComposeRecipientViewDelegate-Protocol.h>
#import <ChatKit/CKDetailsContactsManagerDelegate-Protocol.h>
#import <ChatKit/CKRecipientSearchListControllerDelegate-Protocol.h>
#import <ChatKit/CNAutocompleteGroupDetailViewControllerDelegate-Protocol.h>
#import <ChatKit/CNComposeRecipientTextViewDelegate-Protocol.h>
#import <ChatKit/CNContactPickerDelegate-Protocol.h>
#import <ChatKit/CoreTelephonyClientDelegate-Protocol.h>

@class CKAlertController, CKComposeRecipientView, CKDetailsContactsManager, CKManualUpdater, CKPendingConversation, CKRecipientSearchListController, CNComposeRecipient, CNContactPickerViewController, CNContactStore, CoreTelephonyClient, NSMutableDictionary, NSString, STConversationContext, UILabel, UIScrollView, UIView;
@protocol CKRecipientSelectionControllerDelegate;

@interface CKRecipientSelectionController <CNComposeRecipientTextViewDelegate, CKComposeRecipientViewDelegate, CKRecipientSearchListControllerDelegate, CNAutocompleteGroupDetailViewControllerDelegate, CNContactPickerDelegate, CKDetailsContactsManagerDelegate, CoreTelephonyClientDelegate>
{
    double _keyboardHeightWithAccessoryView;	// 8 = 0x8
    CNContactStore *_contactStore;	// 16 = 0x10
    _Bool _peoplePickerHidden;	// 24 = 0x18
    _Bool _editable;	// 25 = 0x19
    _Bool _allowedByScreenTime;	// 26 = 0x1a
    _Bool _forceMMS;	// 27 = 0x1b
    _Bool _isDisambiguating;	// 28 = 0x1c
    _Bool _preventAtomization;	// 29 = 0x1d
    _Bool _didShowOneTimeErrorAlert;	// 30 = 0x1e
    _Bool _homogenizePreferredServiceForiMessage;	// 31 = 0x1f
    _Bool _shouldSuppressSearchResultsTable;	// 32 = 0x20
    id <CKRecipientSelectionControllerDelegate> _delegate;	// 40 = 0x28
    CKPendingConversation *_conversation;	// 48 = 0x30
    CKComposeRecipientView *_toField;	// 56 = 0x38
    UIView *_toFieldContainerView;	// 64 = 0x40
    CKRecipientSearchListController *_searchListController;	// 72 = 0x48
    STConversationContext *_currentConversationContext;	// 80 = 0x50
    CDUnknownBlockType _gameCenterPickerBlock;	// 88 = 0x58
    UIScrollView *_toFieldScrollingView;	// 96 = 0x60
    UILabel *_toFieldPlaceholderLabel;	// 104 = 0x68
    UIView *_separator;	// 112 = 0x70
    CNContactPickerViewController *_contactPickerViewController;	// 120 = 0x78
    CNComposeRecipient *_recentContactForPresentedCNCard;	// 128 = 0x80
    CKManualUpdater *_addressBookNotificationUpdater;	// 136 = 0x88
    NSMutableDictionary *_recipientAvailibityTimers;	// 144 = 0x90
    NSMutableDictionary *_recipientAvailabilities;	// 152 = 0x98
    unsigned long long _numberOfRowsInToField;	// 160 = 0xa0
    CoreTelephonyClient *_coreTelephonyClient;	// 168 = 0xa8
    CKDetailsContactsManager *_contactsManager;	// 176 = 0xb0
    CKAlertController *_alternateAddressesAlertController;	// 184 = 0xb8
}

- (void).cxx_destruct;	// IMP=0x000000000005f2d9
@property(retain, nonatomic) CKAlertController *alternateAddressesAlertController; // @synthesize alternateAddressesAlertController=_alternateAddressesAlertController;
@property(retain, nonatomic) CKDetailsContactsManager *contactsManager; // @synthesize contactsManager=_contactsManager;
@property(retain, nonatomic) CoreTelephonyClient *coreTelephonyClient; // @synthesize coreTelephonyClient=_coreTelephonyClient;
@property(nonatomic) unsigned long long numberOfRowsInToField; // @synthesize numberOfRowsInToField=_numberOfRowsInToField;
@property(retain, nonatomic) NSMutableDictionary *recipientAvailabilities; // @synthesize recipientAvailabilities=_recipientAvailabilities;
@property(retain, nonatomic) NSMutableDictionary *recipientAvailibityTimers; // @synthesize recipientAvailibityTimers=_recipientAvailibityTimers;
@property(readonly, nonatomic) _Bool shouldSuppressSearchResultsTable; // @synthesize shouldSuppressSearchResultsTable=_shouldSuppressSearchResultsTable;
@property(readonly, nonatomic) _Bool homogenizePreferredServiceForiMessage; // @synthesize homogenizePreferredServiceForiMessage=_homogenizePreferredServiceForiMessage;
@property(nonatomic) _Bool didShowOneTimeErrorAlert; // @synthesize didShowOneTimeErrorAlert=_didShowOneTimeErrorAlert;
@property(nonatomic) _Bool preventAtomization; // @synthesize preventAtomization=_preventAtomization;
@property(retain, nonatomic) CKManualUpdater *addressBookNotificationUpdater; // @synthesize addressBookNotificationUpdater=_addressBookNotificationUpdater;
@property(nonatomic) _Bool isDisambiguating; // @synthesize isDisambiguating=_isDisambiguating;
@property(retain, nonatomic) CNComposeRecipient *recentContactForPresentedCNCard; // @synthesize recentContactForPresentedCNCard=_recentContactForPresentedCNCard;
@property(retain, nonatomic) CNContactPickerViewController *contactPickerViewController; // @synthesize contactPickerViewController=_contactPickerViewController;
@property(retain, nonatomic) UIView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) UILabel *toFieldPlaceholderLabel; // @synthesize toFieldPlaceholderLabel=_toFieldPlaceholderLabel;
@property(retain, nonatomic) UIScrollView *toFieldScrollingView; // @synthesize toFieldScrollingView=_toFieldScrollingView;
@property(copy, nonatomic) CDUnknownBlockType gameCenterPickerBlock; // @synthesize gameCenterPickerBlock=_gameCenterPickerBlock;
@property(nonatomic) _Bool forceMMS; // @synthesize forceMMS=_forceMMS;
@property(nonatomic) _Bool allowedByScreenTime; // @synthesize allowedByScreenTime=_allowedByScreenTime;
@property(retain, nonatomic) STConversationContext *currentConversationContext; // @synthesize currentConversationContext=_currentConversationContext;
@property(nonatomic, getter=isEditable) _Bool editable; // @synthesize editable=_editable;
@property(nonatomic, getter=isPeoplePickerHidden) _Bool peoplePickerHidden; // @synthesize peoplePickerHidden=_peoplePickerHidden;
@property(retain, nonatomic) CKRecipientSearchListController *searchListController; // @synthesize searchListController=_searchListController;
@property(readonly, nonatomic) UIView *toFieldContainerView; // @synthesize toFieldContainerView=_toFieldContainerView;
@property(retain, nonatomic) CKComposeRecipientView *toField; // @synthesize toField=_toField;
@property(retain, nonatomic) CKPendingConversation *conversation; // @synthesize conversation=_conversation;
@property(nonatomic) __weak id <CKRecipientSelectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)autocompleteResultsController:(id)arg1 willOverrideImageDataForRecipient:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000005edfb
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000005ecc1
- (void)updateScreenTimePolicy;	// IMP=0x000000000005eb44
- (id)handlesForScreenTimePolicyCheck;	// IMP=0x000000000005e942
- (struct CGPoint)scrollSearchListControllerToTopContentOffset;	// IMP=0x000000000005e843
- (void)scrollSearchListControllerToTop:(_Bool)arg1;	// IMP=0x000000000005e7bc
- (void)_updateAddressBookProperties;	// IMP=0x000000000005e4a7
- (void)resetSearchResults;	// IMP=0x000000000005e468
- (void)_updateSearchResultsTable;	// IMP=0x000000000005e139
- (struct UIEdgeInsets)_navigationBarInsets;	// IMP=0x000000000005e08f
- (void)_keyboardWillShowOrHide:(id)arg1;	// IMP=0x000000000005ded2
- (void)_updateSearchListControllerPopOverSizing;	// IMP=0x000000000005decc
- (_Bool)_configureSearchListControllerAsAPopover;	// IMP=0x000000000005dec4
- (void)_hideSearchField;	// IMP=0x000000000005dbf4
- (void)_showSearchField;	// IMP=0x000000000005d77f
- (void)_updateShowingSearch;	// IMP=0x000000000005d6be
- (void)_resetSearchResultsInsets;	// IMP=0x000000000005d427
- (_Bool)_isToFieldPushedUp;	// IMP=0x000000000005d3b0
- (void)_adjustToFieldSeparatorInsetsIfNecessary;	// IMP=0x000000000005d3aa
- (void)_adjustToFieldPositionIfNecessary;	// IMP=0x000000000005ce8a
- (void)_updateRecipientViewLayouts;	// IMP=0x000000000005c91e
- (void)_removeRecent;	// IMP=0x000000000005c83e
- (void)_showContactCardForRecipient:(id)arg1 sourceView:(id)arg2;	// IMP=0x000000000005c665
- (void)_showDetailsForRecipient:(id)arg1 canDelete:(_Bool)arg2;	// IMP=0x000000000005bddf
- (void)_showDetailsForGroup:(id)arg1;	// IMP=0x000000000005bd21
- (id)_alternateiMessagableAddressesForRecipient:(id)arg1;	// IMP=0x000000000005baf0
- (id)_alternateAddressesForRecipient:(id)arg1;	// IMP=0x000000000005b765
- (void)_showActionSheetForRecipient:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000005b6d7
- (void)presentAlternateAddressesAlertForRecipient:(id)arg1;	// IMP=0x000000000005ae2f
- (void)_refreshActionSheet;	// IMP=0x000000000005ac57
- (void)_showOneTimeErrorAlertForAddedRecipient:(id)arg1 service:(id)arg2 withError:(BOOL)arg3;	// IMP=0x000000000005a3f7
- (id)_recipientCausingTooManyRecipientsError;	// IMP=0x000000000005a245
- (_Bool)hasTimedOutRecipients;	// IMP=0x000000000005a0a6
- (void)_handleRecipientAvailabilityTimeout:(id)arg1;	// IMP=0x0000000000059e6c
- (void)_removeAvailabilityTimeoutTimerForRecipient:(id)arg1;	// IMP=0x0000000000059d75
- (void)_startAvailabilityTimeoutTimerForRecipient:(id)arg1;	// IMP=0x0000000000059be9
- (BOOL)_availibilityForRecipient:(id)arg1 onService:(id)arg2;	// IMP=0x0000000000059b09
- (void)conversationPreferredServiceDidChange;	// IMP=0x0000000000059b03
- (void)_handleConversationPreferredServiceDidChangeNotification:(id)arg1;	// IMP=0x0000000000059974
- (void)_handleAddressBookPartialChangedNotification:(id)arg1;	// IMP=0x0000000000059684
- (void)_handleAddressBookChangedNotification:(id)arg1;	// IMP=0x00000000000595a0
- (id)_toFieldCollapsedTextColor;	// IMP=0x000000000005942b
- (unsigned long long)_atomPresentationOptionsForRecipient:(id)arg1;	// IMP=0x0000000000058e80
- (void)_updateYOriginSearchListController;	// IMP=0x0000000000058bff
- (void)_updateToFieldRecipientsData;	// IMP=0x000000000005895f
- (void)_updateToField;	// IMP=0x00000000000584c2
- (id)_canonicalRecipientAddresses;	// IMP=0x0000000000058226
- (void)removeRecipient:(id)arg1;	// IMP=0x0000000000058174
- (void)addRecipient:(id)arg1;	// IMP=0x0000000000058039
- (void)refreshComposeSendingServiceForAddresses:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000057ea9
@property(readonly, nonatomic) double collapsedHeight;
- (void)stopCheckingRecipientAvailabilityAndRemoveAllTimers;	// IMP=0x0000000000057dd4
- (_Bool)hasPendingiMessageRecipients;	// IMP=0x0000000000057c21
- (_Bool)hasUnreachableEmergencyRecipient;	// IMP=0x0000000000057a3e
- (_Bool)hasFailediMessageRecipients;	// IMP=0x00000000000578aa
- (_Bool)finishedComposingRecipients;	// IMP=0x00000000000577bf
- (void)invalidateOutstandingIDStatusRequests;	// IMP=0x0000000000057782
@property(nonatomic, getter=isSearchResultsHidden) _Bool searchResultsHidden;
@property(readonly, nonatomic) _Bool toFieldIsFirstResponder;
- (void)addRecipients:(id)arg1;	// IMP=0x00000000000572f9
- (id)recipients;	// IMP=0x0000000000057224
- (void)reset;	// IMP=0x000000000005701e
- (_Bool)isGameCenterRecipient:(id)arg1;	// IMP=0x0000000000056fef
- (void)setGameCenterPickedHandles:(id)arg1 playerNames:(id)arg2;	// IMP=0x0000000000056b5c
- (void)_dismissPeoplePicker;	// IMP=0x00000000000564da
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;	// IMP=0x0000000000056430
- (void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2;	// IMP=0x0000000000056323
- (void)contactPickerDidCancel:(id)arg1;	// IMP=0x0000000000056311
@property(readonly, nonatomic) CNContactStore *contactStore;
- (void)autocompleteGroupDetailViewControllerDidCancel:(id)arg1;	// IMP=0x000000000005628c
- (void)autocompleteGroupDetailViewController:(id)arg1 didTapComposeRecipient:(id)arg2;	// IMP=0x0000000000056275
- (void)autocompleteGroupDetailViewController:(id)arg1 didAskToRemoveGroup:(id)arg2;	// IMP=0x0000000000056244
- (long long)searchListController:(id)arg1 idStatusForIDSID:(id)arg2;	// IMP=0x000000000005615a
- (void)searchListController:(id)arg1 destinationsUpdated:(id)arg2;	// IMP=0x00000000000560e8
- (void)searchListControllerDidScroll:(id)arg1;	// IMP=0x0000000000056008
- (void)searchListControllerDidFinishSearch:(id)arg1;	// IMP=0x0000000000055ff6
- (void)autocompleteResultsController:(id)arg1 didCollapseSelectedRecipient:(id)arg2;	// IMP=0x0000000000055fe4
- (void)autocompleteResultsController:(id)arg1 didExpandSelectedRecipient:(id)arg2;	// IMP=0x0000000000055fd2
- (void)autocompleteResultsController:(id)arg1 didRequestInfoAboutRecipient:(id)arg2;	// IMP=0x0000000000055f62
- (_Bool)hasIDSResultsForAllRecipients:(id)arg1;	// IMP=0x0000000000055c6d
- (id)preferredRecipientForRecipients:(id)arg1 forServiceType:(BOOL)arg2;	// IMP=0x00000000000559e9
- (id)preferredRecipientForNewContact:(id)arg1;	// IMP=0x00000000000557d9
- (id)autocompleteResultsController:(id)arg1 preferredRecipientForRecipients:(id)arg2;	// IMP=0x0000000000055677
- (id)recipientIsDuetSuggestion:(id)arg1;	// IMP=0x0000000000055495
- (void)autocompleteResultsController:(id)arg1 tintColorForRecipient:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000550ef
- (id)chatForIMHandle:(id)arg1;	// IMP=0x0000000000055063
- (id)handleForRecipientNormalizedAddress:(id)arg1;	// IMP=0x0000000000054f87
- (id)preferredRecipientForExistingConversationOfRecipients:(id)arg1;	// IMP=0x0000000000054bca
- (id)preferredColorTypeForExistingConversation:(id)arg1;	// IMP=0x0000000000054ad9
- (void)colorTypeForRecipient:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000005452e
- (_Bool)hasEmailRecipientsInAddresses:(id)arg1;	// IMP=0x0000000000054406
- (_Bool)lastSentMessageWasNotDeliveredForConversation:(id)arg1;	// IMP=0x00000000000542f0
- (id)conversationForRecipients:(id)arg1;	// IMP=0x0000000000053fb1
- (BOOL)serviceColorForRecipientAddresses:(id)arg1;	// IMP=0x0000000000053de7
- (id)expandedRecipientsForGroupRecipient:(id)arg1;	// IMP=0x0000000000053d3b
- (BOOL)serviceTypeForRecipient:(id)arg1;	// IMP=0x0000000000053859
- (id)preferredRecipientForPendingUnifiedContact:(id)arg1;	// IMP=0x0000000000053712
- (void)handlePendingRecipient:(id)arg1;	// IMP=0x00000000000534f9
- (void)_handleIDSResultsWhenSearchTableIsHidden:(id)arg1;	// IMP=0x00000000000532e7
- (void)autocompleteResultsController:(id)arg1 didSelectRecipient:(id)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x0000000000052f07
- (struct UIEdgeInsets)layoutMarginsForComposeRecipientView:(id)arg1;	// IMP=0x0000000000052e62
- (_Bool)collapseSelectedSearchResultForComposeRecipientView:(id)arg1;	// IMP=0x0000000000052dcc
- (_Bool)expandSelectedSearchResultForComposeRecipientView:(id)arg1;	// IMP=0x0000000000052d36
- (_Bool)chooseSelectedSearchResultForComposeRecipientView:(id)arg1 context:(unsigned long long)arg2;	// IMP=0x0000000000052c9f
- (void)selectPreviousSearchResultForComposeRecipientView:(id)arg1;	// IMP=0x0000000000052c62
- (void)selectNextSearchResultForComposeRecipientView:(id)arg1;	// IMP=0x0000000000052c25
- (void)dismissSearchResultsForComposeRecipientView:(id)arg1;	// IMP=0x0000000000052bbd
- (_Bool)presentSearchResultsForComposeRecipientView:(id)arg1;	// IMP=0x0000000000052b79
- (_Bool)composeRecipientViewShowingSearchResults:(id)arg1;	// IMP=0x0000000000052af7
- (void)contactsManagerViewModelsDidChange:(id)arg1;	// IMP=0x0000000000052af1
- (id)composeRecipientView:(id)arg1 contextMenuConfigurationForAtom:(id)arg2;	// IMP=0x00000000000524c8
- (_Bool)recipientViewShouldIgnoreFirstResponderChanges:(id)arg1;	// IMP=0x00000000000524b6
- (void)recipientViewDidResignFirstResponder:(id)arg1;	// IMP=0x0000000000052464
- (void)recipientViewDidBecomeFirstResponder:(id)arg1;	// IMP=0x0000000000052335
- (void)composeRecipientView:(id)arg1 didSelectRecipients:(id)arg2;	// IMP=0x0000000000052256
- (void)composeRecipientView:(id)arg1 showPersonCardForAtom:(id)arg2;	// IMP=0x0000000000052173
- (void)sendUpdateRecipientForAtom:(id)arg1;	// IMP=0x0000000000052090
- (void)composeRecipientView:(id)arg1 disambiguateRecipientForAtom:(id)arg2;	// IMP=0x0000000000051f7b
- (void)composeRecipientViewRequestAddRecipient:(id)arg1;	// IMP=0x0000000000051b62
- (_Bool)_systemUnderLock;	// IMP=0x0000000000051b4b
- (void)composeRecipientView:(id)arg1 didChangeSize:(struct CGSize)arg2;	// IMP=0x0000000000051898
- (unsigned long long)presentationOptionsForRecipient:(id)arg1;	// IMP=0x0000000000051886
- (id)composeRecipientView:(id)arg1 composeRecipientForContact:(id)arg2;	// IMP=0x00000000000517ff
- (id)composeRecipientView:(id)arg1 composeRecipientForAddress:(id)arg2;	// IMP=0x0000000000051778
- (void)composeRecipientViewTabPressed:(id)arg1;	// IMP=0x000000000005172c
- (void)composeRecipientViewReturnPressed:(id)arg1;	// IMP=0x00000000000516e0
- (void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2;	// IMP=0x00000000000513c1
- (void)composeRecipientView:(id)arg1 didRemoveRecipient:(id)arg2;	// IMP=0x0000000000051201
- (void)composeRecipientView:(id)arg1 didAddRecipient:(id)arg2;	// IMP=0x000000000005106a
- (void)composeRecipientView:(id)arg1 textDidChange:(id)arg2;	// IMP=0x0000000000050eea
- (void)_handleRecipientViewChanged:(id)arg1;	// IMP=0x0000000000050e94
- (void)recipientAvailibilitiesDidUpdate;	// IMP=0x0000000000050e8e
- (void)recipientSelectionControllerDidChange;	// IMP=0x0000000000050e7c
- (double)_toolbarHeightForNumberOfRows:(unsigned long long)arg1;	// IMP=0x0000000000050dc8
- (_Bool)_shouldEnableScrolling;	// IMP=0x0000000000050d7a
- (double)preferredMacToolbarHeight;	// IMP=0x0000000000050c48
- (double)_macToFieldHeight;	// IMP=0x0000000000050c17
- (double)fieldHeightOffset;	// IMP=0x0000000000050ad7
- (double)additionalCatalystTopInset;	// IMP=0x0000000000050963
- (double)composeRecipientViewOriginY;	// IMP=0x0000000000050939
- (void)bringComposeRecipientViewToFront;	// IMP=0x00000000000508c9
- (_Bool)isBeingPresentedInMacDetailsView;	// IMP=0x00000000000508c1
- (void)parentControllerDidResume:(_Bool)arg1 animating:(_Bool)arg2;	// IMP=0x00000000000508af
- (void)didMoveToParentViewController:(id)arg1;	// IMP=0x0000000000050881
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000005086f
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x000000000005078a
- (void)viewWillLayoutSubviews;	// IMP=0x0000000000050749
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000000050680
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000000505df
- (void)viewDidAppearDeferredSetup;	// IMP=0x00000000000501e3
- (void)viewDidLoad;	// IMP=0x000000000005003d
- (void)loadView;	// IMP=0x000000000004f019
- (id)initWithConversation:(id)arg1;	// IMP=0x000000000004ef0e
- (id)init;	// IMP=0x000000000004eef8
- (void)dealloc;	// IMP=0x000000000004eca9
- (_Bool)isMAIDGroupsEnabled;	// IMP=0x000000000004ec9f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
