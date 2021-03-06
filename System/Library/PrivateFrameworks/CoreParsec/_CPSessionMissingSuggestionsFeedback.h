//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>
#import <CoreParsec/_CPProcessableFeedback-Protocol.h>
#import <CoreParsec/_CPSessionMissingSuggestionsFeedback-Protocol.h>

@class NSArray, NSData, NSString;

@interface _CPSessionMissingSuggestionsFeedback : PBCodable <_CPProcessableFeedback, _CPSessionMissingSuggestionsFeedback, NSSecureCoding>
{
    unsigned long long _timestamp;	// 8 = 0x8
    NSArray *_suggestions;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000067a30
@property(copy, nonatomic) NSArray *suggestions; // @synthesize suggestions=_suggestions;
@property(nonatomic) unsigned long long timestamp;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006782f
- (void)writeTo:(id)arg1;	// IMP=0x00000000000676d3
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000676c6
- (id)suggestionsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000676a9
- (unsigned long long)suggestionsCount;	// IMP=0x000000000006768c
- (void)addSuggestions:(id)arg1;	// IMP=0x0000000000067612
- (void)clearSuggestions;	// IMP=0x00000000000675f5
- (id)init;	// IMP=0x000000000006754a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSData *jsonData; // @dynamic jsonData;
@property(readonly) Class superclass;

@end

