//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, SIRINLUEXTERNALRequestID, SIRINLUINTERNALUAAP_PARSERUaaPParserRequest;

@interface CDMUaaPNLProtoRequestCommand
{
    SIRINLUINTERNALUAAP_PARSERUaaPParserRequest *_parserRequest;	// 8 = 0x8
    NSArray *_plumSpans;	// 16 = 0x10
    SIRINLUEXTERNALRequestID *_requestId;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000007ab57
@property(readonly, nonatomic) SIRINLUEXTERNALRequestID *requestId; // @synthesize requestId=_requestId;
@property(readonly, nonatomic) NSArray *plumSpans; // @synthesize plumSpans=_plumSpans;
@property(readonly, nonatomic) SIRINLUINTERNALUAAP_PARSERUaaPParserRequest *parserRequest; // @synthesize parserRequest=_parserRequest;
- (id)commandName;	// IMP=0x000000000007ab17
- (id)initWithParserRequestAndPlumSpans:(id)arg1 plumSpans:(id)arg2 requestId:(id)arg3;	// IMP=0x000000000007aa51
- (id)initWithParserRequest:(id)arg1 requestId:(id)arg2;	// IMP=0x000000000007aa3a

@end
