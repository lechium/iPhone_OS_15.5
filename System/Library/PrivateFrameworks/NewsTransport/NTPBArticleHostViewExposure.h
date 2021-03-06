//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSData, NSMutableArray, NSString, NTPBAlternateHeadline, NTPBChannelData, NTPBIssueData, NTPBIssueExposureData, NTPBIssueViewContextData, NTPBIssueViewData, NTPBWidgetEngagement;

@interface NTPBArticleHostViewExposure : PBCodable <NSCopying>
{
    double _agedPersonalizationScore;	// 8 = 0x8
    double _agedUserFeedbackScore;	// 16 = 0x10
    double _autoSubscribeCtr;	// 24 = 0x18
    long long _backendArticleVersionInt64;	// 32 = 0x20
    double _computedGlobalScoreCoefficient;	// 40 = 0x28
    double _diversifiedPersonalizationScore;	// 48 = 0x30
    double _featureCtr;	// 56 = 0x38
    double _globalScore;	// 64 = 0x40
    double _paidNonpaidSubscriptionCtr;	// 72 = 0x48
    double _personalizationScore;	// 80 = 0x50
    long long _personalizationTreatmentId;	// 88 = 0x58
    long long _previousArticlePublisherArticleVersion;	// 96 = 0x60
    long long _publisherArticleVersionInt64;	// 104 = 0x68
    double _subscribedChannelCtr;	// 112 = 0x70
    double _userFeedbackScore;	// 120 = 0x78
    int _activeTimeSpent;	// 128 = 0x80
    NTPBAlternateHeadline *_alternateHeadline;	// 136 = 0x88
    NSString *_anfComponentId;	// 144 = 0x90
    int _articleDisplayRankInGroup;	// 152 = 0x98
    int _articleHostViewType;	// 156 = 0x9c
    NSString *_articleId;	// 160 = 0xa0
    NSData *_articleSessionId;	// 168 = 0xa8
    int _articleSuggestionOrigin;	// 176 = 0xb0
    int _articleType;	// 180 = 0xb4
    int _articleViewPresentationReason;	// 184 = 0xb8
    NSData *_articleViewingSessionId;	// 192 = 0xc0
    int _backendArticleVersion;	// 200 = 0xc8
    int _breakingNewsArticleCount;	// 204 = 0xcc
    int _breakingNewsArticlePosition;	// 208 = 0xd0
    NSString *_campaignId;	// 216 = 0xd8
    NSString *_campaignType;	// 224 = 0xe0
    NTPBChannelData *_channelData;	// 232 = 0xe8
    int _characterCount;	// 240 = 0xf0
    int _coverArticleDisplayRank;	// 244 = 0xf4
    int _coverArticleFeatureType;	// 248 = 0xf8
    NSString *_creativeId;	// 256 = 0x100
    NSString *_curatedBatchId;	// 264 = 0x108
    int _curatedContentType;	// 272 = 0x110
    int _displayRank;	// 276 = 0x114
    NSString *_exposedGroupSourceChannelId;	// 280 = 0x118
    NSString *_exposedInLocationId;	// 288 = 0x120
    int _feedAutoSubscribeType;	// 296 = 0x128
    int _feedCellHostType;	// 300 = 0x12c
    int _feedPresentationReason;	// 304 = 0x130
    NSString *_feedPresentationReasonSearchString;	// 312 = 0x138
    int _feedSubscriptionOrigin;	// 320 = 0x140
    NSData *_feedViewExposureId;	// 328 = 0x148
    NSMutableArray *_fractionalCohortMemberships;	// 336 = 0x150
    int _groupArticleCountInForYou;	// 344 = 0x158
    int _groupDisplayRankInForYou;	// 348 = 0x15c
    NSString *_groupFeedId;	// 352 = 0x160
    int _groupFormationReason;	// 360 = 0x168
    int _groupLocation;	// 364 = 0x16c
    int _groupPresentationReason;	// 368 = 0x170
    int _groupType;	// 372 = 0x174
    NSData *_groupViewExposureId;	// 376 = 0x178
    int _heroArticleType;	// 384 = 0x180
    NSString *_iadNativeAd;	// 392 = 0x188
    NSString *_iadNativeCampaign;	// 400 = 0x190
    NSString *_iadNativeCampaignAd;	// 408 = 0x198
    NSString *_iadNativeLine;	// 416 = 0x1a0
    NTPBIssueData *_issueData;	// 424 = 0x1a8
    NTPBIssueExposureData *_issueExposureData;	// 432 = 0x1b0
    NTPBIssueViewContextData *_issueViewContextData;	// 440 = 0x1b8
    NTPBIssueViewData *_issueViewData;	// 448 = 0x1c0
    NSString *_language;	// 456 = 0x1c8
    int _loadFailureReason;	// 464 = 0x1d0
    int _maxActiveTimeSpent;	// 468 = 0x1d4
    float _maxVerticalScrollPositionEnding;	// 472 = 0x1d8
    int _moduleEventType;	// 476 = 0x1dc
    NSData *_moduleExposureId;	// 480 = 0x1e0
    int _moduleItemCount;	// 488 = 0x1e8
    int _moduleItemPosition;	// 492 = 0x1ec
    int _moduleLocation;	// 496 = 0x1f0
    NSMutableArray *_namedEntities;	// 504 = 0x1f8
    NSString *_nativeCampaignData;	// 512 = 0x200
    int _nextArticleAffordanceType;	// 520 = 0x208
    NSString *_nextArticleAffordanceTypeFeedId;	// 528 = 0x210
    NSString *_notificationId;	// 536 = 0x218
    int _paidSubscriberToFeedType;	// 544 = 0x220
    NSString *_parentFeedId;	// 552 = 0x228
    int _parentFeedType;	// 560 = 0x230
    int _previousArticleHostViewTypeIfSwipe;	// 564 = 0x234
    NSString *_previousArticleId;	// 568 = 0x238
    NSString *_previousArticleVersion;	// 576 = 0x240
    NSString *_previousWebEmbedId;	// 584 = 0x248
    int _previousWebEmbedLocation;	// 592 = 0x250
    int _publisherArticleVersion;	// 596 = 0x254
    NSMutableArray *_purchaseOffersItems;	// 600 = 0x258
    int _rankInVideoPlaylist;	// 608 = 0x260
    NSString *_referencedArticleId;	// 616 = 0x268
    NSString *_referringSourceApplication;	// 624 = 0x270
    NSString *_referringUrl;	// 632 = 0x278
    int _role;	// 640 = 0x280
    NSString *_sectionHeadlineId;	// 648 = 0x288
    NSString *_sourceBinId;	// 656 = 0x290
    NSString *_sourceChannelId;	// 664 = 0x298
    NSString *_storyType;	// 672 = 0x2a0
    NSString *_surfacedByChannelId;	// 680 = 0x2a8
    NSString *_surfacedBySectionId;	// 688 = 0x2b0
    NSMutableArray *_surfacedByTagIds;	// 696 = 0x2b8
    NSString *_surfacedByTopicId;	// 704 = 0x2c0
    int _topStoryMandatoryArticleCount;	// 712 = 0x2c8
    int _topStoryOptionalArticleCount;	// 716 = 0x2cc
    int _topStoryType;	// 720 = 0x2d0
    NSMutableArray *_topicIds;	// 728 = 0x2d8
    NSString *_userActivityType;	// 736 = 0x2e0
    NSString *_viewFrameInScreen;	// 744 = 0x2e8
    NSString *_webEmbedId;	// 752 = 0x2f0
    int _widgetArticleRank;	// 760 = 0x2f8
    NTPBWidgetEngagement *_widgetEngagement;	// 768 = 0x300
    int _widgetSection;	// 776 = 0x308
    int _widgetSectionArticleRank;	// 780 = 0x30c
    _Bool _adSupportedChannel;	// 784 = 0x310
    _Bool _articleLoaded;	// 785 = 0x311
    _Bool _badgeExposure;	// 786 = 0x312
    _Bool _didBounce;	// 787 = 0x313
    _Bool _didExpandDuringView;	// 788 = 0x314
    _Bool _didOpenInSafari;	// 789 = 0x315
    _Bool _isAudioEligible;	// 790 = 0x316
    _Bool _isAudioEngaged;	// 791 = 0x317
    _Bool _isBreakingNewsArticle;	// 792 = 0x318
    _Bool _isCoverArticle;	// 793 = 0x319
    _Bool _isDigitalReplicaAd;	// 794 = 0x31a
    _Bool _isExplorationArticle;	// 795 = 0x31b
    _Bool _isFreeArticle;	// 796 = 0x31c
    _Bool _isGroupedArticle;	// 797 = 0x31d
    _Bool _isNativeAd;	// 798 = 0x31e
    _Bool _isNewUserToArticle;	// 799 = 0x31f
    _Bool _isPaidSubscriberToFeed;	// 800 = 0x320
    _Bool _isPaidSubscriberToSourceChannel;	// 801 = 0x321
    _Bool _isSharedSubscriptionOnlyArticle;	// 802 = 0x322
    _Bool _isSubscribedToGroupFeed;	// 803 = 0x323
    _Bool _isSubscribedToSourceChannel;	// 804 = 0x324
    _Bool _isTopStoryArticle;	// 805 = 0x325
    _Bool _isUserSubscribedToParentFeed;	// 806 = 0x326
    _Bool _isVideoInFeed;	// 807 = 0x327
    _Bool _subscriptionOnlyArticle;	// 808 = 0x328
    _Bool _viewFromNotificationDirectOpen;	// 809 = 0x329
    CDStruct_5b8c9b53 _has;	// 812 = 0x32c
}

