//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOPDRelatedSearchSuggestion, NSString;

@interface GEORelatedSearchSuggestion : NSObject
{
    GEOPDRelatedSearchSuggestion *_relatedSearchSuggestion;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000121ae60
@property(retain, nonatomic) GEOPDRelatedSearchSuggestion *relatedSearchSuggestion; // @synthesize relatedSearchSuggestion=_relatedSearchSuggestion;
- (id)_suggestionEntryMetadata;	// IMP=0x000000000121adfe
@property(readonly, nonatomic) NSString *searchBarDisplayToken;
@property(readonly, nonatomic) NSString *displayString;
- (id)initWithPDRelatedSearchSuggestion:(id)arg1;	// IMP=0x000000000121acf2

@end
