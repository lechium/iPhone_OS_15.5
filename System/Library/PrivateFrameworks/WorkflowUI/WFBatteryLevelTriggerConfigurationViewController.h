//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowEditor/WFTriggerConfigurationViewController.h>

#import <WorkflowUI/UITableViewDataSource-Protocol.h>
#import <WorkflowUI/UITableViewDelegate-Protocol.h>
#import <WorkflowUI/WFTriggerPercentageSliderCellDelegate-Protocol.h>

@class NSArray, NSString, UITableView;

@interface WFBatteryLevelTriggerConfigurationViewController : WFTriggerConfigurationViewController <WFTriggerPercentageSliderCellDelegate, UITableViewDataSource, UITableViewDelegate>
{
    UITableView *_tableView;	// 8 = 0x8
    NSArray *_sections;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000168549
@property(readonly, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (id)localizedTextForCellAtIndexPath:(id)arg1 value:(double)arg2;	// IMP=0x00000000001683d5
- (void)enableRowVisibilityFor:(id)arg1;	// IMP=0x0000000000168323
- (void)disableRowVisibilityFor:(id)arg1;	// IMP=0x00000000001681cd
- (void)updateCellLabelsWithValue:(double)arg1;	// IMP=0x0000000000167ecf
- (void)sliderValueChangedToValue:(double)arg1;	// IMP=0x0000000000167e41
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000167c1f
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x0000000000167bc5
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x0000000000167ac8
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000001675e2
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000016756a
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000000167526
- (id)infoForSection:(long long)arg1;	// IMP=0x00000000001674c7
- (void)loadView;	// IMP=0x0000000000167229
- (id)initWithTrigger:(id)arg1 mode:(unsigned long long)arg2;	// IMP=0x0000000000166e75

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