+ (Class)purchaseOffersItemType;	// IMP=0x000000000006de36
+ (Class)topicIdsType;	// IMP=0x000000000006dd64
+ (Class)surfacedByTagIdsType;	// IMP=0x000000000006d53c
+ (Class)fractionalCohortMembershipType;	// IMP=0x000000000006bd40
+ (Class)namedEntitiesType;	// IMP=0x000000000006a02a
- (void).cxx_destruct;	// IMP=0x000000000007f0f0
@property(retain, nonatomic) NSMutableArray *purchaseOffersItems; // @synthesize purchaseOffersItems=_purchaseOffersItems;
@property(retain, nonatomic) NSMutableArray *topicIds; // @synthesize topicIds=_topicIds;
@property(nonatomic) _Bool isAudioEngaged; // @synthesize isAudioEngaged=_isAudioEngaged;
@property(nonatomic) _Bool isAudioEligible; // @synthesize isAudioEligible=_isAudioEligible;
@property(retain, nonatomic) NSString *curatedBatchId; // @synthesize curatedBatchId=_curatedBatchId;
@property(retain, nonatomic) NSString *webEmbedId; // @synthesize webEmbedId=_webEmbedId;
@property(retain, nonatomic) NTPBIssueViewContextData *issueViewContextData; // @synthesize issueViewContextData=_issueViewContextData;
@property(retain, nonatomic) NTPBChannelData *channelData; // @synthesize channelData=_channelData;
@property(retain, nonatomic) NTPBIssueViewData *issueViewData; // @synthesize issueViewData=_issueViewData;
@property(retain, nonatomic) NTPBIssueExposureData *issueExposureData; // @synthesize issueExposureData=_issueExposureData;
@property(retain, nonatomic) NTPBIssueData *issueData; // @synthesize issueData=_issueData;
@property(nonatomic) int rankInVideoPlaylist; // @synthesize rankInVideoPlaylist=_rankInVideoPlaylist;
@property(retain, nonatomic) NTPBAlternateHeadline *alternateHeadline; // @synthesize alternateHeadline=_alternateHeadline;
@property(nonatomic) double subscribedChannelCtr; // @synthesize subscribedChannelCtr=_subscribedChannelCtr;
@property(nonatomic) _Bool didExpandDuringView; // @synthesize didExpandDuringView=_didExpandDuringView;
@property(retain, nonatomic) NSString *exposedGroupSourceChannelId; // @synthesize exposedGroupSourceChannelId=_exposedGroupSourceChannelId;
@property(retain, nonatomic) NSData *groupViewExposureId; // @synthesize groupViewExposureId=_groupViewExposureId;
@property(retain, nonatomic) NSString *exposedInLocationId; // @synthesize exposedInLocationId=_exposedInLocationId;
@property(retain, nonatomic) NSString *iadNativeCampaignAd; // @synthesize iadNativeCampaignAd=_iadNativeCampaignAd;
@property(retain, nonatomic) NSMutableArray *surfacedByTagIds; // @synthesize surfacedByTagIds=_surfacedByTagIds;
@property(retain, nonatomic) NSString *previousWebEmbedId; // @synthesize previousWebEmbedId=_previousWebEmbedId;
@property(retain, nonatomic) NSData *moduleExposureId; // @synthesize moduleExposureId=_moduleExposureId;
@property(nonatomic) int moduleItemPosition; // @synthesize moduleItemPosition=_moduleItemPosition;
@property(nonatomic) int moduleItemCount; // @synthesize moduleItemCount=_moduleItemCount;
@property(nonatomic) double diversifiedPersonalizationScore; // @synthesize diversifiedPersonalizationScore=_diversifiedPersonalizationScore;
@property(nonatomic) double agedPersonalizationScore; // @synthesize agedPersonalizationScore=_agedPersonalizationScore;
@property(nonatomic) double agedUserFeedbackScore; // @synthesize agedUserFeedbackScore=_agedUserFeedbackScore;
@property(nonatomic) double userFeedbackScore; // @synthesize userFeedbackScore=_userFeedbackScore;
@property(nonatomic) double globalScore; // @synthesize globalScore=_globalScore;
@property(nonatomic) double computedGlobalScoreCoefficient; // @synthesize computedGlobalScoreCoefficient=_computedGlobalScoreCoefficient;
@property(nonatomic) double autoSubscribeCtr; // @synthesize autoSubscribeCtr=_autoSubscribeCtr;
@property(nonatomic) double paidNonpaidSubscriptionCtr; // @synthesize paidNonpaidSubscriptionCtr=_paidNonpaidSubscriptionCtr;
@property(nonatomic) double featureCtr; // @synthesize featureCtr=_featureCtr;
@property(nonatomic) long long previousArticlePublisherArticleVersion; // @synthesize previousArticlePublisherArticleVersion=_previousArticlePublisherArticleVersion;
@property(retain, nonatomic) NSString *iadNativeAd; // @synthesize iadNativeAd=_iadNativeAd;
@property(retain, nonatomic) NSString *iadNativeLine; // @synthesize iadNativeLine=_iadNativeLine;
@property(retain, nonatomic) NSString *iadNativeCampaign; // @synthesize iadNativeCampaign=_iadNativeCampaign;
@property(nonatomic) long long backendArticleVersionInt64; // @synthesize backendArticleVersionInt64=_backendArticleVersionInt64;
@property(nonatomic) long long publisherArticleVersionInt64; // @synthesize publisherArticleVersionInt64=_publisherArticleVersionInt64;
@property(retain, nonatomic) NTPBWidgetEngagement *widgetEngagement; // @synthesize widgetEngagement=_widgetEngagement;
@property(nonatomic) _Bool badgeExposure; // @synthesize badgeExposure=_badgeExposure;
@property(retain, nonatomic) NSString *anfComponentId; // @synthesize anfComponentId=_anfComponentId;
@property(retain, nonatomic) NSString *previousArticleVersion; // @synthesize previousArticleVersion=_previousArticleVersion;
@property(retain, nonatomic) NSString *nativeCampaignData; // @synthesize nativeCampaignData=_nativeCampaignData;
@property(nonatomic) _Bool isNativeAd; // @synthesize isNativeAd=_isNativeAd;
@property(nonatomic) _Bool isSubscribedToSourceChannel; // @synthesize isSubscribedToSourceChannel=_isSubscribedToSourceChannel;
@property(nonatomic) double personalizationScore; // @synthesize personalizationScore=_personalizationScore;
@property(nonatomic) int topStoryOptionalArticleCount; // @synthesize topStoryOptionalArticleCount=_topStoryOptionalArticleCount;
@property(nonatomic) int topStoryMandatoryArticleCount; // @synthesize topStoryMandatoryArticleCount=_topStoryMandatoryArticleCount;
@property(nonatomic) int breakingNewsArticleCount; // @synthesize breakingNewsArticleCount=_breakingNewsArticleCount;
@property(nonatomic) int breakingNewsArticlePosition; // @synthesize breakingNewsArticlePosition=_breakingNewsArticlePosition;
@property(nonatomic) _Bool isBreakingNewsArticle; // @synthesize isBreakingNewsArticle=_isBreakingNewsArticle;
@property(retain, nonatomic) NSMutableArray *fractionalCohortMemberships; // @synthesize fractionalCohortMemberships=_fractionalCohortMemberships;
@property(nonatomic) int widgetArticleRank; // @synthesize widgetArticleRank=_widgetArticleRank;
@property(nonatomic) int widgetSectionArticleRank; // @synthesize widgetSectionArticleRank=_widgetSectionArticleRank;
@property(retain, nonatomic) NSString *previousArticleId; // @synthesize previousArticleId=_previousArticleId;
@property(nonatomic) _Bool articleLoaded; // @synthesize articleLoaded=_articleLoaded;
@property(nonatomic) int groupDisplayRankInForYou; // @synthesize groupDisplayRankInForYou=_groupDisplayRankInForYou;
@property(nonatomic) int groupArticleCountInForYou; // @synthesize groupArticleCountInForYou=_groupArticleCountInForYou;
@property(retain, nonatomic) NSString *nextArticleAffordanceTypeFeedId; // @synthesize nextArticleAffordanceTypeFeedId=_nextArticleAffordanceTypeFeedId;
@property(retain, nonatomic) NSString *notificationId; // @synthesize notificationId=_notificationId;
@property(nonatomic) _Bool viewFromNotificationDirectOpen; // @synthesize viewFromNotificationDirectOpen=_viewFromNotificationDirectOpen;
@property(retain, nonatomic) NSString *creativeId; // @synthesize creativeId=_creativeId;
@property(retain, nonatomic) NSString *campaignType; // @synthesize campaignType=_campaignType;
@property(retain, nonatomic) NSString *campaignId; // @synthesize campaignId=_campaignId;
@property(nonatomic) float maxVerticalScrollPositionEnding; // @synthesize maxVerticalScrollPositionEnding=_maxVerticalScrollPositionEnding;
@property(nonatomic) _Bool isPaidSubscriberToSourceChannel; // @synthesize isPaidSubscriberToSourceChannel=_isPaidSubscriberToSourceChannel;
@property(nonatomic) int coverArticleDisplayRank; // @synthesize coverArticleDisplayRank=_coverArticleDisplayRank;
@property(nonatomic) _Bool isCoverArticle; // @synthesize isCoverArticle=_isCoverArticle;
@property(nonatomic) _Bool isPaidSubscriberToFeed; // @synthesize isPaidSubscriberToFeed=_isPaidSubscriberToFeed;
@property(nonatomic) _Bool isFreeArticle; // @synthesize isFreeArticle=_isFreeArticle;
@property(nonatomic) _Bool isSharedSubscriptionOnlyArticle; // @synthesize isSharedSubscriptionOnlyArticle=_isSharedSubscriptionOnlyArticle;
@property(nonatomic) _Bool subscriptionOnlyArticle; // @synthesize subscriptionOnlyArticle=_subscriptionOnlyArticle;
@property(nonatomic) int articleDisplayRankInGroup; // @synthesize articleDisplayRankInGroup=_articleDisplayRankInGroup;
@property(nonatomic) _Bool isSubscribedToGroupFeed; // @synthesize isSubscribedToGroupFeed=_isSubscribedToGroupFeed;
@property(retain, nonatomic) NSString *groupFeedId; // @synthesize groupFeedId=_groupFeedId;
@property(nonatomic) _Bool isGroupedArticle; // @synthesize isGroupedArticle=_isGroupedArticle;
@property(retain, nonatomic) NSString *userActivityType; // @synthesize userActivityType=_userActivityType;
@property(nonatomic) long long personalizationTreatmentId; // @synthesize personalizationTreatmentId=_personalizationTreatmentId;
@property(retain, nonatomic) NSString *storyType; // @synthesize storyType=_storyType;
@property(nonatomic) _Bool isTopStoryArticle; // @synthesize isTopStoryArticle=_isTopStoryArticle;
@property(nonatomic) _Bool isVideoInFeed; // @synthesize isVideoInFeed=_isVideoInFeed;
@property(nonatomic) _Bool isDigitalReplicaAd; // @synthesize isDigitalReplicaAd=_isDigitalReplicaAd;
@property(retain, nonatomic) NSString *referringUrl; // @synthesize referringUrl=_referringUrl;
@property(retain, nonatomic) NSString *referringSourceApplication; // @synthesize referringSourceApplication=_referringSourceApplication;
@property(retain, nonatomic) NSString *sectionHeadlineId; // @synthesize sectionHeadlineId=_sectionHeadlineId;
@property(retain, nonatomic) NSString *surfacedByTopicId; // @synthesize surfacedByTopicId=_surfacedByTopicId;
@property(retain, nonatomic) NSString *surfacedBySectionId; // @synthesize surfacedBySectionId=_surfacedBySectionId;
@property(retain, nonatomic) NSString *surfacedByChannelId; // @synthesize surfacedByChannelId=_surfacedByChannelId;
@property(retain, nonatomic) NSMutableArray *namedEntities; // @synthesize namedEntities=_namedEntities;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
@property(nonatomic) int characterCount; // @synthesize characterCount=_characterCount;
@property(retain, nonatomic) NSString *viewFrameInScreen; // @synthesize viewFrameInScreen=_viewFrameInScreen;
@property(retain, nonatomic) NSString *sourceChannelId; // @synthesize sourceChannelId=_sourceChannelId;
@property(nonatomic) _Bool adSupportedChannel; // @synthesize adSupportedChannel=_adSupportedChannel;
@property(retain, nonatomic) NSString *sourceBinId; // @synthesize sourceBinId=_sourceBinId;
@property(nonatomic) _Bool isExplorationArticle; // @synthesize isExplorationArticle=_isExplorationArticle;
@property(nonatomic) _Bool didOpenInSafari; // @synthesize didOpenInSafari=_didOpenInSafari;
@property(nonatomic) _Bool isNewUserToArticle; // @synthesize isNewUserToArticle=_isNewUserToArticle;
@property(nonatomic) _Bool didBounce; // @synthesize didBounce=_didBounce;
@property(nonatomic) int maxActiveTimeSpent; // @synthesize maxActiveTimeSpent=_maxActiveTimeSpent;
@property(nonatomic) int activeTimeSpent; // @synthesize activeTimeSpent=_activeTimeSpent;
@property(nonatomic) _Bool isUserSubscribedToParentFeed; // @synthesize isUserSubscribedToParentFeed=_isUserSubscribedToParentFeed;
@property(retain, nonatomic) NSString *parentFeedId; // @synthesize parentFeedId=_parentFeedId;
@property(retain, nonatomic) NSString *feedPresentationReasonSearchString; // @synthesize feedPresentationReasonSearchString=_feedPresentationReasonSearchString;
@property(retain, nonatomic) NSData *feedViewExposureId; // @synthesize feedViewExposureId=_feedViewExposureId;
@property(nonatomic) int displayRank; // @synthesize displayRank=_displayRank;
@property(retain, nonatomic) NSData *articleViewingSessionId; // @synthesize articleViewingSessionId=_articleViewingSessionId;
@property(retain, nonatomic) NSData *articleSessionId; // @synthesize articleSessionId=_articleSessionId;
@property(nonatomic) int backendArticleVersion; // @synthesize backendArticleVersion=_backendArticleVersion;
@property(nonatomic) int publisherArticleVersion; // @synthesize publisherArticleVersion=_publisherArticleVersion;
@property(retain, nonatomic) NSString *referencedArticleId; // @synthesize referencedArticleId=_referencedArticleId;
@property(retain, nonatomic) NSString *articleId; // @synthesize articleId=_articleId;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000007c9ac
- (unsigned long long)hash;	// IMP=0x000000000007a927
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000078976
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000076c48
- (void)writeTo:(id)arg1;	// IMP=0x00000000000754d1
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000754c4
- (id)dictionaryRepresentation;	// IMP=0x000000000006def6
- (id)description;	// IMP=0x000000000006de47
- (id)purchaseOffersItemAtIndex:(unsigned long long)arg1;	// IMP=0x000000000006de19
- (unsigned long long)purchaseOffersItemsCount;	// IMP=0x000000000006ddfc
- (void)addPurchaseOffersItem:(id)arg1;	// IMP=0x000000000006dd92
- (void)clearPurchaseOffersItems;	// IMP=0x000000000006dd75
- (id)topicIdsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000006dd47
- (unsigned long long)topicIdsCount;	// IMP=0x000000000006dd2a
- (void)addTopicIds:(id)arg1;	// IMP=0x000000000006dcc0
- (void)clearTopicIds;	// IMP=0x000000000006dca3
@property(nonatomic) _Bool hasIsAudioEngaged;
@property(nonatomic) _Bool hasIsAudioEligible;
@property(readonly, nonatomic) _Bool hasCuratedBatchId;
@property(readonly, nonatomic) _Bool hasWebEmbedId;
@property(nonatomic) _Bool hasHeroArticleType;
@property(nonatomic) int heroArticleType; // @synthesize heroArticleType=_heroArticleType;
@property(readonly, nonatomic) _Bool hasIssueViewContextData;
@property(readonly, nonatomic) _Bool hasChannelData;
@property(nonatomic) _Bool hasRole;
@property(nonatomic) int role; // @synthesize role=_role;
@property(readonly, nonatomic) _Bool hasIssueViewData;
@property(readonly, nonatomic) _Bool hasIssueExposureData;
@property(readonly, nonatomic) _Bool hasIssueData;
@property(nonatomic) _Bool hasRankInVideoPlaylist;
@property(readonly, nonatomic) _Bool hasAlternateHeadline;
@property(nonatomic) _Bool hasSubscribedChannelCtr;
@property(nonatomic) _Bool hasDidExpandDuringView;
@property(nonatomic) _Bool hasArticleSuggestionOrigin;
@property(nonatomic) int articleSuggestionOrigin; // @synthesize articleSuggestionOrigin=_articleSuggestionOrigin;
@property(readonly, nonatomic) _Bool hasExposedGroupSourceChannelId;
@property(readonly, nonatomic) _Bool hasGroupViewExposureId;
@property(readonly, nonatomic) _Bool hasExposedInLocationId;
- (int)StringAsGroupLocation:(id)arg1;	// IMP=0x000000000006d7cc
- (id)groupLocationAsString:(int)arg1;	// IMP=0x000000000006d74c
@property(nonatomic) _Bool hasGroupLocation;
@property(nonatomic) int groupLocation; // @synthesize groupLocation=_groupLocation;
- (int)StringAsCuratedContentType:(id)arg1;	// IMP=0x000000000006d63f
- (id)curatedContentTypeAsString:(int)arg1;	// IMP=0x000000000006d5d9
@property(nonatomic) _Bool hasCuratedContentType;
@property(nonatomic) int curatedContentType; // @synthesize curatedContentType=_curatedContentType;
@property(readonly, nonatomic) _Bool hasIadNativeCampaignAd;
- (id)surfacedByTagIdsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000006d51f
- (unsigned long long)surfacedByTagIdsCount;	// IMP=0x000000000006d502
- (void)addSurfacedByTagIds:(id)arg1;	// IMP=0x000000000006d498
- (void)clearSurfacedByTagIds;	// IMP=0x000000000006d47b
- (int)StringAsPreviousWebEmbedLocation:(id)arg1;	// IMP=0x000000000006d3e9
- (id)previousWebEmbedLocationAsString:(int)arg1;	// IMP=0x000000000006d383
@property(nonatomic) _Bool hasPreviousWebEmbedLocation;
@property(nonatomic) int previousWebEmbedLocation; // @synthesize previousWebEmbedLocation=_previousWebEmbedLocation;
@property(readonly, nonatomic) _Bool hasPreviousWebEmbedId;
@property(readonly, nonatomic) _Bool hasModuleExposureId;
@property(nonatomic) _Bool hasModuleItemPosition;
@property(nonatomic) _Bool hasModuleItemCount;
- (int)StringAsModuleLocation:(id)arg1;	// IMP=0x000000000006d198
- (id)moduleLocationAsString:(int)arg1;	// IMP=0x000000000006d132
@property(nonatomic) _Bool hasModuleLocation;
@property(nonatomic) int moduleLocation; // @synthesize moduleLocation=_moduleLocation;
- (int)StringAsModuleEventType:(id)arg1;	// IMP=0x000000000006d025
- (id)moduleEventTypeAsString:(int)arg1;	// IMP=0x000000000006cfbf
@property(nonatomic) _Bool hasModuleEventType;
@property(nonatomic) int moduleEventType; // @synthesize moduleEventType=_moduleEventType;
@property(nonatomic) _Bool hasDiversifiedPersonalizationScore;
@property(nonatomic) _Bool hasAgedPersonalizationScore;
@property(nonatomic) _Bool hasAgedUserFeedbackScore;
@property(nonatomic) _Bool hasUserFeedbackScore;
@property(nonatomic) _Bool hasGlobalScore;
@property(nonatomic) _Bool hasComputedGlobalScoreCoefficient;
@property(nonatomic) _Bool hasAutoSubscribeCtr;
@property(nonatomic) _Bool hasPaidNonpaidSubscriptionCtr;
@property(nonatomic) _Bool hasFeatureCtr;
- (int)StringAsFeedAutoSubscribeType:(id)arg1;	// IMP=0x000000000006cbbc
- (id)feedAutoSubscribeTypeAsString:(int)arg1;	// IMP=0x000000000006cb56
@property(nonatomic) _Bool hasFeedAutoSubscribeType;
@property(nonatomic) int feedAutoSubscribeType; // @synthesize feedAutoSubscribeType=_feedAutoSubscribeType;
- (int)StringAsGroupFormationReason:(id)arg1;	// IMP=0x000000000006ca30
- (id)groupFormationReasonAsString:(int)arg1;	// IMP=0x000000000006c9b1
@property(nonatomic) _Bool hasGroupFormationReason;
@property(nonatomic) int groupFormationReason; // @synthesize groupFormationReason=_groupFormationReason;
@property(nonatomic) _Bool hasPreviousArticlePublisherArticleVersion;
@property(readonly, nonatomic) _Bool hasIadNativeAd;
@property(readonly, nonatomic) _Bool hasIadNativeLine;
@property(readonly, nonatomic) _Bool hasIadNativeCampaign;
- (int)StringAsFeedSubscriptionOrigin:(id)arg1;	// IMP=0x000000000006c72c
- (id)feedSubscriptionOriginAsString:(int)arg1;	// IMP=0x000000000006c661
@property(nonatomic) _Bool hasFeedSubscriptionOrigin;
@property(nonatomic) int feedSubscriptionOrigin; // @synthesize feedSubscriptionOrigin=_feedSubscriptionOrigin;
@property(nonatomic) _Bool hasBackendArticleVersionInt64;
@property(nonatomic) _Bool hasPublisherArticleVersionInt64;
@property(readonly, nonatomic) _Bool hasWidgetEngagement;
@property(nonatomic) _Bool hasBadgeExposure;
@property(readonly, nonatomic) _Bool hasAnfComponentId;
@property(readonly, nonatomic) _Bool hasPreviousArticleVersion;
@property(readonly, nonatomic) _Bool hasNativeCampaignData;
@property(nonatomic) _Bool hasIsNativeAd;
@property(nonatomic) _Bool hasIsSubscribedToSourceChannel;
@property(nonatomic) _Bool hasPersonalizationScore;
- (int)StringAsGroupPresentationReason:(id)arg1;	// IMP=0x000000000006c1d8
- (id)groupPresentationReasonAsString:(int)arg1;	// IMP=0x000000000006c100
@property(nonatomic) _Bool hasGroupPresentationReason;
@property(nonatomic) int groupPresentationReason; // @synthesize groupPresentationReason=_groupPresentationReason;
@property(nonatomic) _Bool hasTopStoryOptionalArticleCount;
@property(nonatomic) _Bool hasTopStoryMandatoryArticleCount;
- (int)StringAsTopStoryType:(id)arg1;	// IMP=0x000000000006bf42
- (id)topStoryTypeAsString:(int)arg1;	// IMP=0x000000000006bedc
@property(nonatomic) _Bool hasTopStoryType;
@property(nonatomic) int topStoryType; // @synthesize topStoryType=_topStoryType;
@property(nonatomic) _Bool hasBreakingNewsArticleCount;
@property(nonatomic) _Bool hasBreakingNewsArticlePosition;
@property(nonatomic) _Bool hasIsBreakingNewsArticle;
- (id)fractionalCohortMembershipAtIndex:(unsigned long long)arg1;	// IMP=0x000000000006bd23
- (unsigned long long)fractionalCohortMembershipsCount;	// IMP=0x000000000006bd06
- (void)addFractionalCohortMembership:(id)arg1;	// IMP=0x000000000006bc9c
- (void)clearFractionalCohortMemberships;	// IMP=0x000000000006bc7f
@property(nonatomic) _Bool hasWidgetArticleRank;
@property(nonatomic) _Bool hasWidgetSectionArticleRank;
- (int)StringAsWidgetSection:(id)arg1;	// IMP=0x000000000006bb00
- (id)widgetSectionAsString:(int)arg1;	// IMP=0x000000000006ba76
@property(nonatomic) _Bool hasWidgetSection;
@property(nonatomic) int widgetSection; // @synthesize widgetSection=_widgetSection;
@property(readonly, nonatomic) _Bool hasPreviousArticleId;
@property(nonatomic) _Bool hasLoadFailureReason;
@property(nonatomic) int loadFailureReason; // @synthesize loadFailureReason=_loadFailureReason;
@property(nonatomic) _Bool hasArticleLoaded;
@property(nonatomic) _Bool hasGroupDisplayRankInForYou;
@property(nonatomic) _Bool hasGroupArticleCountInForYou;
@property(readonly, nonatomic) _Bool hasNextArticleAffordanceTypeFeedId;
- (int)StringAsNextArticleAffordanceType:(id)arg1;	// IMP=0x000000000006b608
- (id)nextArticleAffordanceTypeAsString:(int)arg1;	// IMP=0x000000000006b4e9
@property(nonatomic) _Bool hasNextArticleAffordanceType;
@property(nonatomic) int nextArticleAffordanceType; // @synthesize nextArticleAffordanceType=_nextArticleAffordanceType;
@property(readonly, nonatomic) _Bool hasNotificationId;
@property(nonatomic) _Bool hasViewFromNotificationDirectOpen;
@property(readonly, nonatomic) _Bool hasCreativeId;
@property(readonly, nonatomic) _Bool hasCampaignType;
@property(readonly, nonatomic) _Bool hasCampaignId;
@property(nonatomic) _Bool hasMaxVerticalScrollPositionEnding;
@property(nonatomic) _Bool hasIsPaidSubscriberToSourceChannel;
- (int)StringAsPaidSubscriberToFeedType:(id)arg1;	// IMP=0x000000000006b244
- (id)paidSubscriberToFeedTypeAsString:(int)arg1;	// IMP=0x000000000006b1c5
@property(nonatomic) _Bool hasPaidSubscriberToFeedType;
@property(nonatomic) int paidSubscriberToFeedType; // @synthesize paidSubscriberToFeedType=_paidSubscriberToFeedType;
@property(nonatomic) _Bool hasCoverArticleFeatureType;
@property(nonatomic) int coverArticleFeatureType; // @synthesize coverArticleFeatureType=_coverArticleFeatureType;
@property(nonatomic) _Bool hasCoverArticleDisplayRank;
@property(nonatomic) _Bool hasIsCoverArticle;
@property(nonatomic) _Bool hasIsPaidSubscriberToFeed;
@property(nonatomic) _Bool hasIsFreeArticle;
@property(nonatomic) _Bool hasIsSharedSubscriptionOnlyArticle;
@property(nonatomic) _Bool hasSubscriptionOnlyArticle;
@property(nonatomic) _Bool hasArticleDisplayRankInGroup;
@property(nonatomic) _Bool hasIsSubscribedToGroupFeed;
- (int)StringAsGroupType:(id)arg1;	// IMP=0x000000000006a878
- (id)groupTypeAsString:(int)arg1;	// IMP=0x000000000006a5da
@property(nonatomic) _Bool hasGroupType;
@property(nonatomic) int groupType; // @synthesize groupType=_groupType;
@property(readonly, nonatomic) _Bool hasGroupFeedId;
@property(nonatomic) _Bool hasIsGroupedArticle;
@property(readonly, nonatomic) _Bool hasUserActivityType;
@property(nonatomic) _Bool hasPersonalizationTreatmentId;
@property(readonly, nonatomic) _Bool hasStoryType;
@property(nonatomic) _Bool hasIsTopStoryArticle;
@property(nonatomic) _Bool hasIsVideoInFeed;
@property(nonatomic) _Bool hasPreviousArticleHostViewTypeIfSwipe;
@property(nonatomic) int previousArticleHostViewTypeIfSwipe; // @synthesize previousArticleHostViewTypeIfSwipe=_previousArticleHostViewTypeIfSwipe;
@property(nonatomic) _Bool hasIsDigitalReplicaAd;
@property(readonly, nonatomic) _Bool hasReferringUrl;
@property(readonly, nonatomic) _Bool hasReferringSourceApplication;
@property(readonly, nonatomic) _Bool hasSectionHeadlineId;
@property(readonly, nonatomic) _Bool hasSurfacedByTopicId;
@property(readonly, nonatomic) _Bool hasSurfacedBySectionId;
@property(readonly, nonatomic) _Bool hasSurfacedByChannelId;
- (int)StringAsArticleType:(id)arg1;	// IMP=0x000000000006a14c
- (id)articleTypeAsString:(int)arg1;	// IMP=0x000000000006a0b2
@property(nonatomic) _Bool hasArticleType;
@property(nonatomic) int articleType; // @synthesize articleType=_articleType;
- (id)namedEntitiesAtIndex:(unsigned long long)arg1;	// IMP=0x000000000006a00d
- (unsigned long long)namedEntitiesCount;	// IMP=0x0000000000069ff0
- (void)addNamedEntities:(id)arg1;	// IMP=0x0000000000069f86
- (void)clearNamedEntities;	// IMP=0x0000000000069f69
@property(readonly, nonatomic) _Bool hasLanguage;
@property(nonatomic) _Bool hasCharacterCount;
@property(readonly, nonatomic) _Bool hasViewFrameInScreen;
@property(readonly, nonatomic) _Bool hasSourceChannelId;
@property(nonatomic) _Bool hasAdSupportedChannel;
@property(readonly, nonatomic) _Bool hasSourceBinId;
@property(nonatomic) _Bool hasIsExplorationArticle;
@property(nonatomic) _Bool hasDidOpenInSafari;
@property(nonatomic) _Bool hasIsNewUserToArticle;
@property(nonatomic) _Bool hasDidBounce;
@property(nonatomic) _Bool hasMaxActiveTimeSpent;
@property(nonatomic) _Bool hasActiveTimeSpent;
@property(nonatomic) _Bool hasIsUserSubscribedToParentFeed;
@property(readonly, nonatomic) _Bool hasParentFeedId;
- (int)StringAsParentFeedType:(id)arg1;	// IMP=0x00000000000698b0
- (id)parentFeedTypeAsString:(int)arg1;	// IMP=0x0000000000069732
@property(nonatomic) _Bool hasParentFeedType;
@property(nonatomic) int parentFeedType; // @synthesize parentFeedType=_parentFeedType;
- (int)StringAsFeedCellHostType:(id)arg1;	// IMP=0x000000000006945c
- (id)feedCellHostTypeAsString:(int)arg1;	// IMP=0x0000000000069330
@property(nonatomic) _Bool hasFeedCellHostType;
@property(nonatomic) int feedCellHostType; // @synthesize feedCellHostType=_feedCellHostType;
@property(readonly, nonatomic) _Bool hasFeedPresentationReasonSearchString;
- (int)StringAsFeedPresentationReason:(id)arg1;	// IMP=0x0000000000068cc8
- (id)feedPresentationReasonAsString:(int)arg1;	// IMP=0x00000000000689d9
@property(nonatomic) _Bool hasFeedPresentationReason;
@property(nonatomic) int feedPresentationReason; // @synthesize feedPresentationReason=_feedPresentationReason;
@property(readonly, nonatomic) _Bool hasFeedViewExposureId;
@property(nonatomic) _Bool hasArticleViewPresentationReason;
@property(nonatomic) int articleViewPresentationReason; // @synthesize articleViewPresentationReason=_articleViewPresentationReason;
@property(nonatomic) _Bool hasDisplayRank;
@property(readonly, nonatomic) _Bool hasArticleViewingSessionId;
@property(readonly, nonatomic) _Bool hasArticleSessionId;
@property(nonatomic) _Bool hasBackendArticleVersion;
@property(nonatomic) _Bool hasPublisherArticleVersion;
@property(readonly, nonatomic) _Bool hasReferencedArticleId;
@property(readonly, nonatomic) _Bool hasArticleId;
@property(nonatomic) _Bool hasArticleHostViewType;
@property(nonatomic) int articleHostViewType; // @synthesize articleHostViewType=_articleHostViewType;

@end

