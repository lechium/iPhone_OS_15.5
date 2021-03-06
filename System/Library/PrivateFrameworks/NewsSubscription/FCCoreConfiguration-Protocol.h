//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsSubscription/NFCopying-Protocol.h>
#import <NewsSubscription/NSObject-Protocol.h>

@class FCAppReviewRequestConfig, FCEmbedProxyConfiguration, FCForYouGroupsConfiguration, FCLaunchPresentationConfig, FCNewsPersonalizationConfiguration, FCNotificationsConfiguration, FCPaidALaCartePaywallConfig, FCPaidBundleConfiguration, FCPersonalizationTreatment, FCSmarterMessagingConfig, FCTopStoriesConfiguration, FCVideoGroupsConfig, NSArray, NSDictionary, NSNumber, NSString, NSURL, NTPBTodayConfig;

@protocol FCCoreConfiguration <NSObject, NFCopying>
- (FCPersonalizationTreatment *)personalizationTreatment;
- (NSDictionary *)analyticsEnvelopeContentTypeConfigsForEnvironment:(unsigned long long)arg1;
@property(nonatomic, readonly) long long expirePinnedArticlesAfter;
@property(nonatomic, readonly) NSNumber *currentTreatment;
@property(nonatomic, readonly) NSString *experimentalizableFieldPostfix;
@property(nonatomic, readonly) NSString *forYouRecordConfigID;
@property(nonatomic, readonly) long long minimumDistanceBetweenImageOnTopTiles;
@property(nonatomic, readonly) long long endOfArticleExpireArticlesAfter;
@property(nonatomic, readonly) long long endOfArticleMaxInaccessiblePaidArticleCount;
@property(nonatomic, readonly) double endOfArticleMinPaidHeadlineRatio;
@property(nonatomic, readonly) FCVideoGroupsConfig *forYouVideoGroupsConfig;
@property(nonatomic, readonly) double minimumTrendingUnseenRatio;
@property(nonatomic, readonly) long long optionalTopStoriesRefreshRate;
@property(nonatomic, readonly) _Bool diversifyOptionalTopStories;
@property(nonatomic, readonly) long long maximumPaidSubscriptionGroupSizeiPhone;
@property(nonatomic, readonly) long long maximumPaidSubscriptionGroupSizeiPad;
@property(nonatomic, readonly) long long maximumTimesHeadlineInPaidSubscriptionGroup;
@property(nonatomic, readonly) long long maximumNumberOfExpiredPaidSubscriptionGroups;
@property(nonatomic, readonly) long long expiredPaidSubscriptionGroupCutoffTime;
@property(nonatomic, readonly) long long minimumDurationBetweenTrendingGroupsWeekend;
@property(nonatomic, readonly) long long minimumDurationBetweenTrendingGroupsWeekday;
@property(nonatomic, readonly) long long minimumDurationBetweenForYouGroupsWeekend;
@property(nonatomic, readonly) long long minimumDurationBetweenForYouGroupsWeekday;
@property(nonatomic, readonly) FCForYouGroupsConfiguration *forYouGroupsConfiguration;
@property(nonatomic, readonly) NSArray *hiddenFeedIDs;
@property(nonatomic, readonly) long long articleRapidUpdatesTimeout;
@property(nonatomic, readonly) NSString *editorialGemsSectionID;
@property(nonatomic, readonly) NSString *editorialChannelID;
@property(nonatomic, readonly) NSString *mySportsTagID;
@property(nonatomic, readonly) NSString *myMagazinesTagID;
@property(nonatomic, readonly) NSString *savedStoriesTagID;
@property(nonatomic, readonly) NSString *featuredStoriesTagID;
@property(nonatomic, readonly) NSString *trendingTagID;
@property(nonatomic, readonly) NSString *briefingsTagID;
@property(nonatomic, readonly) NSString *breakingNewsChannelID;
@property(nonatomic, readonly) FCTopStoriesConfiguration *topStoriesConfig;
@property(nonatomic, readonly) NSDictionary *endpointConfigsByEnvironment;
- (_Bool)isPrivateDataMigrationCleanupEnabled;
@property(nonatomic, readonly) _Bool privateDataEncryptionMigrationRequiresAllDevicesRunningTigris;
- (_Bool)isPrivateDataEncryptionMigrationDesired;
- (_Bool)isPrivateDataEncryptionAllowed;
@property(nonatomic, readonly) _Bool useSecureConnectionForAssets;
@property(nonatomic, readonly) NSArray *presubscribedFeedIDs;
@property(nonatomic, readonly) long long subscriptionsGlobalMeteredCount;
@property(nonatomic, readonly) long long savedArticlesMaximumCountCellular;
@property(nonatomic, readonly) long long savedArticlesMaximumCountWiFi;
@property(nonatomic, readonly) long long savedArticlesOpenedCutoffTime;
@property(nonatomic, readonly) long long savedArticlesCutoffTime;
@property(nonatomic, readonly) long long notificationEnabledChannelsRefreshFrequency;
@property(nonatomic, readonly) FCNotificationsConfiguration *notificationsConfig;
- (_Bool)isOrderFeedEndpointEnabled;
@property(nonatomic, readonly) long long trendingTopicsRefreshRate;
@property(nonatomic, readonly) long long appConfigRefreshRate;

