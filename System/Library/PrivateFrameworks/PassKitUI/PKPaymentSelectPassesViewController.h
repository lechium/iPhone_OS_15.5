//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableArray, NSString, PKPeerPaymentAccount, PKTableHeaderView;
@protocol PKPaymentSelectPassesViewControllerDelegate;

@interface PKPaymentSelectPassesViewController
{
    PKTableHeaderView *_headerView;	// 8 = 0x8
    NSArray *_passes;	// 16 = 0x10
    NSMutableArray *_selectedIndexPaths;	// 24 = 0x18
    id <PKPaymentSelectPassesViewControllerDelegate> _delegate;	// 32 = 0x20
    PKPeerPaymentAccount *_peerPaymentAccount;	// 40 = 0x28
    _Bool _showCancelButton;	// 48 = 0x30
    unsigned long long _minimumSelectionCount;	// 56 = 0x38
    NSString *_buttonText;	// 64 = 0x40
    NSString *_headerTitle;	// 72 = 0x48
    NSString *_headerSubtitle;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000002524e1
@property(nonatomic) _Bool showCancelButton; // @synthesize showCancelButton=_showCancelButton;
@property(copy, nonatomic) NSString *headerSubtitle; // @synthesize headerSubtitle=_headerSubtitle;
@property(copy, nonatomic) NSString *headerTitle; // @synthesize headerTitle=_headerTitle;
@property(copy, nonatomic) NSString *buttonText; // @synthesize buttonText=_buttonText;
@property(nonatomic) unsigned long long minimumSelectionCount; // @synthesize minimumSelectionCount=_minimumSelectionCount;
- (void)_cancelPressed;	// IMP=0x0000000000252440
- (void)_setNavigationBarEnabled:(_Bool)arg1;	// IMP=0x0000000000252224
- (void)_setViewEnabledState:(_Bool)arg1;	// IMP=0x000000000025204a
- (void)_continuousButtonPressed;	// IMP=0x0000000000251d39
- (void)_setContinuousButtonEnabledState;	// IMP=0x0000000000251ca9
- (void)setHeaderViewTitle:(id)arg1 subtitle:(id)arg2;	// IMP=0x000000000025197c
- (id)headerView;	// IMP=0x000000000025172f
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000251617
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000251307
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000002511ca
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000002511ad
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000000002511a2
- (void)setPassSelectionCount:(unsigned long long)arg1;	// IMP=0x0000000000251185
- (void)viewDidLayoutSubviews;	// IMP=0x0000000000251082
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000251053
- (void)viewDidLoad;	// IMP=0x0000000000250f77
- (void)willMoveToParentViewController:(id)arg1;	// IMP=0x0000000000250f0c
- (id)initWithPaymentPasses:(id)arg1 context:(long long)arg2 delegate:(id)arg3 peerPaymentAccount:(id)arg4;	// IMP=0x0000000000250d49

@end

