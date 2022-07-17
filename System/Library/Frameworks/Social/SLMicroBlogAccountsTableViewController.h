//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class NSArray, SLMicroBlogUserRecord, UIImage;
@protocol SLMicroBlogAccountsTableViewControllerDelegate;

@interface SLMicroBlogAccountsTableViewController : UITableViewController
{
    NSArray *_accountUserRecords;	// 8 = 0x8
    SLMicroBlogUserRecord *_selectedAccountUserRecord;	// 16 = 0x10
    id <SLMicroBlogAccountsTableViewControllerDelegate> _selectionDelegate;	// 24 = 0x18
    UIImage *_blankImage;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000029455
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000029127
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x00000000000290ae
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000028e4d
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000028e30
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000000028e25
- (id)_accountUserRecordForIndexPath:(id)arg1;	// IMP=0x0000000000028de9
- (void)didUpdateAccountUserRecord:(id)arg1;	// IMP=0x0000000000028d02
- (void)setCurrentAccountUserRecord:(id)arg1;	// IMP=0x0000000000028cee
- (void)setAccountUserRecords:(id)arg1;	// IMP=0x0000000000028c2c
- (void)setSelectionDelegate:(id)arg1;	// IMP=0x0000000000028c18
- (void)cancelButtonTapped:(id)arg1;	// IMP=0x0000000000028bd1
- (void)viewDidLoad;	// IMP=0x0000000000028982
- (id)_blankImage;	// IMP=0x0000000000028919
- (id)initWithStyle:(long long)arg1;	// IMP=0x000000000002886a

@end
