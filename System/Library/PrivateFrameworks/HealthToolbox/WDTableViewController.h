//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthUI/HKTableViewController.h>

#import <HealthToolbox/WDTableViewSectionDelegate-Protocol.h>

@class NSArray, NSString, UITableView, WDProfile;

@interface WDTableViewController : HKTableViewController <WDTableViewSectionDelegate>
{
    NSArray *_tableSections;	// 8 = 0x8
    WDProfile *_profile;	// 16 = 0x10
}

+ (id)tableViewSectionClasses;	// IMP=0x000000000000cc5c
- (void).cxx_destruct;	// IMP=0x000000000000dc16
@property(retain, nonatomic) WDProfile *profile; // @synthesize profile=_profile;
@property(readonly, nonatomic) NSArray *tableSections; // @synthesize tableSections=_tableSections;
- (void)sectionAddedChildViewController:(id)arg1;	// IMP=0x000000000000dbce
- (void)pushViewController:(id)arg1;	// IMP=0x000000000000db57
- (void)reloadSection:(unsigned long long)arg1 animated:(_Bool)arg2;	// IMP=0x000000000000da67
- (id)indexPathForCell:(id)arg1;	// IMP=0x000000000000d9e4
- (id)_sectionAtIndexPath:(id)arg1;	// IMP=0x000000000000d9a8
- (id)_section:(long long)arg1;	// IMP=0x000000000000d98b
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000000d788
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000000d68d
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;	// IMP=0x000000000000d608
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x000000000000d5f7
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;	// IMP=0x000000000000d569
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;	// IMP=0x000000000000d4e0
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;	// IMP=0x000000000000d48d
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x000000000000d43a
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000000000d41d
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000000d368
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000000d321
- (void)reloadTable;	// IMP=0x000000000000d2e4
- (void)viewDidLoad;	// IMP=0x000000000000d028
- (void)applicationDidEnterBackground;	// IMP=0x000000000000cef8
- (void)applicationWillEnterForeground;	// IMP=0x000000000000cdc8
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000000cc69
- (void)dealloc;	// IMP=0x000000000000cbe7
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000cb9b
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000000cb4f
- (id)initWithStyle:(long long)arg1;	// IMP=0x000000000000cb03
- (void)_addObservers;	// IMP=0x000000000000ca7a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UITableView *tableView;

@end

