//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthUI/HKTableViewController.h>

@class MISSING_TYPE;

@interface _TtC15HealthRecordsUI28FilterSettingsViewController : HKTableViewController
{
    MISSING_TYPE *delegate;	// 8 = 0x8
    MISSING_TYPE *categories;	// 16 = 0x10
    MISSING_TYPE *selectedCategories;	// 24 = 0x18
    MISSING_TYPE *accounts;	// 32 = 0x20
    MISSING_TYPE *selectedAccounts;	// 40 = 0x28
    MISSING_TYPE *defaultCellIdentifier;	// 48 = 0x30
    MISSING_TYPE *defaultHeaderIdentifier;	// 64 = 0x40
    MISSING_TYPE *defaultSectionContentInset;	// 80 = 0x50
    MISSING_TYPE *defaultSectionCornerRadius;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000000db590
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000000db530
- (id)initWithStyle:(long long)arg1;	// IMP=0x00000000000db460
- (id)initWithUsingInsetStyling:(_Bool)arg1;	// IMP=0x00000000000db3d0
- (void)doneButtonTapped;	// IMP=0x00000000000db340
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;	// IMP=0x00000000000da930
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x00000000000da920
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000000da860
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000000da6f0
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000000d9990
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x00000000000d9920
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000000000d9690
- (void)viewDidLoad;	// IMP=0x00000000000d9660
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000d8ec0
- (id)initWithDelegate:(id)arg1 selectedCategories:(id)arg2 selectedAccounts:(id)arg3;	// IMP=0x00000000000d8e40

@end

