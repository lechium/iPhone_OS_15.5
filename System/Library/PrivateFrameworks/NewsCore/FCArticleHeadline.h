//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsCore/FCArticleAccessCheckable-Protocol.h>
#import <NewsCore/FCContentArchivable-Protocol.h>
#import <NewsCore/FCHeadlineStocksFields-Protocol.h>

@class COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList, COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats, COMAPPLEFELDSPARPROTOCOLLIVERPOOLTagMetadata, COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector, FCArticleAudioTrack, FCAssetHandle, FCColor, FCContentArchive, FCCoverArt, FCHeadlineExperimentalTitleMetadata, FCHeadlineThumbnail, FCInterestToken, FCIssue, FCTopStoriesStyleConfiguration, NSArray, NSDate, NSString, NSURL, NTPBArticleRecord;
@protocol FCChannelProviding;

@interface FCArticleHeadline <FCHeadlineStocksFields, FCArticleAccessCheckable, FCContentArchivable>
{
    _Bool _hasThumbnail;	// 8 = 0x8
    _Bool _sponsored;	// 9 = 0x9
    _Bool _deleted;	// 10 = 0xa
    _Bool _isDraft;	// 11 = 0xb
    _Bool _isLocalDraft;	// 12 = 0xc
    _Bool _featureCandidate;	// 13 = 0xd
    _Bool _needsRapidUpdates;	// 14 = 0xe
    _Bool _showMinimalChrome;	// 15 = 0xf
    _Bool _boundToContext;	// 16 = 0x10
    _Bool _hiddenFromFeeds;	// 17 = 0x11
    _Bool _pressRelease;	// 18 = 0x12
    _Bool _hiddenFromAutoFavorites;	// 19 = 0x13
    _Bool _webEmbedsEnabled;	// 20 = 0x14
    _Bool _issueOnly;	// 21 = 0x15
    _Bool _paid;	// 22 = 0x16
    _Bool _bundlePaid;	// 23 = 0x17
    _Bool _canBePurchased;	// 24 = 0x18
    _Bool _showBundleSoftPaywall;	// 25 = 0x19
    _Bool _useTransparentNavigationBar;	// 26 = 0x1a
    _Bool _disableBookmarking;	// 27 = 0x1b
    _Bool _hideModalCloseButton;	// 28 = 0x1c
    NSString *_versionIdentifier;	// 32 = 0x20
    NSString *_identifier;	// 40 = 0x28
    NSString *_articleID;	// 48 = 0x30
    NSString *_referencedArticleID;	// 56 = 0x38
    NSString *_clusterID;	// 64 = 0x40
    unsigned long long _contentType;	// 72 = 0x48
    NSString *_title;	// 80 = 0x50
    NSString *_titleCompact;	// 88 = 0x58
    FCHeadlineExperimentalTitleMetadata *_experimentalTitleMetadata;	// 96 = 0x60
    NSString *_primaryAudience;	// 104 = 0x68
    NSDate *_publishDate;	// 112 = 0x70
    long long _publisherArticleVersion;	// 120 = 0x78
    long long _backendArticleVersion;	// 128 = 0x80
    id <FCChannelProviding> _sourceChannel;	// 136 = 0x88
    NSString *_sourceName;	// 144 = 0x90
    FCHeadlineThumbnail *_thumbnailLQ;	// 152 = 0x98
    FCHeadlineThumbnail *_thumbnail;	// 160 = 0xa0
    FCHeadlineThumbnail *_thumbnailMedium;	// 168 = 0xa8
    FCHeadlineThumbnail *_thumbnailHQ;	// 176 = 0xb0
    FCHeadlineThumbnail *_thumbnailUltraHQ;	// 184 = 0xb8
    FCHeadlineThumbnail *_thumbnailWidgetLQ;	// 192 = 0xc0
    FCHeadlineThumbnail *_thumbnailWidget;	// 200 = 0xc8
    FCHeadlineThumbnail *_thumbnailWidgetHQ;	// 208 = 0xd0
    NSString *_shortExcerpt;	// 216 = 0xd8
    NSString *_accessoryText;	// 224 = 0xe0
    NSURL *_contentURL;	// 232 = 0xe8
    NSDate *_lastModifiedDate;	// 240 = 0xf0
    NSDate *_lastFetchedDate;	// 248 = 0xf8
    NSArray *_topics;	// 256 = 0x100
    NSArray *_topicIDs;	// 264 = 0x108
    COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *_globalCohorts;	// 272 = 0x110
    COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *_publisherCohorts;	// 280 = 0x118
    COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *_globalConversionStats;	// 288 = 0x120
    COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *_publisherConversionStats;	// 296 = 0x128
    COMAPPLEFELDSPARPROTOCOLLIVERPOOLTagMetadata *_publisherTagMetadata;	// 304 = 0x130
    NSURL *_videoURL;	// 312 = 0x138
    FCAssetHandle *_videoStillImage;	// 320 = 0x140
    double _videoDuration;	// 328 = 0x148
    NSArray *_iAdCategories;	// 336 = 0x150
    NSArray *_iAdKeywords;	// 344 = 0x158
    NSArray *_iAdSectionIDs;	// 352 = 0x160
    NSArray *_blockedStorefrontIDs;	// 360 = 0x168
    NSArray *_allowedStorefrontIDs;	// 368 = 0x170
    NSArray *_relatedArticleIDs;	// 376 = 0x178
    NSArray *_moreFromPublisherArticleIDs;	// 384 = 0x180
    FCIssue *_masterIssue;	// 392 = 0x188
    unsigned long long _storyType;	// 400 = 0x190
    FCTopStoriesStyleConfiguration *_storyStyle;	// 408 = 0x198
    long long _minimumNewsVersion;	// 416 = 0x1a0
    FCCoverArt *_coverArt;	// 424 = 0x1a8
    NSString *_videoCallToActionTitle;	// 432 = 0x1b0
    NSURL *_videoCallToActionURL;	// 440 = 0x1b8
    NSString *_language;	// 448 = 0x1c0
    unsigned long long _role;	// 456 = 0x1c8
    unsigned long long _halfLife;	// 464 = 0x1d0
    unsigned long long _halfLifeOverride;	// 472 = 0x1d8
    NSArray *_linkedArticleIDs;	// 480 = 0x1e0
    NSArray *_linkedIssueIDs;	// 488 = 0x1e8
    long long _bodyTextLength;	// 496 = 0x1f0
    FCArticleAudioTrack *_narrativeTrack;	// 504 = 0x1f8
    FCArticleAudioTrack *_narrativeTrackSample;	// 512 = 0x200
    NSString *_narrativeTrackTextRanges;	// 520 = 0x208
    COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector *_personalizationVector;	// 528 = 0x210
    COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector *_personalizationVectorAlt;	// 536 = 0x218
    NSString *_layeredThumbnailJSON;	// 544 = 0x220
    double _layeredThumbnailAspectRatio;	// 552 = 0x228
    FCColor *_thumbnailImagePrimaryColor;	// 560 = 0x230
    FCColor *_thumbnailImageBackgroundColor;	// 568 = 0x238
    FCColor *_thumbnailImageTextColor;	// 576 = 0x240
    FCColor *_thumbnailImageAccentColor;	// 584 = 0x248
    NSArray *_authors;	// 592 = 0x250
    NSArray *_narrators;	// 600 = 0x258
    NSString *_excerpt;	// 608 = 0x260
    NSArray *_narrativeTrackBuddyArticleIDs;	// 616 = 0x268
    NSString *_narrativeTrackPreferredUpsellVariantID;	// 624 = 0x270
    NTPBArticleRecord *_articleRecord;	// 632 = 0x278
    FCInterestToken *_articleInterestToken;	// 640 = 0x280
    long long _behaviorFlags;	// 648 = 0x288
    struct CGRect _thumbnailFocalFrame;	// 656 = 0x290
}

