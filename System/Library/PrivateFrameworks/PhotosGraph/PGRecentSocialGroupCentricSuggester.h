//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosGraph/PGCoordinatableSuggester-Protocol.h>

@class NSArray, NSEnumerator, NSMutableSet, NSString, PGSuggestionOptions;

@interface PGRecentSocialGroupCentricSuggester <PGCoordinatableSuggester>
{
    PGSuggestionOptions *_options;	// 8 = 0x8
    NSArray *_allPotentialSuggestions;	// 16 = 0x10
    NSMutableSet *_usedPotentialSuggestions;	// 24 = 0x18
    NSArray *_longTimeNoSeeSocialGroupPotentialSuggestions;	// 32 = 0x20
    NSArray *_socialGroupPotentialSuggestions;	// 40 = 0x28
    NSEnumerator *_longTimeNoSeeSocialGroupPotentialSuggestionEnumerator;	// 48 = 0x30
    NSEnumerator *_socialGroupPotentialSuggestionEnumerator;	// 56 = 0x38
    NSArray *_eligibleAssets;	// 64 = 0x40
}

+ (id)suggestionSubtypes;	// IMP=0x00000000002c0874
+ (id)suggestionTypes;	// IMP=0x00000000002c0856
- (void).cxx_destruct;	// IMP=0x00000000002c465b
- (void)usePotentialSuggestions:(id)arg1;	// IMP=0x00000000002c451e
- (id)assetsMatchingSocialGroup:(id)arg1 betweenStartDate:(id)arg2 andEndDate:(id)arg3 matchingAssetUUID:(id)arg4;	// IMP=0x00000000002c4262
- (id)assetsWithPersonsBetweenStartDate:(id)arg1 andEndDate:(id)arg2 matchAssetUUID:(id)arg3;	// IMP=0x00000000002c397a
- (id)verifiedPersons;	// IMP=0x00000000002c38a2
- (id)potentialSuggestionsWithOptions:(id)arg1 progress:(CDUnknownBlockType)arg2;	// IMP=0x00000000002c378c
- (id)nextSocialGroupPotentialSuggestionWithProgress:(CDUnknownBlockType)arg1;	// IMP=0x00000000002c36a0
- (id)nextLongTimeNoSeeSocialGroupPotentialSuggestionWithProgress:(CDUnknownBlockType)arg1;	// IMP=0x00000000002c35b4
- (id)socialGroupPotentialSuggestionsWithOptions:(id)arg1 progress:(CDUnknownBlockType)arg2;	// IMP=0x00000000002c2ac8
- (id)longTimeNoSeeSocialGroupPotentialSuggestionsWithOptions:(id)arg1 progress:(CDUnknownBlockType)arg2;	// IMP=0x00000000002c1f53
- (_Bool)canGenerateSuggestionWithAsset:(id)arg1 onDate:(id)arg2;	// IMP=0x00000000002c1ca4
- (id)suggestionsWithOptions:(id)arg1 progress:(CDUnknownBlockType)arg2;	// IMP=0x00000000002c16a8
- (void)reset;	// IMP=0x00000000002c15ec
- (id)nextSuggestionWithProgress:(CDUnknownBlockType)arg1;	// IMP=0x00000000002c09c1
- (void)startSuggestingWithOptions:(id)arg1;	// IMP=0x00000000002c0892

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool lastSuggestionWasColliding;
@property(readonly) Class superclass;

@end

