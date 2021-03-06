//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, SIRINLUINTERNALTOKENIZERTokenizerResponse;

@interface CDMTokenizationProtoResponseCommand
{
    SIRINLUINTERNALTOKENIZERTokenizerResponse *_response;	// 8 = 0x8
    NSArray *_responses;	// 16 = 0x10
    NSArray *_previousSiriResponseTokenResponses;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000028771
@property(retain, nonatomic) NSArray *previousSiriResponseTokenResponses; // @synthesize previousSiriResponseTokenResponses=_previousSiriResponseTokenResponses;
@property(retain, nonatomic) NSArray *responses; // @synthesize responses=_responses;
@property(retain, nonatomic) SIRINLUINTERNALTOKENIZERTokenizerResponse *response; // @synthesize response=_response;
- (id)description;	// IMP=0x00000000000286a7
- (id)commandName;	// IMP=0x000000000002869a
- (id)initWithPreviousResponses:(id)arg1 withPreviousSiriResponse:(id)arg2;	// IMP=0x00000000000285cb
- (id)initWithResponses:(id)arg1;	// IMP=0x0000000000028530
- (id)initWithResponse:(id)arg1;	// IMP=0x000000000002848e

@end

