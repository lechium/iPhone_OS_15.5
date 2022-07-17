//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <WorkflowUI/UITableViewDataSource-Protocol.h>
#import <WorkflowUI/UITableViewDelegate-Protocol.h>

@class NSArray, NSString, UITableView, WFConfiguredTriggerRecord, WFTrigger, WFWorkflow;
@protocol WFAutomationSummaryViewControllerDelegate;

@interface WFAutomationSummaryViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    id <WFAutomationSummaryViewControllerDelegate> _delegate;	// 8 = 0x8
    WFConfiguredTriggerRecord *_triggerRecord;	// 16 = 0x10
    NSString *_triggerIdentifier;	// 24 = 0x18
    WFTrigger *_trigger;	// 32 = 0x20
    WFWorkflow *_workflow;	// 40 = 0x28
    unsigned long long _mode;	// 48 = 0x30
    NSArray *_actionIcons;	// 56 = 0x38
    UITableView *_tableView;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000001aa71d
@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSArray *actionIcons; // @synthesize actionIcons=_actionIcons;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) WFWorkflow *workflow; // @synthesize workflow=_workflow;
@property(readonly, nonatomic) WFTrigger *trigger; // @synthesize trigger=_trigger;
@property(readonly, copy, nonatomic) NSString *triggerIdentifier; // @synthesize triggerIdentifier=_triggerIdentifier;
@property(readonly, nonatomic) WFConfiguredTriggerRecord *triggerRecord; // @synthesize triggerRecord=_triggerRecord;
@property(nonatomic) __weak id <WFAutomationSummaryViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didTapDone:(id)arg1;	// IMP=0x00000000001aa5cf
- (void)notifySwitchChanged:(id)arg1;	// IMP=0x00000000001aa570
- (void)reloadPromptingAndNotifySection;	// IMP=0x00000000001aa4a5
- (void)promptSwitchChanged:(id)arg1;	// IMP=0x00000000001aa218
- (void)enabledSwitchChanged:(id)arg1;	// IMP=0x00000000001aa1b9
- (void)testAutomation;	// IMP=0x00000000001aa106
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000001a9ea9
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x00000000001a9e2c
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000001a94ba
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000001a9442
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000000001a93fe
- (id)infoForSection:(long long)arg1;	// IMP=0x00000000001a939f
- (void)viewDidLoad;	// IMP=0x00000000001a935e
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000001a931d
- (void)loadActionDescriptionIcons;	// IMP=0x00000000001a91c5
- (void)loadView;	// IMP=0x00000000001a8dc9
- (_Bool)isModalInPresentation;	// IMP=0x00000000001a8dc1
- (void)updateUI;	// IMP=0x00000000001a8d84
- (id)sections;	// IMP=0x00000000001a845a
- (id)initWithTrigger:(id)arg1 triggerIdentifier:(id)arg2 workflow:(id)arg3 mode:(unsigned long long)arg4;	// IMP=0x00000000001a809f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
