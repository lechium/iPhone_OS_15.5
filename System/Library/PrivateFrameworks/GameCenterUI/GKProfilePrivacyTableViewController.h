//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class GKLocalPlayer, NSMutableArray;
@protocol GKProfilePrivacyTableViewControllerDelegate;

@interface GKProfilePrivacyTableViewController : UITableViewController
{
    _Bool _isSendingRequest;	// 8 = 0x8
    int _currentPrivacySettings;	// 12 = 0xc
    int _initialPrivacySettings;	// 16 = 0x10
    GKLocalPlayer *_localPlayer;	// 24 = 0x18
    id <GKProfilePrivacyTableViewControllerDelegate> _delegate;	// 32 = 0x20
    NSMutableArray *_availblePrivacySettings;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000004eab6
@property(nonatomic) _Bool isSendingRequest; // @synthesize isSendingRequest=_isSendingRequest;
@property(retain, nonatomic) NSMutableArray *availblePrivacySettings; // @synthesize availblePrivacySettings=_availblePrivacySettings;
@property(nonatomic) int initialPrivacySettings; // @synthesize initialPrivacySettings=_initialPrivacySettings;
@property(nonatomic) int currentPrivacySettings; // @synthesize currentPrivacySettings=_currentPrivacySettings;
@property(nonatomic) __weak id <GKProfilePrivacyTableViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) GKLocalPlayer *localPlayer; // @synthesize localPlayer=_localPlayer;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000004e4b7
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x000000000004e4a2
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000004e1dc
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000004e1bf
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000000004e1b4
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x000000000004e1a3
- (id)tableFooterForPrivacy:(int)arg1;	// IMP=0x000000000004dfcc
- (id)titleForPrivacy:(int)arg1;	// IMP=0x000000000004df3b
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000004defa
- (void)updateTableViewLayoutMargins;	// IMP=0x000000000004dd48
- (void)viewDidLoad;	// IMP=0x000000000004d9bf

@end

