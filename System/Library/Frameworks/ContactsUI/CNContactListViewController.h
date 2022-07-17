//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

#import <ContactsUI/CNAvatarCardControllerDelegate-Protocol.h>
#import <ContactsUI/CNAvatarViewControllerDelegate-Protocol.h>
#import <ContactsUI/CNContactDataSourceDelegate-Protocol.h>
#import <ContactsUI/CNContactListBannerViewDelegate-Protocol.h>
#import <ContactsUI/CNContactSuggestionsViewControllerDelegate-Protocol.h>
#import <ContactsUI/CNContactViewControllerDelegate-Protocol.h>
#import <ContactsUI/CNUIObjectViewControllerDelegate-Protocol.h>
#import <ContactsUI/CNVCardImportControllerDelegate-Protocol.h>
#import <ContactsUI/CNVCardImportControllerPresentationDelegate-Protocol.h>
#import <ContactsUI/TPKContentControllerDelegate-Protocol.h>
#import <ContactsUI/UIGestureRecognizerDelegate-Protocol.h>
#import <ContactsUI/UISearchBarDelegate-Protocol.h>
#import <ContactsUI/UISearchControllerDelegate-Protocol.h>
#import <ContactsUI/UISearchResultsUpdating-Protocol.h>
#import <ContactsUI/UITableViewDragDestinationDelegate-Protocol.h>
#import <ContactsUI/UITableViewDragSourceDelegate-Protocol.h>

@class CNAvatarCardController, CNAvatarViewController, CNContact, CNContactFormatter, CNContactListBannerView, CNContactListStyleApplier, CNContactSuggestionsViewController, CNUIContactsEnvironment, CNVCardImportController, NSArray, NSObject, NSSet, NSString, TPKContent, TPKContentController, UISearchBar, UISearchController, UIView, _UIContentUnavailableView;
@protocol CNCancelable, CNContactDataSource, CNContactListViewControllerDelegate, CNHealthStoreManagerToken;

