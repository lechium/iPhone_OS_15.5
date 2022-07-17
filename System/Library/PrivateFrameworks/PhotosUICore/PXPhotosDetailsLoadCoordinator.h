//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMutableArray;

@interface PXPhotosDetailsLoadCoordinator : NSObject
{
    NSHashTable *__tokens;	// 8 = 0x8
    NSMutableArray *__relatedBlocks;	// 16 = 0x10
    NSMutableArray *__suggestionsBlocks;	// 24 = 0x18
    double _timeoutDelay;	// 32 = 0x20
}

+ (id)loadCoordinatorForContext:(id)arg1;	// IMP=0x0000000000108f91
- (void).cxx_destruct;	// IMP=0x00000000001088fc
@property(nonatomic) double timeoutDelay; // @synthesize timeoutDelay=_timeoutDelay;
@property(readonly, nonatomic) NSMutableArray *_suggestionsBlocks; // @synthesize _suggestionsBlocks=__suggestionsBlocks;
@property(readonly, nonatomic) NSMutableArray *_relatedBlocks; // @synthesize _relatedBlocks=__relatedBlocks;
@property(readonly, nonatomic) NSHashTable *_tokens; // @synthesize _tokens=__tokens;
- (_Bool)_canPerformSuggestionsFetch;	// IMP=0x0000000000108848
- (_Bool)_canPerformRelatedFetch;	// IMP=0x00000000001087c8
- (void)_tokenDidComplete:(id)arg1;	// IMP=0x0000000000108748
- (void)performBlockWhenReadyToFetchSuggestions:(CDUnknownBlockType)arg1;	// IMP=0x0000000000108694
- (void)performBlockWhenReadyToFetchRelated:(CDUnknownBlockType)arg1;	// IMP=0x00000000001085e0
- (id)tokenForLivePhotoVariations;	// IMP=0x00000000001085b5
- (id)tokenForCuratedFetch;	// IMP=0x00000000001085a3
- (id)_createToken;	// IMP=0x000000000010852d
- (id)init;	// IMP=0x0000000000108483

@end
