//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthUI/HKViewController.h>

#import <HealthRecordsUI/UITableViewDataSource-Protocol.h>
#import <HealthRecordsUI/UITableViewDelegate-Protocol.h>

@class HKClinicalAccount, HRProfile, NSArray, NSString, UIButton, UITableView, UIView, WDClinicalAccountOnboardingSession, _TtC15HealthRecordsUI26HealthRecordsNotifications;

__attribute__((visibility("hidden")))
@interface WDClinicalAccountEducationViewController : HKViewController <UITableViewDataSource, UITableViewDelegate>
{
    _Bool _promptForDataCollection;	// 8 = 0x8
    CDUnknownBlockType _completionBlock;	// 16 = 0x10
    WDClinicalAccountOnboardingSession *_onboardingSession;	// 24 = 0x18
    HKClinicalAccount *_account;	// 32 = 0x20
    NSArray *_sections;	// 40 = 0x28
    UIButton *_nextButton;	// 48 = 0x30
    UITableView *_tableView;	// 56 = 0x38
    UIView *_footerView;	// 64 = 0x40
    _TtC15HealthRecordsUI26HealthRecordsNotifications *_notificationsManager;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000000114dd
@property(retain, nonatomic) _TtC15HealthRecordsUI26HealthRecordsNotifications *notificationsManager; // @synthesize notificationsManager=_notificationsManager;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIButton *nextButton; // @synthesize nextButton=_nextButton;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(nonatomic) _Bool promptForDataCollection; // @synthesize promptForDataCollection=_promptForDataCollection;
@property(readonly, copy, nonatomic) HKClinicalAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) WDClinicalAccountOnboardingSession *onboardingSession; // @synthesize onboardingSession=_onboardingSession;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (_Bool)tableView:(id)arg1 shouldDrawBottomSeparatorForSection:(long long)arg2;	// IMP=0x00000000000113b3
- (_Bool)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2;	// IMP=0x00000000000113a3
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000000111b0
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000001113c
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;	// IMP=0x0000000000011134
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;	// IMP=0x000000000001112b
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;	// IMP=0x0000000000011123
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x000000000001111b
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x0000000000011112
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x000000000001110a
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000000000110ff
- (void)_navigationAction:(id)arg1;	// IMP=0x0000000000010fe8
- (void)_computeSections;	// IMP=0x0000000000010e19
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000010ccc
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000010c8b
- (void)viewDidLoad;	// IMP=0x00000000000109da
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x00000000000109cf
- (void)_setupConstraints;	// IMP=0x000000000000fffb
- (void)_setupSubviews;	// IMP=0x000000000000fc92
- (void)loadView;	// IMP=0x000000000000fb0b
- (void)updateNextButton;	// IMP=0x000000000000f9fb
- (void)fetchShouldPromptForDataCollection;	// IMP=0x000000000000f813
- (_Bool)_shouldProceedToSharingToProviderOnboarding;	// IMP=0x000000000000f7d1
@property(readonly, nonatomic) HRProfile *profile;
- (id)initWithOnboardingSession:(id)arg1 account:(id)arg2;	// IMP=0x000000000000f6d9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
