//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CommunicationsSetupUI/AKAppleIDAuthenticationDelegate-Protocol.h>
#import <CommunicationsSetupUI/CKOnboardingControllerDelegate-Protocol.h>
#import <CommunicationsSetupUI/CNFRegWizardControllerDelegate-Protocol.h>
#import <CommunicationsSetupUI/CNMeCardSharingSettingsViewControllerDelegate-Protocol.h>
#import <CommunicationsSetupUI/IMCloudKitEventHandler-Protocol.h>
#import <CommunicationsSetupUI/PSSystemPolicyForAppDelegate-Protocol.h>

@class CKBlackholeConversationListViewController, CKFilteringListController, CKMultipleCTSubscriptionsController, CKNSExtension, CKOnboardingController, IMCTXPCServiceSubscriptionInfo, NSString, PSSystemPolicyForApp;

__attribute__((visibility("hidden")))
@interface CKSettingsMessagesController <CNFRegWizardControllerDelegate, AKAppleIDAuthenticationDelegate, IMCloudKitEventHandler, CNMeCardSharingSettingsViewControllerDelegate, CKOnboardingControllerDelegate, PSSystemPolicyForAppDelegate>
{
    _Bool _showingChildViewController;	// 216 = 0xd8
    int _profileToken;	// 220 = 0xdc
    CKFilteringListController *_filteringController;	// 224 = 0xe0
    id _beginMappingID;	// 232 = 0xe8
    PSSystemPolicyForApp *_systemPolicy;	// 240 = 0xf0
    CKMultipleCTSubscriptionsController *_mmsMessagingController;	// 248 = 0xf8
    CKMultipleCTSubscriptionsController *_mmsAllowsGroupMessagingController;	// 256 = 0x100
    IMCTXPCServiceSubscriptionInfo *_ctSubscriptionInfo;	// 264 = 0x108
    CKOnboardingController *_onboardingController;	// 272 = 0x110
    CKBlackholeConversationListViewController *_blackholeConversationListViewController;	// 280 = 0x118
    CKNSExtension *_ckExtension;	// 288 = 0x120
}

