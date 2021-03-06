//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowEditor/WFActionSettingsViewController.h>

#import <WorkflowUI/UITableViewDataSource-Protocol.h>
#import <WorkflowUI/UITableViewDelegate-Protocol.h>

@class NSArray, NSString;

@interface WFAccessResourceActionSettingsViewController : WFActionSettingsViewController <UITableViewDataSource, UITableViewDelegate>
{
    NSArray *_accessResources;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001b6560
@property(readonly, nonatomic) NSArray *accessResources; // @synthesize accessResources=_accessResources;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000001b615d
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x00000000001b5fe4
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000001b5e02
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000001b5df7
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000000001b5db3
- (void)viewDidLoad;	// IMP=0x00000000001b5c95
- (void)loadView;	// IMP=0x00000000001b5be0
- (id)initWithAction:(id)arg1 definition:(id)arg2;	// IMP=0x00000000001b5a66

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

