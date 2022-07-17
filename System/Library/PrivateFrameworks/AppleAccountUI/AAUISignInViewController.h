//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <AppleAccountUI/AKAppleIDAuthenticationInAppContextPasswordDelegate-Protocol.h>
#import <AppleAccountUI/RemoteUIControllerDelegate-Protocol.h>
#import <AppleAccountUI/UITableViewDataSource-Protocol.h>
#import <AppleAccountUI/UITableViewDelegate-Protocol.h>
#import <AppleAccountUI/UITextFieldDelegate-Protocol.h>

@class AAUIBuddyView, AAUIHeaderView, NSArray, NSString, UILabel, UITableView, UITableViewCell, UITableViewHeaderFooterView;
@protocol AAUISignInViewControllerDelegate;

@interface AAUISignInViewController : UIViewController <AKAppleIDAuthenticationInAppContextPasswordDelegate, RemoteUIControllerDelegate, UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate>
{
    UITableView *_tableView;	// 8 = 0x8
    UITableViewCell *_usernameCell;	// 16 = 0x10
    UITableViewCell *_passwordCell;	// 24 = 0x18
    UITableViewHeaderFooterView *_tableHeaderView;	// 32 = 0x20
    AAUIHeaderView *_accountsHeaderView;	// 40 = 0x28
    UITableViewHeaderFooterView *_tableFooterView;	// 48 = 0x30
    NSArray *_compactConstraints;	// 56 = 0x38
    NSArray *_expandedConstraints;	// 64 = 0x40
    CDUnknownBlockType _passwordHandler;	// 72 = 0x48
    _Bool _shouldAnticipatePiggybacking;	// 80 = 0x50
    _Bool _allowsAccountCreation;	// 81 = 0x51
    _Bool _showServiceIcons;	// 82 = 0x52
    _Bool _canEditUsername;	// 83 = 0x53
    _Bool _showingPasswordCell;	// 84 = 0x54
    long long _akServiceType;	// 88 = 0x58
    id <AAUISignInViewControllerDelegate> _delegate;	// 96 = 0x60
    NSString *_username;	// 104 = 0x68
    NSArray *_privacyLinkIdentifiers;	// 112 = 0x70
}

