//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>
#import <CoreParsec/_CPProcessableFeedback-Protocol.h>
#import <CoreParsec/_CPResultFeedback-Protocol.h>

@class NSData, NSString, _CPSearchResultForFeedback;

@interface _CPResultFeedback : PBCodable <_CPProcessableFeedback, _CPResultFeedback, NSSecureCoding>
{
    unsigned long long _timestamp;	// 8 = 0x8
    _CPSearchResultForFeedback *_result;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000007797a
@property(retain, nonatomic) _CPSearchResultForFeedback *result; // @synthesize result=_result;
@property(nonatomic) unsigned long long timestamp;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000077779
- (void)writeTo:(id)arg1;	// IMP=0x00000000000776c5
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000776b8
- (id)init;	// IMP=0x000000000007762d
- (id)initWithFacade:(id)arg1;	// IMP=0x0000000000086796

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSData *jsonData; // @dynamic jsonData;
@property(readonly) Class superclass;

@end

