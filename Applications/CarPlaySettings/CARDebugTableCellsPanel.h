//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CARSettingsCellSpecifier, NSLayoutConstraint, NSString, UITableView, UITableViewHeaderFooterView, UIView;

@interface CARDebugTableCellsPanel
{
    CARSettingsCellSpecifier *_cellSpecifier;	// 8 = 0x8
    UITableView *_tableView;	// 16 = 0x10
    UITableViewHeaderFooterView *_headerView;	// 24 = 0x18
    UIView *_headerPlatter;	// 32 = 0x20
    NSLayoutConstraint *_platterLeftConstraint;	// 40 = 0x28
    NSLayoutConstraint *_platterRightConstraint;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000006427
@property(retain, nonatomic) NSLayoutConstraint *platterRightConstraint; // @synthesize platterRightConstraint=_platterRightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *platterLeftConstraint; // @synthesize platterLeftConstraint=_platterLeftConstraint;
@property(retain, nonatomic) UIView *headerPlatter; // @synthesize headerPlatter=_headerPlatter;
@property(retain, nonatomic) UITableViewHeaderFooterView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00100000000062e9
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00100000000062de
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x00100000000062b6
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00100000000062ab
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x001000000000604b
- (void)viewDidLoad;	// IMP=0x0010000000005b24
- (id)initWithPanelController:(id)arg1;	// IMP=0x0010000000005af5
- (id)cellSpecifier;	// IMP=0x001000000000599e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
