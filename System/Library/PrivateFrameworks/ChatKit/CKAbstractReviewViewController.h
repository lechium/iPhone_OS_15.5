//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSViewController.h>

#import <ChatKit/UITableViewDataSource-Protocol.h>
#import <ChatKit/UITableViewDelegate-Protocol.h>

@class NSString, UIBarButtonItem, UINavigationItem, UITableView, UIView;

__attribute__((visibility("hidden")))
@interface CKAbstractReviewViewController : PSViewController <UITableViewDataSource, UITableViewDelegate>
{
    UITableView *_tableView;	// 32 = 0x20
    UIView *_topLineView;	// 40 = 0x28
    UINavigationItem *_navItem;	// 48 = 0x30
    UIBarButtonItem *_cancelEditingBarButtonItem;	// 56 = 0x38
    UIBarButtonItem *_deleteBarButtonItem;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000080aa
@property(retain, nonatomic) UIBarButtonItem *deleteBarButtonItem; // @synthesize deleteBarButtonItem=_deleteBarButtonItem;
@property(retain, nonatomic) UIBarButtonItem *cancelEditingBarButtonItem; // @synthesize cancelEditingBarButtonItem=_cancelEditingBarButtonItem;
@property(retain, nonatomic) UINavigationItem *navItem; // @synthesize navItem=_navItem;
@property(retain, nonatomic) UIView *topLineView; // @synthesize topLineView=_topLineView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void)_updateNavigationItemState;	// IMP=0x0000000000007d03
- (void)_handleDelete;	// IMP=0x0000000000007978
- (void)_handleCancel;	// IMP=0x000000000000795f
- (void)_applicationDidBecomeActive:(id)arg1;	// IMP=0x000000000000788a
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000007811
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x0000000000007663
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000007579
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000000074ef
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000007460
- (id)navigationItem;	// IMP=0x000000000000744e
- (void)viewWillLayoutSubviews;	// IMP=0x0000000000007320
- (void)loadView;	// IMP=0x0000000000006e57
- (void)dealloc;	// IMP=0x0000000000006dbb
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000006d27

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
