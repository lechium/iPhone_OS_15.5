//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSData, NSDictionary, NSNumber, NSString;

@interface SASVoiceSearchResult <SAAceSerializable>
{
}

+ (id)voiceSearchResultWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000002beb5
+ (id)voiceSearchResult;	// IMP=0x000000000002bea3
@property(copy, nonatomic) NSNumber *statusCode;
@property(copy, nonatomic) NSString *searchType;
@property(copy, nonatomic) NSData *result;
@property(copy, nonatomic) NSDictionary *headers;
- (id)encodedClassName;	// IMP=0x000000000002be96
- (id)groupIdentifier;	// IMP=0x000000000002be82

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
