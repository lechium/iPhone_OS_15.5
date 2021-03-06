//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>
#import <CoreParsec/_CPProcessableFeedback-Protocol.h>
#import <CoreParsec/_CPResultsReceivedAfterTimeoutFeedback-Protocol.h>

@class NSArray, NSData, NSString;

@interface _CPResultsReceivedAfterTimeoutFeedback : PBCodable <_CPProcessableFeedback, _CPResultsReceivedAfterTimeoutFeedback, NSSecureCoding>
{
    unsigned long long _timestamp;	// 8 = 0x8
    NSArray *_results;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000006aa1d
@property(copy, nonatomic) NSArray *results; // @synthesize results=_results;
@property(nonatomic) unsigned long long timestamp;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006a81c
- (void)writeTo:(id)arg1;	// IMP=0x000000000006a6c0
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000006a6b3
- (id)resultsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000006a696
- (unsigned long long)resultsCount;	// IMP=0x000000000006a679
- (void)addResults:(id)arg1;	// IMP=0x000000000006a5ff
- (void)clearResults;	// IMP=0x000000000006a5e2
- (id)init;	// IMP=0x000000000006a537
- (id)initWithFacade:(id)arg1;	// IMP=0x00000000000844c5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSData *jsonData; // @dynamic jsonData;
@property(readonly) Class superclass;

@end

