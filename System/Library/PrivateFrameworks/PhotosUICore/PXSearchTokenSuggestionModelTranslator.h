//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PXSearchTokenSuggestionModelTranslator : NSObject
{
}

+ (_Bool)_isRTL;	// IMP=0x0000000000226158
+ (id)_sortedWordEmbeddingsForCurrentQueryFromSubstitutions:(id)arg1;	// IMP=0x0000000000225f8f
+ (id)_bestParentWordEmbeddingsWithWordEmbeddings:(id)arg1 sceneAncestryInformation:(id)arg2;	// IMP=0x0000000000225a2e
+ (id)_attributedTitleForWordEmbeddingMatchedText:(id)arg1 replacementText:(id)arg2 searchText:(id)arg3;	// IMP=0x00000000002255e3
+ (id)searchTokenSuggestionsFromWordEmbeddings:(id)arg1 sceneAncestryInformation:(id)arg2 searchText:(id)arg3;	// IMP=0x000000000022541f
+ (id)searchTokenSuggestionsFromNextTokenSuggestions:(id)arg1;	// IMP=0x00000000002251f7
+ (id)_attributedTitleForTokenTitle:(id)arg1 searchText:(id)arg2;	// IMP=0x0000000000224f14
+ (id)searchTokenSuggestionsFromCompletions:(id)arg1 searchText:(id)arg2;	// IMP=0x0000000000224c92
- (id)init;	// IMP=0x0000000000226fbb

@end
