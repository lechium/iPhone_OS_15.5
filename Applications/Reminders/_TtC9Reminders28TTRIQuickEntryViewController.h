//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class MISSING_TYPE, NSUndoManager, UIBarButtonItem, UITableView;

@interface _TtC9Reminders28TTRIQuickEntryViewController : UIViewController
{
    MISSING_TYPE *tableView;	// 8 = 0x8
    MISSING_TYPE *cancelButton;	// 16 = 0x10
    MISSING_TYPE *commitButton;	// 24 = 0x18
    MISSING_TYPE *presenter;	// 32 = 0x20
    MISSING_TYPE *tableDataController;	// 48 = 0x30
    MISSING_TYPE *localUndoManager;	// 56 = 0x38
    MISSING_TYPE *currentTextInputModeObserver;	// 64 = 0x40
    MISSING_TYPE *currentTextInputModeCancellable;	// 72 = 0x48
    MISSING_TYPE *startsEditingTitleOnAppearance;	// 80 = 0x50
    MISSING_TYPE *needsTableCellResize;	// 81 = 0x51
    MISSING_TYPE *$__lazy_storage_$_titleCell;	// 88 = 0x58
    MISSING_TYPE *$__lazy_storage_$_suggestionGroup;	// 96 = 0x60
    MISSING_TYPE *$__lazy_storage_$_notesCell;	// 104 = 0x68
    MISSING_TYPE *$__lazy_storage_$_detailsCell;	// 112 = 0x70
    MISSING_TYPE *$__lazy_storage_$_listCell;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x00400000003d43c0
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00100000003d4360
- (void)didTapCommit:(id)arg1;	// IMP=0x00100000003d2cb0
- (void)didTapCancel:(id)arg1;	// IMP=0x00100000003d2c20
@property(nonatomic) __weak UIBarButtonItem *commitButton; // @synthesize commitButton;
@property(nonatomic) __weak UIBarButtonItem *cancelButton; // @synthesize cancelButton;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView;
- (void)viewWillLayoutSubviews;	// IMP=0x00100000003d2b30
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00100000003d2900
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00100000003d28d0
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000003d2890
- (void)viewDidLoad;	// IMP=0x00100000003d2510
@property(nonatomic, readonly) _Bool canBecomeFirstResponder;
@property(nonatomic, readonly) NSUndoManager *undoManager;
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000003d17d0

@end

