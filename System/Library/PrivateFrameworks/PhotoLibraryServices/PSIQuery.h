//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSMutableSet, NSSet, NSString, PSIParse, PSITokenizer;
@protocol PSIQueryDelegate;

@interface PSIQuery : NSObject
{
    id <PSIQueryDelegate> _delegate;	// 8 = 0x8
    PSIParse *_baseParse;	// 16 = 0x10
    _Bool _baseParseCouldHaveResults;	// 24 = 0x18
    NSArray *_implicitelyTokenizedParses;	// 32 = 0x20
    _Bool _implicitlyTokenizedParsesCouldHaveResults;	// 40 = 0x28
    NSArray *_datedParses;	// 48 = 0x30
    NSArray *_implicitlyTokenizedDatedParses;	// 56 = 0x38
    NSArray *_wordEmbeddingParses;	// 64 = 0x40
    NSArray *_identifierTokens;	// 72 = 0x48
    NSMutableDictionary *_groupIdsByTokenKey;	// 80 = 0x50
    NSDictionary *_substitutionsByStringToken;	// 88 = 0x58
    NSArray *_socialGroupPersonIdentifiers;	// 96 = 0x60
    _Atomic _Bool _didStart;	// 104 = 0x68
    _Atomic _Bool _isCanceled;	// 105 = 0x69
    NSMutableSet *_socialGroupExtendedAssetIds;	// 112 = 0x70
    NSMutableSet *_socialGroupExtendedCollectionIds;	// 120 = 0x78
    _Bool _usesPrefixBasedWordEmbedding;	// 128 = 0x80
    _Bool _calculateTokenCounts;	// 129 = 0x81
    _Bool _enableImplicitTokenization;	// 130 = 0x82
    _Bool _implicitTokenizationUsePrefixMatch;	// 131 = 0x83
    _Bool _implicitTokenizationLastTokenUsesPrefixMatch;	// 132 = 0x84
    _Bool _preventUnnecessaryImplicitTokenization;	// 133 = 0x85
    _Bool _exactMatchIgnoreUntokenizedCharacters;	// 134 = 0x86
    _Bool _lastImplicitTokenAllowsWordEmbeddings;	// 135 = 0x87
    _Bool _useWildcardText;	// 136 = 0x88
    NSArray *_queryTokens;	// 144 = 0x90
    NSString *_searchText;	// 152 = 0x98
    unsigned long long _wordEmbeddingMode;	// 160 = 0xa0
    NSDictionary *_substitutions;	// 168 = 0xa8
    unsigned long long _numberOfNextKeywordSuggestionToProcess;	// 176 = 0xb0
    NSArray *_nextKeywordSuggestions;	// 184 = 0xb8
    NSSet *_sceneIdentifiers;	// 192 = 0xc0
    NSArray *_dedupedGroupResults;	// 200 = 0xc8
    unsigned long long _mergeFilterTokenAssetIDsIntervalID;	// 208 = 0xd0
}

