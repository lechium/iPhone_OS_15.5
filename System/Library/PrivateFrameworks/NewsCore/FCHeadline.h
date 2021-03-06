//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsCore/FCHeadlineProviding-Protocol.h>

@class COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList, COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats, COMAPPLEFELDSPARPROTOCOLLIVERPOOLTagMetadata, COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector, FCArticleAudioTrack, FCAssetHandle, FCColor, FCCoverArt, FCFeedPersonalizedItemScoreProfile, FCHeadlineExperimentalTitleMetadata, FCHeadlineThumbnail, FCIssue, FCTopStoriesStyleConfiguration, NSArray, NSData, NSDate, NSSet, NSString, NSURL;
@protocol FCChannelProviding, FCHeadlineMetadata, FCHeadlineStocksFields, FCNativeAdProviding;

@interface FCHeadline : NSObject <FCHeadlineProviding>
{
    _Bool _hasThumbnail;	// 8 = 0x8
    _Bool _featureCandidate;	// 9 = 0x9
    _Bool _sponsored;	// 10 = 0xa
    _Bool _deleted;	// 11 = 0xb
    _Bool _isDraft;	// 12 = 0xc
    _Bool _isLocalDraft;	// 13 = 0xd
    _Bool _usesImageOnTopLayout;	// 14 = 0xe
    _Bool _needsRapidUpdates;	// 15 = 0xf
    _Bool _showMinimalChrome;	// 16 = 0x10
    _Bool _boundToContext;	// 17 = 0x11
    _Bool _hiddenFromFeeds;	// 18 = 0x12
    _Bool _pressRelease;	// 19 = 0x13
    _Bool _hiddenFromAutoFavorites;	// 20 = 0x14
    _Bool _paid;	// 21 = 0x15
    _Bool _showSubscriptionRequiredText;	// 22 = 0x16
    _Bool _isEvergreen;	// 23 = 0x17
    _Bool _canBePurchased;	// 24 = 0x18
    _Bool _webEmbedsEnabled;	// 25 = 0x19
    _Bool _displayAsNativeAd;	// 26 = 0x1a
    _Bool _issueOnly;	// 27 = 0x1b
    _Bool _showBundleSoftPaywall;	// 28 = 0x1c
    _Bool _disableBookmarking;	// 29 = 0x1d
    _Bool _hideModalCloseButton;	// 30 = 0x1e
    _Bool _useTransparentNavigationBar;	// 31 = 0x1f
    _Bool _hasAudioTrack;	// 32 = 0x20
    _Bool _bundlePaid;	// 33 = 0x21
    FCHeadlineThumbnail *_thumbnailLQ;	// 40 = 0x28
    FCHeadlineThumbnail *_thumbnail;	// 48 = 0x30
    FCHeadlineThumbnail *_thumbnailMedium;	// 56 = 0x38
    FCHeadlineThumbnail *_thumbnailHQ;	// 64 = 0x40
    FCHeadlineThumbnail *_thumbnailUltraHQ;	// 72 = 0x48
    FCHeadlineThumbnail *_thumbnailWidgetLQ;	// 80 = 0x50
    FCHeadlineThumbnail *_thumbnailWidget;	// 88 = 0x58
    FCHeadlineThumbnail *_thumbnailWidgetHQ;	// 96 = 0x60
    NSString *_title;	// 104 = 0x68
    FCHeadlineExperimentalTitleMetadata *_experimentalTitleMetadata;	// 112 = 0x70
    NSString *_articleID;	// 120 = 0x78
    NSString *_referencedArticleID;	// 128 = 0x80
    NSString *_clusterID;	// 136 = 0x88
    NSString *_primaryAudience;	// 144 = 0x90
    NSString *_shortExcerpt;	// 152 = 0x98
    NSArray *_topics;	// 160 = 0xa0
    NSArray *_topicIDs;	// 168 = 0xa8
    NSDate *_publishDate;	// 176 = 0xb0
    long long _publisherArticleVersion;	// 184 = 0xb8
    long long _backendArticleVersion;	// 192 = 0xc0
    id <FCChannelProviding> _sourceChannel;	// 200 = 0xc8
    NSString *_sourceName;	// 208 = 0xd0
    NSURL *_contentURL;	// 216 = 0xd8
    NSDate *_lastModifiedDate;	// 224 = 0xe0
    NSDate *_lastFetchedDate;	// 232 = 0xe8
    unsigned long long _contentType;	// 240 = 0xf0
    NSURL *_videoURL;	// 248 = 0xf8
    FCAssetHandle *_videoStillImage;	// 256 = 0x100
    double _videoDuration;	// 264 = 0x108
    NSArray *_iAdCategories;	// 272 = 0x110
    NSArray *_iAdKeywords;	// 280 = 0x118
    NSArray *_iAdSectionIDs;	// 288 = 0x120
    NSArray *_blockedStorefrontIDs;	// 296 = 0x128
    NSArray *_allowedStorefrontIDs;	// 304 = 0x130
    NSString *_surfacedBySectionID;	// 312 = 0x138
    NSString *_surfacedByChannelID;	// 320 = 0x140
    NSString *_surfacedByTopicID;	// 328 = 0x148
    NSString *_surfacedByBinID;	// 336 = 0x150
    NSSet *_surfacedByTagIDs;	// 344 = 0x158
    NSString *_surfacedByArticleListID;	// 352 = 0x160
    NSString *_accessoryText;	// 360 = 0x168
    NSString *_callToActionText;	// 368 = 0x170
    NSString *_localDraftPath;	// 376 = 0x178
    FCFeedPersonalizedItemScoreProfile *_scoreProfile;	// 384 = 0x180
    double _personalizedScore;	// 392 = 0x188
    unsigned long long _topStoryType;	// 400 = 0x190
    NSArray *_relatedArticleIDs;	// 408 = 0x198
    NSArray *_moreFromPublisherArticleIDs;	// 416 = 0x1a0
    unsigned long long _storyType;	// 424 = 0x1a8
    FCTopStoriesStyleConfiguration *_storyStyle;	// 432 = 0x1b0
    long long _minimumNewsVersion;	// 440 = 0x1b8
    FCCoverArt *_coverArt;	// 448 = 0x1c0
    NSString *_videoCallToActionTitle;	// 456 = 0x1c8
    NSURL *_videoCallToActionURL;	// 464 = 0x1d0
    unsigned long long _feedOrder;	// 472 = 0x1d8
    double _globalUserFeedback;	// 480 = 0x1e0
    unsigned long long _halfLife;	// 488 = 0x1e8
    NSDate *_displayDate;	// 496 = 0x1f0
    COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *_globalCohorts;	// 504 = 0x1f8
    COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *_publisherCohorts;	// 512 = 0x200
    COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *_globalConversionStats;	// 520 = 0x208
    COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *_publisherConversionStats;	// 528 = 0x210
    COMAPPLEFELDSPARPROTOCOLLIVERPOOLTagMetadata *_publisherTagMetadata;	// 536 = 0x218
    NSString *_articleRecirculationConfigJSON;	// 544 = 0x220
    NSArray *_publisherSpecifiedArticleIDs;	// 552 = 0x228
    NSString *_language;	// 560 = 0x230
    NSString *_sponsoredBy;	// 568 = 0x238
    id <FCNativeAdProviding> _associatedAd;	// 576 = 0x240
    NSString *_nativeAdCampaignData;	// 584 = 0x248
    unsigned long long _role;	// 592 = 0x250
    id <FCHeadlineStocksFields> _stocksFields;	// 600 = 0x258
    NSData *_backingArticleRecordData;	// 608 = 0x260
    FCIssue *_masterIssue;	// 616 = 0x268
    long long _bodyTextLength;	// 624 = 0x270
    FCArticleAudioTrack *_narrativeTrack;	// 632 = 0x278
    FCArticleAudioTrack *_narrativeTrackSample;	// 640 = 0x280
    NSString *_narrativeTrackTextRanges;	// 648 = 0x288
    COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector *_personalizationVector;	// 656 = 0x290
    COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector *_personalizationVectorAlt;	// 664 = 0x298
    NSArray *_linkedArticleIDs;	// 672 = 0x2a0
    NSArray *_linkedIssueIDs;	// 680 = 0x2a8
    NSString *_layeredThumbnailJSON;	// 688 = 0x2b0
    double _layeredThumbnailAspectRatio;	// 696 = 0x2b8
    FCColor *_thumbnailImagePrimaryColor;	// 704 = 0x2c0
    FCColor *_thumbnailImageBackgroundColor;	// 712 = 0x2c8
    FCColor *_thumbnailImageTextColor;	// 720 = 0x2d0
    FCColor *_thumbnailImageAccentColor;	// 728 = 0x2d8
    NSArray *_authors;	// 736 = 0x2e0
    NSArray *_narrators;	// 744 = 0x2e8
    NSString *_excerpt;	// 752 = 0x2f0
    NSArray *_narrativeTrackBuddyArticleIDs;	// 760 = 0x2f8
    NSString *_narrativeTrackPreferredUpsellVariantID;	// 768 = 0x300
    NSString *_identifier;	// 776 = 0x308
    NSURL *_headlineURL;	// 784 = 0x310
    NSString *_titleCompact;	// 792 = 0x318
    struct CGRect _thumbnailFocalFrame;	// 800 = 0x320
}

