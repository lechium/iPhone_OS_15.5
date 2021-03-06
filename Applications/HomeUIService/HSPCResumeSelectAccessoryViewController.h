//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProxCardKit/PRXCardContentViewController.h>

@class HSProxCardCoordinator, HSSetupStateMachineConfiguration, NSArray, NSMutableSet, NSString, PRXAction, UITableView, UIViewController;

@interface HSPCResumeSelectAccessoryViewController : PRXCardContentViewController
{
    HSSetupStateMachineConfiguration *_config;	// 8 = 0x8
    HSProxCardCoordinator *_coordinator;	// 16 = 0x10
    UITableView *_tableView;	// 24 = 0x18
    PRXAction *_continueAction;	// 32 = 0x20
    NSArray *_accessoriesPendingConfiguration;	// 40 = 0x28
    NSMutableSet *_selectedAccessories;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000039dd5
@property(retain, nonatomic) NSMutableSet *selectedAccessories; // @synthesize selectedAccessories=_selectedAccessories;
@property(retain, nonatomic) NSArray *accessoriesPendingConfiguration; // @synthesize accessoriesPendingConfiguration=_accessoriesPendingConfiguration;
@property(retain, nonatomic) PRXAction *continueAction; // @synthesize continueAction=_continueAction;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain) HSProxCardCoordinator *coordinator; // @synthesize coordinator=_coordinator;
@property(retain) HSSetupStateMachineConfiguration *config; // @synthesize config=_config;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0010000000039bb1
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0010000000039b6d
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0010000000039b62
- (id)tableView:(id)arg1 willDeselectRowAtIndexPath:(id)arg2;	// IMP=0x00100000000399de
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;	// IMP=0x001000000003985d
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000039675
- (void)viewDidLoad;	// IMP=0x0010000000039646
- (id)commitConfiguration;	// IMP=0x00100000000394ad
- (id)initWithCoordinator:(id)arg1 config:(id)arg2;	// IMP=0x0010000000038f04

// Remaining properties
@property(retain, nonatomic) UIViewController *contentVC;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