- (void).cxx_destruct;	// IMP=0x00000000001a93a9
@property(nonatomic) long long behaviorFlags; // @synthesize behaviorFlags=_behaviorFlags;
@property(retain, nonatomic) FCInterestToken *articleInterestToken; // @synthesize articleInterestToken=_articleInterestToken;
@property(retain, nonatomic) NTPBArticleRecord *articleRecord; // @synthesize articleRecord=_articleRecord;
- (id)narrativeTrackPreferredUpsellVariantID;	// IMP=0x00000000001a932c
- (id)narrativeTrackBuddyArticleIDs;	// IMP=0x00000000001a931b
- (void)setExcerpt:(id)arg1;	// IMP=0x00000000001a930a
- (id)excerpt;	// IMP=0x00000000001a92f9
- (id)narrators;	// IMP=0x00000000001a92e8
- (id)authors;	// IMP=0x00000000001a92d7
- (id)thumbnailImageAccentColor;	// IMP=0x00000000001a92c6
- (id)thumbnailImageTextColor;	// IMP=0x00000000001a92b5
- (id)thumbnailImageBackgroundColor;	// IMP=0x00000000001a92a4
- (id)thumbnailImagePrimaryColor;	// IMP=0x00000000001a9293
- (double)layeredThumbnailAspectRatio;	// IMP=0x00000000001a9281
- (id)layeredThumbnailJSON;	// IMP=0x00000000001a9270
- (id)personalizationVectorAlt;	// IMP=0x00000000001a925f
- (id)personalizationVector;	// IMP=0x00000000001a924e
- (id)narrativeTrackTextRanges;	// IMP=0x00000000001a923d
- (id)narrativeTrackSample;	// IMP=0x00000000001a922c
- (id)narrativeTrack;	// IMP=0x00000000001a921b
- (long long)bodyTextLength;	// IMP=0x00000000001a920a
- (id)linkedIssueIDs;	// IMP=0x00000000001a91f9
- (id)linkedArticleIDs;	// IMP=0x00000000001a91e8
- (unsigned long long)halfLifeOverride;	// IMP=0x00000000001a91d7
- (void)setHalfLife:(unsigned long long)arg1;	// IMP=0x00000000001a91c6
- (unsigned long long)halfLife;	// IMP=0x00000000001a91b5
- (_Bool)hideModalCloseButton;	// IMP=0x00000000001a91a5
- (_Bool)disableBookmarking;	// IMP=0x00000000001a9195
- (_Bool)useTransparentNavigationBar;	// IMP=0x00000000001a9185
- (_Bool)showBundleSoftPaywall;	// IMP=0x00000000001a9175
- (void)setRole:(unsigned long long)arg1;	// IMP=0x00000000001a9164
- (unsigned long long)role;	// IMP=0x00000000001a9153
- (id)language;	// IMP=0x00000000001a9142
- (_Bool)canBePurchased;	// IMP=0x00000000001a9132
- (id)videoCallToActionURL;	// IMP=0x00000000001a9121
- (id)videoCallToActionTitle;	// IMP=0x00000000001a9110
- (id)coverArt;	// IMP=0x00000000001a90ff
@property(readonly, nonatomic, getter=isBundlePaid) _Bool bundlePaid; // @synthesize bundlePaid=_bundlePaid;
@property(readonly, nonatomic, getter=isPaid) _Bool paid; // @synthesize paid=_paid;
- (_Bool)isIssueOnly;	// IMP=0x00000000001a90cf
- (_Bool)webEmbedsEnabled;	// IMP=0x00000000001a90bf
@property(readonly, nonatomic) long long minimumNewsVersion; // @synthesize minimumNewsVersion=_minimumNewsVersion;
- (_Bool)isHiddenFromAutoFavorites;	// IMP=0x00000000001a909e
- (_Bool)isPressRelease;	// IMP=0x00000000001a908e
- (_Bool)isHiddenFromFeeds;	// IMP=0x00000000001a907e
- (_Bool)isBoundToContext;	// IMP=0x00000000001a906e
- (_Bool)showMinimalChrome;	// IMP=0x00000000001a905e
- (_Bool)needsRapidUpdates;	// IMP=0x00000000001a904e
- (void)setStoryStyle:(id)arg1;	// IMP=0x00000000001a903a
- (id)storyStyle;	// IMP=0x00000000001a9029
- (void)setStoryType:(unsigned long long)arg1;	// IMP=0x00000000001a9018
- (unsigned long long)storyType;	// IMP=0x00000000001a9007
- (id)masterIssue;	// IMP=0x00000000001a8ff6
- (id)moreFromPublisherArticleIDs;	// IMP=0x00000000001a8fe5
- (id)relatedArticleIDs;	// IMP=0x00000000001a8fd4
- (_Bool)isFeatureCandidate;	// IMP=0x00000000001a8fc4
@property(readonly, copy, nonatomic) NSArray *allowedStorefrontIDs; // @synthesize allowedStorefrontIDs=_allowedStorefrontIDs;
@property(readonly, copy, nonatomic) NSArray *blockedStorefrontIDs; // @synthesize blockedStorefrontIDs=_blockedStorefrontIDs;
@property(readonly, nonatomic) _Bool isLocalDraft; // @synthesize isLocalDraft=_isLocalDraft;
@property(readonly, nonatomic) _Bool isDraft; // @synthesize isDraft=_isDraft;
- (void)setDeleted:(_Bool)arg1;	// IMP=0x00000000001a8f72
- (_Bool)isDeleted;	// IMP=0x00000000001a8f62
- (id)iAdSectionIDs;	// IMP=0x00000000001a8f51
- (id)iAdKeywords;	// IMP=0x00000000001a8f40
- (id)iAdCategories;	// IMP=0x00000000001a8f2f
- (void)setSponsored:(_Bool)arg1;	// IMP=0x00000000001a8f1f
- (_Bool)isSponsored;	// IMP=0x00000000001a8f0f
- (double)videoDuration;	// IMP=0x00000000001a8efd
- (id)videoStillImage;	// IMP=0x00000000001a8eec
- (id)videoURL;	// IMP=0x00000000001a8edb
- (id)publisherTagMetadata;	// IMP=0x00000000001a8eca
- (id)publisherConversionStats;	// IMP=0x00000000001a8eb9
- (id)globalConversionStats;	// IMP=0x00000000001a8ea8
- (id)publisherCohorts;	// IMP=0x00000000001a8e97
- (id)globalCohorts;	// IMP=0x00000000001a8e86
- (void)setTopicIDs:(id)arg1;	// IMP=0x00000000001a8e75
- (id)topicIDs;	// IMP=0x00000000001a8e64
- (id)topics;	// IMP=0x00000000001a8e53
- (id)lastFetchedDate;	// IMP=0x00000000001a8e42
- (id)lastModifiedDate;	// IMP=0x00000000001a8e31
- (id)contentURL;	// IMP=0x00000000001a8e20
- (void)setAccessoryText:(id)arg1;	// IMP=0x00000000001a8e0f
- (id)accessoryText;	// IMP=0x00000000001a8dfe
- (void)setShortExcerpt:(id)arg1;	// IMP=0x00000000001a8ded
- (id)shortExcerpt;	// IMP=0x00000000001a8ddc
- (id)thumbnailWidgetHQ;	// IMP=0x00000000001a8dcb
- (id)thumbnailWidget;	// IMP=0x00000000001a8dba
- (id)thumbnailWidgetLQ;	// IMP=0x00000000001a8da9
- (void)setThumbnailUltraHQ:(id)arg1;	// IMP=0x00000000001a8d95
- (id)thumbnailUltraHQ;	// IMP=0x00000000001a8d84
- (void)setThumbnailHQ:(id)arg1;	// IMP=0x00000000001a8d70
- (id)thumbnailHQ;	// IMP=0x00000000001a8d5f
- (void)setThumbnailMedium:(id)arg1;	// IMP=0x00000000001a8d4b
- (id)thumbnailMedium;	// IMP=0x00000000001a8d3a
- (void)setThumbnail:(id)arg1;	// IMP=0x00000000001a8d26
- (id)thumbnail;	// IMP=0x00000000001a8d15
- (void)setThumbnailLQ:(id)arg1;	// IMP=0x00000000001a8d01
- (id)thumbnailLQ;	// IMP=0x00000000001a8cf0
- (void)setHasThumbnail:(_Bool)arg1;	// IMP=0x00000000001a8ce0
- (_Bool)hasThumbnail;	// IMP=0x00000000001a8cd0
- (void)setThumbnailFocalFrame:(struct CGRect)arg1;	// IMP=0x00000000001a8cb2
- (struct CGRect)thumbnailFocalFrame;	// IMP=0x00000000001a8c92
- (void)setSourceName:(id)arg1;	// IMP=0x00000000001a8c81
- (id)sourceName;	// IMP=0x00000000001a8c70
@property(readonly, copy, nonatomic) id <FCChannelProviding> sourceChannel; // @synthesize sourceChannel=_sourceChannel;
- (long long)backendArticleVersion;	// IMP=0x00000000001a8c4e
- (long long)publisherArticleVersion;	// IMP=0x00000000001a8c3d
- (void)setPublishDate:(id)arg1;	// IMP=0x00000000001a8c2c
- (id)publishDate;	// IMP=0x00000000001a8c1b
- (id)primaryAudience;	// IMP=0x00000000001a8c0a
- (id)experimentalTitleMetadata;	// IMP=0x00000000001a8bf9
- (void)setTitleCompact:(id)arg1;	// IMP=0x00000000001a8be8
- (id)titleCompact;	// IMP=0x00000000001a8bd7
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)setContentType:(unsigned long long)arg1;	// IMP=0x00000000001a8ba4
- (unsigned long long)contentType;	// IMP=0x00000000001a8b93
- (void)setClusterID:(id)arg1;	// IMP=0x00000000001a8b82
- (id)clusterID;	// IMP=0x00000000001a8b71
- (id)referencedArticleID;	// IMP=0x00000000001a8b60
- (void)setArticleID:(id)arg1;	// IMP=0x00000000001a8b4f
- (id)articleID;	// IMP=0x00000000001a8b3e
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)versionIdentifier;	// IMP=0x00000000001a8b1c
- (_Bool)hasAudioTrack;	// IMP=0x00000000001a85b8
- (id)publisherID;	// IMP=0x00000000001a853e
@property(readonly, copy, nonatomic) NSString *stocksScoresJSON;
@property(readonly, copy, nonatomic) NSString *stocksMetadataJSON;
@property(readonly, copy, nonatomic) NSString *stocksClusterID;
- (id)stocksFields;	// IMP=0x00000000001a8445
@property(readonly, nonatomic) FCContentArchive *contentArchive;
- (id)publisherSpecifiedArticleIDs;	// IMP=0x00000000001a81d3
- (id)articleRecirculationConfigJSON;	// IMP=0x00000000001a811d
- (id)backingArticleRecordData;	// IMP=0x00000000001a80cd
- (id)contentWithContext:(id)arg1;	// IMP=0x00000000001a8040
- (id)initWithArticleRecordData:(id)arg1 sourceChannel:(id)arg2 masterIssue:(id)arg3 assetManager:(id)arg4;	// IMP=0x00000000001a7e41
- (id)initWithArticleRecord:(id)arg1 articleInterestToken:(id)arg2 sourceChannel:(id)arg3 masterIssue:(id)arg4 storyStyleConfigs:(id)arg5 storyTypeTimeout:(long long)arg6 rapidUpdatesTimeout:(long long)arg7 assetManager:(id)arg8 experimentalTitleProvider:(id)arg9;	// IMP=0x00000000001a5630
- (id)initWithArticleMetadata:(id)arg1 sourceChannel:(id)arg2 assetManager:(id)arg3;	// IMP=0x00000000001a4c2b
- (id)init;	// IMP=0x00000000001a4ae6

// Remaining properties
@property(readonly, nonatomic) _Bool isBlockedExplicitContent;
@property(readonly, copy, nonatomic) NSString *sourceChannelID;

@end

