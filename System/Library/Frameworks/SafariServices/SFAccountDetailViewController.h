//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

#import <SafariServices/ASAccountAuthenticationModificationControllerDelegate-Protocol.h>
#import <SafariServices/ASAccountAuthenticationModificationControllerPresentationContextProviding-Protocol.h>
#import <SafariServices/PSStateRestoration-Protocol.h>
#import <SafariServices/SFAccountOtpauthQRCodeScannerViewControllerDelegate-Protocol.h>
#import <SafariServices/SFSecurityRecommendationInfoCellDelegate-Protocol.h>
#import <SafariServices/UITextFieldDelegate-Protocol.h>
#import <SafariServices/_ASAccountAuthenticationModificationExtensionManagerObserver-Protocol.h>
#import <SafariServices/_SFTableViewDiffableDataSourceDelegate-Protocol.h>

@class ASAccountAuthenticationModificationController, NSArray, NSExtension, NSObject, NSString, NSTimer, SFAccountNoteTableViewCell, SFEditableTableViewCell, SFSafariViewController, SFSecurityRecommendationInfoCell, UIAlertController, UIBarButtonItem, UITableViewCell, UITableViewHeaderFooterView, WBSPasswordWarning, WBSSavedAccount, _SFTableViewDiffableDataSource;
@protocol OS_dispatch_queue, SFAccountDetailViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SFAccountDetailViewController : UITableViewController <_ASAccountAuthenticationModificationExtensionManagerObserver, ASAccountAuthenticationModificationControllerDelegate, ASAccountAuthenticationModificationControllerPresentationContextProviding, SFAccountOtpauthQRCodeScannerViewControllerDelegate, UITextFieldDelegate, _SFTableViewDiffableDataSourceDelegate, SFSecurityRecommendationInfoCellDelegate, PSStateRestoration>
{
    WBSSavedAccount *_savedAccount;	// 8 = 0x8
    unsigned long long _options;	// 16 = 0x10
    UIBarButtonItem *_editBarButtonItem;	// 24 = 0x18
    UIBarButtonItem *_shareBarButtonItem;	// 32 = 0x20
    UIBarButtonItem *_cancelBarButtonItem;	// 40 = 0x28
    UIBarButtonItem *_doneBarButtonItem;	// 48 = 0x30
    UIBarButtonItem *_backBarButtonItem;	// 56 = 0x38
    SFEditableTableViewCell *_userCell;	// 64 = 0x40
    SFEditableTableViewCell *_passwordCell;	// 72 = 0x48
    NSString *_userForEditing;	// 80 = 0x50
    NSString *_passwordForEditing;	// 88 = 0x58
    UITableViewCell *_changePasswordOnWebsiteCell;	// 96 = 0x60
    UITableViewCell *_setupTOTPCodeCell;	// 104 = 0x68
    UITableViewHeaderFooterView *_totpFooterView;	// 112 = 0x70
    SFAccountNoteTableViewCell *_notesCell;	// 120 = 0x78
    UITableViewCell *_addNotesCell;	// 128 = 0x80
    _Bool _shouldDiffableDataSourceShowEditingState;	// 136 = 0x88
    _Bool _didSelectAddNotesButton;	// 137 = 0x89
    _SFTableViewDiffableDataSource *_tableViewDiffableDataSource;	// 144 = 0x90
    NSObject<OS_dispatch_queue> *_diffableDataSourceQueue;	// 152 = 0x98
    SFSecurityRecommendationInfoCell *_securityRecommendationInfoCell;	// 160 = 0xa0
    WBSPasswordWarning *_passwordWarning;	// 168 = 0xa8
    SFSafariViewController *_changePasswordSafariViewController;	// 176 = 0xb0
    NSTimer *_TOTPTimer;	// 184 = 0xb8
    _Bool _didAcceptTOTPQRCode;	// 192 = 0xc0
    UIAlertController *_secretEntryAlertController;	// 200 = 0xc8
    NSArray *_TOTPGenerators;	// 208 = 0xd0
    UITableViewCell *_upgradeToSignInWithAppleCell;	// 216 = 0xd8
    UITableViewCell *_changeToStrongPasswordCell;	// 224 = 0xe0
    NSString *_rulesForStrongPasswordChange;	// 232 = 0xe8
    NSExtension *_accountModificationExtension;	// 240 = 0xf0
    _Bool _eligibleToChangeToStrongPassword;	// 248 = 0xf8
    _Bool _eligibleToUpgradeToSignInWithApple;	// 249 = 0xf9
    _Bool _completedUpgradeToStrongPassword;	// 250 = 0xfa
    _Bool _completedUpgradeToSignInWithApple;	// 251 = 0xfb
    ASAccountAuthenticationModificationController *_accountAuthenticationModificationController;	// 256 = 0x100
    _Bool _showPasswordAsBulletsWhenNotEditing;	// 264 = 0x108
    _Bool _didShowAccountOptionsHeaderText;	// 265 = 0x109
    long long _accountUpgradeOriginType;	// 272 = 0x110
    _Bool _showsChangePasswordControllerOnAppearance;	// 280 = 0x118
    id <SFAccountDetailViewControllerDelegate> _delegate;	// 288 = 0x120
}

