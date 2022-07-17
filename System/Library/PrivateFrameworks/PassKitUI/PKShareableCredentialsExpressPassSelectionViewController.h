//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSIndexPath, PKGroupsController, PKSecureElementPass, PKTableHeaderView;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKShareableCredentialsExpressPassSelectionViewController
{
    NSArray *_passes;	// 8 = 0x8
    PKGroupsController *_groupsController;	// 16 = 0x10
    _Bool _hasSetDefault;	// 24 = 0x18
    PKTableHeaderView *_tableHeader;	// 32 = 0x20
    double _cachedHeaderViewWidth;	// 40 = 0x28
    NSIndexPath *_previouslySelectedIndexPath;	// 48 = 0x30
    PKSecureElementPass *_previouslySelectedPass;	// 56 = 0x38
    id <PKPaymentSetupViewControllerDelegate> _delegate;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000160768
- (void)_enableView:(_Bool)arg1;	// IMP=0x00000000001606aa
- (void)_done;	// IMP=0x00000000001604ca
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000160365
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000016006d
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000160050
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000000160045
- (_Bool)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2;	// IMP=0x000000000016003d
- (void)viewWillLayoutSubviews;	// IMP=0x000000000015feae
- (void)viewDidLoad;	// IMP=0x000000000015fa8e
- (id)initWithPasses:(id)arg1 groupsController:(id)arg2 context:(long long)arg3 delegate:(id)arg4;	// IMP=0x000000000015f938

@end
