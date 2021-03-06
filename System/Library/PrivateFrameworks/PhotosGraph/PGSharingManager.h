//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PGManagerWorkingContext;

@interface PGSharingManager : NSObject
{
    PGManagerWorkingContext *_workingContext;	// 8 = 0x8
}

+ (id)_defaultOptions;	// IMP=0x000000000017ce18
- (void).cxx_destruct;	// IMP=0x000000000017bfd5
- (id)_learningStreamUtils;	// IMP=0x000000000017be04
- (id)_sortedSuggestionResults:(id)arg1 withOptions:(id)arg2;	// IMP=0x000000000017bd4d
- (id)_filteredSuggestionResults:(id)arg1 withOptions:(id)arg2 graph:(id)arg3;	// IMP=0x000000000017b953
- (void)_mergeSuggestionResultByPersonIdentifer:(id)arg1 withSourceSuggestionResults:(id)arg2;	// IMP=0x000000000017b686
- (_Bool)_canIncludeUnverified;	// IMP=0x000000000017b507
- (_Bool)canProvideSuggestionsWithOptions:(id)arg1 forGraph:(id)arg2;	// IMP=0x000000000017b3a5
- (id)suggestionResultsForAssetLocalIdentifiers:(id)arg1 momentLocalIdentifiers:(id)arg2 options:(id)arg3;	// IMP=0x000000000017acfd
- (id)suggestionSourcesForSharingStream:(unsigned long long)arg1;	// IMP=0x000000000017abd0
- (id)coreDuetStream;	// IMP=0x000000000017ab4f
- (id)learningStream;	// IMP=0x000000000017aa4a
- (id)contextualStream;	// IMP=0x000000000017a919
- (id)presenceStream;	// IMP=0x000000000017a838
- (id)initWithWorkingContext:(id)arg1;	// IMP=0x000000000017a7cd

@end