- (void).cxx_destruct;	// IMP=0x0000000000028c26
@property(nonatomic) _Bool showsChangePasswordControllerOnAppearance; // @synthesize showsChangePasswordControllerOnAppearance=_showsChangePasswordControllerOnAppearance;
@property(nonatomic) __weak id <SFAccountDetailViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)securityRecommendationInfoCellHideButtonPressed:(id)arg1;	// IMP=0x0000000000028bc7
- (void)_hideSecurityRecommendation;	// IMP=0x0000000000028b0f
- (void)_presentHideSecurityRecommendationConfirmationAlert;	// IMP=0x00000000000287ee
- (void)QRCodeScannerViewController:(id)arg1 didScanQRCodeWithURLValue:(id)arg2;	// IMP=0x0000000000028558
- (_Bool)_shouldShowAccountOptionsHeader;	// IMP=0x00000000000284b1
- (void)_showConfirmationToDeleteCredentialTypes:(long long)arg1;	// IMP=0x0000000000028149
- (void)accountModificationExtensionManagerExtensionListDidChange:(id)arg1;	// IMP=0x0000000000027f24
- (id)presentationAnchorForAccountAuthenticationModificationController:(id)arg1;	// IMP=0x0000000000027ed4
- (void)accountAuthenticationModificationController:(id)arg1 didFailRequest:(id)arg2 withError:(id)arg3;	// IMP=0x0000000000027b12
- (void)_completedStrongPasswordUpgrade;	// IMP=0x0000000000027a83
- (void)_completedSignInWithAppleUpgrade;	// IMP=0x00000000000278c8
- (void)accountAuthenticationModificationController:(id)arg1 didSuccessfullyCompleteRequest:(id)arg2 withUserInfo:(id)arg3;	// IMP=0x0000000000027853
- (void)_initiateChangeToStrongPassword;	// IMP=0x000000000002771c
- (void)_initiateUpgradeToSignInWithApple;	// IMP=0x00000000000275e5
- (void)_updateAccountModificationOptions;	// IMP=0x0000000000027277
- (_Bool)_completedUpgrade;	// IMP=0x0000000000027254
- (_Bool)dataSource:(id)arg1 canEditRowAtIndexPath:(id)arg2;	// IMP=0x0000000000027121
- (void)dataSource:(id)arg1 commitEditingStyle:(long long)arg2 forItemIdentifier:(id)arg3;	// IMP=0x0000000000026cc4
- (id)dataSource:(id)arg1 footerTextForSection:(long long)arg2;	// IMP=0x0000000000026cac
- (id)dataSource:(id)arg1 headerTextForSection:(long long)arg2;	// IMP=0x0000000000026b78
- (void)_sharePasswordWithPopoverPresentationControllerConfiguration:(CDUnknownBlockType)arg1;	// IMP=0x0000000000026924
- (void)safari_sharePassword:(id)arg1;	// IMP=0x00000000000267fb
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x00000000000266b0
- (_Bool)canBecomeFirstResponder;	// IMP=0x00000000000266a8
- (void)_openURLInSafariViewController:(id)arg1 shouldSupressPasswordUpdatePrompts:(_Bool)arg2;	// IMP=0x00000000000265d0
- (void)_removeNotesSection;	// IMP=0x000000000002649c
- (void)_addNotesSection;	// IMP=0x0000000000026363
- (id)_totpFooterStringWithGenerator:(id)arg1 font:(id)arg2;	// IMP=0x0000000000026071
- (void)_deleteTOTPGeneratorWithConfirmation:(id)arg1;	// IMP=0x0000000000025a76
- (id)_newSecretEntryAlertController;	// IMP=0x0000000000025548
- (void)_updateCachedTOTPGenerators;	// IMP=0x00000000000254af
- (void)_deleteTOTPGenerator:(id)arg1;	// IMP=0x000000000002521d
- (void)_addTOTPGenerator:(id)arg1;	// IMP=0x0000000000025014
- (id)_formattedCodeFromGenerator:(id)arg1 font:(id)arg2;	// IMP=0x0000000000024dca
- (void)_updateTOTPCell:(id)arg1 generator:(id)arg2;	// IMP=0x0000000000024c35
- (void)_stopTOTPTimer;	// IMP=0x0000000000024bd9
- (void)_startTOTPTimerIfNeeded;	// IMP=0x000000000002467b
- (void)_updateWarningForSavedAccount;	// IMP=0x0000000000024532
- (id)_warningTitleForPassword;	// IMP=0x000000000002452a
- (void)_saveAccountAndFinishEditing;	// IMP=0x0000000000024306
- (long long)_itemTypeForIdentifier:(id)arg1;	// IMP=0x000000000002428f
- (long long)_sectionTypeForSection:(long long)arg1;	// IMP=0x00000000000241e9
- (id)_lastModifiedDateString;	// IMP=0x0000000000024053
- (void)_updateMenuItems;	// IMP=0x0000000000023e12
- (void)safari_copyOneTimeCode:(id)arg1;	// IMP=0x0000000000023cec
- (void)safari_copyWebsite:(id)arg1;	// IMP=0x0000000000023b71
- (void)safari_copyPassword:(id)arg1;	// IMP=0x0000000000023af3
- (void)safari_copyUserName:(id)arg1;	// IMP=0x0000000000023a75
- (void)_willHideUIMenuController:(id)arg1;	// IMP=0x00000000000239e4
- (void)_textFieldChanged:(id)arg1;	// IMP=0x00000000000235b1
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x0000000000023312
- (void)textFieldDidEndEditing:(id)arg1;	// IMP=0x000000000002319a
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;	// IMP=0x0000000000023023
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;	// IMP=0x0000000000022fbc
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000022f02
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000022ef1
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;	// IMP=0x0000000000022e55
- (void)_revealPasswordIfNecessary;	// IMP=0x0000000000022d9d
- (_Bool)_shouldShowMenuForItemIdentifier:(long long)arg1;	// IMP=0x0000000000022d80
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000002253a
- (_Bool)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;	// IMP=0x00000000000224cc
- (void)_configureHeaderViewCell:(id)arg1;	// IMP=0x0000000000022296
- (id)_deleteCellForTableView:(id)arg1;	// IMP=0x00000000000220fe
- (id)_savedAccountWebsiteCellForTableView:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x0000000000021d7f
- (void)_configureCell:(id)arg1 withText:(id)arg2 detailText:(id)arg3 detailPlaceholderText:(id)arg4 secureEntry:(_Bool)arg5;	// IMP=0x0000000000021c2b
- (void)_setHighLyLegibleFontForDetailTextInCell:(id)arg1;	// IMP=0x0000000000021aa1
- (void)_configurePasswordCell:(id)arg1;	// IMP=0x0000000000021847
- (id)_securePasswordPlaceholderText:(id)arg1;	// IMP=0x0000000000021808
- (void)_configureUserCell:(id)arg1;	// IMP=0x00000000000216b9
- (id)_editableCellWithCell:(id)arg1;	// IMP=0x00000000000216a3
- (id)_subtitleStringForStrongPasswordUpgrade;	// IMP=0x0000000000021650
- (id)_subtitleStringForSignInWithAppleUpgrade;	// IMP=0x00000000000215fd
- (id)_securityRecommendationSubtitleString;	// IMP=0x00000000000214db
- (void)_configureSecurityRecommendationInfoCell;	// IMP=0x000000000002111a
- (void)_addTOTPGeneratorsToSnapshot:(id)arg1;	// IMP=0x000000000002107f
- (void)_updateAddButtonsInAccountOptionsSectionForSnapshot:(id)arg1;	// IMP=0x0000000000020a75
- (void)_addAccountUpgradeItemsForSectionType:(long long)arg1 toSnapshot:(id)arg2;	// IMP=0x00000000000208cc
- (_Bool)_shouldShowSecurityRecommendationSection;	// IMP=0x0000000000020874
- (void)_reloadDiffableDataSourceAnimated:(_Bool)arg1;	// IMP=0x00000000000200f5
- (void)_reloadDiffableDataSourceOnInternalQueueAnimated:(_Bool)arg1;	// IMP=0x0000000000020083
- (id)_cellForIdentifier:(id)arg1 indexPath:(id)arg2;	// IMP=0x000000000001ecd8
- (void)dealloc;	// IMP=0x000000000001ec59
- (void)_setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000001e884
- (void)_shareBarButtonItemTapped:(id)arg1;	// IMP=0x000000000001e7da
- (void)_doneBarButtonItemTapped:(id)arg1;	// IMP=0x000000000001e7c8
- (void)_cancelBarButtonItemTapped:(id)arg1;	// IMP=0x000000000001e7b6
- (void)_cancelChangesAndFinishEditing;	// IMP=0x000000000001e5aa
- (void)_editBarButtonItemTapped:(id)arg1;	// IMP=0x000000000001e58e
- (void)_openChangePasswordURLInWebBrowser;	// IMP=0x000000000001e4a1
- (void)_showChangePasswordSafariViewController;	// IMP=0x000000000001e329
- (id)_changePasswordURL;	// IMP=0x000000000001e2a4
- (void)_accountStoreDidUpdate;	// IMP=0x000000000001dd36
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000001dcf5
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000000001dc80
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000001dc23
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000001d9aa
- (void)viewDidLoad;	// IMP=0x000000000001d71c
- (id)_passwordGenerator;	// IMP=0x000000000001d6ad
- (id)_passwordEvaluator;	// IMP=0x000000000001d65d
- (id)_passwordAuditor;	// IMP=0x000000000001d60d
- (id)_passwordWarningManager;	// IMP=0x000000000001d59e
- (_Bool)_allowAuditing;	// IMP=0x000000000001d58a
- (_Bool)_allowEditing;	// IMP=0x000000000001d578
- (_Bool)canBeShownFromSuspendedState;	// IMP=0x000000000001d570
- (id)initWithSavedAccount:(id)arg1 passwordWarning:(id)arg2 options:(unsigned long long)arg3;	// IMP=0x000000000001d039

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

