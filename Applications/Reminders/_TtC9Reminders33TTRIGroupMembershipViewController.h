//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class MISSING_TYPE, NSUndoManager;

@interface _TtC9Reminders33TTRIGroupMembershipViewController : UITableViewController
{
    MISSING_TYPE *presenter;	// 8 = 0x8
    MISSING_TYPE *localUndoManager;	// 24 = 0x18
    MISSING_TYPE *viewModel;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x004000000002c3a0
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x001000000002c340
- (id)initWithStyle:(long long)arg1;	// IMP=0x001000000002c310
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;	// IMP=0x001000000002c220
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;	// IMP=0x001000000002c100
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;	// IMP=0x001000000002bdf0
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;	// IMP=0x001000000002bd30
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;	// IMP=0x001000000002bc30
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x001000000002bba0
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;	// IMP=0x001000000002ba90
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x001000000002b990
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x001000000002b8d0
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x001000000002b5f0
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x001000000002b590
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x001000000002b050
- (void)viewDidLoad;	// IMP=0x001000000002afb0
@property(nonatomic, readonly) NSUndoManager *undoManager;
@property(nonatomic, readonly) _Bool canBecomeFirstResponder;
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000002ac20

@end

