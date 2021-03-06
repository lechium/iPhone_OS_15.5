//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariServices/ASAccountAuthenticationModificationControllerDelegate-Protocol.h>
#import <SafariServices/ASAccountAuthenticationModificationControllerPresentationContextProviding-Protocol.h>
#import <SafariServices/PSStateRestoration-Protocol.h>
#import <SafariServices/SFAccountDetailViewControllerDelegate-Protocol.h>
#import <SafariServices/SFActionableSecurityRecommendationDataDelegate-Protocol.h>
#import <SafariServices/SFPasswordBreachToggleCellDelegate-Protocol.h>
#import <SafariServices/_ASAccountAuthenticationModificationExtensionManagerObserver-Protocol.h>
#import <SafariServices/_SFTableLinkableFooterViewDelegate-Protocol.h>
#import <SafariServices/_SFTableViewDiffableDataSourceDelegate-Protocol.h>

@class ASAccountAuthenticationModificationController, NSArray, NSObject, NSString, SFActionableSecurityRecommendationData, SFSafariViewController, UIActivityIndicatorView, WBSAutoFillQuirksManager, WBSPasswordGenerationManager, WBSPasswordWarning, WBSPasswordWarningManager, WBSSavedAccount, WBSSavedAccountStore, _SFSiteMetadataManager, _SFTableLinkableFooterView, _SFTableViewDiffableDataSource;
@protocol OS_dispatch_queue, _SFPasswordAuditingViewControllerDelegate;

@interface _SFPasswordAuditingViewController <SFPasswordBreachToggleCellDelegate, SFActionableSecurityRecommendationDataDelegate, SFAccountDetailViewControllerDelegate, _SFTableViewDiffableDataSourceDelegate, _ASAccountAuthenticationModificationExtensionManagerObserver, ASAccountAuthenticationModificationControllerDelegate, ASAccountAuthenticationModificationControllerPresentationContextProviding, _SFTableLinkableFooterViewDelegate, PSStateRestoration>
{
    WBSAutoFillQuirksManager *_autoFillQuirksManager;	// 8 = 0x8
    WBSSavedAccountStore *_savedAccountStore;	// 16 = 0x10
    _SFTableViewDiffableDataSource *_tableViewDiffableDataSource;	// 24 = 0x18
    WBSPasswordWarningManager *_passwordWarningManager;	// 32 = 0x20
    NSArray *_highPriorityRecommendationData;	// 40 = 0x28
    NSArray *_flaggedPasswordData;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_diffableDataSourceQueue;	// 56 = 0x38
    unsigned long long _numberOfWarnings;	// 64 = 0x40
    UIActivityIndicatorView *_spinner;	// 72 = 0x48
    SFSafariViewController *_changePasswordOnWebsiteSafariViewController;	// 80 = 0x50
    SFActionableSecurityRecommendationData *_recommendationForMostRecentSafariViewController;	// 88 = 0x58
    unsigned long long _persona;	// 96 = 0x60
    WBSPasswordGenerationManager *_passwordGenerator;	// 104 = 0x68
    SFActionableSecurityRecommendationData *_passwordDataForCurrentUpgrade;	// 112 = 0x70
    ASAccountAuthenticationModificationController *_accountAuthenticationModificationController;	// 120 = 0x78
    _SFTableLinkableFooterView *_passwordBreachFooterView;	// 128 = 0x80
    WBSPasswordWarning *_warningHiddenInDetailView;	// 136 = 0x88
    _SFSiteMetadataManager *_siteMetadataManager;	// 144 = 0x90
    NSArray *_hiddenRecommendationData;	// 152 = 0x98
    id <_SFPasswordAuditingViewControllerDelegate> _delegate;	// 160 = 0xa0
    WBSSavedAccount *_savedAccountToRemoveAfterCompletedUpgradeInDetailView;	// 168 = 0xa8
}

