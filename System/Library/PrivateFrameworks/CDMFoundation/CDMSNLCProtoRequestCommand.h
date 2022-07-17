//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SIRINLUEXTERNALRewriteMessage, SIRINLUINTERNALSNLCSNLCParserRequest;

@interface CDMSNLCProtoRequestCommand
{
    SIRINLUINTERNALSNLCSNLCParserRequest *_parserRequest;	// 8 = 0x8
    SIRINLUEXTERNALRewriteMessage *_rewriteMsg;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000349f8
@property(readonly, nonatomic) SIRINLUEXTERNALRewriteMessage *rewriteMsg; // @synthesize rewriteMsg=_rewriteMsg;
@property(readonly, nonatomic) SIRINLUINTERNALSNLCSNLCParserRequest *parserRequest; // @synthesize parserRequest=_parserRequest;
- (id)commandName;	// IMP=0x00000000000349c9
- (id)initWithParserRequest:(id)arg1 rewriteMsg:(id)arg2;	// IMP=0x0000000000034927

@end
