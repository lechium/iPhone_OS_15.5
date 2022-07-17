//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSListController.h>

#import <VideosUI/UITableViewDataSource-Protocol.h>
#import <VideosUI/UITextFieldDelegate-Protocol.h>

@class NSString, NSURL, PSSpecifier, UITextField;

__attribute__((visibility("hidden")))
@interface VUIAccountSettingsViewController : PSListController <UITableViewDataSource, UITextFieldDelegate>
{
    _Bool _authenticationInProgress;	// 192 = 0xc0
    long long _watchListAppsCount;	// 200 = 0xc8
    PSSpecifier *_credentialsAppleIDSpecifier;	// 208 = 0xd0
    PSSpecifier *_credentialsPasswordSpecifier;	// 216 = 0xd8
    PSSpecifier *_signInSpecifier;	// 224 = 0xe0
    PSSpecifier *_createAccountSpecifier;	// 232 = 0xe8
    UITextField *_credentialsAppleIDTextField;	// 240 = 0xf0
    UITextField *_credentialsPasswordTextField;	// 248 = 0xf8
    NSURL *_addFundsUrl;	// 256 = 0x100
}

- (void).cxx_destruct;	// IMP=0x00000000000c79b6
@property(retain, nonatomic) NSURL *addFundsUrl; // @synthesize addFundsUrl=_addFundsUrl;
@property(retain, nonatomic) UITextField *credentialsPasswordTextField; // @synthesize credentialsPasswordTextField=_credentialsPasswordTextField;
@property(retain, nonatomic) UITextField *credentialsAppleIDTextField; // @synthesize credentialsAppleIDTextField=_credentialsAppleIDTextField;
@property(retain, nonatomic) PSSpecifier *createAccountSpecifier; // @synthesize createAccountSpecifier=_createAccountSpecifier;
@property(retain, nonatomic) PSSpecifier *signInSpecifier; // @synthesize signInSpecifier=_signInSpecifier;
@property(retain, nonatomic) PSSpecifier *credentialsPasswordSpecifier; // @synthesize credentialsPasswordSpecifier=_credentialsPasswordSpecifier;
@property(retain, nonatomic) PSSpecifier *credentialsAppleIDSpecifier; // @synthesize credentialsAppleIDSpecifier=_credentialsAppleIDSpecifier;
@property(nonatomic) long long watchListAppsCount; // @synthesize watchListAppsCount=_watchListAppsCount;
@property(nonatomic) _Bool authenticationInProgress; // @synthesize authenticationInProgress=_authenticationInProgress;
- (void)_dismissViewController;	// IMP=0x00000000000c75f1
- (long long)_alertStyle;	// IMP=0x00000000000c756d
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x00000000000c7548
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;	// IMP=0x00000000000c72c3
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000000c7017
- (void)_recordDialogClick:(id)arg1;	// IMP=0x00000000000c6f4b
- (id)_dialogMetricsData;	// IMP=0x00000000000c6ec0
- (id)_getConnectedAppsCountString;	// IMP=0x00000000000c6e90
- (void)_checkExternalLinksWithDispatchGroup:(id)arg1;	// IMP=0x00000000000c6a3d
- (void)_checkConnectedAppsWithDispatchGroup:(id)arg1;	// IMP=0x00000000000c670c
- (void)_loadDynamicIdentifiers;	// IMP=0x00000000000c6609
- (void)_openiForgotAppleURL;	// IMP=0x00000000000c64d3
- (void)_clearPlayHistory:(id)arg1;	// IMP=0x00000000000c5fc0
- (void)_didSelectSpecifier:(id)arg1;	// IMP=0x00000000000c4fab
- (id)_createAccountSpecifiers;	// IMP=0x00000000000c4d5c
- (id)_signInSpecifiers;	// IMP=0x00000000000c49f3
- (id)_credentialsSpecifiers;	// IMP=0x00000000000c4678
- (id)_signOutSpecifiers;	// IMP=0x00000000000c44ba
- (id)_clearHistorySpecifiers;	// IMP=0x00000000000c42cd
- (id)_externalSpecifiers;	// IMP=0x00000000000c3e34
- (id)_sourcesSpecifiers;	// IMP=0x00000000000c3c7d
- (id)_accountSpecifiers;	// IMP=0x00000000000c388a
- (void)viewDidLoad;	// IMP=0x00000000000c34c3
- (id)specifiers;	// IMP=0x00000000000c32c9
- (id)init;	// IMP=0x00000000000c327b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
