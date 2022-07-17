//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PromotedContent/APPCPromotableNewsSupplementalContext-Protocol.h>

@class MISSING_TYPE, NSArray, NSDictionary, NSNumber, NSString;

@interface APPCNewsSupplementalContext : NSObject <APPCPromotableNewsSupplementalContext>
{
    MISSING_TYPE *advertisementType;	// 8 = 0x8
    MISSING_TYPE *creativeType;	// 24 = 0x18
    MISSING_TYPE *currentArticleArticleId;	// 40 = 0x28
    MISSING_TYPE *nextArticleArticleId;	// 56 = 0x38
    MISSING_TYPE *currentArticleIsSponsored;	// 72 = 0x48
    MISSING_TYPE *nextArticleIsSponsored;	// 80 = 0x50
    MISSING_TYPE *currentArticlePublicationMetadata;	// 88 = 0x58
    MISSING_TYPE *nextArticlePublicationMetadata;	// 96 = 0x60
    MISSING_TYPE *currentArticleRating;	// 104 = 0x68
    MISSING_TYPE *nextArticleRating;	// 120 = 0x78
    MISSING_TYPE *currentArticleSourceChannel;	// 136 = 0x88
    MISSING_TYPE *nextArticleSourceChannel;	// 152 = 0x98
    MISSING_TYPE *currentArticleSourceChannelRating;	// 168 = 0xa8
    MISSING_TYPE *nextArticleSourceChannelRating;	// 184 = 0xb8
    MISSING_TYPE *currentArticleSourceContentProviderId;	// 200 = 0xc8
    MISSING_TYPE *nextArticleSourceContentProviderId;	// 208 = 0xd0
    MISSING_TYPE *currentArticleSourceSections;	// 216 = 0xd8
    MISSING_TYPE *nextArticleSourceSections;	// 224 = 0xe0
    MISSING_TYPE *feedMetadataCategories;	// 232 = 0xe8
    MISSING_TYPE *feedMetadataChannelId;	// 240 = 0xf0
    MISSING_TYPE *feedMetadataTagId;	// 256 = 0x100
    MISSING_TYPE *feedMetadataContentProviderID;	// 272 = 0x110
    MISSING_TYPE *feedMetadataKeywords;	// 280 = 0x118
    MISSING_TYPE *feedMetadataLanguages;	// 288 = 0x120
    MISSING_TYPE *feedMetadataRating;	// 296 = 0x128
    MISSING_TYPE *feedMetadataSectionId;	// 312 = 0x138
    MISSING_TYPE *groupContextCategories;	// 328 = 0x148
    MISSING_TYPE *groupContextAboveCategories;	// 336 = 0x150
    MISSING_TYPE *groupContextBelowCategories;	// 344 = 0x158
    MISSING_TYPE *groupContextId;	// 352 = 0x160
    MISSING_TYPE *groupContextAboveId;	// 368 = 0x170
    MISSING_TYPE *groupContextBelowId;	// 384 = 0x180
    MISSING_TYPE *groupContextKeywords;	// 400 = 0x190
    MISSING_TYPE *groupContextAboveKeywords;	// 408 = 0x198
    MISSING_TYPE *groupContextBelowKeywords;	// 416 = 0x1a0
    MISSING_TYPE *groupContextLanguages;	// 424 = 0x1a8
    MISSING_TYPE *groupContextAboveLanguages;	// 432 = 0x1b0
    MISSING_TYPE *groupContextBelowLanguages;	// 440 = 0x1b8
    MISSING_TYPE *groupContextAboveChannelId;	// 448 = 0x1c0
    MISSING_TYPE *groupContextAboveTagId;	// 464 = 0x1d0
    MISSING_TYPE *groupContextBelowChannelId;	// 480 = 0x1e0
    MISSING_TYPE *groupContextBelowTagId;	// 496 = 0x1f0
    MISSING_TYPE *groupContextContentProviderId;	// 512 = 0x200
    MISSING_TYPE *groupContextAboveContentProviderId;	// 520 = 0x208
    MISSING_TYPE *groupContextBelowContentProviderId;	// 528 = 0x210
    MISSING_TYPE *groupContextType;	// 536 = 0x218
    MISSING_TYPE *groupContextAboveType;	// 552 = 0x228
    MISSING_TYPE *groupContextBelowType;	// 568 = 0x238
    MISSING_TYPE *contentEnvironment;	// 584 = 0x248
    MISSING_TYPE *isDraft;	// 600 = 0x258
    MISSING_TYPE *placement;	// 608 = 0x260
    MISSING_TYPE *referralCampaignId;	// 624 = 0x270
    MISSING_TYPE *referralLocation;	// 640 = 0x280
    MISSING_TYPE *referralPublisherInventory;	// 656 = 0x290
    MISSING_TYPE *numOfArticlesSeenSinceLastInterstitial;	// 664 = 0x298
    MISSING_TYPE *playerAspectRatio;	// 672 = 0x2a0
    MISSING_TYPE *subscriptionType;	// 680 = 0x2a8
    MISSING_TYPE *currentIssueId;	// 696 = 0x2b8
    MISSING_TYPE *anfComponentMetadataInternal;	// 712 = 0x2c8
    MISSING_TYPE *currentIssueIsDraftInternal;	// 720 = 0x2d0
    MISSING_TYPE *currentIssueIsCurrentInternal;	// 728 = 0x2d8
    MISSING_TYPE *requestedAdTypeInternal;	// 736 = 0x2e0
}

