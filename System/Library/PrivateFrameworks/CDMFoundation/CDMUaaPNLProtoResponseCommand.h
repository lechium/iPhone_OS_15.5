//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SIRINLUEXTERNALCDMNluResponse, SIRINLUINTERNALUAAP_PARSERUaaPParserResponse;

@interface CDMUaaPNLProtoResponseCommand
{
    SIRINLUINTERNALUAAP_PARSERUaaPParserResponse *_parserResponse;	// 8 = 0x8
    SIRINLUEXTERNALCDMNluResponse *_nluResponse;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000be77
@property(readonly, nonatomic) SIRINLUEXTERNALCDMNluResponse *nluResponse; // @synthesize nluResponse=_nluResponse;
@property(readonly, nonatomic) SIRINLUINTERNALUAAP_PARSERUaaPParserResponse *parserResponse; // @synthesize parserResponse=_parserResponse;
- (id)initWithParserResponse:(id)arg1 nluResponse:(id)arg2;	// IMP=0x000000000000bdb3

@end
