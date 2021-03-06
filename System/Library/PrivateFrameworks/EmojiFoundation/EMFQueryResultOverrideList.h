//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface EMFQueryResultOverrideList : NSObject
{
    NSDictionary *_overrideMap;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000010416
- (id)_overriddenResultsTokenPrefixMatchForQuery:(id)arg1;	// IMP=0x000000000001017e
- (id)_overriddenResultsRawStringPrefixMatchForQuery:(id)arg1;	// IMP=0x000000000000febd
- (id)_overriddenResultsTokenExactMatchForQuery:(id)arg1;	// IMP=0x000000000000fd53
- (id)_overriddenResultsRawStringExactMatchForQuery:(id)arg1;	// IMP=0x000000000000fcef
- (id)_overriddenResultsRawStringExactMatchForRawString:(id)arg1 andSearchType:(unsigned long long)arg2;	// IMP=0x000000000000fb9a
- (id)_metadataForString:(id)arg1;	// IMP=0x000000000000fb84
- (id)overriddenResultsForQuery:(id)arg1 searchType:(unsigned long long)arg2;	// IMP=0x000000000000fae4
- (id)overriddenResultsForQuery:(id)arg1;	// IMP=0x000000000000fa35
- (id)initWithOverrideListURL:(id)arg1;	// IMP=0x000000000000f903

@end