+ (id)hiddenSecurityRecommendationsViewControllerWithWarningData:(id)arg1 siteMetadataManager:(id)arg2 passwordWarningManager:(id)arg3;	// IMP=0x00000000000e3fd1
+ (id)securityRecommendationsViewControllerWithSiteMetadataManager:(id)arg1 autoFillQuirksManager:(id)arg2 passwordWarningManager:(id)arg3;	// IMP=0x00000000000e3f44
- (void).cxx_destruct;	// IMP=0x00000000000eaaad
@property(retain, nonatomic) WBSSavedAccount *savedAccountToRemoveAfterCompletedUpgradeInDetailView; // @synthesize savedAccountToRemoveAfterCompletedUpgradeInDetailView=_savedAccountToRemoveAfterCompletedUpgradeInDetailView;
@property(nonatomic) __weak id <_SFPasswordAuditingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didSetPasswordBreachDetectionState:(_Bool)arg1;	// IMP=0x00000000000eaa56
- (id)presentationAnchorForAccountAuthenticationModificationController:(id)arg1;	// IMP=0x00000000000eaa06
- (void)accountAuthenticationModificationController:(id)arg1 didFailRequest:(id)arg2 withError:(id)arg3;	// IMP=0x00000000000ea63d
- (void)_completedStrongPasswordUpgrade;	// IMP=0x00000000000ea5e6
- (void)_completedSignInWithAppleUpgrade;	// IMP=0x00000000000ea501
- (void)accountAuthenticationModificationController:(id)arg1 didSuccessfullyCompleteRequest:(id)arg2 withUserInfo:(id)arg3;	// IMP=0x00000000000ea48c
- (void)accountModificationExtensionManagerExtensionListDidChange:(id)arg1;	// IMP=0x00000000000ea47a
- (void)_changePasswordOnWebsiteForActionableSecurityRecommendation:(id)arg1;	// IMP=0x00000000000ea29f
- (void)_initiateChangeToStrongPasswordForActionableSecurityRecommendation:(id)arg1;	// IMP=0x00000000000ea0c4
- (void)_upgradeToSignInWithAppleForActionableSecurityRecommendation:(id)arg1;	// IMP=0x00000000000e9ee9
- (void)_configureSecurityRecommendationInformationCell:(id)arg1 withActionableRecommendationData:(id)arg2;	// IMP=0x00000000000e9a75
- (void)linkableFooterViewDidInteractWithLink:(id)arg1;	// IMP=0x00000000000e9a0e
- (id)_passwordBreachFooterTextForDeviceClass:(int)arg1;	// IMP=0x00000000000e99c3
- (id)_passwordBreachFooterView;	// IMP=0x00000000000e988c
- (id)_passwordBreachToggleCell;	// IMP=0x00000000000e974b
- (id)_hiddenSecurityRecommendationsCell;	// IMP=0x00000000000e95ee
- (id)_standardRecommendationCellWithPasswordCellData:(id)arg1;	// IMP=0x00000000000e9164
- (id)_warningStringForPasswordCellData:(id)arg1;	// IMP=0x00000000000e9111
- (void)_resetHiddenSecurityRecommendations;	// IMP=0x00000000000e8fdb
- (id)_resetHiddenSecurityRecommendationsCell;	// IMP=0x00000000000e8e8d
- (void)_removeHideMarkerForWarning:(id)arg1;	// IMP=0x00000000000e8acf
- (void)_removeHideWarningMarkerForSavedAccount:(id)arg1;	// IMP=0x00000000000e88b6
- (void)accountDetailViewController:(id)arg1 didHideWarning:(id)arg2;	// IMP=0x00000000000e88a2
- (id)_passwordGenerationManager;	// IMP=0x00000000000e884f
- (id)passwordGeneratorForAccountDetailViewController:(id)arg1;	// IMP=0x00000000000e883d
- (id)passwordWarningManagerForAccountDetailViewController:(id)arg1;	// IMP=0x00000000000e8828
- (id)dataSource:(id)arg1 headerTextForSection:(long long)arg2;	// IMP=0x00000000000e8602
- (void)_addHiddenSecurityRecommendationsSectionIfNecessary;	// IMP=0x00000000000e840f
- (void)_removeAddressedActionableRecommendation:(id)arg1;	// IMP=0x00000000000e8148
- (id)tableView:(id)arg1 contextMenuConfigurationForRowAtIndexPath:(id)arg2 point:(struct CGPoint)arg3;	// IMP=0x00000000000e8140
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;	// IMP=0x00000000000e7fd7
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;	// IMP=0x00000000000e7f64
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;	// IMP=0x00000000000e7f5c
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000000e79cd
- (void)actionableSecurityRecommendationDataDidUpdate:(id)arg1;	// IMP=0x00000000000e77cd
- (void)_accountStoreDidUpdate;	// IMP=0x00000000000e7302
- (void)_reloadTableViewDiffableDataSourceOnInternalQueueForHiddenSecurityRecommendationsPersona;	// IMP=0x00000000000e6ff5
- (void)_reloadTableViewDiffableDataSourceOnInternalQueueForSecurityRecommendationsPersona;	// IMP=0x00000000000e6bc3
- (void)_reloadTableViewDiffableDataSourceOnInternalQueue;	// IMP=0x00000000000e6b8d
- (void)_reloadTableViewDiffableDataSource;	// IMP=0x00000000000e6b25
- (id)_cellForIdentifier:(id)arg1 indexPath:(id)arg2;	// IMP=0x00000000000e687b
- (void)_reloadSavedAccountsForceUpdate:(_Bool)arg1;	// IMP=0x00000000000e5c15
- (void)_addWarningToHiddenRecommendationData:(id)arg1;	// IMP=0x00000000000e5a6f
- (void)_findAndRemoveEntryForSavedAccount:(id)arg1;	// IMP=0x00000000000e4c36
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000000000e4bc1
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000e4aff
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000000e4aa8
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000e4965
- (void)viewDidLoad;	// IMP=0x00000000000e4334
- (_Bool)canBeShownFromSuspendedState;	// IMP=0x00000000000e432c
- (id)initWithPersona:(unsigned long long)arg1 siteMetadataManager:(id)arg2 autoFillQuirksManager:(id)arg3 passwordWarningManager:(id)arg4;	// IMP=0x00000000000e4073

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

