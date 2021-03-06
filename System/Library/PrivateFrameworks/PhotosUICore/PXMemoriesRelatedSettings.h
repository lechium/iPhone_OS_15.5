//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PXMemoriesRelatedSettings
{
    _Bool _enableFeedbackUI;	// 8 = 0x8
    _Bool _enableFeedbackComboUI;	// 9 = 0x9
    _Bool _enableMemoriesLivingOnFeedback;	// 10 = 0xa
    _Bool _enableManualRefreshUI;	// 11 = 0xb
    _Bool _fakePeopleProximity;	// 12 = 0xc
    _Bool _showEphemeralMemories;	// 13 = 0xd
    _Bool _useOnlyMusicForTopicInTopPickSuggestions;	// 14 = 0xe
    _Bool _includeChillMixInMusicForYou;	// 15 = 0xf
    _Bool _includeGetUpMixInMusicForYou;	// 16 = 0x10
    _Bool _recoverBlacklistedMemories;	// 17 = 0x11
    _Bool _showMemoryTitleLayer;	// 18 = 0x12
    _Bool _enableIPadWideHeader;	// 19 = 0x13
    _Bool _enableDiscoveryFeed;	// 20 = 0x14
    double _refreshPhotoKitTimeout;	// 24 = 0x18
    double _widgetRefreshTimeInterval;	// 32 = 0x20
    long long _minimumNumberOfCuratedAssetsForInterestingMoments;	// 40 = 0x28
    long long _minimumNumberOfCuratedAssetsForMemories;	// 48 = 0x30
    long long _minimumNumberOfCuratedAssetsForMovieHeader;	// 56 = 0x38
    unsigned long long _deleteBehavior;	// 64 = 0x40
    long long _subtitleFontSize;	// 72 = 0x48
    unsigned long long _timelineSchedulerMode;	// 80 = 0x50
    unsigned long long _discoveryRankingMode;	// 88 = 0x58
}

+ (_Bool)isAssetCountAcceptableForMemoryPlayback:(long long)arg1;	// IMP=0x000000000024da18
+ (id)schedulerOptionsFromTimelineSchedulerMode:(unsigned long long)arg1;	// IMP=0x000000000024d8aa
+ (id)sharedInstance;	// IMP=0x000000000024d87a
+ (void)_presentAlertWithTitle:(id)arg1 andMessage:(id)arg2 inModuleController:(id)arg3;	// IMP=0x00000000002ed265
+ (void)_presentAlertForMemoriesGenerationResult:(id)arg1 error:(id)arg2 inModuleController:(id)arg3;	// IMP=0x00000000002ed118
+ (void)_generateQuestionsWithOptions:(long long)arg1 count:(unsigned long long)arg2 inModuleController:(id)arg3;	// IMP=0x00000000002ed02c
+ (id)settingsControllerModule;	// IMP=0x00000000002eb198
@property(nonatomic) unsigned long long discoveryRankingMode; // @synthesize discoveryRankingMode=_discoveryRankingMode;
@property(nonatomic) _Bool enableDiscoveryFeed; // @synthesize enableDiscoveryFeed=_enableDiscoveryFeed;
@property(nonatomic) unsigned long long timelineSchedulerMode; // @synthesize timelineSchedulerMode=_timelineSchedulerMode;
@property(nonatomic) long long subtitleFontSize; // @synthesize subtitleFontSize=_subtitleFontSize;
@property(nonatomic) _Bool enableIPadWideHeader; // @synthesize enableIPadWideHeader=_enableIPadWideHeader;
@property(nonatomic) _Bool showMemoryTitleLayer; // @synthesize showMemoryTitleLayer=_showMemoryTitleLayer;
@property(nonatomic) _Bool recoverBlacklistedMemories; // @synthesize recoverBlacklistedMemories=_recoverBlacklistedMemories;
@property(nonatomic) unsigned long long deleteBehavior; // @synthesize deleteBehavior=_deleteBehavior;
@property(nonatomic) long long minimumNumberOfCuratedAssetsForMovieHeader; // @synthesize minimumNumberOfCuratedAssetsForMovieHeader=_minimumNumberOfCuratedAssetsForMovieHeader;
@property(nonatomic) long long minimumNumberOfCuratedAssetsForMemories; // @synthesize minimumNumberOfCuratedAssetsForMemories=_minimumNumberOfCuratedAssetsForMemories;
@property(nonatomic) long long minimumNumberOfCuratedAssetsForInterestingMoments; // @synthesize minimumNumberOfCuratedAssetsForInterestingMoments=_minimumNumberOfCuratedAssetsForInterestingMoments;
@property(nonatomic) double widgetRefreshTimeInterval; // @synthesize widgetRefreshTimeInterval=_widgetRefreshTimeInterval;
@property(nonatomic) double refreshPhotoKitTimeout; // @synthesize refreshPhotoKitTimeout=_refreshPhotoKitTimeout;
@property(nonatomic) _Bool includeGetUpMixInMusicForYou; // @synthesize includeGetUpMixInMusicForYou=_includeGetUpMixInMusicForYou;
@property(nonatomic) _Bool includeChillMixInMusicForYou; // @synthesize includeChillMixInMusicForYou=_includeChillMixInMusicForYou;
@property(nonatomic) _Bool useOnlyMusicForTopicInTopPickSuggestions; // @synthesize useOnlyMusicForTopicInTopPickSuggestions=_useOnlyMusicForTopicInTopPickSuggestions;
@property(nonatomic) _Bool showEphemeralMemories; // @synthesize showEphemeralMemories=_showEphemeralMemories;
@property(nonatomic) _Bool fakePeopleProximity; // @synthesize fakePeopleProximity=_fakePeopleProximity;
@property(nonatomic) _Bool enableManualRefreshUI; // @synthesize enableManualRefreshUI=_enableManualRefreshUI;
@property(nonatomic) _Bool enableMemoriesLivingOnFeedback; // @synthesize enableMemoriesLivingOnFeedback=_enableMemoriesLivingOnFeedback;
@property(nonatomic) _Bool enableFeedbackComboUI; // @synthesize enableFeedbackComboUI=_enableFeedbackComboUI;
@property(nonatomic) _Bool enableFeedbackUI; // @synthesize enableFeedbackUI=_enableFeedbackUI;
- (void)performPostSaveActions;	// IMP=0x000000000024d1bc
- (void)setDefaultValues;	// IMP=0x000000000024ce61
- (id)parentSettings;	// IMP=0x000000000024ce48

@end

