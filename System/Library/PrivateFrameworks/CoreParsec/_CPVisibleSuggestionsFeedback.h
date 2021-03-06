//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>
#import <CoreParsec/_CPProcessableFeedback-Protocol.h>
#import <CoreParsec/_CPVisibleSuggestionsFeedback-Protocol.h>

@class NSArray, NSData, NSString;

@interface _CPVisibleSuggestionsFeedback : PBCodable <_CPProcessableFeedback, _CPVisibleSuggestionsFeedback, NSSecureCoding>
{
    unsigned long long _timestamp;	// 8 = 0x8
    NSArray *_suggestions;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000006af16
@property(copy, nonatomic) NSArray *suggestions; // @synthesize suggestions=_suggestions;
@property(nonatomic) unsigned long long timestamp;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006ad15
- (void)writeTo:(id)arg1;	// IMP=0x000000000006abb9
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000006abac
- (id)suggestionsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000006ab8f
- (unsigned long long)suggestionsCount;	// IMP=0x000000000006ab72
- (void)addSuggestions:(id)arg1;	// IMP=0x000000000006aaf8
- (void)clearSuggestions;	// IMP=0x000000000006aadb
- (id)init;	// IMP=0x000000000006aa30
- (id)initWithFacade:(id)arg1;	// IMP=0x000000000007d63c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSData *jsonData; // @dynamic jsonData;
@property(readonly) Class superclass;

@end

