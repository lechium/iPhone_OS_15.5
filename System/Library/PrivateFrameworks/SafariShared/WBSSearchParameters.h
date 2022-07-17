//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SafariShared/NSSecureCoding-Protocol.h>

@interface WBSSearchParameters : NSObject <NSSecureCoding>
{
    _Bool _isCFSearch;	// 8 = 0x8
    _Bool _isForVoiceSearch;	// 9 = 0x9
    _Bool _isResultFilteringDisabled;	// 10 = 0xa
    _Bool _isDedupeThroughAlternativeURLsEnabled;	// 11 = 0xb
    _Bool _isLocalPhantomTophitDisabled;	// 12 = 0xc
    _Bool _strengthenAutocompleteTriggerExtensionMatching;	// 13 = 0xd
    _Bool _enableCompletionListHistoryDeduplicationValue;	// 14 = 0xe
    _Bool _enableCompletionListHistoryDeduplicationSwitchToTabValue;	// 15 = 0xf
    double _CFSearchTimeout;	// 16 = 0x10
    long long _characterThresholdForAnywhereInTitleOrURL;	// 24 = 0x18
    double _percentageThresholdForAnywhereInTitle;	// 32 = 0x20
    double _percentageThresholdForAnywhereInURL;	// 40 = 0x28
    long long _characterThresholdForStartOfURLPathComponent;	// 48 = 0x30
    long long _matchingWordsInTitleThreshold;	// 56 = 0x38
    long long _characterThresholdForStartOfTitle;	// 64 = 0x40
    long long _characterThresholdForStartOfTitleWord;	// 72 = 0x48
    long long _characterThresholdForStartOfURL;	// 80 = 0x50
    double _normalizedTopSitesScoreAndVisitCountMultiplier;	// 88 = 0x58
    long long _maxBookmarksAndHistoryItems;	// 96 = 0x60
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000006fd81
+ (id)getSearchParametersHelper:(id)arg1 withTrial:(id)arg2 withCache:(_Bool)arg3;	// IMP=0x000000000006f2ac
+ (id)searchParameters;	// IMP=0x000000000006f1f1
@property(nonatomic) long long maxBookmarksAndHistoryItems; // @synthesize maxBookmarksAndHistoryItems=_maxBookmarksAndHistoryItems;
@property(nonatomic) double normalizedTopSitesScoreAndVisitCountMultiplier; // @synthesize normalizedTopSitesScoreAndVisitCountMultiplier=_normalizedTopSitesScoreAndVisitCountMultiplier;
@property(nonatomic) long long characterThresholdForStartOfURL; // @synthesize characterThresholdForStartOfURL=_characterThresholdForStartOfURL;
@property(nonatomic) long long characterThresholdForStartOfTitleWord; // @synthesize characterThresholdForStartOfTitleWord=_characterThresholdForStartOfTitleWord;
@property(nonatomic) long long characterThresholdForStartOfTitle; // @synthesize characterThresholdForStartOfTitle=_characterThresholdForStartOfTitle;
@property(nonatomic) long long matchingWordsInTitleThreshold; // @synthesize matchingWordsInTitleThreshold=_matchingWordsInTitleThreshold;
@property(nonatomic) long long characterThresholdForStartOfURLPathComponent; // @synthesize characterThresholdForStartOfURLPathComponent=_characterThresholdForStartOfURLPathComponent;
@property(nonatomic) double percentageThresholdForAnywhereInURL; // @synthesize percentageThresholdForAnywhereInURL=_percentageThresholdForAnywhereInURL;
@property(nonatomic) double percentageThresholdForAnywhereInTitle; // @synthesize percentageThresholdForAnywhereInTitle=_percentageThresholdForAnywhereInTitle;
@property(nonatomic) long long characterThresholdForAnywhereInTitleOrURL; // @synthesize characterThresholdForAnywhereInTitleOrURL=_characterThresholdForAnywhereInTitleOrURL;
@property(nonatomic) _Bool enableCompletionListHistoryDeduplicationSwitchToTabValue; // @synthesize enableCompletionListHistoryDeduplicationSwitchToTabValue=_enableCompletionListHistoryDeduplicationSwitchToTabValue;
@property(nonatomic) _Bool enableCompletionListHistoryDeduplicationValue; // @synthesize enableCompletionListHistoryDeduplicationValue=_enableCompletionListHistoryDeduplicationValue;
@property(nonatomic) _Bool strengthenAutocompleteTriggerExtensionMatching; // @synthesize strengthenAutocompleteTriggerExtensionMatching=_strengthenAutocompleteTriggerExtensionMatching;
@property(nonatomic) _Bool isLocalPhantomTophitDisabled; // @synthesize isLocalPhantomTophitDisabled=_isLocalPhantomTophitDisabled;
@property(nonatomic) _Bool isDedupeThroughAlternativeURLsEnabled; // @synthesize isDedupeThroughAlternativeURLsEnabled=_isDedupeThroughAlternativeURLsEnabled;
@property(nonatomic) _Bool isResultFilteringDisabled; // @synthesize isResultFilteringDisabled=_isResultFilteringDisabled;
@property(nonatomic) _Bool isForVoiceSearch; // @synthesize isForVoiceSearch=_isForVoiceSearch;
@property(nonatomic) double CFSearchTimeout; // @synthesize CFSearchTimeout=_CFSearchTimeout;
@property(nonatomic) _Bool isCFSearch; // @synthesize isCFSearch=_isCFSearch;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000006ffff
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006fd89
- (void)updateWithTrial:(_Bool)arg1 forTrial:(id)arg2;	// IMP=0x000000000006fa80
- (id)initWithTrial:(_Bool)arg1 forPrefs:(id)arg2 forTrial:(id)arg3;	// IMP=0x000000000006f896
- (void)updateUsingPreferenceKeys:(id)arg1;	// IMP=0x000000000006f6c8
- (void)updateWithDefaults;	// IMP=0x000000000006f65c
- (id)initWithPreferences:(id)arg1;	// IMP=0x000000000006f54a
- (id)init;	// IMP=0x000000000006f4ce

@end
