//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, SIRINLUINTERNALITFMITFMParserResponse;

@interface CDMPSCResponseCommand
{
    int _classLabel;	// 8 = 0x8
    NSArray *_pscParses;	// 16 = 0x10
    SIRINLUINTERNALITFMITFMParserResponse *_pscResponse;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000003300a
@property(readonly, nonatomic) SIRINLUINTERNALITFMITFMParserResponse *pscResponse; // @synthesize pscResponse=_pscResponse;
@property(readonly, nonatomic) NSArray *pscParses; // @synthesize pscParses=_pscParses;
@property int classLabel; // @synthesize classLabel=_classLabel;
- (id)commandName;	// IMP=0x0000000000032fbb
- (id)initWithPscParses:(id)arg1 pscResponse:(id)arg2;	// IMP=0x0000000000032f19

@end

