//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthUI/HKTableViewController.h>

#import <HealthToolbox/HKSimpleDataEntryItemToolbarDelegate-Protocol.h>
#import <HealthToolbox/UITableViewDataSource-Protocol.h>
#import <HealthToolbox/UITableViewDelegate-Protocol.h>
#import <HealthToolbox/WDUserActivityResponder-Protocol.h>

@class HKHealthStore, HKTitledContactBuddyHeaderView, NSArray, NSString, WDBuddyFlowContinueFooterView, WDBuddyFlowUserInfo, WDProfile, WDUserDefaults, _HKMedicalIDData;
@protocol WDBuddyControllerUserInfoDelegate;

@interface WDBuddyFlowUserInfoViewController : HKTableViewController <UITableViewDataSource, UITableViewDelegate, WDUserActivityResponder, HKSimpleDataEntryItemToolbarDelegate>
{
    WDProfile *_profile;	// 8 = 0x8
    _Bool _isLastScreen;	// 16 = 0x10
    HKHealthStore *_healthStore;	// 24 = 0x18
    WDUserDefaults *_userDefaults;	// 32 = 0x20
    _HKMedicalIDData *_medicalIDData;	// 40 = 0x28
    HKTitledContactBuddyHeaderView *_headerView;	// 48 = 0x30
    WDBuddyFlowContinueFooterView *_footerView;	// 56 = 0x38
    _Bool _hasSetUpHeaderAndFooterViews;	// 64 = 0x40
    id <WDBuddyControllerUserInfoDelegate> _delegate;	// 72 = 0x48
    NSArray *_dataEntryItems;	// 80 = 0x50
    WDBuddyFlowUserInfo *_userInfo;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000000006fbeb
@property(retain, nonatomic) WDBuddyFlowUserInfo *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSArray *dataEntryItems; // @synthesize dataEntryItems=_dataEntryItems;
@property(nonatomic) __weak id <WDBuddyControllerUserInfoDelegate> delegate; // @synthesize delegate=_delegate;
- (id)applyTransitionActivity:(id)arg1;	// IMP=0x000000000006fb7c
- (void)applyChangeActivity:(id)arg1;	// IMP=0x000000000006fb76
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000006fabe
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000006fa09
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000006f9c5
- (void)focusItemAtIndex:(long long)arg1;	// IMP=0x000000000006f900
- (void)dataEntryItemNextPressed:(id)arg1;	// IMP=0x000000000006f8a2
- (void)dataEntryItemPrevPressed:(id)arg1;	// IMP=0x000000000006f850
- (void)dataEntryItemDonePressed:(id)arg1;	// IMP=0x000000000006f811
- (void)_localeDidChange:(id)arg1;	// IMP=0x000000000006f7ea
- (id)_createTableFooterView;	// IMP=0x000000000006f6dc
- (void)_configureHeaderView:(id)arg1;	// IMP=0x000000000006f56e
- (id)_createTableHeaderView;	// IMP=0x000000000006f2fa
- (void)_saveData;	// IMP=0x000000000006eef9
- (void)_loadData;	// IMP=0x000000000006ecb5
- (void)_updateForCurrentSizeCategory;	// IMP=0x000000000006eb58
- (void)setUpHeaderAndFooterViewsIfNeeded;	// IMP=0x000000000006ea55
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000006e90c
- (void)viewDidLoad;	// IMP=0x000000000006e7f6
- (void)continueButtonTapped:(id)arg1;	// IMP=0x000000000006e76b
- (void)_setupObservers;	// IMP=0x000000000006e56e
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000006e426
- (void)dealloc;	// IMP=0x000000000006e3b1
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x000000000006e3a6
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006e392
- (id)initWithStyle:(long long)arg1;	// IMP=0x000000000006e363
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000006e2e9
- (id)initWithProfile:(id)arg1 isLastScreen:(_Bool)arg2;	// IMP=0x000000000006e1cd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

