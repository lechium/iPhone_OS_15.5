//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowEditor/WFTriggerConfigurationViewController.h>

#import <WorkflowUI/UITableViewDataSource-Protocol.h>
#import <WorkflowUI/UITableViewDelegate-Protocol.h>
#import <WorkflowUI/WFTriggerMultiSelectCellDelegate-Protocol.h>

@class NSArray, NSString, UITableView;

@interface WFCarPlayConnectionTriggerConfigurationViewController : WFTriggerConfigurationViewController <UITableViewDelegate, UITableViewDataSource, WFTriggerMultiSelectCellDelegate>
{
    UITableView *_tableView;	// 8 = 0x8
    NSArray *_sections;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000197375
@property(readonly, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void)cell:(id)arg1 didSelectOptionWithLeftViewSelected:(_Bool)arg2 rightViewSelected:(_Bool)arg3;	// IMP=0x00000000001972b8
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x000000000019720c
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x000000000019710f
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000196cd1
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000196cc6
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000000196c82
- (id)infoForSection:(long long)arg1;	// IMP=0x0000000000196c23
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000196bb9
- (void)loadView;	// IMP=0x000000000019692b
- (void)updateUI;	// IMP=0x00000000001968ee
- (id)initWithTrigger:(id)arg1 mode:(unsigned long long)arg2;	// IMP=0x0000000000196611

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
