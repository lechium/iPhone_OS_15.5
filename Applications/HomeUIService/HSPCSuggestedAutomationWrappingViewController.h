//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProxCardKit/PRXCardContentViewController.h>

@class HSPCSuggestedAutomationsViewController, HSProxCardCoordinator, HSSetupStateMachineConfiguration, NSString, UIViewController;

@interface HSPCSuggestedAutomationWrappingViewController : PRXCardContentViewController
{
    HSSetupStateMachineConfiguration *_config;	// 8 = 0x8
    HSProxCardCoordinator *_coordinator;	// 16 = 0x10
    HSPCSuggestedAutomationsViewController *_mvvmController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000013126
@property(retain, nonatomic) HSPCSuggestedAutomationsViewController *mvvmController; // @synthesize mvvmController=_mvvmController;
@property(retain) HSProxCardCoordinator *coordinator; // @synthesize coordinator=_coordinator;
@property(retain) HSSetupStateMachineConfiguration *config; // @synthesize config=_config;
- (id)shouldSkip;	// IMP=0x0010000000012ff8
- (id)hu_preloadContent;	// IMP=0x0010000000012fa8
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000012e83
- (void)viewDidLoad;	// IMP=0x0010000000012dd9
- (id)commitConfiguration;	// IMP=0x0010000000012d89
- (id)initWithCoordinator:(id)arg1 config:(id)arg2;	// IMP=0x0010000000012b9e

// Remaining properties
@property(retain, nonatomic) UIViewController *contentVC;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