- (void).cxx_destruct;	// IMP=0x000000000004a710
- (id)init;	// IMP=0x000000000004a6c0
- (id)copyWithZone:(void *)arg1;	// IMP=0x000000000004a260
@property(nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property(nonatomic) long long currentIssueIsCurrent;
@property(nonatomic) long long currentIssueIsDraft;
@property(nonatomic, copy) NSString *currentIssueId;
@property(nonatomic, copy) NSString *subscriptionType;
@property(nonatomic, retain) NSNumber *playerAspectRatio; // @synthesize playerAspectRatio;
@property(nonatomic, retain) NSNumber *numOfArticlesSeenSinceLastInterstitial; // @synthesize numOfArticlesSeenSinceLastInterstitial;
@property(nonatomic, retain) NSNumber *referralPublisherInventory; // @synthesize referralPublisherInventory;
@property(nonatomic, copy) NSString *referralLocation;
@property(nonatomic, copy) NSString *placement;
@property(nonatomic, retain) NSNumber *onboardStatus;
@property(nonatomic, retain) NSNumber *isDraft; // @synthesize isDraft;
@property(nonatomic, copy) NSString *contentEnvironment;
@property(nonatomic, copy) NSString *groupContextBelowType;
@property(nonatomic, copy) NSString *groupContextAboveType;
@property(nonatomic, copy) NSString *groupContextType;
@property(nonatomic, retain) NSNumber *groupContextBelowContentProviderId; // @synthesize groupContextBelowContentProviderId;
@property(nonatomic, retain) NSNumber *groupContextAboveContentProviderId; // @synthesize groupContextAboveContentProviderId;
@property(nonatomic, retain) NSNumber *groupContextContentProviderId; // @synthesize groupContextContentProviderId;
@property(nonatomic, copy) NSString *groupContextBelowTagId;
@property(nonatomic, copy) NSString *groupContextBelowChannelId;
@property(nonatomic, copy) NSString *groupContextAboveTagId;
@property(nonatomic, copy) NSString *groupContextAboveChannelId;
@property(nonatomic, copy) NSArray *groupContextBelowLanguages;
@property(nonatomic, copy) NSArray *groupContextAboveLanguages;
@property(nonatomic, copy) NSArray *groupContextLanguages;
@property(nonatomic, copy) NSArray *groupContextBelowKeywords;
@property(nonatomic, copy) NSArray *groupContextAboveKeywords;
@property(nonatomic, copy) NSArray *groupContextKeywords;
@property(nonatomic, copy) NSString *groupContextBelowId;
@property(nonatomic, copy) NSString *groupContextAboveId;
@property(nonatomic, copy) NSString *groupContextId;
@property(nonatomic, copy) NSArray *groupContextBelowCategories;
@property(nonatomic, copy) NSArray *groupContextAboveCategories;
@property(nonatomic, copy) NSArray *groupContextCategories;
@property(nonatomic, copy) NSString *feedMetadataSectionId;
@property(nonatomic, copy) NSString *feedMetadataRating;
@property(nonatomic, copy) NSArray *feedMetadataLanguages;
@property(nonatomic, copy) NSArray *feedMetadataKeywords;
@property(nonatomic, retain) NSNumber *feedMetadataContentProviderID; // @synthesize feedMetadataContentProviderID;
@property(nonatomic, copy) NSString *feedMetadataTagId;
@property(nonatomic, copy) NSString *feedMetadataChannelId;
@property(nonatomic, copy) NSArray *feedMetadataCategories;
@property(nonatomic, copy) NSArray *nextArticleSourceSections;
@property(nonatomic, copy) NSArray *currentArticleSourceSections;
@property(nonatomic, retain) NSNumber *nextArticleSourceContentProviderId; // @synthesize nextArticleSourceContentProviderId;
@property(nonatomic, retain) NSNumber *currentArticleSourceContentProviderId; // @synthesize currentArticleSourceContentProviderId;
@property(nonatomic, copy) NSString *nextArticleSourceChannelRating;
@property(nonatomic, copy) NSString *currentArticleSourceChannelRating;
@property(nonatomic, copy) NSString *nextArticleSourceChannel;
@property(nonatomic, copy) NSString *currentArticleSourceChannel;
@property(nonatomic, copy) NSString *nextArticleRating;
@property(nonatomic, copy) NSString *currentArticleRating;
@property(nonatomic, copy) NSDictionary *nextArticlePublicationMetadata;
@property(nonatomic, copy) NSDictionary *currentArticlePublicationMetadata;
@property(nonatomic, retain) NSNumber *nextArticleIsSponsored; // @synthesize nextArticleIsSponsored;
@property(nonatomic, retain) NSNumber *currentArticleIsSponsored; // @synthesize currentArticleIsSponsored;
@property(nonatomic, copy) NSString *nextArticleArticleId;
@property(nonatomic, copy) NSString *currentArticleArticleId;
@property(nonatomic, copy) NSString *creativeType;
@property(nonatomic) long long requestedAdType;
@property(nonatomic, copy) NSDictionary *anfComponentMetadata;
@property(nonatomic, copy) NSString *advertisementType;

@end
