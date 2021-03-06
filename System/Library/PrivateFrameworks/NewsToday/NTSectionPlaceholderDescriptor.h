//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsToday/NTSectionDescriptor-Protocol.h>

@class NSString, NSURL;

@interface NTSectionPlaceholderDescriptor : NSObject <NTSectionDescriptor>
{
    int _promotionCriterion;	// 8 = 0x8
    int _readArticlesFilterMethod;	// 12 = 0xc
    int _seenArticlesFilterMethod;	// 16 = 0x10
    NSString *_actionTitle;	// 24 = 0x18
    NSString *_backingTagID;	// 32 = 0x20
    unsigned long long _cachedResultCutoffTime;	// 40 = 0x28
    NSString *_compactName;	// 48 = 0x30
    unsigned long long _fallbackOrder;	// 56 = 0x38
    NSString *_identifier;	// 64 = 0x40
    NSString *_subidentifier;	// 72 = 0x48
    unsigned long long _maximumStoriesAllocation;	// 80 = 0x50
    unsigned long long _minimumStoriesAllocation;	// 88 = 0x58
    NSString *_name;	// 96 = 0x60
    NSString *_nameColorDark;	// 104 = 0x68
    NSString *_nameColorLight;	// 112 = 0x70
    NSString *_personalizationFeatureID;	// 120 = 0x78
    NSString *_referralBarName;	// 128 = 0x80
    long long _seenArticlesMinimumTimeSinceFirstSeenToFilter;	// 136 = 0x88
    long long _supplementalInterSectionFilterOptions;	// 144 = 0x90
    NSURL *_actionURL;	// 152 = 0x98
    long long _supplementalIntraSectionFilterOptions;	// 160 = 0xa0
    NSURL *_nameActionURL;	// 168 = 0xa8
    NSString *_backgroundColorLight;	// 176 = 0xb0
    NSString *_backgroundColorDark;	// 184 = 0xb8
}

- (void).cxx_destruct;	// IMP=0x0000000000024c2b
@property(readonly, copy, nonatomic) NSString *backgroundColorDark; // @synthesize backgroundColorDark=_backgroundColorDark;
@property(readonly, copy, nonatomic) NSString *backgroundColorLight; // @synthesize backgroundColorLight=_backgroundColorLight;
@property(readonly, copy, nonatomic) NSURL *nameActionURL; // @synthesize nameActionURL=_nameActionURL;
@property(readonly, nonatomic) long long supplementalIntraSectionFilterOptions; // @synthesize supplementalIntraSectionFilterOptions=_supplementalIntraSectionFilterOptions;
@property(readonly, copy, nonatomic) NSURL *actionURL; // @synthesize actionURL=_actionURL;
@property(readonly, nonatomic) long long supplementalInterSectionFilterOptions; // @synthesize supplementalInterSectionFilterOptions=_supplementalInterSectionFilterOptions;
@property(readonly, nonatomic) long long seenArticlesMinimumTimeSinceFirstSeenToFilter; // @synthesize seenArticlesMinimumTimeSinceFirstSeenToFilter=_seenArticlesMinimumTimeSinceFirstSeenToFilter;
@property(readonly, nonatomic) int seenArticlesFilterMethod; // @synthesize seenArticlesFilterMethod=_seenArticlesFilterMethod;
@property(readonly, copy, nonatomic) NSString *referralBarName; // @synthesize referralBarName=_referralBarName;
@property(readonly, nonatomic) int readArticlesFilterMethod; // @synthesize readArticlesFilterMethod=_readArticlesFilterMethod;
@property(readonly, nonatomic) int promotionCriterion; // @synthesize promotionCriterion=_promotionCriterion;
@property(readonly, copy, nonatomic) NSString *personalizationFeatureID; // @synthesize personalizationFeatureID=_personalizationFeatureID;
@property(readonly, copy, nonatomic) NSString *nameColorLight; // @synthesize nameColorLight=_nameColorLight;
@property(readonly, copy, nonatomic) NSString *nameColorDark; // @synthesize nameColorDark=_nameColorDark;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) unsigned long long minimumStoriesAllocation; // @synthesize minimumStoriesAllocation=_minimumStoriesAllocation;
@property(readonly, nonatomic) unsigned long long maximumStoriesAllocation; // @synthesize maximumStoriesAllocation=_maximumStoriesAllocation;
@property(readonly, copy, nonatomic) NSString *subidentifier; // @synthesize subidentifier=_subidentifier;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) unsigned long long fallbackOrder; // @synthesize fallbackOrder=_fallbackOrder;
@property(readonly, copy, nonatomic) NSString *compactName; // @synthesize compactName=_compactName;
@property(readonly, nonatomic) unsigned long long cachedResultCutoffTime; // @synthesize cachedResultCutoffTime=_cachedResultCutoffTime;
@property(readonly, nonatomic) NSString *backingTagID; // @synthesize backingTagID=_backingTagID;
@property(readonly, copy, nonatomic) NSString *actionTitle; // @synthesize actionTitle=_actionTitle;
- (id)incrementalSortTransformationWithFeedPersonalizer:(id)arg1;	// IMP=0x0000000000024abc
- (id)incrementalLimitTransformationWithFeedPersonalizer:(id)arg1 limit:(unsigned long long)arg2 priorFeedItems:(id)arg3;	// IMP=0x0000000000024a86
- (void)configureCatchUpOperationWithFetchRequest:(id)arg1;	// IMP=0x0000000000024a80
- (id)assembleResultsWithCatchUpOperation:(id)arg1;	// IMP=0x0000000000024932
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000024927
- (id)initWithName:(id)arg1 nameColorLight:(id)arg2 nameColorDark:(id)arg3 minimumStoriesAllocation:(unsigned long long)arg4 maximumStoriesAllocation:(unsigned long long)arg5 backingTagID:(id)arg6;	// IMP=0x00000000000247b3
- (id)init;	// IMP=0x000000000002466e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