@interface CNContactListViewController : UITableViewController <CNAvatarCardControllerDelegate, CNContactDataSourceDelegate, UISearchControllerDelegate, UISearchResultsUpdating, UISearchBarDelegate, CNContactListBannerViewDelegate, CNContactViewControllerDelegate, UIGestureRecognizerDelegate, CNUIObjectViewControllerDelegate, UITableViewDragSourceDelegate, UITableViewDragDestinationDelegate, CNVCardImportControllerPresentationDelegate, CNVCardImportControllerDelegate, CNAvatarViewControllerDelegate, CNContactSuggestionsViewControllerDelegate, TPKContentControllerDelegate>
{
    CNContact *_preferredForNameMeContact;	// 8 = 0x8
    _Bool _shouldDisplayMeContactBanner;	// 16 = 0x10
    _Bool _shouldAutoHideMeContactBanner;	// 17 = 0x11
    _Bool _allowsMultiSelection;	// 18 = 0x12
    _Bool _shouldDisplaySuggestionsController;	// 19 = 0x13
    _Bool _shouldDisplayTipContentView;	// 20 = 0x14
    _Bool _presentsSearchUI;	// 21 = 0x15
    _Bool _isHandlingSearch;	// 22 = 0x16
    _Bool _pendingSearchControllerActivation;	// 23 = 0x17
    _Bool _shouldUseLargeTitle;	// 24 = 0x18
    _Bool _pendingRefreshNoContactsView;	// 25 = 0x19
    _Bool _shouldDisplayGroupsGrid;	// 26 = 0x1a
    _Bool _shouldDisplayCount;	// 27 = 0x1b
    _Bool _shouldAllowDrags;	// 28 = 0x1c
    _Bool _shouldAllowDrops;	// 29 = 0x1d
    _Bool _shouldDisplayEmergencyContacts;	// 30 = 0x1e
    _Bool _shouldAllowSearchForMultiSelect;	// 31 = 0x1f
    _Bool _didDeleteContact;	// 32 = 0x20
    NSObject<CNContactDataSource> *_dataSource;	// 40 = 0x28
    _UIContentUnavailableView *_noContactsView;	// 48 = 0x30
    id <CNContactListViewControllerDelegate> _delegate;	// 56 = 0x38
    NSString *_meContactBannerFootnoteLabel;	// 64 = 0x40
    NSString *_meContactBannerFootnoteValue;	// 72 = 0x48
    CNContactFormatter *_contactFormatter;	// 80 = 0x50
    CNAvatarCardController *_cardController;	// 88 = 0x58
    UISearchController *_searchController;	// 96 = 0x60
    UISearchBar *_searchBar;	// 104 = 0x68
    CDUnknownBlockType _searchCompletionBlock;	// 112 = 0x70
    UIView *_tipContentView;	// 120 = 0x78
    TPKContentController *_tipContentController;	// 128 = 0x80
    TPKContent *_tipContent;	// 136 = 0x88
    CNContactSuggestionsViewController *_suggestionsController;	// 144 = 0x90
    double _suggestionsControllerHeight;	// 152 = 0x98
    CNContactListBannerView *_meContactBanner;	// 160 = 0xa0
    double _contentOffsetDueToMeContactBanner;	// 168 = 0xa8
    CNUIContactsEnvironment *_environment;	// 176 = 0xb0
    CNAvatarViewController *_meBannerAvatarController;	// 184 = 0xb8
    NSArray *_pendingLayoutBlocks;	// 192 = 0xc0
    NSArray *_tableViewHeaderConstraints;	// 200 = 0xc8
    NSString *_pendingSearchQuery;	// 208 = 0xd0
    CNVCardImportController *_vCardImportController;	// 216 = 0xd8
    NSSet *_emergencyContactIdentifiers;	// 224 = 0xe0
    id <CNHealthStoreManagerToken> _medicalIDLookupRegistrationToken;	// 232 = 0xe8
    id <CNCancelable> _medicalIDLookupToken;	// 240 = 0xf0
    CNContactListStyleApplier *_defaultContactListStyleApplier;	// 248 = 0xf8
    CNContactListViewController *_searchResultsController;	// 256 = 0x100
    CNContactListStyleApplier *_contactListStyleApplier;	// 264 = 0x108
    NSArray *_suggestionsIgnoredContactIdentifiers;	// 272 = 0x110
    NSArray *_suggestionsInteractionDomains;	// 280 = 0x118
    NSArray *_suggestedContacts;	// 288 = 0x120
    struct CGPoint _noContactsTableViewOffsetStash;	// 296 = 0x128
}

