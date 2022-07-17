//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ASRSchemaASRRecognitionMetrics, NSData;

@interface ASRSchemaASREnded
{
    ASRSchemaASRRecognitionMetrics *_metrics;	// 8 = 0x8
    _Bool _hasMetrics;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000023dae
@property(nonatomic) _Bool hasMetrics; // @synthesize hasMetrics=_hasMetrics;
@property(retain, nonatomic) ASRSchemaASRRecognitionMetrics *metrics; // @synthesize metrics=_metrics;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000023c7c
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000023bbe
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000023a39
- (unsigned long long)hash;	// IMP=0x0000000000023a1c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002389a
- (void)writeTo:(id)arg1;	// IMP=0x0000000000023813
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000023638
- (void)deleteMetrics;	// IMP=0x0000000000023624
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000032f550
- (id)suppressMessageUnderConditions;	// IMP=0x000000000032f518

@end