+ (id)emptyHeadlineWithIdentifier:(id)arg1;	// IMP=0x00000000001a2d1c
+ (id)emptyHeadline;	// IMP=0x00000000001a2c91
- (void).cxx_destruct;	// IMP=0x00000000001a45d0
@property(nonatomic, getter=isBundlePaid) _Bool bundlePaid; // @synthesize bundlePaid=_bundlePaid;
@property(copy, nonatomic) NSString *titleCompact; // @synthesize titleCompact=_titleCompact;
@property(copy, nonatomic) NSURL *headlineURL; // @synthesize headlineURL=_headlineURL;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSString *narrativeTrackPreferredUpsellVariantID; // @synthesize narrativeTrackPreferredUpsellVariantID=_narrativeTrackPreferredUpsellVariantID;
@property(readonly, copy, nonatomic) NSArray *narrativeTrackBuddyArticleIDs; // @synthesize narrativeTrackBuddyArticleIDs=_narrativeTrackBuddyArticleIDs;
@property(copy, nonatomic) NSString *excerpt; // @synthesize excerpt=_excerpt;
@property(readonly, copy, nonatomic) NSArray *narrators; // @synthesize narrators=_narrators;
@property(readonly, copy, nonatomic) NSArray *authors; // @synthesize authors=_authors;
@property(readonly, nonatomic) FCColor *thumbnailImageAccentColor; // @synthesize thumbnailImageAccentColor=_thumbnailImageAccentColor;
@property(readonly, nonatomic) FCColor *thumbnailImageTextColor; // @synthesize thumbnailImageTextColor=_thumbnailImageTextColor;
@property(readonly, nonatomic) FCColor *thumbnailImageBackgroundColor; // @synthesize thumbnailImageBackgroundColor=_thumbnailImageBackgroundColor;
@property(readonly, nonatomic) FCColor *thumbnailImagePrimaryColor; // @synthesize thumbnailImagePrimaryColor=_thumbnailImagePrimaryColor;
@property(readonly, nonatomic) double layeredThumbnailAspectRatio; // @synthesize layeredThumbnailAspectRatio=_layeredThumbnailAspectRatio;
@property(readonly, nonatomic) NSString *layeredThumbnailJSON; // @synthesize layeredThumbnailJSON=_layeredThumbnailJSON;
@property(readonly, copy, nonatomic) NSArray *linkedIssueIDs; // @synthesize linkedIssueIDs=_linkedIssueIDs;
@property(readonly, copy, nonatomic) NSArray *linkedArticleIDs; // @synthesize linkedArticleIDs=_linkedArticleIDs;
@property(readonly, nonatomic) _Bool hasAudioTrack; // @synthesize hasAudioTrack=_hasAudioTrack;
@property(readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector *personalizationVectorAlt; // @synthesize personalizationVectorAlt=_personalizationVectorAlt;
@property(readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector *personalizationVector; // @synthesize personalizationVector=_personalizationVector;
@property(readonly, nonatomic) NSString *narrativeTrackTextRanges; // @synthesize narrativeTrackTextRanges=_narrativeTrackTextRanges;
@property(readonly, nonatomic) FCArticleAudioTrack *narrativeTrackSample; // @synthesize narrativeTrackSample=_narrativeTrackSample;
@property(readonly, nonatomic) FCArticleAudioTrack *narrativeTrack; // @synthesize narrativeTrack=_narrativeTrack;
@property(readonly, nonatomic) _Bool useTransparentNavigationBar; // @synthesize useTransparentNavigationBar=_useTransparentNavigationBar;
@property(readonly, nonatomic) long long bodyTextLength; // @synthesize bodyTextLength=_bodyTextLength;
@property(readonly, nonatomic) _Bool hideModalCloseButton; // @synthesize hideModalCloseButton=_hideModalCloseButton;
@property(readonly, nonatomic) _Bool disableBookmarking; // @synthesize disableBookmarking=_disableBookmarking;
@property(readonly, nonatomic) _Bool showBundleSoftPaywall; // @synthesize showBundleSoftPaywall=_showBundleSoftPaywall;
@property(readonly, nonatomic, getter=isIssueOnly) _Bool issueOnly; // @synthesize issueOnly=_issueOnly;
@property(readonly, copy, nonatomic) FCIssue *masterIssue; // @synthesize masterIssue=_masterIssue;
@property(readonly, nonatomic) NSData *backingArticleRecordData; // @synthesize backingArticleRecordData=_backingArticleRecordData;
@property(readonly, nonatomic) id <FCHeadlineStocksFields> stocksFields; // @synthesize stocksFields=_stocksFields;
@property(nonatomic) unsigned long long role; // @synthesize role=_role;
@property(copy, nonatomic) NSString *nativeAdCampaignData; // @synthesize nativeAdCampaignData=_nativeAdCampaignData;
@property(retain, nonatomic) id <FCNativeAdProviding> associatedAd; // @synthesize associatedAd=_associatedAd;
@property(copy, nonatomic) NSString *sponsoredBy; // @synthesize sponsoredBy=_sponsoredBy;
@property(nonatomic, getter=isDisplayingAsNativeAd) _Bool displayAsNativeAd; // @synthesize displayAsNativeAd=_displayAsNativeAd;
@property(nonatomic) struct CGRect thumbnailFocalFrame; // @synthesize thumbnailFocalFrame=_thumbnailFocalFrame;
@property(readonly, copy, nonatomic) NSString *language; // @synthesize language=_language;
@property(readonly, nonatomic) _Bool webEmbedsEnabled; // @synthesize webEmbedsEnabled=_webEmbedsEnabled;
@property(readonly, nonatomic) NSArray *publisherSpecifiedArticleIDs; // @synthesize publisherSpecifiedArticleIDs=_publisherSpecifiedArticleIDs;
@property(readonly, nonatomic) NSString *articleRecirculationConfigJSON; // @synthesize articleRecirculationConfigJSON=_articleRecirculationConfigJSON;
@property(readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLTagMetadata *publisherTagMetadata; // @synthesize publisherTagMetadata=_publisherTagMetadata;
@property(readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *publisherConversionStats; // @synthesize publisherConversionStats=_publisherConversionStats;
@property(readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *globalConversionStats; // @synthesize globalConversionStats=_globalConversionStats;
@property(readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *publisherCohorts; // @synthesize publisherCohorts=_publisherCohorts;
@property(readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *globalCohorts; // @synthesize globalCohorts=_globalCohorts;
@property(copy, nonatomic) NSDate *displayDate; // @synthesize displayDate=_displayDate;
@property(readonly, nonatomic) _Bool canBePurchased; // @synthesize canBePurchased=_canBePurchased;
@property(nonatomic) _Bool isEvergreen; // @synthesize isEvergreen=_isEvergreen;
@property(nonatomic) unsigned long long halfLife; // @synthesize halfLife=_halfLife;
@property(nonatomic) double globalUserFeedback; // @synthesize globalUserFeedback=_globalUserFeedback;
@property(nonatomic) unsigned long long feedOrder; // @synthesize feedOrder=_feedOrder;
@property(nonatomic) _Bool showSubscriptionRequiredText; // @synthesize showSubscriptionRequiredText=_showSubscriptionRequiredText;
@property(readonly, copy, nonatomic) NSURL *videoCallToActionURL; // @synthesize videoCallToActionURL=_videoCallToActionURL;
@property(readonly, copy, nonatomic) NSString *videoCallToActionTitle; // @synthesize videoCallToActionTitle=_videoCallToActionTitle;
@property(readonly, nonatomic) FCCoverArt *coverArt; // @synthesize coverArt=_coverArt;
@property(nonatomic, getter=isPaid) _Bool paid; // @synthesize paid=_paid;
@property(readonly, nonatomic) long long minimumNewsVersion; // @synthesize minimumNewsVersion=_minimumNewsVersion;
@property(readonly, nonatomic, getter=isHiddenFromAutoFavorites) _Bool hiddenFromAutoFavorites; // @synthesize hiddenFromAutoFavorites=_hiddenFromAutoFavorites;
@property(readonly, nonatomic, getter=isPressRelease) _Bool pressRelease; // @synthesize pressRelease=_pressRelease;
@property(readonly, nonatomic, getter=isHiddenFromFeeds) _Bool hiddenFromFeeds; // @synthesize hiddenFromFeeds=_hiddenFromFeeds;
@property(readonly, nonatomic, getter=isBoundToContext) _Bool boundToContext; // @synthesize boundToContext=_boundToContext;
@property(readonly, nonatomic) _Bool showMinimalChrome; // @synthesize showMinimalChrome=_showMinimalChrome;
@property(readonly, nonatomic) _Bool needsRapidUpdates; // @synthesize needsRapidUpdates=_needsRapidUpdates;
@property(retain, nonatomic) FCTopStoriesStyleConfiguration *storyStyle; // @synthesize storyStyle=_storyStyle;
@property(nonatomic) unsigned long long storyType; // @synthesize storyType=_storyType;
@property(readonly, copy, nonatomic) NSArray *moreFromPublisherArticleIDs; // @synthesize moreFromPublisherArticleIDs=_moreFromPublisherArticleIDs;
@property(readonly, copy, nonatomic) NSArray *relatedArticleIDs; // @synthesize relatedArticleIDs=_relatedArticleIDs;
@property(nonatomic) unsigned long long topStoryType; // @synthesize topStoryType=_topStoryType;
@property(nonatomic) _Bool usesImageOnTopLayout; // @synthesize usesImageOnTopLayout=_usesImageOnTopLayout;
@property(nonatomic) double tileProminenceScore; // @synthesize tileProminenceScore=_personalizedScore;
@property(retain) FCFeedPersonalizedItemScoreProfile *scoreProfile; // @synthesize scoreProfile=_scoreProfile;
@property(readonly, copy, nonatomic) NSString *localDraftPath; // @synthesize localDraftPath=_localDraftPath;
@property(copy, nonatomic) NSString *callToActionText; // @synthesize callToActionText=_callToActionText;
@property(copy, nonatomic) NSString *accessoryText; // @synthesize accessoryText=_accessoryText;
@property(copy, nonatomic) NSString *surfacedByArticleListID; // @synthesize surfacedByArticleListID=_surfacedByArticleListID;
@property(copy, nonatomic) NSSet *surfacedByTagIDs; // @synthesize surfacedByTagIDs=_surfacedByTagIDs;
@property(copy, nonatomic) NSString *surfacedByBinID; // @synthesize surfacedByBinID=_surfacedByBinID;
@property(copy, nonatomic) NSString *surfacedByTopicID; // @synthesize surfacedByTopicID=_surfacedByTopicID;
@property(copy, nonatomic) NSString *surfacedByChannelID; // @synthesize surfacedByChannelID=_surfacedByChannelID;
@property(copy, nonatomic) NSString *surfacedBySectionID; // @synthesize surfacedBySectionID=_surfacedBySectionID;
@property(readonly, nonatomic) _Bool isLocalDraft; // @synthesize isLocalDraft=_isLocalDraft;
@property(readonly, nonatomic) _Bool isDraft; // @synthesize isDraft=_isDraft;
@property(nonatomic, getter=isDeleted) _Bool deleted; // @synthesize deleted=_deleted;
@property(readonly, copy, nonatomic) NSArray *allowedStorefrontIDs; // @synthesize allowedStorefrontIDs=_allowedStorefrontIDs;
@property(readonly, copy, nonatomic) NSArray *blockedStorefrontIDs; // @synthesize blockedStorefrontIDs=_blockedStorefrontIDs;
@property(readonly, copy, nonatomic) NSArray *iAdSectionIDs; // @synthesize iAdSectionIDs=_iAdSectionIDs;
@property(readonly, copy, nonatomic) NSArray *iAdKeywords; // @synthesize iAdKeywords=_iAdKeywords;
@property(readonly, copy, nonatomic) NSArray *iAdCategories; // @synthesize iAdCategories=_iAdCategories;
@property(nonatomic, getter=isSponsored) _Bool sponsored; // @synthesize sponsored=_sponsored;
@property(readonly, nonatomic, getter=isFeatureCandidate) _Bool featureCandidate; // @synthesize featureCandidate=_featureCandidate;
@property(readonly, nonatomic) double videoDuration; // @synthesize videoDuration=_videoDuration;
@property(readonly, nonatomic) FCAssetHandle *videoStillImage; // @synthesize videoStillImage=_videoStillImage;
@property(readonly, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
@property(nonatomic) unsigned long long contentType; // @synthesize contentType=_contentType;
@property(readonly, copy, nonatomic) NSDate *lastFetchedDate; // @synthesize lastFetchedDate=_lastFetchedDate;
@property(readonly, copy, nonatomic) NSDate *lastModifiedDate; // @synthesize lastModifiedDate=_lastModifiedDate;
@property(readonly, copy, nonatomic) NSURL *contentURL; // @synthesize contentURL=_contentURL;
@property(copy, nonatomic) NSString *sourceName; // @synthesize sourceName=_sourceName;
@property(copy, nonatomic) id <FCChannelProviding> sourceChannel; // @synthesize sourceChannel=_sourceChannel;
@property(readonly, nonatomic) long long backendArticleVersion; // @synthesize backendArticleVersion=_backendArticleVersion;
@property(readonly, nonatomic) long long publisherArticleVersion; // @synthesize publisherArticleVersion=_publisherArticleVersion;
@property(copy, nonatomic) NSDate *publishDate; // @synthesize publishDate=_publishDate;
@property(copy, nonatomic) NSArray *topicIDs; // @synthesize topicIDs=_topicIDs;
@property(readonly, copy, nonatomic) NSArray *topics; // @synthesize topics=_topics;
@property(copy, nonatomic) NSString *shortExcerpt; // @synthesize shortExcerpt=_shortExcerpt;
@property(readonly, copy, nonatomic) NSString *primaryAudience; // @synthesize primaryAudience=_primaryAudience;
@property(copy, nonatomic) NSString *clusterID; // @synthesize clusterID=_clusterID;
@property(readonly, copy, nonatomic) NSString *referencedArticleID; // @synthesize referencedArticleID=_referencedArticleID;
@property(copy, nonatomic) NSString *articleID; // @synthesize articleID=_articleID;
@property(readonly, copy, nonatomic) FCHeadlineExperimentalTitleMetadata *experimentalTitleMetadata; // @synthesize experimentalTitleMetadata=_experimentalTitleMetadata;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) FCHeadlineThumbnail *thumbnailWidgetHQ; // @synthesize thumbnailWidgetHQ=_thumbnailWidgetHQ;
@property(readonly, nonatomic) FCHeadlineThumbnail *thumbnailWidget; // @synthesize thumbnailWidget=_thumbnailWidget;
@property(readonly, nonatomic) FCHeadlineThumbnail *thumbnailWidgetLQ; // @synthesize thumbnailWidgetLQ=_thumbnailWidgetLQ;
@property(retain, nonatomic) FCHeadlineThumbnail *thumbnailUltraHQ; // @synthesize thumbnailUltraHQ=_thumbnailUltraHQ;
@property(retain, nonatomic) FCHeadlineThumbnail *thumbnailHQ; // @synthesize thumbnailHQ=_thumbnailHQ;
@property(retain, nonatomic) FCHeadlineThumbnail *thumbnailMedium; // @synthesize thumbnailMedium=_thumbnailMedium;
@property(retain, nonatomic) FCHeadlineThumbnail *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(retain, nonatomic) FCHeadlineThumbnail *thumbnailLQ; // @synthesize thumbnailLQ=_thumbnailLQ;
@property(nonatomic) _Bool hasThumbnail; // @synthesize hasThumbnail=_hasThumbnail;
@property(readonly, copy, nonatomic) id <FCHeadlineMetadata> appliedOverrideMetadata;
@property(readonly, nonatomic) _Bool isFullTrackAvailableToAll;
- (void)enumerateTopicConversionStatsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000001a3b2c
- (void)enumerateTopicCohortsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000001a3951
@property(readonly, nonatomic, getter=isExplicitContent) _Bool explicitContent;
@property(readonly, nonatomic, getter=isFromBlockedStorefront) _Bool fromBlockedStorefront;
@property(readonly, nonatomic) unsigned long long feedHalfLifeMilliseconds;
@property(readonly, nonatomic) unsigned long long publishDateMilliseconds;
@property(readonly, copy, nonatomic) NSString *sourceChannelID;
@property(readonly, copy, nonatomic) NSString *feedID;
@property(readonly, nonatomic) unsigned long long order;
- (unsigned long long)articleContentType;	// IMP=0x00000000001a370a
@property(readonly, nonatomic) _Bool hasGlobalUserFeedback;
@property(readonly, copy, nonatomic) NSString *publisherID;
@property(readonly, copy, nonatomic) NSString *sourceFeedID;
@property(readonly, nonatomic) _Bool isTopStory;
- (void)applyHeadlineMetadata:(id)arg1 configuration:(id)arg2;	// IMP=0x00000000001a340e
- (void)assignStoryType:(unsigned long long)arg1 withConfiguration:(id)arg2;	// IMP=0x00000000001a3239
- (void)overrideShortExcerpt:(id)arg1;	// IMP=0x00000000001a3227
- (void)overrideDisplayDate:(id)arg1;	// IMP=0x00000000001a31d2
- (void)overrideTitle:(id)arg1;	// IMP=0x00000000001a31c0
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool hasVideo;
@property(readonly, nonatomic) _Bool showPublisherLogo;
@property(readonly, nonatomic) _Bool isBlockedExplicitContent;
- (_Bool)isGap;	// IMP=0x00000000001a3083
@property(readonly, nonatomic, getter=isANF) _Bool anf;
@property(readonly, copy, nonatomic) NSString *versionIdentifier;
@property(readonly, copy, nonatomic) NSString *itemID;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001a2f8b
- (id)contentWithContext:(id)arg1;	// IMP=0x00000000001a2dc5
- (id)init;	// IMP=0x00000000001a2d86
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000a70d6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) unsigned long long halfLifeOverride;
@property(readonly, nonatomic) _Bool isFeatured;
@property(readonly) Class superclass;

@end

