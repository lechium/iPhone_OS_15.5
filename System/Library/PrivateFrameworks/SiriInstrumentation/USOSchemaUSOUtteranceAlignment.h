//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData;

@interface USOSchemaUSOUtteranceAlignment
{
    unsigned int _asrHypothesisIndex;	// 8 = 0x8
    NSArray *_spans;	// 16 = 0x10
    unsigned int _nodeIndex;	// 24 = 0x18
    struct {
        unsigned int asrHypothesisIndex:1;
        unsigned int nodeIndex:1;
    } _has;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x000000000031895c
@property(nonatomic) unsigned int nodeIndex; // @synthesize nodeIndex=_nodeIndex;
@property(copy, nonatomic) NSArray *spans; // @synthesize spans=_spans;
@property(nonatomic) unsigned int asrHypothesisIndex; // @synthesize asrHypothesisIndex=_asrHypothesisIndex;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000003185da
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000031851c
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000031814e
- (unsigned long long)hash;	// IMP=0x00000000003180d8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000317ec8
- (void)writeTo:(id)arg1;	// IMP=0x0000000000317d3c
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000317858
- (void)deleteNodeIndex;	// IMP=0x000000000031782e
@property(nonatomic) _Bool hasNodeIndex;
- (id)spansAtIndex:(unsigned long long)arg1;	// IMP=0x00000000003177c8
- (unsigned long long)spansCount;	// IMP=0x00000000003177ab
- (void)addSpans:(id)arg1;	// IMP=0x0000000000317731
- (void)deleteSpans;	// IMP=0x000000000031771f
- (void)clearSpans;	// IMP=0x0000000000317702
- (void)deleteAsrHypothesisIndex;	// IMP=0x00000000003176d8
@property(nonatomic) _Bool hasAsrHypothesisIndex;
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000035f8ed
- (id)suppressMessageUnderConditions;	// IMP=0x000000000035f8b5

@end
