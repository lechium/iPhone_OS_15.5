//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>
#import <CoreParsec/_CPCardViewDisappearFeedback-Protocol.h>
#import <CoreParsec/_CPProcessableFeedback-Protocol.h>

@class NSData, NSString, _CPCardForFeedback;

@interface _CPCardViewDisappearFeedback : PBCodable <_CPProcessableFeedback, _CPCardViewDisappearFeedback, NSSecureCoding>
{
    int _cardDisappearEvent;	// 8 = 0x8
    unsigned long long _timestamp;	// 16 = 0x10
    _CPCardForFeedback *_card;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000041585
@property(retain, nonatomic) _CPCardForFeedback *card; // @synthesize card=_card;
@property(nonatomic) int cardDisappearEvent; // @synthesize cardDisappearEvent=_cardDisappearEvent;
@property(nonatomic) unsigned long long timestamp;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000004133c
- (void)writeTo:(id)arg1;	// IMP=0x000000000004125c
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000004124f
- (id)init;	// IMP=0x00000000000411b4
- (id)initWithFacade:(id)arg1;	// IMP=0x000000000008b35b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSData *jsonData; // @dynamic jsonData;
@property(readonly) Class superclass;

@end

