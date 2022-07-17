//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSArray, NSNumber, NSString;

@interface SAWebWebSearchResult <SAAceSerializable>
{
}

+ (id)webSearchResultWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000002a8c7
+ (id)webSearchResult;	// IMP=0x000000000002a8b5
@property(copy, nonatomic) NSArray *webResults;
@property(copy, nonatomic) NSArray *videoResults;
@property(copy, nonatomic) NSNumber *totalWebResults;
@property(copy, nonatomic) NSNumber *totalVideoResults;
@property(copy, nonatomic) NSNumber *totalNewsResults;
@property(copy, nonatomic) NSNumber *totalImageResults;
@property(copy, nonatomic) NSArray *relatedSearchResults;
@property(copy, nonatomic) NSArray *newsResults;
@property(copy, nonatomic) NSArray *imageResults;
- (id)encodedClassName;	// IMP=0x000000000002a8a8
- (id)groupIdentifier;	// IMP=0x000000000002a894

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
