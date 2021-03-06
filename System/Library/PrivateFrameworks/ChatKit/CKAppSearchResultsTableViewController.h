//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

#import <ChatKit/UISearchResultsUpdating-Protocol.h>

@class NSArray, NSString;
@protocol CKBrowserAppManagerViewControllerDelegate;

@interface CKAppSearchResultsTableViewController : UITableViewController <UISearchResultsUpdating>
{
    NSArray *_allPlugins;	// 8 = 0x8
    id <CKBrowserAppManagerViewControllerDelegate> _delegate;	// 16 = 0x10
    NSArray *_searchResults;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001ea322
@property(retain, nonatomic) NSArray *searchResults; // @synthesize searchResults=_searchResults;
@property(nonatomic) __weak id <CKBrowserAppManagerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *allPlugins; // @synthesize allPlugins=_allPlugins;
- (void)updateSearchResultsForSearchController:(id)arg1;	// IMP=0x00000000001ea11f
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;	// IMP=0x00000000001ea117
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000001e9ee2
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000001e9e02
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000001e9dbe
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000000001e9db3
- (void)searchEnded;	// IMP=0x00000000001e9d64
- (void)viewDidLoad;	// IMP=0x00000000001e9c58

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

