//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AccountsUI/ACUIDataclassConfigurationViewController.h>

@class DAAccount;

@interface DASettingsDataclassConfigurationViewController : ACUIDataclassConfigurationViewController
{
    DAAccount *_daAccount;	// 192 = 0xc0
    _Bool _haveRegisteredForAccountsChanged;	// 200 = 0xc8
}

- (void).cxx_destruct;	// IMP=0x0000000000002921
@property(retain, nonatomic) DAAccount *daAccount; // @synthesize daAccount=_daAccount;
- (void)cancelButtonClicked:(id)arg1;	// IMP=0x00000000000028bf
- (void)operationsHelper:(id)arg1 didRemoveAccount:(id)arg2 withSuccess:(_Bool)arg3 error:(id)arg4;	// IMP=0x00000000000027e8
- (_Bool)shouldVerifyBeforeAccountSave;	// IMP=0x00000000000027e0
- (Class)accountInfoControllerClass;	// IMP=0x000000000000273a
- (id)otherSpecifiers;	// IMP=0x000000000000255c
- (id)specifiers;	// IMP=0x000000000000250f
- (void)_accountsChanged:(id)arg1;	// IMP=0x00000000000024e1
- (id)accountFromSpecifier;	// IMP=0x000000000000235d
- (void)reloadAccount;	// IMP=0x00000000000022b9
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000021cc
- (void)_listenForAccountsChangedNotifications;	// IMP=0x0000000000002149
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000000020b1
- (void)viewDidLoad;	// IMP=0x000000000000201e
- (void)loadView;	// IMP=0x0000000000001f8a
- (id)_navTitle;	// IMP=0x0000000000001efd
- (id)accountDescriptionForFirstTimeSetup;	// IMP=0x0000000000001ead
- (void)dealloc;	// IMP=0x0000000000001e2b

@end

