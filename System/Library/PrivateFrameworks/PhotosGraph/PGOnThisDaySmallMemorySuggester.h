//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosGraph/PGCoordinatableSuggester-Protocol.h>

@class NSArray, NSDictionary, NSEnumerator, NSString, PGSuggestionOptions;

@interface PGOnThisDaySmallMemorySuggester <PGCoordinatableSuggester>
{
    PGSuggestionOptions *_options;	// 8 = 0x8
    NSArray *_suggestedMomentLocalIdentifiers;	// 16 = 0x10
    NSDictionary *_momentByMomentLocalIdentifier;	// 24 = 0x18
    NSEnumerator *_suggestedMomentLocalIdentifierEnumerator;	// 32 = 0x20
    NSString *_titleDateMatchingTitleOnThisDay;	// 40 = 0x28
}

+ (id)suggestionSubtypes;	// IMP=0x00000000005436a9
+ (id)suggestionTypes;	// IMP=0x000000000054368b
- (void).cxx_destruct;	// IMP=0x0000000000544f2a
- (id)suggestionWithMomentLocalIdentifier:(id)arg1;	// IMP=0x000000000054476a
- (id)momentByMomentLocalIdentifierWithMomentLocalIdentifiers:(id)arg1;	// IMP=0x00000000005444ff
- (id)sortedMomentLocalIdentifiersWithDateIgnoringYearBeforeDateYear:(id)arg1;	// IMP=0x000000000054430d
- (void)reset;	// IMP=0x0000000000544261
- (id)nextSuggestionWithProgress:(CDUnknownBlockType)arg1;	// IMP=0x0000000000543cef
- (void)startSuggestingWithOptions:(id)arg1;	// IMP=0x0000000000543bf6
- (id)suggestionsWithOptions:(id)arg1 progress:(CDUnknownBlockType)arg2;	// IMP=0x00000000005436c7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool lastSuggestionWasColliding;
@property(readonly) Class superclass;

@end

