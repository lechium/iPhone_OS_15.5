//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray, NSString, NTPBBinningConfig, NTPBIAdConfig, NTPBPaidSubscriptionConfig, NTPBPersonalizationConfig, NTPBPersonalizationTreatment, NTPBPrefetchConfig, NTPBUserSegmentationApiConfiguration, NTPBVideoGroupsConfig, NTPBWidgetConfig;

@interface NTPBConfig : PBCodable <NSCopying>
{
    CDStruct_5df41632 _topStoriesPublishTimeIntervals;	// 8 = 0x8
    long long _analyticsEndpointMaxPayloadSize;	// 32 = 0x20
    long long _appConfigRefreshRate;	// 40 = 0x28
    double _articleDiversitySimilarityExpectationEnd;	// 48 = 0x30
    double _articleDiversitySimilarityExpectationStart;	// 56 = 0x38
    long long _articleRapidUpdatesTimeout;	// 64 = 0x40
    long long _articleRecirculationPopularFeedQueryTimeRange;	// 72 = 0x48
    long long _autoRefreshMinimumInterval;	// 80 = 0x50
    long long _autoScrollToTopFeedTimeout;	// 88 = 0x58
    double _batchedFeedTimeout;	// 96 = 0x60
    long long _corryBarMaxArticleCountForArticleList;	// 104 = 0x68
    long long _corryBarMaxArticleCountForSingleArticle;	// 112 = 0x70
    long long _endOfArticleMaxInaccessiblePaidArticles;	// 120 = 0x78
    double _endOfArticleMinPaidHeadlineRatio;	// 128 = 0x80
    long long _expirePinnedArticlesAfter;	// 136 = 0x88
    long long _expiredPaidSubscriptionGroupCutoffTime;	// 144 = 0x90
    long long _initialArticlesFromNewFavorite;	// 152 = 0x98
    double _interstitialAdLoadDelay;	// 160 = 0xa0
    long long _longReminderTime;	// 168 = 0xa8
    long long _maxExpiredPaidSubscriptionGroupCount;	// 176 = 0xb0
    long long _maxPaidSubscriptionGroupSizeIPad;	// 184 = 0xb8
    long long _maxPaidSubscriptionGroupSizeIPhone;	// 192 = 0xc0
    long long _maxTimesHeadlineInPaidSubscriptionGroup;	// 200 = 0xc8
    double _maximumRatioOfArticlesInForYouGroup;	// 208 = 0xd0
    long long _minimumArticleUpdateInterval;	// 216 = 0xd8
    long long _minimumDistanceBetweenImageOnTopTiles;	// 224 = 0xe0
    long long _minimumDurationBetweenForYouGroupsWeekday;	// 232 = 0xe8
    long long _minimumDurationBetweenForYouGroupsWeekend;	// 240 = 0xf0
    long long _minimumDurationBetweenTrendingGroupsWeekday;	// 248 = 0xf8
    long long _minimumDurationBetweenTrendingGroupsWeekend;	// 256 = 0x100
    long long _minimumFollowCountToRemovePersonalizePlacardInFollowing;	// 264 = 0x108
    double _minimumTrendingUnseenRatio;	// 272 = 0x110
    long long _newFavoriteNotificationAlertsFrequency;	// 280 = 0x118
    long long _notificationArticleCacheTimeout;	// 288 = 0x120
    long long _notificationArticleWithRapidUpdatesCacheTimeout;	// 296 = 0x128
    long long _notificationEnabledChannelsRefreshFrequency;	// 304 = 0x130
    long long _numberOfScreenfulsScrolledToBypassWidgetTimeLimit;	// 312 = 0x138
    long long _optionalTopStoriesRefreshRate;	// 320 = 0x140
    double _prerollLoadingTimeout;	// 328 = 0x148
    double _publisherDiversitySlope;	// 336 = 0x150
    double _publisherDiversityYIntercept;	// 344 = 0x158
    long long _savedArticlesCutoffTime;	// 352 = 0x160
    long long _savedArticlesMaximumCountCellular;	// 360 = 0x168
    long long _savedArticlesMaximumCountWifi;	// 368 = 0x170
    long long _savedArticlesOpenedCutoffTime;	// 376 = 0x178
    long long _shortReminderTime;	// 384 = 0x180
    long long _stateRestorationAllowedTimeWindow;	// 392 = 0x188
    long long _subscriptionsGlobalMeteredCount;	// 400 = 0x190
    long long _subscriptionsGracePeriodForTokenVerificationSeconds;	// 408 = 0x198
    long long _subscriptionsPlacardGlobalMaxPerDay;	// 416 = 0x1a0
    long long _subscriptionsPlacardPublisherFrequencyDays;	// 424 = 0x1a8
    long long _subscriptionsPlacardPublisherFrequencySeconds;	// 432 = 0x1b0
    double _tileProminenceScoreBalanceValue;	// 440 = 0x1b8
    long long _timeBetweenSameWidgetReinsertion;	// 448 = 0x1c0
    long long _timeBetweenWidgetInsertions;	// 456 = 0x1c8
    long long _treatmentId;	// 464 = 0x1d0
    long long _trendingTopicsRefreshRate;	// 472 = 0x1d8
    long long _userSegmentationApiModMax;	// 480 = 0x1e0
    long long _userSegmentationApiModThreshold;	// 488 = 0x1e8
    long long _widgetEventImmediateUploadModuloForHashing;	// 496 = 0x1f0
    long long _widgetEventImmediateUploadPopulationCeiling;	// 504 = 0x1f8
    long long _widgetEventImmediateUploadPopulationFloor;	// 512 = 0x200
    NTPBWidgetConfig *_alternativeButlerWidgetConfig;	// 520 = 0x208
    NSString *_anfEmbedConfigurationAsset;	// 528 = 0x210
    NSString *_articleRecirculationComponentPlacementConfig;	// 536 = 0x218
    NSString *_articleRecirculationConfig;	// 544 = 0x220
    NTPBBinningConfig *_binningConfig;	// 552 = 0x228
    NTPBWidgetConfig *_butlerWidgetConfig;	// 560 = 0x230
    unsigned int _enabledPrivateDataEncryptionLevel;	// 568 = 0x238
    NSMutableArray *_endpointConfigs;	// 576 = 0x240
    NSString *_experimentalizableFieldPostfix;	// 584 = 0x248
    NSMutableArray *_externalAnalyticsConfigs;	// 592 = 0x250
    NSString *_fallbackLanguageTag;	// 600 = 0x258
    NSString *_forYouNonPersonalizedGroupsOrder;	// 608 = 0x260
    NTPBVideoGroupsConfig *_forYouVideoGroupsConfig;	// 616 = 0x268
    NTPBIAdConfig *_iadConfig;	// 624 = 0x270
    NSMutableArray *_languageConfigs;	// 632 = 0x278
    unsigned int _orderFeedEnabledLevel;	// 640 = 0x280
    int _orderFeedEnabledLevelDeprecated;	// 644 = 0x284
    NTPBPaidSubscriptionConfig *_paidSubscriptionConfig;	// 648 = 0x288
    NSString *_personalizationBundleIdMappingResourceId;	// 656 = 0x290
    NTPBPersonalizationConfig *_personalizationConfig;	// 664 = 0x298
    NSString *_personalizationPortraitConfigResourceId;	// 672 = 0x2a0
    NSString *_personalizationPublisherFavorabilityScoresResourceId;	// 680 = 0x2a8
    NTPBPersonalizationTreatment *_personalizationTreatment;	// 688 = 0x2b0
    NSString *_personalizationUrlMappingResourceId;	// 696 = 0x2b8
    NSString *_personalizationWhitelistResourceId;	// 704 = 0x2c0
    NSString *_personalizationWidgetSectionMappingResourceId;	// 712 = 0x2c8
    NTPBPrefetchConfig *_prefetchConfig;	// 720 = 0x2d0
    unsigned int _privateDataMigrationCleanupLevel;	// 728 = 0x2d8
    int _trendingStyle;	// 732 = 0x2dc
    NTPBUserSegmentationApiConfiguration *_userSegmentationApiConfiguration;	// 736 = 0x2e0
    NTPBWidgetConfig *_widgetConfig;	// 744 = 0x2e8
    NTPBWidgetConfig *_widgetConfig2;	// 752 = 0x2f0
    _Bool _alternativeButlerWidgetConfigEnabled;	// 760 = 0x2f8
    _Bool _articleSearchEnabled;	// 761 = 0x2f9
    _Bool _corryBarHideDiscoverMoreInterstitialForNonOnboardedUsers;	// 762 = 0x2fa
    _Bool _disableThumbnailsForArticleRecirculation;	// 763 = 0x2fb
    _Bool _diversifyOptionalTopStories;	// 764 = 0x2fc
    _Bool _newsletterSubscriptionChecked;	// 765 = 0x2fd
    _Bool _orderFeedEndpointEnabled;	// 766 = 0x2fe
    _Bool _terminateAppOnBackgroundAfterJoiningOrLeavingExperiment;	// 767 = 0x2ff
    _Bool _universalLinksEnabled;	// 768 = 0x300
    _Bool _usUkUseAuWhatsNewFeatures;	// 769 = 0x301
    _Bool _useSecureConnectionForAssets;	// 770 = 0x302
    struct {
        unsigned int analyticsEndpointMaxPayloadSize:1;
        unsigned int appConfigRefreshRate:1;
        unsigned int articleDiversitySimilarityExpectationEnd:1;
        unsigned int articleDiversitySimilarityExpectationStart:1;
        unsigned int articleRapidUpdatesTimeout:1;
        unsigned int articleRecirculationPopularFeedQueryTimeRange:1;
        unsigned int autoRefreshMinimumInterval:1;
        unsigned int autoScrollToTopFeedTimeout:1;
        unsigned int batchedFeedTimeout:1;
        unsigned int corryBarMaxArticleCountForArticleList:1;
        unsigned int corryBarMaxArticleCountForSingleArticle:1;
        unsigned int endOfArticleMaxInaccessiblePaidArticles:1;
        unsigned int endOfArticleMinPaidHeadlineRatio:1;
        unsigned int expirePinnedArticlesAfter:1;
        unsigned int expiredPaidSubscriptionGroupCutoffTime:1;
        unsigned int initialArticlesFromNewFavorite:1;
        unsigned int interstitialAdLoadDelay:1;
        unsigned int longReminderTime:1;
        unsigned int maxExpiredPaidSubscriptionGroupCount:1;
        unsigned int maxPaidSubscriptionGroupSizeIPad:1;
        unsigned int maxPaidSubscriptionGroupSizeIPhone:1;
        unsigned int maxTimesHeadlineInPaidSubscriptionGroup:1;
        unsigned int maximumRatioOfArticlesInForYouGroup:1;
        unsigned int minimumArticleUpdateInterval:1;
        unsigned int minimumDistanceBetweenImageOnTopTiles:1;
        unsigned int minimumDurationBetweenForYouGroupsWeekday:1;
        unsigned int minimumDurationBetweenForYouGroupsWeekend:1;
        unsigned int minimumDurationBetweenTrendingGroupsWeekday:1;
        unsigned int minimumDurationBetweenTrendingGroupsWeekend:1;
        unsigned int minimumFollowCountToRemovePersonalizePlacardInFollowing:1;
        unsigned int minimumTrendingUnseenRatio:1;
        unsigned int newFavoriteNotificationAlertsFrequency:1;
        unsigned int notificationArticleCacheTimeout:1;
        unsigned int notificationArticleWithRapidUpdatesCacheTimeout:1;
        unsigned int notificationEnabledChannelsRefreshFrequency:1;
        unsigned int numberOfScreenfulsScrolledToBypassWidgetTimeLimit:1;
        unsigned int optionalTopStoriesRefreshRate:1;
        unsigned int prerollLoadingTimeout:1;
        unsigned int publisherDiversitySlope:1;
        unsigned int publisherDiversityYIntercept:1;
        unsigned int savedArticlesCutoffTime:1;
        unsigned int savedArticlesMaximumCountCellular:1;
        unsigned int savedArticlesMaximumCountWifi:1;
        unsigned int savedArticlesOpenedCutoffTime:1;
        unsigned int shortReminderTime:1;
        unsigned int stateRestorationAllowedTimeWindow:1;
        unsigned int subscriptionsGlobalMeteredCount:1;
        unsigned int subscriptionsGracePeriodForTokenVerificationSeconds:1;
        unsigned int subscriptionsPlacardGlobalMaxPerDay:1;
        unsigned int subscriptionsPlacardPublisherFrequencyDays:1;
        unsigned int subscriptionsPlacardPublisherFrequencySeconds:1;
        unsigned int tileProminenceScoreBalanceValue:1;
        unsigned int timeBetweenSameWidgetReinsertion:1;
        unsigned int timeBetweenWidgetInsertions:1;
        unsigned int treatmentId:1;
        unsigned int trendingTopicsRefreshRate:1;
        unsigned int userSegmentationApiModMax:1;
        unsigned int userSegmentationApiModThreshold:1;
        unsigned int widgetEventImmediateUploadModuloForHashing:1;
        unsigned int widgetEventImmediateUploadPopulationCeiling:1;
        unsigned int widgetEventImmediateUploadPopulationFloor:1;
        unsigned int enabledPrivateDataEncryptionLevel:1;
        unsigned int orderFeedEnabledLevel:1;
        unsigned int orderFeedEnabledLevelDeprecated:1;
        unsigned int privateDataMigrationCleanupLevel:1;
        unsigned int trendingStyle:1;
        unsigned int alternativeButlerWidgetConfigEnabled:1;
        unsigned int articleSearchEnabled:1;
        unsigned int corryBarHideDiscoverMoreInterstitialForNonOnboardedUsers:1;
        unsigned int disableThumbnailsForArticleRecirculation:1;
        unsigned int diversifyOptionalTopStories:1;
        unsigned int newsletterSubscriptionChecked:1;
        unsigned int orderFeedEndpointEnabled:1;
        unsigned int terminateAppOnBackgroundAfterJoiningOrLeavingExperiment:1;
        unsigned int universalLinksEnabled:1;
        unsigned int usUkUseAuWhatsNewFeatures:1;
        unsigned int useSecureConnectionForAssets:1;
    } _has;	// 772 = 0x304
}

