//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

#import <CoreAudioKit/BTLEConnectionTable-Protocol.h>
#import <CoreAudioKit/UITableViewDataSource-Protocol.h>
#import <CoreAudioKit/UITableViewDelegate-Protocol.h>

@class AMSBTLEConnectionManager, NSMutableArray, NSString, NSTimer, UIActivityIndicatorView, UIBarButtonItem;

@interface CABTMIDICentralViewController : UITableViewController <UITableViewDelegate, UITableViewDataSource, BTLEConnectionTable>
{
    NSMutableArray *peripheralList;	// 8 = 0x8
    AMSBTLEConnectionManager *connectionManager;	// 16 = 0x10
    UIActivityIndicatorView *indicator;	// 24 = 0x18
    _Bool didCleanup;	// 32 = 0x20
    _Bool inEditingMode;	// 33 = 0x21
    NSTimer *connectionTimer;	// 40 = 0x28
    UIBarButtonItem *previousLeftItem;	// 48 = 0x30
    UIBarButtonItem *previousRightItem;	// 56 = 0x38
    UIBarButtonItem *editButton;	// 64 = 0x40
    UIBarButtonItem *cancelButton;	// 72 = 0x48
    UIBarButtonItem *forgetButton;	// 80 = 0x50
}

- (void)forgetAction:(id)arg1;	// IMP=0x000000000000f4fd
- (void)cancelAction:(id)arg1;	// IMP=0x000000000000f4e4
- (void)editAction:(id)arg1;	// IMP=0x000000000000f4c8
- (void)updateButtonsToMatchTableState;	// IMP=0x000000000000f19c
- (void)centralTimerFired:(id)arg1;	// IMP=0x000000000000f10e
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000000000f0c6
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;	// IMP=0x000000000000f053
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x000000000000ef89
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;	// IMP=0x000000000000ef6b
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000000edba
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000000ed6f
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x000000000000ecf4
- (void)setUIEnabled:(_Bool)arg1;	// IMP=0x000000000000ecee
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;	// IMP=0x000000000000ece0
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000000ec11
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;	// IMP=0x000000000000ebee
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000000e79f
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;	// IMP=0x000000000000e719
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x000000000000e6f2
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000000e6d3
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000000000e6c8
- (id)title;	// IMP=0x000000000000e6a1
- (id)peripheralAtIndex:(unsigned long long)arg1;	// IMP=0x000000000000e684
- (unsigned long long)peripheralCount;	// IMP=0x000000000000e667
- (void)updatePeripheralTable;	// IMP=0x000000000000e5dc
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000000e584
- (void)loadView;	// IMP=0x000000000000e482
- (void)didReceiveMemoryWarning;	// IMP=0x000000000000e3f7
- (void)cleanup;	// IMP=0x000000000000e2e1
- (void)viewDidLoad;	// IMP=0x000000000000dfb2
- (void)dealloc;	// IMP=0x000000000000df74
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000000df45

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