+ (void)phoneNumberSupportedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000001028b
- (void).cxx_destruct;	// IMP=0x00000000000166a8
@property(nonatomic) _Bool showingPasswordCell; // @synthesize showingPasswordCell=_showingPasswordCell;
@property(copy, nonatomic) NSArray *privacyLinkIdentifiers; // @synthesize privacyLinkIdentifiers=_privacyLinkIdentifiers;
@property(nonatomic) _Bool canEditUsername; // @synthesize canEditUsername=_canEditUsername;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(nonatomic) _Bool showServiceIcons; // @synthesize showServiceIcons=_showServiceIcons;
@property(nonatomic) _Bool allowsAccountCreation; // @synthesize allowsAccountCreation=_allowsAccountCreation;
@property(nonatomic) __weak id <AAUISignInViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, setter=_setShouldAnticipatePiggybacking:) _Bool _shouldAnticipatePiggybacking; // @synthesize _shouldAnticipatePiggybacking;
@property(nonatomic, setter=_setAkServiceType:) long long _akServiceType; // @synthesize _akServiceType;
- (void)_updateConstraintsForTraitCollection:(id)arg1;	// IMP=0x00000000000164fb
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000001640f
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;	// IMP=0x0000000000016308
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x00000000000162d5
- (_Bool)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2;	// IMP=0x00000000000162cd
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;	// IMP=0x0000000000016294
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x000000000001625b
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x00000000000161f8
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x000000000001617a
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000001600c
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000015fda
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000000015fcf
- (_Bool)remoteUIController:(id)arg1 shouldLoadRequest:(id)arg2 redirectResponse:(id)arg3;	// IMP=0x0000000000015e82
- (void)context:(id)arg1 needsPasswordWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000015e2d
- (void)_delegate_signInViewControllerDidCancel;	// IMP=0x0000000000015d9d
- (void)_delegate_signInViewControllerDidCompleteWithAuthenticationResults:(id)arg1;	// IMP=0x0000000000015cf3
- (void)sizeCategoryDidChange:(id)arg1;	// IMP=0x0000000000015be9
- (void)_endObservingSizeCategoryNotification;	// IMP=0x0000000000015b89
- (void)_beginObservingSizeCategoryNotification;	// IMP=0x0000000000015b22
- (void)_updateContentInsetWithHeight:(double)arg1;	// IMP=0x00000000000158e2
- (void)_keyboardWillHide:(id)arg1;	// IMP=0x0000000000015798
- (void)_keyboardWillShow:(id)arg1;	// IMP=0x0000000000015498
- (void)_endObservingKeyboardWillShowNotifications;	// IMP=0x00000000000153b3
- (void)_beginObservingKeyboardWillShowNotifications;	// IMP=0x00000000000152b9
- (void)_textFieldDidChange:(id)arg1;	// IMP=0x00000000000151a9
- (void)_endObservingTextFieldDidChangeNotifications;	// IMP=0x0000000000015149
- (void)_beginObservingTextFieldDidChangeNotifications;	// IMP=0x00000000000150e2
- (id)_passwordFieldIndexPath;	// IMP=0x00000000000150c2
- (void)_setUsernameCellWaiting:(_Bool)arg1;	// IMP=0x0000000000014ff4
- (void)_setPasswordFieldHidden:(_Bool)arg1;	// IMP=0x0000000000014c6c
- (void)_cancelPasswordDelegateIfNecessary;	// IMP=0x0000000000014be2
- (id)_authorizationValueForAuthenticationResults:(id)arg1;	// IMP=0x0000000000014a4f
- (_Bool)_showOnlyPassword;	// IMP=0x00000000000149d1
- (void)_repairCloudAccountWithAuthenticationResults:(id)arg1;	// IMP=0x00000000000145e8
- (void)_attemptAuthenticationWithContext:(id)arg1;	// IMP=0x0000000000014107
- (void)_attemptAuthentication;	// IMP=0x0000000000013e5e
- (void)_prewarmSignInFlowIfApplicable;	// IMP=0x0000000000013e10
- (void)_presentForgotAppleIDPane;	// IMP=0x0000000000013d4b
- (void)_presentCreateAppleIDPane;	// IMP=0x0000000000013c86
- (void)_actionButtonSelected:(id)arg1;	// IMP=0x00000000000137e4
- (void)_nextButtonSelected:(id)arg1;	// IMP=0x00000000000137b6
- (void)_cancelButtonSelected:(id)arg1;	// IMP=0x00000000000137a4
- (void)_setEnabled:(_Bool)arg1;	// IMP=0x0000000000013617
- (_Bool)_isRunningInSettings;	// IMP=0x000000000001359b
- (id)_stringForFooter;	// IMP=0x00000000000134fb
- (_Bool)_isGreenTeaCapable;	// IMP=0x00000000000134ea
- (_Bool)_isPasswordFieldVisible;	// IMP=0x00000000000134b7
- (_Bool)_hasValidCredentials;	// IMP=0x000000000001343a
- (void)constrainView:(id)arg1 toFillHeaderFooterView:(id)arg2;	// IMP=0x0000000000013002
- (id)_tableFooterView;	// IMP=0x00000000000124ac
- (id)_passwordCell;	// IMP=0x0000000000012037
- (id)_usernameCell;	// IMP=0x0000000000011a4f
- (id)_tableView;	// IMP=0x00000000000118d1
- (id)_accountsHeaderView;	// IMP=0x00000000000115fb
- (id)_tableHeaderView;	// IMP=0x0000000000011557
- (id)_nextBarButtonItem;	// IMP=0x0000000000011491
- (id)_cancelBarButtonItem;	// IMP=0x000000000001144f
@property(readonly, nonatomic) UILabel *messageLabel;
@property(readonly, nonatomic) UILabel *titleLabel;
- (id)authenticationContext;	// IMP=0x0000000000011152
- (void)dealloc;	// IMP=0x00000000000110f2
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000000001108f
- (void)viewDidLayoutSubviews;	// IMP=0x0000000000010fd4
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000010e26
- (void)viewDidLoad;	// IMP=0x0000000000010606
- (void)loadView;	// IMP=0x0000000000010599
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000010555
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000010441

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) AAUIBuddyView *view; // @dynamic view;

@end