+ (id)emptyContact;	// IMP=0x00000000000ec408
+ (id)descriptorForRequiredKeysForPreferredForNameMeContact;	// IMP=0x00000000000ec3d8
- (void).cxx_destruct;	// IMP=0x00000000000e9a3a
@property(retain, nonatomic) NSArray *suggestedContacts; // @synthesize suggestedContacts=_suggestedContacts;
@property(retain, nonatomic) NSArray *suggestionsInteractionDomains; // @synthesize suggestionsInteractionDomains=_suggestionsInteractionDomains;
@property(retain, nonatomic) NSArray *suggestionsIgnoredContactIdentifiers; // @synthesize suggestionsIgnoredContactIdentifiers=_suggestionsIgnoredContactIdentifiers;
@property(nonatomic) _Bool didDeleteContact; // @synthesize didDeleteContact=_didDeleteContact;
@property(nonatomic) _Bool shouldAllowSearchForMultiSelect; // @synthesize shouldAllowSearchForMultiSelect=_shouldAllowSearchForMultiSelect;
@property(retain, nonatomic) CNContactListStyleApplier *contactListStyleApplier; // @synthesize contactListStyleApplier=_contactListStyleApplier;
@property(nonatomic) _Bool shouldDisplayEmergencyContacts; // @synthesize shouldDisplayEmergencyContacts=_shouldDisplayEmergencyContacts;
@property(nonatomic) _Bool shouldAllowDrops; // @synthesize shouldAllowDrops=_shouldAllowDrops;
@property(nonatomic) _Bool shouldAllowDrags; // @synthesize shouldAllowDrags=_shouldAllowDrags;
@property(nonatomic) _Bool shouldDisplayCount; // @synthesize shouldDisplayCount=_shouldDisplayCount;
@property(nonatomic) _Bool shouldDisplayGroupsGrid; // @synthesize shouldDisplayGroupsGrid=_shouldDisplayGroupsGrid;
@property(retain, nonatomic) CNContactListViewController *searchResultsController; // @synthesize searchResultsController=_searchResultsController;
@property(nonatomic) _Bool pendingRefreshNoContactsView; // @synthesize pendingRefreshNoContactsView=_pendingRefreshNoContactsView;
@property(retain, nonatomic) CNContactListStyleApplier *defaultContactListStyleApplier; // @synthesize defaultContactListStyleApplier=_defaultContactListStyleApplier;
@property(retain, nonatomic) id <CNCancelable> medicalIDLookupToken; // @synthesize medicalIDLookupToken=_medicalIDLookupToken;
@property(retain, nonatomic) id <CNHealthStoreManagerToken> medicalIDLookupRegistrationToken; // @synthesize medicalIDLookupRegistrationToken=_medicalIDLookupRegistrationToken;
@property(retain, nonatomic) NSSet *emergencyContactIdentifiers; // @synthesize emergencyContactIdentifiers=_emergencyContactIdentifiers;
@property(readonly, nonatomic) _Bool shouldUseLargeTitle; // @synthesize shouldUseLargeTitle=_shouldUseLargeTitle;
@property(retain, nonatomic) CNVCardImportController *vCardImportController; // @synthesize vCardImportController=_vCardImportController;
@property(nonatomic) _Bool pendingSearchControllerActivation; // @synthesize pendingSearchControllerActivation=_pendingSearchControllerActivation;
@property(retain, nonatomic) NSString *pendingSearchQuery; // @synthesize pendingSearchQuery=_pendingSearchQuery;
@property(retain, nonatomic) NSArray *tableViewHeaderConstraints; // @synthesize tableViewHeaderConstraints=_tableViewHeaderConstraints;
@property(retain, nonatomic) NSArray *pendingLayoutBlocks; // @synthesize pendingLayoutBlocks=_pendingLayoutBlocks;
@property(retain, nonatomic) CNAvatarViewController *meBannerAvatarController; // @synthesize meBannerAvatarController=_meBannerAvatarController;
@property(readonly, nonatomic) CNUIContactsEnvironment *environment; // @synthesize environment=_environment;
@property(nonatomic) _Bool isHandlingSearch; // @synthesize isHandlingSearch=_isHandlingSearch;
@property(readonly, nonatomic) _Bool presentsSearchUI; // @synthesize presentsSearchUI=_presentsSearchUI;
@property(nonatomic) struct CGPoint noContactsTableViewOffsetStash; // @synthesize noContactsTableViewOffsetStash=_noContactsTableViewOffsetStash;
@property(readonly, nonatomic) double contentOffsetDueToMeContactBanner; // @synthesize contentOffsetDueToMeContactBanner=_contentOffsetDueToMeContactBanner;
@property(retain, nonatomic) CNContactListBannerView *meContactBanner; // @synthesize meContactBanner=_meContactBanner;
@property(nonatomic) double suggestionsControllerHeight; // @synthesize suggestionsControllerHeight=_suggestionsControllerHeight;
@property(retain, nonatomic) CNContactSuggestionsViewController *suggestionsController; // @synthesize suggestionsController=_suggestionsController;
@property(retain, nonatomic) TPKContent *tipContent; // @synthesize tipContent=_tipContent;
@property(retain, nonatomic) TPKContentController *tipContentController; // @synthesize tipContentController=_tipContentController;
@property(retain, nonatomic) UIView *tipContentView; // @synthesize tipContentView=_tipContentView;
@property(nonatomic) _Bool shouldDisplayTipContentView; // @synthesize shouldDisplayTipContentView=_shouldDisplayTipContentView;
@property(copy, nonatomic) CDUnknownBlockType searchCompletionBlock; // @synthesize searchCompletionBlock=_searchCompletionBlock;
@property(retain, nonatomic) UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) UISearchController *searchController; // @synthesize searchController=_searchController;
@property(retain, nonatomic) CNAvatarCardController *cardController; // @synthesize cardController=_cardController;
@property(nonatomic) _Bool shouldDisplaySuggestionsController; // @synthesize shouldDisplaySuggestionsController=_shouldDisplaySuggestionsController;
@property(nonatomic) _Bool allowsMultiSelection; // @synthesize allowsMultiSelection=_allowsMultiSelection;
@property(retain, nonatomic) CNContactFormatter *contactFormatter; // @synthesize contactFormatter=_contactFormatter;
@property(copy, nonatomic) NSString *meContactBannerFootnoteValue; // @synthesize meContactBannerFootnoteValue=_meContactBannerFootnoteValue;
@property(copy, nonatomic) NSString *meContactBannerFootnoteLabel; // @synthesize meContactBannerFootnoteLabel=_meContactBannerFootnoteLabel;
@property(nonatomic) _Bool shouldAutoHideMeContactBanner; // @synthesize shouldAutoHideMeContactBanner=_shouldAutoHideMeContactBanner;
@property(nonatomic) __weak id <CNContactListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getVisibleIndexPaths;	// IMP=0x00000000000e9298
- (void)startHandlingEmergencyContacts;	// IMP=0x00000000000e903a
- (void)vCardImportControllerDidCompleteQueue:(id)arg1;	// IMP=0x00000000000e9026
- (void)vCardImportController:(id)arg1 didSaveContacts:(id)arg2;	// IMP=0x00000000000e8f4e
- (void)vCardImportController:(id)arg1 presentViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00000000000e8ed3
- (id)_tableView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3;	// IMP=0x00000000000e8ea0
- (_Bool)_tableView:(id)arg1 canHandleDropSession:(id)arg2;	// IMP=0x00000000000e8e84
- (void)_tableView:(id)arg1 performDropWithCoordinator:(id)arg2;	// IMP=0x00000000000e8b95
- (id)dragItemsForIndexPath:(id)arg1;	// IMP=0x00000000000e8a9d
- (id)_tableView:(id)arg1 itemsForAddingToDragSession:(id)arg2 atIndexPath:(id)arg3 point:(struct CGPoint)arg4;	// IMP=0x00000000000e8a88
- (id)_tableView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00000000000e8a73
- (void)contentController:(id)arg1 contentViewNeedsLayout:(id)arg2;	// IMP=0x00000000000e8a02
- (void)contentController:(id)arg1 didFinishWithContent:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00000000000e88fe
- (void)contentController:(id)arg1 contentDidBecomeAvailable:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00000000000e87ea
- (void)checkForInfoContentWithContext:(id)arg1;	// IMP=0x00000000000e8755
- (void)startSearchingForString:(id)arg1;	// IMP=0x00000000000e857b
- (void)startSearching;	// IMP=0x00000000000e8562
- (void)cancelSearch:(id)arg1;	// IMP=0x00000000000e84e4
- (void)beginSearch:(id)arg1;	// IMP=0x00000000000e8396
- (id)hostingViewControllerForController:(id)arg1;	// IMP=0x00000000000e838d
- (void)didUpdateContentForAvatarViewController:(id)arg1;	// IMP=0x00000000000e831e
- (void)bannerView:(id)arg1 wasSelectedToPresentMeContact:(id)arg2;	// IMP=0x00000000000e80ab
- (void)suggestionsController:(id)arg1 didChangeToHeight:(double)arg2;	// IMP=0x00000000000e807d
- (id)ignoredContactIdentifiersForSuggestionsController:(id)arg1;	// IMP=0x00000000000e8036
- (void)suggestionsController:(id)arg1 didSelectContact:(id)arg2;	// IMP=0x00000000000e7fc1
- (_Bool)suggestionsController:(id)arg1 shouldSelectContact:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00000000000e7ed7
- (_Bool)suggestionsController:(id)arg1 canSelectContact:(id)arg2;	// IMP=0x00000000000e7e39
@property(nonatomic) _Bool shouldDisplayMeContactBanner; // @synthesize shouldDisplayMeContactBanner=_shouldDisplayMeContactBanner;
- (void)refreshTableViewHeaderWithSize:(struct CGSize)arg1;	// IMP=0x00000000000e6901
- (void)refreshTableViewHeader;	// IMP=0x00000000000e687b
- (void)refreshTableViewHeaderIfVisibleWithSize:(struct CGSize)arg1;	// IMP=0x00000000000e67cc
- (void)refreshTableViewHeaderIfVisible;	// IMP=0x00000000000e6746
@property(readonly, nonatomic) CNContact *preferredForNameMeContact;
- (void)tableView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x00000000000e6521
- (void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2;	// IMP=0x00000000000e645e
- (void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2;	// IMP=0x00000000000e639b
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;	// IMP=0x00000000000e62d8
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000000e6106
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000000e60b3
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x00000000000e5fbe
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x00000000000e5fa9
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;	// IMP=0x00000000000e5e17
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x00000000000e5d65
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x00000000000e5b7f
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;	// IMP=0x00000000000e5b39
- (id)tableView:(id)arg1 indexPathForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;	// IMP=0x00000000000e5b31
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;	// IMP=0x00000000000e5ab2
- (id)sectionIndexTitlesForTableView:(id)arg1;	// IMP=0x00000000000e5a05
- (_Bool)isContactWithIdentifierEmergencyContact:(id)arg1;	// IMP=0x00000000000e58ed
- (_Bool)isContactWithIdentifierMeContactOrLinkedToMeContact:(id)arg1;	// IMP=0x00000000000e56b5
- (_Bool)canSelectContactAtIndexPath:(id)arg1;	// IMP=0x00000000000e55eb
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x00000000000e54ed
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000000e5100
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000000e5039
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x00000000000e4f9e
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000000000e4f12
- (id)_contactAtIndexPath:(id)arg1;	// IMP=0x00000000000e4d45
- (id)_sections;	// IMP=0x00000000000e4d28
- (void)contactDataSourceMeContactDidChange:(id)arg1;	// IMP=0x00000000000e4cf0
- (void)contactDataSourceDidChangeDisplayName:(id)arg1;	// IMP=0x00000000000e4c7b
- (void)contactDataSourceDidChange:(id)arg1;	// IMP=0x00000000000e4b78
- (void)performDelayedRefreshNoContactsView;	// IMP=0x00000000000e4b07
- (void)refreshNoContactsViewIfVisible;	// IMP=0x00000000000e4aa3
- (_Bool)refreshNoContactsViewIfNeeded;	// IMP=0x00000000000e4517
- (_Bool)canShowNoContactsView;	// IMP=0x00000000000e41eb
- (_Bool)hasNoContacts;	// IMP=0x00000000000e415f
@property(readonly, nonatomic) _UIContentUnavailableView *noContactsView; // @synthesize noContactsView=_noContactsView;
- (void)avatarCardControllerWillBeginPreviewInteraction:(id)arg1;	// IMP=0x00000000000e3fbd
- (long long)avatarCardController:(id)arg1 presentationResultForLocation:(struct CGPoint)arg2;	// IMP=0x00000000000e3c39
- (id)presentingViewControllerForAvatarCardController:(id)arg1;	// IMP=0x00000000000e3c30
- (void)didDismissSearchController:(id)arg1;	// IMP=0x00000000000e3a69
- (void)willDismissSearchController:(id)arg1;	// IMP=0x00000000000e39b4
- (void)updateSearchResultsForSearchController:(id)arg1;	// IMP=0x00000000000e3653
- (void)searchBarCancelButtonClicked:(id)arg1;	// IMP=0x00000000000e35d0
- (void)didPresentSearchController:(id)arg1;	// IMP=0x00000000000e34a4
- (void)willPresentSearchController:(id)arg1;	// IMP=0x00000000000e3349
@property(readonly, nonatomic) NSString *currentSearchString;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000000e31a7
- (void)searchForString:(id)arg1 animated:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000e3064
@property(readonly, nonatomic, getter=isSearching) _Bool searching;
- (void)_searchBarDidEndEditing:(id)arg1;	// IMP=0x00000000000e2f4c
- (void)contentSizeCategoryDidChange:(id)arg1;	// IMP=0x00000000000e2ed8
- (void)_applicationEnteringForeground:(id)arg1;	// IMP=0x00000000000e2ebd
- (void)contactStoreDidChangeWithNotification:(id)arg1;	// IMP=0x00000000000e2e0a
- (void)_updateCountStringNow:(_Bool)arg1;	// IMP=0x00000000000e2c12
- (void)_contactCountTelemetry:(unsigned long long)arg1;	// IMP=0x00000000000e2b46
- (void)reloadContacts;	// IMP=0x00000000000e2b29
- (void)selectRowAtIndexPath:(id)arg1 animated:(_Bool)arg2 scrollPosition:(long long)arg3;	// IMP=0x00000000000e29ab
- (void)scrollToRowAtIndexPath:(id)arg1 animated:(_Bool)arg2 scrollPosition:(long long)arg3;	// IMP=0x00000000000e285f
- (_Bool)selectContact:(id)arg1 animated:(_Bool)arg2 scrollPosition:(long long)arg3;	// IMP=0x00000000000e27d5
- (void)scrollTopToContactWithIdentifier:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000e2654
- (void)setCellStateSelectedForContact:(id)arg1;	// IMP=0x00000000000e25c3
- (_Bool)isValidIndexPath:(id)arg1;	// IMP=0x00000000000e23df
@property(readonly, nonatomic) NSArray *selectedContacts;
- (void)setupForMultiSelection;	// IMP=0x00000000000e2097
- (void)adjustTableViewOffsetForIncomingSearchUI;	// IMP=0x00000000000e1e30
- (void)disableSearchUI;	// IMP=0x00000000000e1d70
- (void)performWhenSearchCompleted:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e1d06
- (void)performWhenViewIsLaidOut:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e1c43
- (void)applyStyle;	// IMP=0x00000000000e1909
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000000000e17d9
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000000e164f
- (void)viewDidLayoutSubviews;	// IMP=0x00000000000e1461
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000000e13c9
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000e1201
- (void)configureNavigationBarForLargeTitles;	// IMP=0x00000000000e1170
- (void)viewDidLoad;	// IMP=0x00000000000e09e8
- (void)_updateTableViewRowHeight;	// IMP=0x00000000000e081b
- (void)loadView;	// IMP=0x00000000000e05e1
@property(readonly, nonatomic) CNContactListViewController *visibleListViewController;
- (id)createTableView;	// IMP=0x00000000000e0515
- (id)contactStore;	// IMP=0x00000000000e047e
@property(readonly, nonatomic) id <CNContactDataSource> originalDataSource;
@property(retain, nonatomic) NSObject<CNContactDataSource> *dataSource; // @synthesize dataSource=_dataSource;
- (_Bool)canBecomeFirstResponder;	// IMP=0x00000000000e0250
- (void)dealloc;	// IMP=0x00000000000e0199
- (id)initWithStyle:(long long)arg1;	// IMP=0x00000000000e0183
- (id)initWithDataSource:(id)arg1 environment:(id)arg2 shouldUseLargeTitle:(_Bool)arg3;	// IMP=0x00000000000e0166
- (id)initWithDataSource:(id)arg1 shouldUseLargeTitle:(_Bool)arg2;	// IMP=0x00000000000e00e0
- (id)initWithDataSource:(id)arg1 searchable:(_Bool)arg2 environment:(id)arg3 shouldUseLargeTitle:(_Bool)arg4;	// IMP=0x00000000000dfd96

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