+ (Class)externalAnalyticsConfigType;	// IMP=0x00000000000b658e
+ (Class)endpointConfigsType;	// IMP=0x00000000000b51dd
+ (Class)languageConfigsType;	// IMP=0x00000000000b4ef6
- (void).cxx_destruct;	// IMP=0x00000000000c39ce
@property(retain, nonatomic) NTPBUserSegmentationApiConfiguration *userSegmentationApiConfiguration; // @synthesize userSegmentationApiConfiguration=_userSegmentationApiConfiguration;
@property(retain, nonatomic) NSString *articleRecirculationComponentPlacementConfig; // @synthesize articleRecirculationComponentPlacementConfig=_articleRecirculationComponentPlacementConfig;
@property(nonatomic) unsigned int privateDataMigrationCleanupLevel; // @synthesize privateDataMigrationCleanupLevel=_privateDataMigrationCleanupLevel;
@property(nonatomic) long long userSegmentationApiModMax; // @synthesize userSegmentationApiModMax=_userSegmentationApiModMax;
@property(nonatomic) long long userSegmentationApiModThreshold; // @synthesize userSegmentationApiModThreshold=_userSegmentationApiModThreshold;
@property(nonatomic) long long optionalTopStoriesRefreshRate; // @synthesize optionalTopStoriesRefreshRate=_optionalTopStoriesRefreshRate;
@property(retain, nonatomic) NSString *articleRecirculationConfig; // @synthesize articleRecirculationConfig=_articleRecirculationConfig;
@property(retain, nonatomic) NTPBVideoGroupsConfig *forYouVideoGroupsConfig; // @synthesize forYouVideoGroupsConfig=_forYouVideoGroupsConfig;
@property(nonatomic) long long minimumDurationBetweenTrendingGroupsWeekend; // @synthesize minimumDurationBetweenTrendingGroupsWeekend=_minimumDurationBetweenTrendingGroupsWeekend;
@property(nonatomic) long long minimumDurationBetweenTrendingGroupsWeekday; // @synthesize minimumDurationBetweenTrendingGroupsWeekday=_minimumDurationBetweenTrendingGroupsWeekday;
@property(nonatomic) long long minimumDurationBetweenForYouGroupsWeekend; // @synthesize minimumDurationBetweenForYouGroupsWeekend=_minimumDurationBetweenForYouGroupsWeekend;
@property(nonatomic) long long minimumDurationBetweenForYouGroupsWeekday; // @synthesize minimumDurationBetweenForYouGroupsWeekday=_minimumDurationBetweenForYouGroupsWeekday;
@property(nonatomic) double minimumTrendingUnseenRatio; // @synthesize minimumTrendingUnseenRatio=_minimumTrendingUnseenRatio;
@property(nonatomic) double maximumRatioOfArticlesInForYouGroup; // @synthesize maximumRatioOfArticlesInForYouGroup=_maximumRatioOfArticlesInForYouGroup;
@property(nonatomic) long long autoRefreshMinimumInterval; // @synthesize autoRefreshMinimumInterval=_autoRefreshMinimumInterval;
@property(nonatomic) long long stateRestorationAllowedTimeWindow; // @synthesize stateRestorationAllowedTimeWindow=_stateRestorationAllowedTimeWindow;
@property(nonatomic) unsigned int orderFeedEnabledLevel; // @synthesize orderFeedEnabledLevel=_orderFeedEnabledLevel;
@property(nonatomic) _Bool usUkUseAuWhatsNewFeatures; // @synthesize usUkUseAuWhatsNewFeatures=_usUkUseAuWhatsNewFeatures;
@property(nonatomic) _Bool useSecureConnectionForAssets; // @synthesize useSecureConnectionForAssets=_useSecureConnectionForAssets;
@property(nonatomic) long long minimumFollowCountToRemovePersonalizePlacardInFollowing; // @synthesize minimumFollowCountToRemovePersonalizePlacardInFollowing=_minimumFollowCountToRemovePersonalizePlacardInFollowing;
@property(retain, nonatomic) NSString *experimentalizableFieldPostfix; // @synthesize experimentalizableFieldPostfix=_experimentalizableFieldPostfix;
@property(retain, nonatomic) NSString *personalizationPortraitConfigResourceId; // @synthesize personalizationPortraitConfigResourceId=_personalizationPortraitConfigResourceId;
@property(retain, nonatomic) NSMutableArray *externalAnalyticsConfigs; // @synthesize externalAnalyticsConfigs=_externalAnalyticsConfigs;
@property(nonatomic) _Bool corryBarHideDiscoverMoreInterstitialForNonOnboardedUsers; // @synthesize corryBarHideDiscoverMoreInterstitialForNonOnboardedUsers=_corryBarHideDiscoverMoreInterstitialForNonOnboardedUsers;
@property(nonatomic) long long corryBarMaxArticleCountForSingleArticle; // @synthesize corryBarMaxArticleCountForSingleArticle=_corryBarMaxArticleCountForSingleArticle;
@property(nonatomic) long long corryBarMaxArticleCountForArticleList; // @synthesize corryBarMaxArticleCountForArticleList=_corryBarMaxArticleCountForArticleList;
@property(retain, nonatomic) NSString *personalizationWidgetSectionMappingResourceId; // @synthesize personalizationWidgetSectionMappingResourceId=_personalizationWidgetSectionMappingResourceId;
@property(retain, nonatomic) NSString *personalizationPublisherFavorabilityScoresResourceId; // @synthesize personalizationPublisherFavorabilityScoresResourceId=_personalizationPublisherFavorabilityScoresResourceId;
@property(nonatomic) unsigned int enabledPrivateDataEncryptionLevel; // @synthesize enabledPrivateDataEncryptionLevel=_enabledPrivateDataEncryptionLevel;
@property(retain, nonatomic) NSString *personalizationWhitelistResourceId; // @synthesize personalizationWhitelistResourceId=_personalizationWhitelistResourceId;
@property(retain, nonatomic) NSString *personalizationUrlMappingResourceId; // @synthesize personalizationUrlMappingResourceId=_personalizationUrlMappingResourceId;
@property(retain, nonatomic) NSString *personalizationBundleIdMappingResourceId; // @synthesize personalizationBundleIdMappingResourceId=_personalizationBundleIdMappingResourceId;
@property(retain, nonatomic) NTPBPersonalizationTreatment *personalizationTreatment; // @synthesize personalizationTreatment=_personalizationTreatment;
@property(retain, nonatomic) NTPBBinningConfig *binningConfig; // @synthesize binningConfig=_binningConfig;
@property(nonatomic) long long treatmentId; // @synthesize treatmentId=_treatmentId;
@property(nonatomic) long long subscriptionsPlacardPublisherFrequencySeconds; // @synthesize subscriptionsPlacardPublisherFrequencySeconds=_subscriptionsPlacardPublisherFrequencySeconds;
@property(retain, nonatomic) NTPBWidgetConfig *widgetConfig2; // @synthesize widgetConfig2=_widgetConfig2;
@property(retain, nonatomic) NTPBPaidSubscriptionConfig *paidSubscriptionConfig; // @synthesize paidSubscriptionConfig=_paidSubscriptionConfig;
@property(retain, nonatomic) NTPBWidgetConfig *butlerWidgetConfig; // @synthesize butlerWidgetConfig=_butlerWidgetConfig;
@property(nonatomic) _Bool alternativeButlerWidgetConfigEnabled; // @synthesize alternativeButlerWidgetConfigEnabled=_alternativeButlerWidgetConfigEnabled;
@property(retain, nonatomic) NTPBWidgetConfig *alternativeButlerWidgetConfig; // @synthesize alternativeButlerWidgetConfig=_alternativeButlerWidgetConfig;
@property(retain, nonatomic) NSString *forYouNonPersonalizedGroupsOrder; // @synthesize forYouNonPersonalizedGroupsOrder=_forYouNonPersonalizedGroupsOrder;
@property(nonatomic) long long notificationArticleWithRapidUpdatesCacheTimeout; // @synthesize notificationArticleWithRapidUpdatesCacheTimeout=_notificationArticleWithRapidUpdatesCacheTimeout;
@property(nonatomic) long long notificationArticleCacheTimeout; // @synthesize notificationArticleCacheTimeout=_notificationArticleCacheTimeout;
@property(nonatomic) _Bool universalLinksEnabled; // @synthesize universalLinksEnabled=_universalLinksEnabled;
@property(retain, nonatomic) NTPBWidgetConfig *widgetConfig; // @synthesize widgetConfig=_widgetConfig;
@property(nonatomic) long long endOfArticleMaxInaccessiblePaidArticles; // @synthesize endOfArticleMaxInaccessiblePaidArticles=_endOfArticleMaxInaccessiblePaidArticles;
@property(nonatomic) double endOfArticleMinPaidHeadlineRatio; // @synthesize endOfArticleMinPaidHeadlineRatio=_endOfArticleMinPaidHeadlineRatio;
@property(nonatomic) long long newFavoriteNotificationAlertsFrequency; // @synthesize newFavoriteNotificationAlertsFrequency=_newFavoriteNotificationAlertsFrequency;
@property(nonatomic) long long subscriptionsGracePeriodForTokenVerificationSeconds; // @synthesize subscriptionsGracePeriodForTokenVerificationSeconds=_subscriptionsGracePeriodForTokenVerificationSeconds;
@property(nonatomic) long long subscriptionsPlacardGlobalMaxPerDay; // @synthesize subscriptionsPlacardGlobalMaxPerDay=_subscriptionsPlacardGlobalMaxPerDay;
@property(nonatomic) long long subscriptionsPlacardPublisherFrequencyDays; // @synthesize subscriptionsPlacardPublisherFrequencyDays=_subscriptionsPlacardPublisherFrequencyDays;
@property(retain, nonatomic) NSString *anfEmbedConfigurationAsset; // @synthesize anfEmbedConfigurationAsset=_anfEmbedConfigurationAsset;
@property(nonatomic) long long subscriptionsGlobalMeteredCount; // @synthesize subscriptionsGlobalMeteredCount=_subscriptionsGlobalMeteredCount;
@property(nonatomic) long long articleRapidUpdatesTimeout; // @synthesize articleRapidUpdatesTimeout=_articleRapidUpdatesTimeout;
@property(nonatomic) long long numberOfScreenfulsScrolledToBypassWidgetTimeLimit; // @synthesize numberOfScreenfulsScrolledToBypassWidgetTimeLimit=_numberOfScreenfulsScrolledToBypassWidgetTimeLimit;
@property(nonatomic) long long timeBetweenSameWidgetReinsertion; // @synthesize timeBetweenSameWidgetReinsertion=_timeBetweenSameWidgetReinsertion;
@property(nonatomic) long long timeBetweenWidgetInsertions; // @synthesize timeBetweenWidgetInsertions=_timeBetweenWidgetInsertions;
@property(nonatomic) long long minimumDistanceBetweenImageOnTopTiles; // @synthesize minimumDistanceBetweenImageOnTopTiles=_minimumDistanceBetweenImageOnTopTiles;
@property(nonatomic) long long appConfigRefreshRate; // @synthesize appConfigRefreshRate=_appConfigRefreshRate;
@property(nonatomic) long long trendingTopicsRefreshRate; // @synthesize trendingTopicsRefreshRate=_trendingTopicsRefreshRate;
@property(nonatomic) long long autoScrollToTopFeedTimeout; // @synthesize autoScrollToTopFeedTimeout=_autoScrollToTopFeedTimeout;
@property(nonatomic) long long initialArticlesFromNewFavorite; // @synthesize initialArticlesFromNewFavorite=_initialArticlesFromNewFavorite;
@property(nonatomic) long long minimumArticleUpdateInterval; // @synthesize minimumArticleUpdateInterval=_minimumArticleUpdateInterval;
@property(nonatomic) double tileProminenceScoreBalanceValue; // @synthesize tileProminenceScoreBalanceValue=_tileProminenceScoreBalanceValue;
@property(retain, nonatomic) NTPBPrefetchConfig *prefetchConfig; // @synthesize prefetchConfig=_prefetchConfig;
@property(retain, nonatomic) NTPBIAdConfig *iadConfig; // @synthesize iadConfig=_iadConfig;
@property(retain, nonatomic) NTPBPersonalizationConfig *personalizationConfig; // @synthesize personalizationConfig=_personalizationConfig;
@property(retain, nonatomic) NSMutableArray *endpointConfigs; // @synthesize endpointConfigs=_endpointConfigs;
@property(nonatomic) double prerollLoadingTimeout; // @synthesize prerollLoadingTimeout=_prerollLoadingTimeout;
@property(nonatomic) double interstitialAdLoadDelay; // @synthesize interstitialAdLoadDelay=_interstitialAdLoadDelay;
@property(nonatomic) double batchedFeedTimeout; // @synthesize batchedFeedTimeout=_batchedFeedTimeout;
@property(nonatomic) _Bool newsletterSubscriptionChecked; // @synthesize newsletterSubscriptionChecked=_newsletterSubscriptionChecked;
@property(nonatomic) long long longReminderTime; // @synthesize longReminderTime=_longReminderTime;
@property(nonatomic) long long shortReminderTime; // @synthesize shortReminderTime=_shortReminderTime;
@property(retain, nonatomic) NSMutableArray *languageConfigs; // @synthesize languageConfigs=_languageConfigs;
@property(retain, nonatomic) NSString *fallbackLanguageTag; // @synthesize fallbackLanguageTag=_fallbackLanguageTag;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000c20c1
- (unsigned long long)hash;	// IMP=0x00000000000c0645
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000befcf
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000bdd22
- (void)writeTo:(id)arg1;	// IMP=0x00000000000bcca9
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000bcc9c
- (id)dictionaryRepresentation;	// IMP=0x00000000000b72b9
- (id)description;	// IMP=0x00000000000b720a
@property(readonly, nonatomic) _Bool hasUserSegmentationApiConfiguration;
@property(nonatomic) _Bool hasDisableThumbnailsForArticleRecirculation;
@property(nonatomic) _Bool disableThumbnailsForArticleRecirculation; // @synthesize disableThumbnailsForArticleRecirculation=_disableThumbnailsForArticleRecirculation;
@property(nonatomic) _Bool hasArticleRecirculationPopularFeedQueryTimeRange;
@property(nonatomic) long long articleRecirculationPopularFeedQueryTimeRange; // @synthesize articleRecirculationPopularFeedQueryTimeRange=_articleRecirculationPopularFeedQueryTimeRange;
@property(nonatomic) _Bool hasWidgetEventImmediateUploadModuloForHashing;
@property(nonatomic) long long widgetEventImmediateUploadModuloForHashing; // @synthesize widgetEventImmediateUploadModuloForHashing=_widgetEventImmediateUploadModuloForHashing;
@property(nonatomic) _Bool hasWidgetEventImmediateUploadPopulationCeiling;
@property(nonatomic) long long widgetEventImmediateUploadPopulationCeiling; // @synthesize widgetEventImmediateUploadPopulationCeiling=_widgetEventImmediateUploadPopulationCeiling;
@property(nonatomic) _Bool hasWidgetEventImmediateUploadPopulationFloor;
@property(nonatomic) long long widgetEventImmediateUploadPopulationFloor; // @synthesize widgetEventImmediateUploadPopulationFloor=_widgetEventImmediateUploadPopulationFloor;
@property(readonly, nonatomic) _Bool hasArticleRecirculationComponentPlacementConfig;
@property(nonatomic) _Bool hasPrivateDataMigrationCleanupLevel;
@property(nonatomic) _Bool hasUserSegmentationApiModMax;
@property(nonatomic) _Bool hasUserSegmentationApiModThreshold;
@property(nonatomic) _Bool hasExpirePinnedArticlesAfter;
@property(nonatomic) long long expirePinnedArticlesAfter; // @synthesize expirePinnedArticlesAfter=_expirePinnedArticlesAfter;
@property(nonatomic) _Bool hasOptionalTopStoriesRefreshRate;
@property(readonly, nonatomic) _Bool hasArticleRecirculationConfig;
@property(readonly, nonatomic) _Bool hasForYouVideoGroupsConfig;
@property(nonatomic) _Bool hasDiversifyOptionalTopStories;
@property(nonatomic) _Bool diversifyOptionalTopStories; // @synthesize diversifyOptionalTopStories=_diversifyOptionalTopStories;
@property(nonatomic) _Bool hasMinimumDurationBetweenTrendingGroupsWeekend;
@property(nonatomic) _Bool hasMinimumDurationBetweenTrendingGroupsWeekday;
@property(nonatomic) _Bool hasMinimumDurationBetweenForYouGroupsWeekend;
@property(nonatomic) _Bool hasMinimumDurationBetweenForYouGroupsWeekday;
@property(nonatomic) _Bool hasTrendingStyle;
@property(nonatomic) int trendingStyle; // @synthesize trendingStyle=_trendingStyle;
@property(nonatomic) _Bool hasMinimumTrendingUnseenRatio;
@property(nonatomic) _Bool hasMaximumRatioOfArticlesInForYouGroup;
@property(nonatomic) _Bool hasArticleSearchEnabled;
@property(nonatomic) _Bool articleSearchEnabled; // @synthesize articleSearchEnabled=_articleSearchEnabled;
- (void)setTopStoriesPublishTimeIntervals:(long long *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000000b69e2
- (long long)topStoriesPublishTimeIntervalsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000b6915
- (void)addTopStoriesPublishTimeIntervals:(long long)arg1;	// IMP=0x00000000000b6901
- (void)clearTopStoriesPublishTimeIntervals;	// IMP=0x00000000000b68f0
@property(readonly, nonatomic) long long *topStoriesPublishTimeIntervals;
@property(readonly, nonatomic) unsigned long long topStoriesPublishTimeIntervalsCount;
@property(nonatomic) _Bool hasTerminateAppOnBackgroundAfterJoiningOrLeavingExperiment;
@property(nonatomic) _Bool terminateAppOnBackgroundAfterJoiningOrLeavingExperiment; // @synthesize terminateAppOnBackgroundAfterJoiningOrLeavingExperiment=_terminateAppOnBackgroundAfterJoiningOrLeavingExperiment;
@property(nonatomic) _Bool hasAutoRefreshMinimumInterval;
@property(nonatomic) _Bool hasStateRestorationAllowedTimeWindow;
@property(nonatomic) _Bool hasOrderFeedEnabledLevel;
@property(nonatomic) _Bool hasUsUkUseAuWhatsNewFeatures;
@property(nonatomic) _Bool hasUseSecureConnectionForAssets;
@property(nonatomic) _Bool hasMinimumFollowCountToRemovePersonalizePlacardInFollowing;
@property(readonly, nonatomic) _Bool hasExperimentalizableFieldPostfix;
@property(nonatomic) _Bool hasOrderFeedEnabledLevelDeprecated;
@property(nonatomic) int orderFeedEnabledLevelDeprecated; // @synthesize orderFeedEnabledLevelDeprecated=_orderFeedEnabledLevelDeprecated;
@property(readonly, nonatomic) _Bool hasPersonalizationPortraitConfigResourceId;
- (id)externalAnalyticsConfigAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000b6571
- (unsigned long long)externalAnalyticsConfigsCount;	// IMP=0x00000000000b6554
- (void)addExternalAnalyticsConfig:(id)arg1;	// IMP=0x00000000000b64ea
- (void)clearExternalAnalyticsConfigs;	// IMP=0x00000000000b64cd
@property(nonatomic) _Bool hasCorryBarHideDiscoverMoreInterstitialForNonOnboardedUsers;
@property(nonatomic) _Bool hasCorryBarMaxArticleCountForSingleArticle;
@property(nonatomic) _Bool hasCorryBarMaxArticleCountForArticleList;
@property(readonly, nonatomic) _Bool hasPersonalizationWidgetSectionMappingResourceId;
@property(readonly, nonatomic) _Bool hasPersonalizationPublisherFavorabilityScoresResourceId;
@property(nonatomic) _Bool hasEnabledPrivateDataEncryptionLevel;
@property(readonly, nonatomic) _Bool hasPersonalizationWhitelistResourceId;
@property(readonly, nonatomic) _Bool hasPersonalizationUrlMappingResourceId;
@property(readonly, nonatomic) _Bool hasPersonalizationBundleIdMappingResourceId;
@property(nonatomic) _Bool hasOrderFeedEndpointEnabled;
@property(nonatomic) _Bool orderFeedEndpointEnabled; // @synthesize orderFeedEndpointEnabled=_orderFeedEndpointEnabled;
@property(nonatomic) _Bool hasAnalyticsEndpointMaxPayloadSize;
@property(nonatomic) long long analyticsEndpointMaxPayloadSize; // @synthesize analyticsEndpointMaxPayloadSize=_analyticsEndpointMaxPayloadSize;
@property(readonly, nonatomic) _Bool hasPersonalizationTreatment;
@property(readonly, nonatomic) _Bool hasBinningConfig;
@property(nonatomic) _Bool hasTreatmentId;
@property(nonatomic) _Bool hasSubscriptionsPlacardPublisherFrequencySeconds;
@property(readonly, nonatomic) _Bool hasWidgetConfig2;
@property(nonatomic) _Bool hasMaxExpiredPaidSubscriptionGroupCount;
@property(nonatomic) long long maxExpiredPaidSubscriptionGroupCount; // @synthesize maxExpiredPaidSubscriptionGroupCount=_maxExpiredPaidSubscriptionGroupCount;
@property(nonatomic) _Bool hasExpiredPaidSubscriptionGroupCutoffTime;
@property(nonatomic) long long expiredPaidSubscriptionGroupCutoffTime; // @synthesize expiredPaidSubscriptionGroupCutoffTime=_expiredPaidSubscriptionGroupCutoffTime;
@property(nonatomic) _Bool hasPublisherDiversityYIntercept;
@property(nonatomic) double publisherDiversityYIntercept; // @synthesize publisherDiversityYIntercept=_publisherDiversityYIntercept;
@property(nonatomic) _Bool hasPublisherDiversitySlope;
@property(nonatomic) double publisherDiversitySlope; // @synthesize publisherDiversitySlope=_publisherDiversitySlope;
@property(nonatomic) _Bool hasMaxTimesHeadlineInPaidSubscriptionGroup;
@property(nonatomic) long long maxTimesHeadlineInPaidSubscriptionGroup; // @synthesize maxTimesHeadlineInPaidSubscriptionGroup=_maxTimesHeadlineInPaidSubscriptionGroup;
@property(nonatomic) _Bool hasMaxPaidSubscriptionGroupSizeIPhone;
@property(nonatomic) long long maxPaidSubscriptionGroupSizeIPhone; // @synthesize maxPaidSubscriptionGroupSizeIPhone=_maxPaidSubscriptionGroupSizeIPhone;
@property(nonatomic) _Bool hasMaxPaidSubscriptionGroupSizeIPad;
@property(nonatomic) long long maxPaidSubscriptionGroupSizeIPad; // @synthesize maxPaidSubscriptionGroupSizeIPad=_maxPaidSubscriptionGroupSizeIPad;
@property(nonatomic) _Bool hasArticleDiversitySimilarityExpectationEnd;
@property(nonatomic) double articleDiversitySimilarityExpectationEnd; // @synthesize articleDiversitySimilarityExpectationEnd=_articleDiversitySimilarityExpectationEnd;
@property(nonatomic) _Bool hasArticleDiversitySimilarityExpectationStart;
@property(nonatomic) double articleDiversitySimilarityExpectationStart; // @synthesize articleDiversitySimilarityExpectationStart=_articleDiversitySimilarityExpectationStart;
@property(readonly, nonatomic) _Bool hasPaidSubscriptionConfig;
@property(readonly, nonatomic) _Bool hasButlerWidgetConfig;
@property(nonatomic) _Bool hasAlternativeButlerWidgetConfigEnabled;
@property(readonly, nonatomic) _Bool hasAlternativeButlerWidgetConfig;
@property(nonatomic) _Bool hasSavedArticlesOpenedCutoffTime;
@property(nonatomic) long long savedArticlesOpenedCutoffTime; // @synthesize savedArticlesOpenedCutoffTime=_savedArticlesOpenedCutoffTime;
@property(nonatomic) _Bool hasSavedArticlesCutoffTime;
@property(nonatomic) long long savedArticlesCutoffTime; // @synthesize savedArticlesCutoffTime=_savedArticlesCutoffTime;
@property(nonatomic) _Bool hasSavedArticlesMaximumCountCellular;
@property(nonatomic) long long savedArticlesMaximumCountCellular; // @synthesize savedArticlesMaximumCountCellular=_savedArticlesMaximumCountCellular;
@property(nonatomic) _Bool hasSavedArticlesMaximumCountWifi;
@property(nonatomic) long long savedArticlesMaximumCountWifi; // @synthesize savedArticlesMaximumCountWifi=_savedArticlesMaximumCountWifi;
@property(nonatomic) _Bool hasNotificationEnabledChannelsRefreshFrequency;
@property(nonatomic) long long notificationEnabledChannelsRefreshFrequency; // @synthesize notificationEnabledChannelsRefreshFrequency=_notificationEnabledChannelsRefreshFrequency;
@property(readonly, nonatomic) _Bool hasForYouNonPersonalizedGroupsOrder;
@property(nonatomic) _Bool hasNotificationArticleWithRapidUpdatesCacheTimeout;
@property(nonatomic) _Bool hasNotificationArticleCacheTimeout;
@property(nonatomic) _Bool hasUniversalLinksEnabled;
@property(readonly, nonatomic) _Bool hasWidgetConfig;
@property(nonatomic) _Bool hasEndOfArticleMaxInaccessiblePaidArticles;
@property(nonatomic) _Bool hasEndOfArticleMinPaidHeadlineRatio;
@property(nonatomic) _Bool hasNewFavoriteNotificationAlertsFrequency;
@property(nonatomic) _Bool hasSubscriptionsGracePeriodForTokenVerificationSeconds;
@property(nonatomic) _Bool hasSubscriptionsPlacardGlobalMaxPerDay;
@property(nonatomic) _Bool hasSubscriptionsPlacardPublisherFrequencyDays;
@property(readonly, nonatomic) _Bool hasAnfEmbedConfigurationAsset;
@property(nonatomic) _Bool hasSubscriptionsGlobalMeteredCount;
@property(nonatomic) _Bool hasArticleRapidUpdatesTimeout;
@property(nonatomic) _Bool hasNumberOfScreenfulsScrolledToBypassWidgetTimeLimit;
@property(nonatomic) _Bool hasTimeBetweenSameWidgetReinsertion;
@property(nonatomic) _Bool hasTimeBetweenWidgetInsertions;
@property(nonatomic) _Bool hasMinimumDistanceBetweenImageOnTopTiles;
@property(nonatomic) _Bool hasAppConfigRefreshRate;
@property(nonatomic) _Bool hasTrendingTopicsRefreshRate;
@property(nonatomic) _Bool hasAutoScrollToTopFeedTimeout;
@property(nonatomic) _Bool hasInitialArticlesFromNewFavorite;
@property(nonatomic) _Bool hasMinimumArticleUpdateInterval;
@property(nonatomic) _Bool hasTileProminenceScoreBalanceValue;
@property(readonly, nonatomic) _Bool hasPrefetchConfig;
@property(readonly, nonatomic) _Bool hasIadConfig;
@property(readonly, nonatomic) _Bool hasPersonalizationConfig;
- (id)endpointConfigsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000b51c0
- (unsigned long long)endpointConfigsCount;	// IMP=0x00000000000b51a3
- (void)addEndpointConfigs:(id)arg1;	// IMP=0x00000000000b5139
- (void)clearEndpointConfigs;	// IMP=0x00000000000b511c
@property(nonatomic) _Bool hasPrerollLoadingTimeout;
@property(nonatomic) _Bool hasInterstitialAdLoadDelay;
@property(nonatomic) _Bool hasBatchedFeedTimeout;
@property(nonatomic) _Bool hasNewsletterSubscriptionChecked;
@property(nonatomic) _Bool hasLongReminderTime;
@property(nonatomic) _Bool hasShortReminderTime;
- (id)languageConfigsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000b4ed9
- (unsigned long long)languageConfigsCount;	// IMP=0x00000000000b4ebc
- (void)addLanguageConfigs:(id)arg1;	// IMP=0x00000000000b4e52
- (void)clearLanguageConfigs;	// IMP=0x00000000000b4e35
@property(readonly, nonatomic) _Bool hasFallbackLanguageTag;
- (void)dealloc;	// IMP=0x00000000000b4de0

@end