@optional
@property(nonatomic, readonly) NSString *sharedWithYouTagID;
@property(nonatomic, readonly) double derivedPersonalizationDataBalanceValue;
@property(nonatomic, readonly) FCEmbedProxyConfiguration *embedProxyConfiguration;
@property(nonatomic, readonly) long long minimumBucketGroupConfigVersion;
- (_Bool)shouldProxyURLBucketFetch;
@property(nonatomic, readonly) long long alternateUniversalLinksResourceRefreshRate;
@property(nonatomic, readonly) unsigned long long premiumTodayFeedDebugSetting;
@property(nonatomic, readonly) _Bool premiumTodayFeedEnabled;
@property(nonatomic, readonly) NSString *forYouPremiumRecordConfigID;
@property(nonatomic, readonly) NSArray *appleNewsNotificationChannelIDs;
@property(nonatomic, readonly) NSArray *permanentChannelIDs;
@property(nonatomic, readonly) long long smallWidgetSystemReloadJitterMaxHoneymoon;
@property(nonatomic, readonly) long long smallWidgetSystemReloadIntervalHoneymoon;
@property(nonatomic, readonly) long long smallWidgetSystemHoneymoonDuration;
@property(nonatomic, readonly) long long smallWidgetSystemReloadJitterMax;
@property(nonatomic, readonly) long long smallWidgetSystemReloadInterval;
@property(nonatomic, readonly) long long widgetSystemReloadJitterMaxHoneymoon;
@property(nonatomic, readonly) long long widgetSystemReloadIntervalHoneymoon;
@property(nonatomic, readonly) long long widgetSystemHoneymoonDuration;
@property(nonatomic, readonly) long long widgetSystemReloadJitterMax;
@property(nonatomic, readonly) long long widgetSystemReloadInterval;
- (NTPBTodayConfig *)todayConfigWithIdentifier:(NSString *)arg1 queueConfigs:(NSArray *)arg2 backgroundColorLight:(NSString *)arg3 backgroundColorDark:(NSString *)arg4 audioIndicatorColor:(NSString *)arg5;
@property(nonatomic, readonly) _Bool adImpressionTrackingEnabled;
@property(nonatomic, readonly) _Bool adInstrumentationEnabled;
@property(nonatomic, readonly) _Bool checkForPaywallConfigChangesEnabled;
@property(nonatomic, readonly) _Bool xavierClusteringEnabled;
@property(nonatomic, readonly) _Bool xavierEnabled;
@property(nonatomic, readonly) _Bool newPersonalizationEnabled;
@property(nonatomic, readonly) _Bool newNotificationHandlingEnabled;
@property(nonatomic, readonly) _Bool searchFeedEnabled;
@property(nonatomic, readonly) _Bool tagFeedEnabled;
@property(nonatomic, readonly) _Bool todayFeedEnabled;
@property(nonatomic, readonly) long long maximumRetryAfterForCK;
- (_Bool)isPrivateDataEncryptionRequired;
@property(nonatomic, readonly) _Bool privateDataShouldSecureSubscriptions;
@property(nonatomic, readonly) _Bool enableCacheFallbackForArticleRecirculation;
@property(nonatomic, readonly) long long widgetForYouBackgroundMinimumUpdateInterval;
@property(nonatomic, readonly) _Bool recordBothPersonalizationVectors;
@property(nonatomic, readonly) _Bool usePersonalizationVectorAlt;
@property(nonatomic, readonly) long long forYouMaxDailyEvergreenArticlesForPaidUsers;
@property(nonatomic, readonly) long long forYouMaxDailyEvergreenArticlesForFreeUsers;
@property(nonatomic, readonly) NSString *paidEvergreenArticleListID;
@property(nonatomic, readonly) NSString *freeEvergreenArticleListID;
@property(nonatomic, readonly) NSString *audioConfigRecordID;
@property(nonatomic, readonly) NSString *todayFeedKnobs;
- (FCPaidALaCartePaywallConfig *)paidALaCartePaywallConfigForChannelID:(NSString *)arg1;
@property(nonatomic, readonly) NSArray *aLaCartePaidSubscriptionGroupWhitelistedChannelIDs;
@property(nonatomic, readonly) double feedLineHeightMultiplier;
@property(nonatomic, readonly) NSString *spotlightChannelID;
@property(nonatomic, readonly) long long bestOfferRequestTimeoutDurationInSeconds;
@property(nonatomic, readonly) long long entitlementsRequestTimeoutDurationInSeconds;
@property(nonatomic, readonly) long long entitlementsCacheRecoveryAttemptDurationInSeconds;
@property(nonatomic, readonly) NSString *sportLeagueStandingsTagID;
@property(nonatomic, readonly) NSString *sportLeagueScoresTagID;
@property(nonatomic, readonly) NSString *sportTeamScoresTagID;
@property(nonatomic, readonly) NSString *sportScoresTagID;
@property(nonatomic, readonly) NSString *mySportsScoresTagID;
@property(nonatomic, readonly) NSString *magazinesConfigRecordID;
@property(nonatomic, readonly) FCAppReviewRequestConfig *appReviewRequestConfig;
@property(nonatomic, readonly) FCLaunchPresentationConfig *launchPresentationConfig;
@property(nonatomic, readonly) NSDictionary *channelPickerConfigsByName;
@property(nonatomic, readonly) FCSmarterMessagingConfig *smarterMessagingConfig;
@property(nonatomic, readonly) FCNewsPersonalizationConfiguration *newsPersonalizationConfiguration;
@property(nonatomic, readonly) FCPaidBundleConfiguration *paidBundleConfig;
@property(nonatomic, readonly) long long dailyChannelUpsellsCountLimit;
@property(nonatomic, readonly) NSDictionary *channelUpsellConfigsByChannelID;
@property(nonatomic, readonly) double delayBeforeRetryingDroppedFeeds;
@property(nonatomic, readonly) long long maxRetriesForDroppedFeeds;
@property(nonatomic, readonly) long long singleChannelFeedMinFeedItemsPerRequest;
@property(nonatomic, readonly) long long singleTopicFeedMinFeedItemsPerRequest;
@property(nonatomic, readonly) _Bool shouldShowAlternateHeadlines;
@property(nonatomic, readonly) NSString *conversionCohortsExpField;
@property(nonatomic, readonly) NSString *engagementCohortsExpField;
- (NSURL *)appAnalyticsNotificationReceiptEndpointUrlForEnvironment:(unsigned long long)arg1;
- (NSURL *)appAnalyticsEndpointUrlForEnvironment:(unsigned long long)arg1;

// Remaining properties
@property(nonatomic, readonly) _Bool orderFeedEndpointEnabled;
@property(nonatomic, readonly) _Bool privateDataEncryptionAllowed;
@property(nonatomic, readonly) _Bool privateDataEncryptionMigrationDesired;
@property(nonatomic, readonly) _Bool privateDataEncryptionRequired;
@property(nonatomic, readonly) _Bool privateDataMigrationCleanupEnabled;
@property(nonatomic, readonly) _Bool proxyURLBucketFetch;
@end