+ (void)_restoreAssetIdsForGroupsInGroupArrays:(id)arg1 atRemovalIndexes:(id)arg2 groupIdToOriginalAssetIdsMap:(id)arg3 searchTokens:(id)arg4;	// IMP=0x000000000029cb24
+ (id)_indexesOfFilterTokensInSearchTokens:(id)arg1;	// IMP=0x000000000029ca4f
+ (id)_indexesToRemoveForDuplicatedFilterGroupsinGroupArrays:(id)arg1 searchTokens:(id)arg2;	// IMP=0x000000000029c7b7
+ (void)_aggregateAssetIdsOnFilterGroupsInGroupArrays:(id)arg1 searchTokens:(id)arg2 groupIdToOriginalAssetIdsMap:(id *)arg3;	// IMP=0x000000000029c340
+ (_Bool)_shouldApplyFilterTokensForGroupArrays:(id)arg1 searchTokens:(id)arg2 filterGroupIds:(id)arg3;	// IMP=0x000000000029c217
+ (void)bootstrap;	// IMP=0x000000000029c1f5
+ (struct _NSRange)searchTextExtendedRangeForParse:(id)arg1;	// IMP=0x00000000002248b3
+ (id)datedParsesWithParses:(id)arg1;	// IMP=0x0000000000250513
+ (_Bool)enumerateDatedParsesWithParse:(id)arg1 currentTokenIndex:(unsigned long long)arg2 potentialComboAttributes:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000024fd7d
+ (_Bool)tokenIsEligibleForDateParsing:(id)arg1;	// IMP=0x000000000024fd28
+ (id)dateAttributesFromToken:(id)arg1;	// IMP=0x000000000024fafa
+ (id)parsedDatesFromText:(id)arg1;	// IMP=0x000000000024f8ad
+ (id)dateFilterWithAttributes:(id)arg1 andAttributes:(id)arg2;	// IMP=0x000000000024f59d
+ (id)dateFilterByCombiningDateFilter:(id)arg1 withDateFilter:(id)arg2;	// IMP=0x000000000024f29c
+ (id)dateFilterWithAttributes:(id)arg1;	// IMP=0x000000000024ebe3
- (void).cxx_destruct;	// IMP=0x000000000029ac0d
@property(readonly, nonatomic) _Bool useWildcardText; // @synthesize useWildcardText=_useWildcardText;
@property(nonatomic) unsigned long long mergeFilterTokenAssetIDsIntervalID; // @synthesize mergeFilterTokenAssetIDsIntervalID=_mergeFilterTokenAssetIDsIntervalID;
@property(copy, nonatomic) NSSet *socialGroupExtendedCollectionIds; // @synthesize socialGroupExtendedCollectionIds=_socialGroupExtendedCollectionIds;
@property(copy, nonatomic) NSSet *socialGroupExtendedAssetIds; // @synthesize socialGroupExtendedAssetIds=_socialGroupExtendedAssetIds;
@property(copy, nonatomic) NSArray *dedupedGroupResults; // @synthesize dedupedGroupResults=_dedupedGroupResults;
@property(nonatomic) _Bool lastImplicitTokenAllowsWordEmbeddings; // @synthesize lastImplicitTokenAllowsWordEmbeddings=_lastImplicitTokenAllowsWordEmbeddings;
@property(nonatomic) _Bool exactMatchIgnoreUntokenizedCharacters; // @synthesize exactMatchIgnoreUntokenizedCharacters=_exactMatchIgnoreUntokenizedCharacters;
@property(nonatomic) _Bool preventUnnecessaryImplicitTokenization; // @synthesize preventUnnecessaryImplicitTokenization=_preventUnnecessaryImplicitTokenization;
@property(nonatomic) _Bool implicitTokenizationLastTokenUsesPrefixMatch; // @synthesize implicitTokenizationLastTokenUsesPrefixMatch=_implicitTokenizationLastTokenUsesPrefixMatch;
@property(nonatomic) _Bool implicitTokenizationUsePrefixMatch; // @synthesize implicitTokenizationUsePrefixMatch=_implicitTokenizationUsePrefixMatch;
@property(nonatomic) _Bool enableImplicitTokenization; // @synthesize enableImplicitTokenization=_enableImplicitTokenization;
@property(nonatomic) _Bool calculateTokenCounts; // @synthesize calculateTokenCounts=_calculateTokenCounts;
@property(copy, nonatomic) NSSet *sceneIdentifiers; // @synthesize sceneIdentifiers=_sceneIdentifiers;
@property(retain, nonatomic) NSArray *nextKeywordSuggestions; // @synthesize nextKeywordSuggestions=_nextKeywordSuggestions;
@property(nonatomic) unsigned long long numberOfNextKeywordSuggestionToProcess; // @synthesize numberOfNextKeywordSuggestionToProcess=_numberOfNextKeywordSuggestionToProcess;
@property(retain, nonatomic) NSDictionary *substitutions; // @synthesize substitutions=_substitutions;
@property(nonatomic) _Bool usesPrefixBasedWordEmbedding; // @synthesize usesPrefixBasedWordEmbedding=_usesPrefixBasedWordEmbedding;
@property(nonatomic) unsigned long long wordEmbeddingMode; // @synthesize wordEmbeddingMode=_wordEmbeddingMode;
@property(readonly, copy, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property(readonly, copy, nonatomic) NSArray *queryTokens; // @synthesize queryTokens=_queryTokens;
- (id)description;	// IMP=0x000000000029a8f6
- (void)_postProcessPersonGroupsInGroupArrays:(id)arg1;	// IMP=0x000000000029a19e
- (id)suggestionWhitelistedScenes;	// IMP=0x000000000029a15b
- (void)enumerateParsesWithMode:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000299e5b
- (void)computeSuggestions;	// IMP=0x0000000000299d41
- (id)processParse:(id)arg1;	// IMP=0x0000000000298b32
- (_Bool)recursiveAddToGroupResults:(id)arg1 aggregate:(id)arg2 atIndex:(unsigned long long)arg3 outOf:(unsigned long long)arg4 inGroupArrays:(id)arg5 dateFilter:(id)arg6 datedTokens:(id)arg7;	// IMP=0x00000000002986cd
- (void)processWordEmbeddings;	// IMP=0x00000000002983aa
- (void)processDates;	// IMP=0x00000000002981ef
- (void)processImplicitTokenization;	// IMP=0x0000000000298048
- (void)bootstrap;	// IMP=0x0000000000297db0
@property(readonly, nonatomic) PSITokenizer *tokenizer;
- (struct __CFSet *)_idsOfGroupsMatchingToken:(id)arg1;	// IMP=0x0000000000297c39
- (struct __CFSet *)_idsOfGroupsMatchingString:(id)arg1 categories:(id)arg2 textIsSearchable:(_Bool)arg3 isFilterTypeToken:(_Bool)arg4;	// IMP=0x0000000000297acd
@property(readonly, getter=isCanceled) _Bool canceled;
- (void)cancel;	// IMP=0x0000000000297ab7
- (void)runWithResultsHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000297911
- (id)initWithQueryTokens:(id)arg1 searchText:(id)arg2 useWildcardText:(_Bool)arg3 delegate:(id)arg4;	// IMP=0x0000000000297208
@property(readonly, nonatomic) _Bool implicitTokenizationIncludeBaseParseResults;
- (id)implicitlyTokenizedParsesWithBaseParse:(id)arg1;	// IMP=0x000000000022434f
- (_Bool)_enumerateImplicitlyTokenizedParsesWithBaseParse:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000022319b

@end

