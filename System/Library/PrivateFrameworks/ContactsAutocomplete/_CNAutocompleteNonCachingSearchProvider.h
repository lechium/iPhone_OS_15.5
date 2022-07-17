//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsAutocomplete/CNAutocompleteSearchProvider-Protocol.h>

@class NSString;

@interface _CNAutocompleteNonCachingSearchProvider : NSObject <CNAutocompleteSearchProvider>
{
}

- (id)calendarServerSearch;	// IMP=0x000000000001f7aa
- (id)directoryServerSearch;	// IMP=0x000000000001f791
- (id)localExtensionSearches;	// IMP=0x000000000001f710
- (id)predictionSearch;	// IMP=0x000000000001f6f7
- (id)suggestionsSearch;	// IMP=0x000000000001f6de
- (id)recentsSearch;	// IMP=0x000000000001f6c5
- (id)localSearch;	// IMP=0x000000000001f6ac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
