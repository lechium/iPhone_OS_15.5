//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface StoreServicesRequestQueue
{
}

+ (id)sharedInstance;	// IMP=0x00200000000743fe
+ (void)setSharedInstance:(id)arg1;	// IMP=0x00100000000743b5
- (void)_sendUnentitledReplyForMessage:(id)arg1 connection:(id)arg2;	// IMP=0x002000000007b144
- (void)_sendUnentitledMessageToClient:(id)arg1;	// IMP=0x001000000007b105
- (void)_sendMessageWithError:(id)arg1 toClient:(id)arg2;	// IMP=0x001000000007b08b
- (id)_newClientWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000007aff8
- (void)addOperation:(id)arg1 forMessage:(id)arg2 connection:(id)arg3 replyBlock:(CDUnknownBlockType)arg4;	// IMP=0x001000000007af59
- (void)addOperation:(id)arg1 forClient:(id)arg2 withMessageBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000007aeba
- (void)collectURLSessionDataWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000007ac7c
- (void)softwareLibraryItemSetValuesWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000007a9d8
- (void)showServerPromptWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000007a790
- (void)showDialogRequestWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000007a478
- (void)sendInstallAttributionPingbackWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000007a08b
- (void)sendAskToBuyWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000079e07
- (void)sdk_getStorefrontCountryCodeWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000007991b
- (void)saveInstallAttributionParamsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000079673
- (void)rentalSyncRequestWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000079292
- (void)redeemCodesWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000078f39
- (void)pushNotificationRequestWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000078c50
- (void)pushNotificationTokenRequestWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000078930
- (void)personalizeOffersWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000078620
- (void)keybagRequestWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000078382
- (void)playableApplicationsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000007801f
- (void)isRemovedSystemAppWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000077de7
- (void)isInstalledAppWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000077baf
- (void)invalidateURLBagWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000007797e
- (void)haveApplicationsOfTypeWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000000776fe
- (void)hasDemotedApplicationsWithMessage2:(id)arg1 connection:(id)arg2;	// IMP=0x00100000000774f4
- (void)hasDemotedApplicationsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000000772ac
- (void)handlePurchaseIntentActionWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000077034
- (void)getUserApplicationsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000076f13
- (void)getRemovableSytemApplicationsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000076ccb
- (void)getSoftwareLibraryItemsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000000769f5
- (void)getPlayInfoWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000076710
- (void)getMediaSocialShareExtensionVisibilityWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000000766a4
- (void)getKBSyncWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000007657f
- (void)getFamilyCircleWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000000762a1
- (void)getAvailableItemKindsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000000760b7
- (void)getApplicationCapabilitiesMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000075ec9
- (void)getApplicationWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000075d29
- (void)getAccountPurchaseHistoryWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000000759a7
- (void)demoteApplicationWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000007583c
- (void)checkoutRentalWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000000752fe
- (void)checkinRentalWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000074fed
- (void)authorizeMachineWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000074c99
- (void)addMediaSocialPostWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000074b12
- (void)addDownloadsUsingManifestWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000007486b
- (void)observeXPCServer:(id)arg1;	// IMP=0x0010000000074458

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

