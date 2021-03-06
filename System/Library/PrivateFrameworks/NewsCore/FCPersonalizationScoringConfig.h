//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsCore/NSCopying-Protocol.h>
#import <NewsCore/NSSecureCoding-Protocol.h>

@class FCPersonalizationCohortConfig, FCPersonalizationLowFlowEstimationConfig;

@interface FCPersonalizationScoringConfig : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _respectHalfLifeOverride;	// 8 = 0x8
    _Bool _nicheContentBoostOnlyAboveBaselineMembership;	// 9 = 0x9
    _Bool _nicheContentManagedTopicBoostAllTags;	// 10 = 0xa
    _Bool _nicheContentExcludeNonGroupableTopics;	// 11 = 0xb
    _Bool _nicheContentShouldBoostPublisher;	// 12 = 0xc
    double _articleLengthAggregateWeight;	// 16 = 0x10
    double _articleReadPenalty;	// 24 = 0x18
    double _audioMultiplierForFreeUsers;	// 32 = 0x20
    double _audioMultiplierForTrialUsers;	// 40 = 0x28
    double _audioMultiplierForPaidUsers;	// 48 = 0x30
    double _autofavoritedVoteCoefficient;	// 56 = 0x38
    double _baselineRatePrior;	// 64 = 0x40
    double _bundleFreeMultiplierForFreeUsers;	// 72 = 0x48
    double _bundleFreeMultiplierForTrialUsers;	// 80 = 0x50
    double _bundleFreeMultiplierForPaidUsers;	// 88 = 0x58
    double _bundlePaidMultiplierForFreeUsers;	// 96 = 0x60
    double _bundlePaidMultiplierForTrialUsers;	// 104 = 0x68
    double _bundlePaidMultiplierForPaidUsers;	// 112 = 0x70
    double _channelTopicDiversificationInitialPenalty;	// 120 = 0x78
    double _channelTopicDiversificationPenalty;	// 128 = 0x80
    double _channelTopicDiversificationPenaltyHalfLife;	// 136 = 0x88
    double _conversionCoefficientForFreeUsers;	// 144 = 0x90
    double _conversionCoefficientForTrialUsers;	// 152 = 0x98
    double _conversionCoefficientForPaidUsers;	// 160 = 0xa0
    FCPersonalizationCohortConfig *_conversionCohort;	// 168 = 0xa8
    double _ctrWithOneAutofavorited;	// 176 = 0xb0
    double _ctrWithOneSubscribed;	// 184 = 0xb8
    double _ctrWithSubscribedChannel;	// 192 = 0xc0
    double _ctrWithThreeAutofavorited;	// 200 = 0xc8
    double _ctrWithThreeSubscribed;	// 208 = 0xd0
    double _ctrWithTwoAutofavorited;	// 216 = 0xd8
    double _ctrWithTwoSubscribed;	// 224 = 0xe0
    double _ctrWithZeroAutofavorited;	// 232 = 0xe8
    double _ctrWithZeroSubscribed;	// 240 = 0xf0
    double _decayFactor;	// 248 = 0xf8
    double _democratizationFactor;	// 256 = 0x100
    double _diversificationInitialPenalty;	// 264 = 0x108
    double _diversificationPenalty;	// 272 = 0x110
    double _diversificationPenaltyHalfLife;	// 280 = 0x118
    double _featuredMultiplierForFreeUsers;	// 288 = 0x120
    double _featuredMultiplierForTrialUsers;	// 296 = 0x128
    double _featuredMultiplierForPaidUsers;	// 304 = 0x130
    double _evergreenMultiplierForFreeUsers;	// 312 = 0x138
    double _evergreenMultiplierForTrialUsers;	// 320 = 0x140
    double _evergreenMultiplierForPaidUsers;	// 328 = 0x148
    double _firstPassHalfLifeCoefficient;	// 336 = 0x150
    double _firstPassEvergreenHalfLifeCoefficient;	// 344 = 0x158
    double _firstPassDiversificationPenalty;	// 352 = 0x160
    double _firstPassArticleFilter;	// 360 = 0x168
    double _globalScoreCoefficientFree;	// 368 = 0x170
    double _globalScoreCoefficientPaid;	// 376 = 0x178
    double _globalScoreCoefficientHalfLife;	// 384 = 0x180
    double _globalScoreCoefficientInitialMultiplier;	// 392 = 0x188
    double _headlineSeenPenalty;	// 400 = 0x190
    double _halfLifeCoefficient;	// 408 = 0x198
    double _evergreenHalfLifeCoefficient;	// 416 = 0x1a0
    double _mutedVoteCoefficient;	// 424 = 0x1a8
    double _personalizationCoefficient;	// 432 = 0x1b0
    double _publisherAggregateWeight;	// 440 = 0x1b8
    double _sparseTagsPenalty;	// 448 = 0x1c0
    double _subscribedChannelScoreCoefficient;	// 456 = 0x1c8
    double _subscribedTopicsScoreCoefficient;	// 464 = 0x1d0
    FCPersonalizationCohortConfig *_userCohort;	// 472 = 0x1d8
    double _lowFlowBoostFetchCountWeight;	// 480 = 0x1e0
    double _lowFlowBoostFactor;	// 488 = 0x1e8
    double _lowFlowBoostMaxProductFactor;	// 496 = 0x1f0
    FCPersonalizationLowFlowEstimationConfig *_lowFlowBoostFetchEstimationConfig;	// 504 = 0x1f8
    FCPersonalizationLowFlowEstimationConfig *_lowFlowBoostEventEstimationConfig;	// 512 = 0x200
    double _nicheContentBaselineMembershipMultiplier;	// 520 = 0x208
    double _nicheContentDefaultFlowRate;	// 528 = 0x210
    double _nicheContentDefaultSubscriptionRate;	// 536 = 0x218
    double _nicheContentTopicFlowExponent;	// 544 = 0x220
    double _nicheContentPublisherFlowExponent;	// 552 = 0x228
    double _nicheContentManagedTopicBoost;	// 560 = 0x230
    double _nicheContentServerFlowWeight;	// 568 = 0x238
    double _nicheContentTopicSubscriptionExponent;	// 576 = 0x240
    double _nicheContentPublisherSubscriptionExponent;	// 584 = 0x248
    double _nicheContentQualityThreshold;	// 592 = 0x250
    long long _contentTriggerMaxEventCount;	// 600 = 0x258
    double _contentTriggerScoreExponent;	// 608 = 0x260
    double _contentTriggerMinScoreWeight;	// 616 = 0x268
    double _contentTriggerMaxDampener;	// 624 = 0x270
    double _contentTriggerDampenerCoefficient;	// 632 = 0x278
    double _personalizedMultiplierBaselineMembership;	// 640 = 0x280
    double _personalizedMultiplierPreBaselineCurvature;	// 648 = 0x288
    double _personalizedMultiplierPostBaselineCurvature;	// 656 = 0x290
    double _personalizedMultiplierMembershipDampener;	// 664 = 0x298
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000002b235b
- (void).cxx_destruct;	// IMP=0x00000000002b44a7
@property(nonatomic) double personalizedMultiplierMembershipDampener; // @synthesize personalizedMultiplierMembershipDampener=_personalizedMultiplierMembershipDampener;
@property(nonatomic) double personalizedMultiplierPostBaselineCurvature; // @synthesize personalizedMultiplierPostBaselineCurvature=_personalizedMultiplierPostBaselineCurvature;
@property(nonatomic) double personalizedMultiplierPreBaselineCurvature; // @synthesize personalizedMultiplierPreBaselineCurvature=_personalizedMultiplierPreBaselineCurvature;
@property(nonatomic) double personalizedMultiplierBaselineMembership; // @synthesize personalizedMultiplierBaselineMembership=_personalizedMultiplierBaselineMembership;
@property(nonatomic) double contentTriggerDampenerCoefficient; // @synthesize contentTriggerDampenerCoefficient=_contentTriggerDampenerCoefficient;
@property(nonatomic) double contentTriggerMaxDampener; // @synthesize contentTriggerMaxDampener=_contentTriggerMaxDampener;
@property(nonatomic) double contentTriggerMinScoreWeight; // @synthesize contentTriggerMinScoreWeight=_contentTriggerMinScoreWeight;
@property(nonatomic) double contentTriggerScoreExponent; // @synthesize contentTriggerScoreExponent=_contentTriggerScoreExponent;
@property(nonatomic) long long contentTriggerMaxEventCount; // @synthesize contentTriggerMaxEventCount=_contentTriggerMaxEventCount;
@property(nonatomic) double nicheContentQualityThreshold; // @synthesize nicheContentQualityThreshold=_nicheContentQualityThreshold;
@property(nonatomic) double nicheContentPublisherSubscriptionExponent; // @synthesize nicheContentPublisherSubscriptionExponent=_nicheContentPublisherSubscriptionExponent;
@property(nonatomic) double nicheContentTopicSubscriptionExponent; // @synthesize nicheContentTopicSubscriptionExponent=_nicheContentTopicSubscriptionExponent;
@property(nonatomic) double nicheContentServerFlowWeight; // @synthesize nicheContentServerFlowWeight=_nicheContentServerFlowWeight;
@property(nonatomic) double nicheContentManagedTopicBoost; // @synthesize nicheContentManagedTopicBoost=_nicheContentManagedTopicBoost;
@property(nonatomic) double nicheContentPublisherFlowExponent; // @synthesize nicheContentPublisherFlowExponent=_nicheContentPublisherFlowExponent;
@property(nonatomic) double nicheContentTopicFlowExponent; // @synthesize nicheContentTopicFlowExponent=_nicheContentTopicFlowExponent;
@property(nonatomic) _Bool nicheContentShouldBoostPublisher; // @synthesize nicheContentShouldBoostPublisher=_nicheContentShouldBoostPublisher;
@property(nonatomic) _Bool nicheContentExcludeNonGroupableTopics; // @synthesize nicheContentExcludeNonGroupableTopics=_nicheContentExcludeNonGroupableTopics;
@property(nonatomic) double nicheContentDefaultSubscriptionRate; // @synthesize nicheContentDefaultSubscriptionRate=_nicheContentDefaultSubscriptionRate;
@property(nonatomic) double nicheContentDefaultFlowRate; // @synthesize nicheContentDefaultFlowRate=_nicheContentDefaultFlowRate;
@property(nonatomic) _Bool nicheContentManagedTopicBoostAllTags; // @synthesize nicheContentManagedTopicBoostAllTags=_nicheContentManagedTopicBoostAllTags;
@property(nonatomic) double nicheContentBaselineMembershipMultiplier; // @synthesize nicheContentBaselineMembershipMultiplier=_nicheContentBaselineMembershipMultiplier;
@property(nonatomic) _Bool nicheContentBoostOnlyAboveBaselineMembership; // @synthesize nicheContentBoostOnlyAboveBaselineMembership=_nicheContentBoostOnlyAboveBaselineMembership;
@property(retain, nonatomic) FCPersonalizationLowFlowEstimationConfig *lowFlowBoostEventEstimationConfig; // @synthesize lowFlowBoostEventEstimationConfig=_lowFlowBoostEventEstimationConfig;
@property(retain, nonatomic) FCPersonalizationLowFlowEstimationConfig *lowFlowBoostFetchEstimationConfig; // @synthesize lowFlowBoostFetchEstimationConfig=_lowFlowBoostFetchEstimationConfig;
@property(nonatomic) double lowFlowBoostMaxProductFactor; // @synthesize lowFlowBoostMaxProductFactor=_lowFlowBoostMaxProductFactor;
@property(nonatomic) double lowFlowBoostFactor; // @synthesize lowFlowBoostFactor=_lowFlowBoostFactor;
@property(nonatomic) double lowFlowBoostFetchCountWeight; // @synthesize lowFlowBoostFetchCountWeight=_lowFlowBoostFetchCountWeight;
@property(retain, nonatomic) FCPersonalizationCohortConfig *userCohort; // @synthesize userCohort=_userCohort;
@property(nonatomic) double subscribedTopicsScoreCoefficient; // @synthesize subscribedTopicsScoreCoefficient=_subscribedTopicsScoreCoefficient;
@property(nonatomic) double subscribedChannelScoreCoefficient; // @synthesize subscribedChannelScoreCoefficient=_subscribedChannelScoreCoefficient;
@property(nonatomic) double sparseTagsPenalty; // @synthesize sparseTagsPenalty=_sparseTagsPenalty;
@property(nonatomic) double publisherAggregateWeight; // @synthesize publisherAggregateWeight=_publisherAggregateWeight;
@property(nonatomic) double personalizationCoefficient; // @synthesize personalizationCoefficient=_personalizationCoefficient;
@property(nonatomic) double mutedVoteCoefficient; // @synthesize mutedVoteCoefficient=_mutedVoteCoefficient;
@property(nonatomic) _Bool respectHalfLifeOverride; // @synthesize respectHalfLifeOverride=_respectHalfLifeOverride;
@property(nonatomic) double evergreenHalfLifeCoefficient; // @synthesize evergreenHalfLifeCoefficient=_evergreenHalfLifeCoefficient;
@property(nonatomic) double halfLifeCoefficient; // @synthesize halfLifeCoefficient=_halfLifeCoefficient;
@property(nonatomic) double headlineSeenPenalty; // @synthesize headlineSeenPenalty=_headlineSeenPenalty;
@property(nonatomic) double globalScoreCoefficientInitialMultiplier; // @synthesize globalScoreCoefficientInitialMultiplier=_globalScoreCoefficientInitialMultiplier;
@property(nonatomic) double globalScoreCoefficientHalfLife; // @synthesize globalScoreCoefficientHalfLife=_globalScoreCoefficientHalfLife;
@property(nonatomic) double globalScoreCoefficientPaid; // @synthesize globalScoreCoefficientPaid=_globalScoreCoefficientPaid;
@property(nonatomic) double globalScoreCoefficientFree; // @synthesize globalScoreCoefficientFree=_globalScoreCoefficientFree;
@property(nonatomic) double firstPassArticleFilter; // @synthesize firstPassArticleFilter=_firstPassArticleFilter;
@property(nonatomic) double firstPassDiversificationPenalty; // @synthesize firstPassDiversificationPenalty=_firstPassDiversificationPenalty;
@property(nonatomic) double firstPassEvergreenHalfLifeCoefficient; // @synthesize firstPassEvergreenHalfLifeCoefficient=_firstPassEvergreenHalfLifeCoefficient;
@property(nonatomic) double firstPassHalfLifeCoefficient; // @synthesize firstPassHalfLifeCoefficient=_firstPassHalfLifeCoefficient;
@property(nonatomic) double evergreenMultiplierForPaidUsers; // @synthesize evergreenMultiplierForPaidUsers=_evergreenMultiplierForPaidUsers;
@property(nonatomic) double evergreenMultiplierForTrialUsers; // @synthesize evergreenMultiplierForTrialUsers=_evergreenMultiplierForTrialUsers;
@property(nonatomic) double evergreenMultiplierForFreeUsers; // @synthesize evergreenMultiplierForFreeUsers=_evergreenMultiplierForFreeUsers;
@property(nonatomic) double featuredMultiplierForPaidUsers; // @synthesize featuredMultiplierForPaidUsers=_featuredMultiplierForPaidUsers;
@property(nonatomic) double featuredMultiplierForTrialUsers; // @synthesize featuredMultiplierForTrialUsers=_featuredMultiplierForTrialUsers;
@property(nonatomic) double featuredMultiplierForFreeUsers; // @synthesize featuredMultiplierForFreeUsers=_featuredMultiplierForFreeUsers;
@property(nonatomic) double diversificationPenaltyHalfLife; // @synthesize diversificationPenaltyHalfLife=_diversificationPenaltyHalfLife;
@property(nonatomic) double diversificationPenalty; // @synthesize diversificationPenalty=_diversificationPenalty;
@property(nonatomic) double diversificationInitialPenalty; // @synthesize diversificationInitialPenalty=_diversificationInitialPenalty;
@property(nonatomic) double democratizationFactor; // @synthesize democratizationFactor=_democratizationFactor;
@property(nonatomic) double decayFactor; // @synthesize decayFactor=_decayFactor;
@property(nonatomic) double ctrWithZeroSubscribed; // @synthesize ctrWithZeroSubscribed=_ctrWithZeroSubscribed;
@property(nonatomic) double ctrWithZeroAutofavorited; // @synthesize ctrWithZeroAutofavorited=_ctrWithZeroAutofavorited;
@property(nonatomic) double ctrWithTwoSubscribed; // @synthesize ctrWithTwoSubscribed=_ctrWithTwoSubscribed;
@property(nonatomic) double ctrWithTwoAutofavorited; // @synthesize ctrWithTwoAutofavorited=_ctrWithTwoAutofavorited;
@property(nonatomic) double ctrWithThreeSubscribed; // @synthesize ctrWithThreeSubscribed=_ctrWithThreeSubscribed;
@property(nonatomic) double ctrWithThreeAutofavorited; // @synthesize ctrWithThreeAutofavorited=_ctrWithThreeAutofavorited;
@property(nonatomic) double ctrWithSubscribedChannel; // @synthesize ctrWithSubscribedChannel=_ctrWithSubscribedChannel;
@property(nonatomic) double ctrWithOneSubscribed; // @synthesize ctrWithOneSubscribed=_ctrWithOneSubscribed;
@property(nonatomic) double ctrWithOneAutofavorited; // @synthesize ctrWithOneAutofavorited=_ctrWithOneAutofavorited;
@property(retain, nonatomic) FCPersonalizationCohortConfig *conversionCohort; // @synthesize conversionCohort=_conversionCohort;
@property(nonatomic) double conversionCoefficientForPaidUsers; // @synthesize conversionCoefficientForPaidUsers=_conversionCoefficientForPaidUsers;
@property(nonatomic) double conversionCoefficientForTrialUsers; // @synthesize conversionCoefficientForTrialUsers=_conversionCoefficientForTrialUsers;
@property(nonatomic) double conversionCoefficientForFreeUsers; // @synthesize conversionCoefficientForFreeUsers=_conversionCoefficientForFreeUsers;
@property(nonatomic) double channelTopicDiversificationPenaltyHalfLife; // @synthesize channelTopicDiversificationPenaltyHalfLife=_channelTopicDiversificationPenaltyHalfLife;
@property(nonatomic) double channelTopicDiversificationPenalty; // @synthesize channelTopicDiversificationPenalty=_channelTopicDiversificationPenalty;
@property(nonatomic) double channelTopicDiversificationInitialPenalty; // @synthesize channelTopicDiversificationInitialPenalty=_channelTopicDiversificationInitialPenalty;
@property(nonatomic) double bundlePaidMultiplierForPaidUsers; // @synthesize bundlePaidMultiplierForPaidUsers=_bundlePaidMultiplierForPaidUsers;
@property(nonatomic) double bundlePaidMultiplierForTrialUsers; // @synthesize bundlePaidMultiplierForTrialUsers=_bundlePaidMultiplierForTrialUsers;
@property(nonatomic) double bundlePaidMultiplierForFreeUsers; // @synthesize bundlePaidMultiplierForFreeUsers=_bundlePaidMultiplierForFreeUsers;
@property(nonatomic) double bundleFreeMultiplierForPaidUsers; // @synthesize bundleFreeMultiplierForPaidUsers=_bundleFreeMultiplierForPaidUsers;
@property(nonatomic) double bundleFreeMultiplierForTrialUsers; // @synthesize bundleFreeMultiplierForTrialUsers=_bundleFreeMultiplierForTrialUsers;
@property(nonatomic) double bundleFreeMultiplierForFreeUsers; // @synthesize bundleFreeMultiplierForFreeUsers=_bundleFreeMultiplierForFreeUsers;
@property(nonatomic) double baselineRatePrior; // @synthesize baselineRatePrior=_baselineRatePrior;
@property(nonatomic) double autofavoritedVoteCoefficient; // @synthesize autofavoritedVoteCoefficient=_autofavoritedVoteCoefficient;
@property(nonatomic) double audioMultiplierForPaidUsers; // @synthesize audioMultiplierForPaidUsers=_audioMultiplierForPaidUsers;
@property(nonatomic) double audioMultiplierForTrialUsers; // @synthesize audioMultiplierForTrialUsers=_audioMultiplierForTrialUsers;
@property(nonatomic) double audioMultiplierForFreeUsers; // @synthesize audioMultiplierForFreeUsers=_audioMultiplierForFreeUsers;
@property(nonatomic) double articleReadPenalty; // @synthesize articleReadPenalty=_articleReadPenalty;
@property(nonatomic) double articleLengthAggregateWeight; // @synthesize articleLengthAggregateWeight=_articleLengthAggregateWeight;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002b30e7
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002b2363
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002b2350
- (id)initWithArticleLengthAggregateWeight:(double)arg1 articleReadPenalty:(double)arg2 audioMultiplierForFreeUsers:(double)arg3 audioMultiplierForTrialUsers:(double)arg4 audioMultiplierForPaidUsers:(double)arg5 autofavoritedVoteCoefficient:(double)arg6 baselineRatePrior:(double)arg7 bundleFreeMultiplierForFreeUsers:(double)arg8 bundleFreeMultiplierForTrialUsers:(double)arg9 bundleFreeMultiplierForPaidUsers:(double)arg10 bundlePaidMultiplierForFreeUsers:(double)arg11 bundlePaidMultiplierForTrialUsers:(double)arg12 bundlePaidMultiplierForPaidUsers:(double)arg13 channelTopicDiversificationInitialPenalty:(double)arg14 channelTopicDiversificationPenalty:(double)arg15 channelTopicDiversificationPenaltyHalfLife:(double)arg16 conversionCoefficientForFreeUsers:(double)arg17 conversionCoefficientForTrialUsers:(double)arg18 conversionCoefficientForPaidUsers:(double)arg19 conversionCohort:(id)arg20 ctrWithOneAutofavorited:(double)arg21 ctrWithOneSubscribed:(double)arg22 ctrWithSubscribedChannel:(double)arg23 ctrWithThreeAutofavorited:(double)arg24 ctrWithThreeSubscribed:(double)arg25 ctrWithTwoAutofavorited:(double)arg26 ctrWithTwoSubscribed:(double)arg27 ctrWithZeroAutofavorited:(double)arg28 ctrWithZeroSubscribed:(double)arg29 decayFactor:(double)arg30 democratizationFactor:(double)arg31 diversificationInitialPenalty:(double)arg32 diversificationPenalty:(double)arg33 diversificationPenaltyHalfLife:(double)arg34 featuredMultiplierForFreeUsers:(double)arg35 featuredMultiplierForTrialUsers:(double)arg36 featuredMultiplierForPaidUsers:(double)arg37 evergreenMultiplierForFreeUsers:(double)arg38 evergreenMultiplierForTrialUsers:(double)arg39 evergreenMultiplierForPaidUsers:(double)arg40 firstPassHalfLifeCoefficient:(double)arg41 firstPassEvergreenHalfLifeCoefficient:(double)arg42 firstPassDiversificationPenalty:(double)arg43 firstPassArticleFilter:(double)arg44 globalScoreCoefficientFree:(double)arg45 globalScoreCoefficientPaid:(double)arg46 globalScoreCoefficientHalfLife:(double)arg47 globalScoreCoefficientInitialMultiplier:(double)arg48 headlineSeenPenalty:(double)arg49 halfLifeCoefficient:(double)arg50 evergreenHalfLifeCoefficient:(double)arg51 respectHalfLifeOverride:(_Bool)arg52 mutedVoteCoefficient:(double)arg53 personalizationCoefficient:(double)arg54 publisherAggregateWeight:(double)arg55 sparseTagsPenalty:(double)arg56 subscribedChannelScoreCoefficient:(double)arg57 subscribedTopicsScoreCoefficient:(double)arg58 userCohort:(id)arg59 lowFlowBoostFetchCountWeight:(double)arg60 lowFlowBoostFactor:(double)arg61 lowFlowBoostMaxProductFactor:(double)arg62 lowFlowBoostFetchEstimationConfig:(id)arg63 lowFlowBoostEventEstimationConfig:(id)arg64 nicheContentBoostOnlyAboveBaselineMembership:(_Bool)arg65 nicheContentBaselineMembershipMultiplier:(double)arg66 nicheContentManagedTopicBoostAllTags:(_Bool)arg67 nicheContentDefaultFlowRate:(double)arg68 nicheContentDefaultSubscriptionRate:(double)arg69 nicheContentExcludeNonGroupableTopics:(_Bool)arg70 nicheContentShouldBoostPublisher:(_Bool)arg71 nicheContentTopicFlowExponent:(double)arg72 nicheContentPublisherFlowExponent:(double)arg73 nicheContentManagedTopicBoost:(double)arg74 nicheContentServerFlowWeight:(double)arg75 nicheContentTopicSubscriptionExponent:(double)arg76 nicheContentPublisherSubscriptionExponent:(double)arg77 nicheContentQualityThreshold:(double)arg78 contentTriggerMaxEventCount:(long long)arg79 contentTriggerScoreExponent:(double)arg80 contentTriggerMinScoreWeight:(double)arg81 contentTriggerMaxDampener:(double)arg82 contentTriggerDampenerCoefficient:(double)arg83 personalizedMultiplierBaselineMembership:(double)arg84 personalizedMultiplierPreBaselineCurvature:(double)arg85 personalizedMultiplierPostBaselineCurvature:(double)arg86 personalizedMultiplierMembershipDampener:(double)arg87;	// IMP=0x00000000002b1d5f
- (id)initWithConfigDictionary:(id)arg1 defaultConfig:(id)arg2;	// IMP=0x00000000002afb1c
- (id)initWithConfigDictionary:(id)arg1;	// IMP=0x00000000002ae25d
- (id)init;	// IMP=0x00000000002ae118

@end

