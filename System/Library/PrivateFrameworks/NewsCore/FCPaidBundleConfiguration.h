//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsCore/NSCopying-Protocol.h>

@class NFUnfairLock, NSArray, NSDictionary, NSMutableDictionary, NSString;

@interface FCPaidBundleConfiguration : NSObject <NSCopying>
{
    NSDictionary *_configDict;	// 8 = 0x8
    NSString *_storefrontID;	// 16 = 0x10
    NSString *_localizedStorefrontID;	// 24 = 0x18
    NSArray *_defaultSupportedStoreFronts;	// 32 = 0x20
    NSMutableDictionary *_keyedPaywallConfigurationsByType;	// 40 = 0x28
    NSMutableDictionary *_keyedSubscriptionButtonConfigurationsByType;	// 48 = 0x30
    NSMutableDictionary *_keyedPostPurchaseOnboardingConfigurationsByType;	// 56 = 0x38
    NSDictionary *_magazineGenresByGenre;	// 64 = 0x40
    NSDictionary *_audioUpsellConfigurationsByID;	// 72 = 0x48
    NFUnfairLock *_lock;	// 80 = 0x50
}

+ (id)defaultPaidFeedIDByLocalizedStorefrontID;	// IMP=0x0000000000238edb
+ (id)defaultVanityURLMappingResourceIDByLocalizedStorefrontID;	// IMP=0x0000000000238caa
+ (id)defaultTagListIDByLocalizedStorefrontID;	// IMP=0x0000000000238a79
+ (id)defaultEndOfPurchaseNoFamilySharingSetupArticleIDByLocalizedStorefrontID;	// IMP=0x000000000023895f
+ (id)defaultEndOfPurchaseFamilySharingSetupArticleIDByLocalizedStorefrontID;	// IMP=0x0000000000238845
+ (id)defaultFamilySharingLandingPageByLocalizedStorefrontID;	// IMP=0x000000000023872b
+ (id)defaultServicesBundleLandingPageByLocalizedStorefrontID;	// IMP=0x0000000000238611
+ (id)defaultLandingPageByLocalizedStorefrontID;	// IMP=0x00000000002384f7
+ (id)renewalLandingPageByLocalizedStorefrontID;	// IMP=0x00000000002383dd
+ (id)defaultConfigurationForStorefrontID:(id)arg1;	// IMP=0x0000000000238312
- (void).cxx_destruct;	// IMP=0x000000000023a494
@property(readonly, nonatomic) NFUnfairLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSDictionary *audioUpsellConfigurationsByID; // @synthesize audioUpsellConfigurationsByID=_audioUpsellConfigurationsByID;
@property(retain, nonatomic) NSDictionary *magazineGenresByGenre; // @synthesize magazineGenresByGenre=_magazineGenresByGenre;
@property(retain, nonatomic) NSMutableDictionary *keyedPostPurchaseOnboardingConfigurationsByType; // @synthesize keyedPostPurchaseOnboardingConfigurationsByType=_keyedPostPurchaseOnboardingConfigurationsByType;
@property(retain, nonatomic) NSMutableDictionary *keyedSubscriptionButtonConfigurationsByType; // @synthesize keyedSubscriptionButtonConfigurationsByType=_keyedSubscriptionButtonConfigurationsByType;
@property(retain, nonatomic) NSMutableDictionary *keyedPaywallConfigurationsByType; // @synthesize keyedPaywallConfigurationsByType=_keyedPaywallConfigurationsByType;
@property(readonly, copy, nonatomic) NSArray *defaultSupportedStoreFronts; // @synthesize defaultSupportedStoreFronts=_defaultSupportedStoreFronts;
@property(readonly, copy, nonatomic) NSString *localizedStorefrontID; // @synthesize localizedStorefrontID=_localizedStorefrontID;
@property(readonly, copy, nonatomic) NSString *storefrontID; // @synthesize storefrontID=_storefrontID;
@property(retain, nonatomic) NSDictionary *configDict; // @synthesize configDict=_configDict;
- (id)defaultMagazineGenres;	// IMP=0x0000000000239917
- (id)defaultServicesBundleSubscriptionButtonConfigs;	// IMP=0x00000000002397d4
- (id)defaultSubscriptionButtonConfigs;	// IMP=0x0000000000239691
- (id)defaultAudioPaywallConfigs;	// IMP=0x0000000000239434
- (id)defaultPaywallConfigs;	// IMP=0x00000000002390f0
@property(readonly, nonatomic) NSString *audioArticlesChannelId;
@property(readonly, nonatomic) NSArray *audioChannelPaywallOverrideAllowedTagIDs;
@property(readonly, nonatomic) NSArray *audioFeedPaywallPositions;
@property(readonly, nonatomic) long long audioCloseIdlePlayerAfterTime;
@property(readonly, nonatomic) long long audioRewindToParagraphStartAfterTime;
@property(readonly, nonatomic) long long audioRefreshForceWakeRandomizationWindow;
@property(readonly, nonatomic) _Bool audioRefreshForceWakeEnabled;
@property(readonly, nonatomic) long long audioRefreshTimeGMT;
@property(readonly, nonatomic) NSString *audioDailyBriefingFeatureName;
@property(readonly, nonatomic) long long audioFinishedAtTimeFromEnd;
@property(readonly, nonatomic) long long audioRecentlyPlayedMaxCount;
@property(readonly, nonatomic) NSString *audioUpsellInstanceID;
@property(readonly, nonatomic) long long audioUpsellMaxDisplayCount;
@property(readonly, nonatomic) NSString *audioUpsellArticleID;
@property(readonly, nonatomic) long long audioOfflineArticlesMaxCountCriticalStorage;
@property(readonly, nonatomic) long long audioOfflineArticlesMaxCountLowStorage;
@property(readonly, nonatomic) long long audioOfflineArticlesMaxCountNormalStorage;
@property(readonly, nonatomic) long long audioSuggestionsMaxIgnoreCount;
@property(readonly, nonatomic) long long audioSuggestionsRecycleAfterTime;
@property(readonly, nonatomic) long long audioSuggestionsMaxAge;
@property(readonly, nonatomic) long long audioSuggestionsHighlyPersonalizedCount;
@property(readonly, nonatomic) long long audioSuggestionsMaxCount;
@property(readonly, nonatomic, getter=isNarrativeAudioEnabled) _Bool narrativeAudioEnabled;
@property(readonly, nonatomic) _Bool appLaunchUpsellLastShownCampaignIDSyncEnabled;
@property(readonly, nonatomic) _Bool appLaunchUpsellLastSeenDateSyncEnabled;
@property(readonly, nonatomic) long long appLaunchUpsellNewSessionBackgroundTimeInterval;
@property(readonly, nonatomic) long long appLaunchUpsellQuiescenceInterval;
@property(readonly, nonatomic) long long appLaunchUpsellRequiredAppLaunchCount;
@property(readonly, nonatomic) NSString *appLaunchUpsellArticleID;
@property(readonly, nonatomic) NSString *appLaunchUpsellCampaignID;
@property(readonly, nonatomic) NSString *appLaunchUpsellInstanceID;
@property(readonly, nonatomic) unsigned long long appLaunchUpsellBundleTrialVisibility;
@property(readonly, nonatomic) unsigned long long appLaunchUpsellPaidVisibility;
@property(readonly, nonatomic) long long minFollowedMagazinesToHideSuggestionsRegular;
@property(readonly, nonatomic) long long minFollowedMagazinesToHideSuggestionsCompact;
@property(readonly, nonatomic) long long maximumArticlesWithSoftPaywallPerSession;
@property(readonly, nonatomic) long long minimumArticlesBeforeArticleSoftPaywall;
@property(readonly, nonatomic) long long minimumPagesInPDFIssueBeforeRead;
@property(readonly, nonatomic) long long minimumArticlesInANFIssueBeforeRead;
@property(readonly, nonatomic) long long minimumReadIssuesInMyMagazines;
@property(readonly, nonatomic) long long recentIssuesMaxAge;
@property(readonly, nonatomic, getter=isCategoriesDownloadButtonEnabled) _Bool categoriesDownloadButtonEnabled;
@property(readonly, nonatomic) long long entitlementsCacheExpiredGracePeriodInSeconds;
@property(readonly, nonatomic) long long entitlementsGracePeriodInSeconds;
@property(readonly, nonatomic) NSArray *groupWhitelistedTagIds;
@property(readonly, nonatomic) long long criticalStorageAutomaticIssueDownloadTTL;
@property(readonly, nonatomic) long long criticalStorageManualIssueDownloadTTL;
@property(readonly, nonatomic) long long lowStorageAutomaticIssueDownloadTTL;
@property(readonly, nonatomic) long long lowStorageManualIssueDownloadTTL;
@property(readonly, nonatomic) long long normalStorageAutomaticIssueDownloadTTL;
@property(readonly, nonatomic) long long normalStorageManualIssueDownloadTTL;
@property(readonly, nonatomic) long long feedAutoRefreshMinimumInterval;
@property(readonly, nonatomic) NSString *paidBadgeTitle;
@property(readonly, nonatomic) NSString *freeBadgeTitle;
@property(readonly, nonatomic, getter=isPaidBadgeEnabledForSubscribers) _Bool paidBadgeEnabledForSubscribers;
@property(readonly, nonatomic, getter=isFreeBadgeEnabledForSubscribers) _Bool freeBadgeEnabledForSubscribers;
@property(readonly, nonatomic, getter=isPaidBadgeEnabledForNonSubscribers) _Bool paidBadgeEnabledForNonSubscribers;
@property(readonly, nonatomic, getter=isFreeBadgeEnabledForNonSubscribers) _Bool freeBadgeEnabledForNonSubscribers;
@property(readonly, nonatomic) long long bundleSubscriptionsGlobalMeteredCount;
@property(readonly, nonatomic) long long forYouMaxMagazineGroupsForPaidUsers;
@property(readonly, nonatomic) long long forYouMaxMagazineGroupsForTrialUsers;
@property(readonly, nonatomic) long long forYouMaxMagazineGroupsForFreeUsers;
@property(readonly, nonatomic) long long forYouMaxDailyPaidArticlesForFreeUsers;
@property(readonly, nonatomic) NSString *expirationAlertDescription;
@property(readonly, nonatomic) NSString *paidFeedID;
@property(readonly, nonatomic) long long vanityURLMappingRefreshRate;
@property(readonly, nonatomic) NSString *vanityURLMappingResourceID;
@property(readonly, nonatomic) NSString *recommendableIssuesTagList;
@property(readonly, nonatomic) long long featuredArticlesFetchLimit;
@property(readonly, nonatomic) NSString *featuredArticlesTagList;
@property(readonly, nonatomic) long long newIssuesNotificationDeliveryLocalTime;
@property(readonly, nonatomic) long long newIssuesCheckLocalTime;
@property(readonly, nonatomic) NSArray *offeredBundlePurchaseIDs;
@property(readonly, nonatomic) NSArray *restorableBundlePurchaseIDs;
@property(readonly, nonatomic) NSString *renewalLandingPageArticleID;
@property(readonly, nonatomic) NSString *endOfPurchaseServicesBundleNoFamilySharingSetupArticleID;
@property(readonly, nonatomic) NSString *endOfPurchaseServicesBundleFamilySharingSetupArticleID;
@property(readonly, nonatomic) NSString *endOfPurchaseNoFamilySharingSetupArticleID;
@property(readonly, nonatomic) NSString *endOfPurchaseFamilySharingSetupArticleID;
@property(readonly, nonatomic) NSString *familySharingLandingPageArticleID;
@property(readonly, nonatomic) NSString *defaultServicesBundleLandingPageArticleID;
@property(readonly, nonatomic) NSString *defaultLandingPageArticleID;
@property(readonly, nonatomic) NSString *servicesBundleMetricsTopicName;
@property(readonly, nonatomic, getter=isFamilySharingSetupEnabled) _Bool familySharingSetupEnabled;
@property(readonly, nonatomic, getter=isSharingIssuesEnabled) _Bool sharingIssuesEnabled;
@property(readonly, nonatomic, getter=isTemporaryAccessEnabled) _Bool temporaryAccessEnabled;
@property(readonly, nonatomic, getter=isPaidBundleVisible) _Bool paidBundleVisible;
@property(readonly, nonatomic, getter=areMagazinesEnabled) _Bool magazinesEnabled;
@property(readonly, nonatomic) unsigned long long magazineFeedPaywallSubtype;
@property(readonly, nonatomic) unsigned long long audioFeedPaywallSubtype;
@property(readonly, nonatomic) unsigned long long articleHardPaywallType;
@property(readonly, nonatomic) NSDictionary *postPurchaseOnboardingConfigurationsByType;
@property(readonly, nonatomic) NSDictionary *servicesBundleSubscriptionButtonConfigurationsByType;
@property(readonly, nonatomic) NSDictionary *subscriptionButtonConfigurationsByType;
@property(readonly, nonatomic) NSDictionary *audioServicesBundlePaywallConfigurationsByType;
@property(readonly, nonatomic) NSDictionary *audioPaywallConfigurationsByType;
@property(readonly, nonatomic) NSDictionary *servicesBundlePaywallConfigurationsByType;
@property(readonly, nonatomic) NSDictionary *paywallConfigurationsByType;
@property(readonly, nonatomic) double maxPriceDeltaThreshold;
@property(readonly, nonatomic) unsigned long long subscriptionLinkTargetType;
@property(readonly, nonatomic) unsigned long long paywallConfigsOfferType;
@property(readonly, nonatomic) NSDictionary *flexiblePaywallConfig;
- (id)postPurchaseOnboardingConfigurationsByTypeForKey:(id)arg1;	// IMP=0x0000000000234c72
- (id)subscriptionButtonConfigurationsByTypeForKey:(id)arg1;	// IMP=0x000000000023486d
- (id)paywallConfigurationsByTypeForKey:(id)arg1;	// IMP=0x0000000000234468
- (_Bool)arePaywallConfigsEqualToOtherPaidBundleConfig:(id)arg1;	// IMP=0x0000000000233d91
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000233d86
- (unsigned long long)hash;	// IMP=0x0000000000233cc7
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000233ad6
- (id)initWithConfigDictionary:(id)arg1 storefrontID:(id)arg2 localizedStorefrontID:(id)arg3 defaultSupportedStoreFronts:(id)arg4;	// IMP=0x0000000000233932
- (id)initWithConfigDictionary:(id)arg1 storefrontID:(id)arg2;	// IMP=0x0000000000233916
- (id)initWithConfigDictionary:(id)arg1;	// IMP=0x00000000002338f0
- (id)init;	// IMP=0x00000000002337ab
@property(readonly, nonatomic, getter=isPaidBadgeEnabled) _Bool paidBadgeEnabled;
@property(readonly, nonatomic, getter=isFreeBadgeEnabled) _Bool freeBadgeEnabled;

@end

