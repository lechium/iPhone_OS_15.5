//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

#import <WorkflowUI/UITableViewDataSource-Protocol.h>
#import <WorkflowUI/UITableViewDelegate-Protocol.h>

@class NSArray, NSString, WFTriggerManager;
@protocol WFAutomationSelectTypeViewControllerDelegate;

@interface WFAutomationSelectTypeViewController : UITableViewController <UITableViewDataSource, UITableViewDelegate>
{
    id <WFAutomationSelectTypeViewControllerDelegate> _delegate;	// 8 = 0x8
    WFTriggerManager *_triggerManager;	// 16 = 0x10
    NSArray *_tableContent;	// 24 = 0x18
    NSArray *_availableFocusModes;	// 32 = 0x20
}

+ (id)allKnownTriggersSortedAsInUI;	// IMP=0x00000000001a16ff
- (void).cxx_destruct;	// IMP=0x00000000001a1699
@property(retain, nonatomic) NSArray *availableFocusModes; // @synthesize availableFocusModes=_availableFocusModes;
@property(readonly, nonatomic) NSArray *tableContent; // @synthesize tableContent=_tableContent;
@property(readonly, nonatomic) WFTriggerManager *triggerManager; // @synthesize triggerManager=_triggerManager;
@property(nonatomic) __weak id <WFAutomationSelectTypeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)buildTableContent;	// IMP=0x00000000001a140a
- (id)allTriggerTypeGroups;	// IMP=0x00000000001a0eb7
- (id)triggerForIndexPath:(id)arg1;	// IMP=0x00000000001a0d62
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x00000000001a0cbf
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000001a0c4b
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000001a0b48
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000001a0a7c
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000000001a0a38
- (void)viewDidLoad;	// IMP=0x00000000001a0912
- (id)initWithTriggerManager:(id)arg1;	// IMP=0x00000000001a07fa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