+ (id)currentKeepMessages;	// IMP=0x000000000007b6fc
+ (_Bool)shouldShowFirstPartyExtension;	// IMP=0x000000000007951a
+ (id)removeFirstPartyExtensionFromArrayIfNecessary:(id)arg1;	// IMP=0x0000000000078d92
+ (id)getDefaultExtension;	// IMP=0x0000000000078a5f
+ (int)currentMessageAutoKeepOptionForType:(int)arg1;	// IMP=0x0000000000077583
+ (_Bool)currentMessageAutoKeepForType:(int)arg1;	// IMP=0x000000000007754c
- (void).cxx_destruct;	// IMP=0x000000000007ddfc
@property(retain, nonatomic) CKNSExtension *ckExtension; // @synthesize ckExtension=_ckExtension;
@property(retain, nonatomic) CKBlackholeConversationListViewController *blackholeConversationListViewController; // @synthesize blackholeConversationListViewController=_blackholeConversationListViewController;
@property(retain, nonatomic) CKOnboardingController *onboardingController; // @synthesize onboardingController=_onboardingController;
@property(retain, nonatomic) IMCTXPCServiceSubscriptionInfo *ctSubscriptionInfo; // @synthesize ctSubscriptionInfo=_ctSubscriptionInfo;
@property(retain, nonatomic) CKMultipleCTSubscriptionsController *mmsAllowsGroupMessagingController; // @synthesize mmsAllowsGroupMessagingController=_mmsAllowsGroupMessagingController;
@property(retain, nonatomic) CKMultipleCTSubscriptionsController *mmsMessagingController; // @synthesize mmsMessagingController=_mmsMessagingController;
@property(retain, nonatomic) PSSystemPolicyForApp *systemPolicy; // @synthesize systemPolicy=_systemPolicy;
@property(retain) id beginMappingID; // @synthesize beginMappingID=_beginMappingID;
@property(retain, nonatomic) CKFilteringListController *filteringController; // @synthesize filteringController=_filteringController;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000007dbc8
- (id)controllerForSpecifier:(id)arg1;	// IMP=0x000000000007d937
- (id)_smsRelayDevicesController;	// IMP=0x000000000007d6b6
- (id)_madridSettingsController;	// IMP=0x000000000007d5c6
- (void)_clearMessagesAppExtensionSalt;	// IMP=0x000000000007d4f6
- (void)_setupAccountHandlersForDisabling;	// IMP=0x000000000007d30e
- (_Bool)_allAccountsAreDeactivated;	// IMP=0x000000000007d164
- (void)_setupAccountHandlers;	// IMP=0x000000000007ce77
- (void)_updateUIWithError:(id)arg1;	// IMP=0x000000000007cbe6
- (void)firstRunControllerDidFinish:(id)arg1 finished:(_Bool)arg2;	// IMP=0x000000000007cb5c
- (void)_showMadridSetupIfNecessary;	// IMP=0x000000000007cb48
- (void)_showMadridSetupIfNecessary:(_Bool)arg1;	// IMP=0x000000000007c789
- (void)_showSignInController;	// IMP=0x000000000007c39a
- (_Bool)authenticationController:(id)arg1 shouldContinueWithAuthenticationResults:(id)arg2 error:(id)arg3 forContext:(id)arg4;	// IMP=0x000000000007babd
- (void)_showAuthKitSignInIfNecessary;	// IMP=0x000000000007b884
- (void)setKeepMessages:(id)arg1 specifier:(id)arg2;	// IMP=0x000000000007b78b
- (id)getKeepMessages:(id)arg1;	// IMP=0x000000000007b752
- (id)getSMSRelayDevicesSummary:(id)arg1;	// IMP=0x000000000007b674
- (void)setPreviewTranscodingEnabled:(id)arg1 specifier:(id)arg2;	// IMP=0x000000000007b61a
- (id)getPreviewTranscodingEnabled:(id)arg1;	// IMP=0x000000000007b597
- (id)madridSigninButtonTextForSpecifier:(id)arg1;	// IMP=0x000000000007b51d
- (void)madridSigninTappedWithSpecifier:(id)arg1;	// IMP=0x000000000007b50b
- (id)madridSigninSpecifiers;	// IMP=0x000000000007b4df
- (_Bool)shouldShowMadridSignin;	// IMP=0x000000000007b2f3
- (id)getAccountSummaryForSpecifier:(id)arg1;	// IMP=0x000000000007b28f
- (id)madridAccountsSpecifierIdentifiers;	// IMP=0x000000000007b263
- (_Bool)shouldShowMadridAccounts;	// IMP=0x000000000007b188
- (id)sendAsSMSIdentifiers;	// IMP=0x000000000007b15c
- (_Bool)shouldShowSendAsSMS;	// IMP=0x000000000007b123
- (void)setJunkFilteringReceiptsEnabled:(id)arg1 specifier:(id)arg2;	// IMP=0x000000000007afae
- (id)areJunkFilteringReceiptsEnabled:(id)arg1;	// IMP=0x000000000007af2b
- (_Bool)shouldShowJunkFilteringReceipts;	// IMP=0x000000000007af08
- (void)setReadReceiptsEnabled:(id)arg1 specifier:(id)arg2;	// IMP=0x000000000007ad93
- (id)areReadReceiptsEnabled:(id)arg1;	// IMP=0x000000000007ad10
- (id)readReceiptSpecifierIdentifiers;	// IMP=0x000000000007ace4
- (_Bool)shouldShowReadReceipts;	// IMP=0x000000000007acd2
- (id)mentionsSettingsSpecifierIdentifiers;	// IMP=0x000000000007aca6
- (_Bool)shouldShowMentionsSettings;	// IMP=0x000000000007ac9c
- (id)smsRelaySettingsSpecifierIdentifiers;	// IMP=0x000000000007ac70
- (_Bool)hasPhoneNumber;	// IMP=0x000000000007aa13
- (_Bool)shouldShowSMSRelaySettings;	// IMP=0x000000000007a7d6
- (void)_setUpBusinessChatGroupSpecifiers:(id)arg1;	// IMP=0x000000000007a65a
- (void)sharingSettingsViewController:(id)arg1 didUpdateWithSharingResult:(id)arg2;	// IMP=0x000000000007a5e4
- (void)sharingSettingsViewController:(id)arg1 didSelectSharingAudience:(unsigned long long)arg2;	// IMP=0x000000000007a56a
- (void)sharingSettingsViewController:(id)arg1 didUpdateSharingState:(_Bool)arg2;	// IMP=0x000000000007a4f1
- (void)sharingSettingsViewControllerDidUpdateContact:(id)arg1;	// IMP=0x000000000007a4eb
- (id)_sharedWithYouViewController;	// IMP=0x000000000007a476
- (_Bool)_sharedWithYouEnabled;	// IMP=0x000000000007a41d
- (id)getSharedWithYouForSpecifier:(id)arg1;	// IMP=0x000000000007a3a1
- (_Bool)shouldShowSharedWithYouSettings;	// IMP=0x000000000007a36e
- (id)sharedWithYouSettingsSpecifierIdentifiers;	// IMP=0x000000000007a2fc
- (_Bool)_imageForkedFromMeCard;	// IMP=0x000000000007a2c5
- (unsigned long long)_meCardSharingAudience;	// IMP=0x000000000007a28f
- (_Bool)_meCardSharingEnabled;	// IMP=0x000000000007a258
- (void)_showSetupMeCardAlert;	// IMP=0x000000000007a143
- (id)getNameAndPhotoSharingFooterText;	// IMP=0x000000000007a0d0
- (id)getNameAndPhotoSharingSpecifierSummary:(id)arg1;	// IMP=0x000000000007a054
- (void)showMeCardViewControllerWithNickname:(id)arg1;	// IMP=0x0000000000079dd0
- (void)onboardingControllerDidFinish:(id)arg1;	// IMP=0x0000000000079dbc
- (id)presentingViewControllerForOnboardingController:(id)arg1;	// IMP=0x0000000000079db3
- (void)showNicknameOnboardingController;	// IMP=0x0000000000079ce0
- (void)nameAndPhotoSharingForSpecifier:(id)arg1;	// IMP=0x0000000000079a74
- (void)showMultiplePhoneNumbersAlerForNicknames;	// IMP=0x0000000000079948
- (void)showAccountsMismatchedAlertForNicknames;	// IMP=0x000000000007981c
- (_Bool)shouldShowNicknames;	// IMP=0x0000000000079812
- (id)nameAndPhotoSharingSpecifiers;	// IMP=0x00000000000797a0
- (id)contactPhotoSettingsSpecifierIdentifiers;	// IMP=0x0000000000079774
- (_Bool)shouldShowContactPhotoSettings;	// IMP=0x00000000000796b2
- (id)audioMessageSettingsSpecifierIdentifiers;	// IMP=0x000000000007967b
- (_Bool)shouldShowAudioMessageSettings;	// IMP=0x0000000000079669
- (void)setSiriToneNotificationEnabled:(id)arg1 specifier:(id)arg2;	// IMP=0x000000000007963c
- (id)isSiriToneNotificationEnabled:(id)arg1;	// IMP=0x0000000000079601
- (id)siriSettingsIdentifiers;	// IMP=0x00000000000795d5
- (_Bool)isPersonalCompanionEnabled;	// IMP=0x00000000000795bd
- (_Bool)shouldShowSiriSettings;	// IMP=0x0000000000079589
- (_Bool)shouldShowJunkConversationsRow;	// IMP=0x00000000000794f7
- (void)setConversationListFilteringEnabled:(id)arg1 specifier:(id)arg2;	// IMP=0x00000000000793c4
- (id)isConversationListFilteringEnabled:(id)arg1;	// IMP=0x0000000000079341
- (id)junkFilterReceiptsRowIdentifier;	// IMP=0x0000000000079315
- (id)junkConversationsRowIdentifier;	// IMP=0x00000000000792f1
- (id)spamFilteringSpecifierIdentifiers;	// IMP=0x00000000000792cd
- (id)iMessageFilteringSpecifierIdentifiers;	// IMP=0x00000000000792a9
- (_Bool)shouldShowiMessageFilteringSettings:(id)arg1;	// IMP=0x0000000000079285
- (void)messageFilteringTapped:(id)arg1;	// IMP=0x00000000000791df
- (void)findSpamExtensions;	// IMP=0x0000000000078ada
- (void)endMatchingExtensions;	// IMP=0x0000000000078aa2
- (void)notifyThatConversationFilteringChanged;	// IMP=0x0000000000078a7f
- (id)raiseToListenSpecifierIdentifiers;	// IMP=0x0000000000078a3f
- (_Bool)shouldShowRaiseToListenSwitch;	// IMP=0x0000000000078a2d
- (_Bool)_isRaiseGestureSupported;	// IMP=0x000000000007894f
- (id)blocklistSettingsSpecifierIdentifiers;	// IMP=0x000000000007892f
- (_Bool)shouldShowBlocklistSettings;	// IMP=0x00000000000788f6
- (id)characterCountSpecifierIdentifiers;	// IMP=0x00000000000788d6
- (_Bool)shouldShowCharacterCount;	// IMP=0x00000000000788c4
- (id)genericSettingsSpecifierIdentifiers;	// IMP=0x00000000000788a4
- (_Bool)shouldShowGenericSettings;	// IMP=0x0000000000078892
- (void)_updateSwitchDelayed;	// IMP=0x0000000000078837
- (void)_updateSwitch;	// IMP=0x0000000000078825
- (id)_switchFooterText:(_Bool *)arg1;	// IMP=0x000000000007822c
- (void)setMadridEnabled:(id)arg1 specifier:(id)arg2;	// IMP=0x000000000007798c
- (id)isMadridEnabled:(id)arg1;	// IMP=0x0000000000077957
- (id)madridSwitchSpecifierIdentifiers;	// IMP=0x000000000007792b
- (_Bool)shouldShowMadridSwitch;	// IMP=0x00000000000778e7
- (_Bool)_isMadridSwitchOn;	// IMP=0x00000000000778a3
- (_Bool)_isMadridAccountOperational;	// IMP=0x00000000000777cb
- (_Bool)_isSMSDevice;	// IMP=0x0000000000077780
- (id)_syncManager;	// IMP=0x000000000007774f
- (void)setAudioMessageAutoKeep:(id)arg1 specifier:(id)arg2;	// IMP=0x0000000000077673
- (id)getAudioMessageAutoKeep:(id)arg1;	// IMP=0x0000000000077613
- (void)setRaiseToListenEnabled:(id)arg1 specifier:(id)arg2;	// IMP=0x00000000000774ed
- (id)getRaiseToListenEnabled:(id)arg1;	// IMP=0x0000000000077459
- (void)setWillSendGroupMMS:(id)arg1 specifier:(id)arg2;	// IMP=0x000000000007723d
- (id)willSendGroupMMS:(id)arg1;	// IMP=0x0000000000076ecc
- (void)setMMSEnabled:(id)arg1 specifier:(id)arg2;	// IMP=0x0000000000076b99
- (id)isMMSEnabled:(id)arg1;	// IMP=0x0000000000076942
- (id)getMMSDictionary;	// IMP=0x0000000000076824
- (void)setDeliveryReportsEnabled:(id)arg1 specifier:(id)arg2;	// IMP=0x000000000007676d
- (id)isDeliveryReportsEnabled:(id)arg1;	// IMP=0x00000000000766a7
- (id)deliveryReceiptSpecifierIdentifiers;	// IMP=0x0000000000076687
- (_Bool)shouldShowDeliveryReceipts;	// IMP=0x000000000007667f
- (void)setSpecifierLoading:(id)arg1 loading:(_Bool)arg2 animated:(_Bool)arg3;	// IMP=0x00000000000765a1
- (void)_setupMultipleSubscriptionsMMSGroupSpecifiers:(id)arg1 wantsMMSBasicGroup:(_Bool)arg2;	// IMP=0x0000000000075b29
- (void)_setupMMSGroupSpecifiers:(id)arg1 wantsMMSBasicGroup:(_Bool)arg2;	// IMP=0x00000000000756fd
- (id)specifiers;	// IMP=0x00000000000745dc
- (id)newDNDGlobalConfigurationService;	// IMP=0x00000000000744fc
- (void)notifyDNDFocusStatusAuthorizationChanged;	// IMP=0x0000000000074444
- (void)systemPolicyForApp:(id)arg1 didUpdateForSystemPolicyOptions:(unsigned long long)arg2 withValue:(id)arg3;	// IMP=0x00000000000743d1
- (void)_showPrivacySheetForBusinessChat:(id)arg1;	// IMP=0x00000000000741c8
- (void)_showPrivacySheetForiMessageFaceTime:(id)arg1;	// IMP=0x000000000007415e
- (void)newCarrierNotification;	// IMP=0x000000000007414c
- (_Bool)shouldReloadSpecifiersOnResume;	// IMP=0x0000000000074144
- (void)systemApplicationDidEnterBackground;	// IMP=0x0000000000074103
- (void)systemApplicationWillEnterForeground;	// IMP=0x0000000000074070
- (void)applicationDidResume;	// IMP=0x0000000000074022
- (void)applicationWillSuspend;	// IMP=0x0000000000073fe1
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000000073fa0
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000073f5f
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000073e2a
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000073d8a
- (_Bool)wantsWiFiChooser;	// IMP=0x0000000000073d82
- (void)_stopListeningForProfileChanges;	// IMP=0x0000000000073d57
- (void)_startListeningForProfileChanges;	// IMP=0x0000000000073b86
- (id)logName;	// IMP=0x0000000000073b79
- (void)dealloc;	// IMP=0x0000000000073a74
- (id)bundle;	// IMP=0x00000000000739f4
- (id)init;	// IMP=0x0000000000073790

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

