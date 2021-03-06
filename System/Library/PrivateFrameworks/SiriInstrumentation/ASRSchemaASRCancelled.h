//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ASRSchemaASRRecognitionMetrics, NSData;

@interface ASRSchemaASRCancelled
{
    int _reason;	// 8 = 0x8
    ASRSchemaASRRecognitionMetrics *_metrics;	// 16 = 0x10
    CDStruct_6555f803 _has;	// 24 = 0x18
    _Bool _hasMetrics;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x000000000001880e
@property(nonatomic) _Bool hasMetrics; // @synthesize hasMetrics=_hasMetrics;
@property(retain, nonatomic) ASRSchemaASRRecognitionMetrics *metrics; // @synthesize metrics=_metrics;
@property(nonatomic) int reason; // @synthesize reason=_reason;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000018663
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000000185a5
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000000183c8
- (unsigned long long)hash;	// IMP=0x000000000001837b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000181b5
- (void)writeTo:(id)arg1;	// IMP=0x0000000000018108
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000017543
- (void)deleteMetrics;	// IMP=0x000000000001752f
- (void)deleteReason;	// IMP=0x00000000000174f0
@property(nonatomic) _Bool hasReason;
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000032e886
- (id)suppressMessageUnderConditions;	// IMP=0x000000000032e84e

@end

