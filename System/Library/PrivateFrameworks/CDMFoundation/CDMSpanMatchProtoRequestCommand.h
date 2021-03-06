//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NLXSchemaNLXClientEventMetadata, NSArray;

@interface CDMSpanMatchProtoRequestCommand
{
    NSArray *_spanMatchRequests;	// 8 = 0x8
    NSArray *_asrHypothesis;	// 16 = 0x10
    NLXSchemaNLXClientEventMetadata *_selfMetadata;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000231fc
@property(retain, nonatomic) NLXSchemaNLXClientEventMetadata *selfMetadata; // @synthesize selfMetadata=_selfMetadata;
@property(retain, nonatomic) NSArray *asrHypothesis; // @synthesize asrHypothesis=_asrHypothesis;
@property(retain, nonatomic) NSArray *spanMatchRequests; // @synthesize spanMatchRequests=_spanMatchRequests;
- (id)commandName;	// IMP=0x0000000000023180
- (id)initWithRequests:(id)arg1 asrHypothesis:(id)arg2 selfMetadata:(id)arg3;	// IMP=0x00000000000230ba
- (id)initWithRequests:(id)arg1 selfMetadata:(id)arg2;	// IMP=0x0000000000023023
- (id)initWithRequests:(id)arg1 asrHypothesis:(id)arg2;	// IMP=0x000000000002300e
- (id)initWithRequests:(id)arg1;	// IMP=0x0000000000022f8a
- (id)initWithRequest:(id)arg1;	// IMP=0x0000000000022f30

@end

