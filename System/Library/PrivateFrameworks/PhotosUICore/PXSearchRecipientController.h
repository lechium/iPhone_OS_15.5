//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/CNAutocompleteResultsTableViewControllerDelegate-Protocol.h>
#import <PhotosUICore/PXSectionedDataSourceManagerObserver-Protocol.h>

@class CNAutocompleteResultsTableViewController, CNComposeRecipient, CNContactViewController, NSString, PXRecipientSearchDataSource, PXRecipientSearchDataSourceManager, UIView;
@protocol PXSearchRecipientControllerDelegate;

@interface PXSearchRecipientController : NSObject <CNAutocompleteResultsTableViewControllerDelegate, PXSectionedDataSourceManagerObserver>
{
    struct {
        _Bool didSelectRecipient;
        _Bool searchStateDidChange;
        _Bool numberOfSearchRecipientsDidChange;
    } _delegateRespondsTo;	// 8 = 0x8
    id <PXSearchRecipientControllerDelegate> _delegate;	// 16 = 0x10
    PXRecipientSearchDataSourceManager *_searchDataSourceManager;	// 24 = 0x18
    long long _searchState;	// 32 = 0x20
    unsigned long long _numberOfSearchRecipients;	// 40 = 0x28
    PXRecipientSearchDataSource *__searchDataSource;	// 48 = 0x30
    CNAutocompleteResultsTableViewController *__searchResultsTableViewController;	// 56 = 0x38
    CNComposeRecipient *_suggestedRecipientBeingViewed;	// 64 = 0x40
    CNContactViewController *__contactViewController;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000093c04
@property(nonatomic) __weak CNContactViewController *_contactViewController; // @synthesize _contactViewController=__contactViewController;
@property(retain, nonatomic) CNComposeRecipient *suggestedRecipientBeingViewed; // @synthesize suggestedRecipientBeingViewed=_suggestedRecipientBeingViewed;
@property(readonly, nonatomic) CNAutocompleteResultsTableViewController *_searchResultsTableViewController; // @synthesize _searchResultsTableViewController=__searchResultsTableViewController;
@property(retain, nonatomic, setter=_setSearchDataSource:) PXRecipientSearchDataSource *_searchDataSource; // @synthesize _searchDataSource=__searchDataSource;
@property(nonatomic) unsigned long long numberOfSearchRecipients; // @synthesize numberOfSearchRecipients=_numberOfSearchRecipients;
@property(nonatomic) long long searchState; // @synthesize searchState=_searchState;
@property(readonly, nonatomic) PXRecipientSearchDataSourceManager *searchDataSourceManager; // @synthesize searchDataSourceManager=_searchDataSourceManager;
@property(nonatomic) __weak id <PXSearchRecipientControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x0000000000093a64
- (void)_removeRecent;	// IMP=0x0000000000093729
- (id)_contactViewControllerForRecipient:(id)arg1;	// IMP=0x00000000000934dc
- (void)autocompleteResultsController:(id)arg1 didRequestInfoAboutRecipient:(id)arg2;	// IMP=0x00000000000932ec
- (void)autocompleteResultsController:(id)arg1 tintColorForRecipient:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000930e6
- (void)autocompleteResultsController:(id)arg1 didSelectRecipient:(id)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x0000000000092ff7
- (id)_validationTextColorForSearchResult:(id)arg1;	// IMP=0x0000000000092fad
- (void)disambiguateRecipient:(id)arg1;	// IMP=0x0000000000092d59
@property(readonly, nonatomic) _Bool _searchHasNoResultsFound;
@property(readonly, nonatomic) UIView *searchResultsView;
- (id)init;	// IMP=0x0000000000092863

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
