//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MHSchemaMHStatisticDistributionInfo, MHSchemaMHTrailingPacketLatencyInfo, NSData;

@interface MHSchemaMHEndpointLatencyInfoReported
{
    unsigned long long _firstPacketLatencyInNs;	// 8 = 0x8
    MHSchemaMHTrailingPacketLatencyInfo *_trailingPacketLatencyInfo;	// 16 = 0x10
    MHSchemaMHTrailingPacketLatencyInfo *_coreSpeechTrailingPacketLatencyInfo;	// 24 = 0x18
    MHSchemaMHStatisticDistributionInfo *_trailingPacketLatency;	// 32 = 0x20
    MHSchemaMHStatisticDistributionInfo *_coreSpeechTrailingPacketLatency;	// 40 = 0x28
    struct {
        unsigned int firstPacketLatencyInNs:1;
    } _has;	// 48 = 0x30
    _Bool _hasTrailingPacketLatencyInfo;	// 52 = 0x34
    _Bool _hasCoreSpeechTrailingPacketLatencyInfo;	// 53 = 0x35
    _Bool _hasTrailingPacketLatency;	// 54 = 0x36
    _Bool _hasCoreSpeechTrailingPacketLatency;	// 55 = 0x37
}

- (void).cxx_destruct;	// IMP=0x0000000000203026
@property(nonatomic) _Bool hasCoreSpeechTrailingPacketLatency; // @synthesize hasCoreSpeechTrailingPacketLatency=_hasCoreSpeechTrailingPacketLatency;
@property(nonatomic) _Bool hasTrailingPacketLatency; // @synthesize hasTrailingPacketLatency=_hasTrailingPacketLatency;
@property(nonatomic) _Bool hasCoreSpeechTrailingPacketLatencyInfo; // @synthesize hasCoreSpeechTrailingPacketLatencyInfo=_hasCoreSpeechTrailingPacketLatencyInfo;
@property(nonatomic) _Bool hasTrailingPacketLatencyInfo; // @synthesize hasTrailingPacketLatencyInfo=_hasTrailingPacketLatencyInfo;
@property(retain, nonatomic) MHSchemaMHStatisticDistributionInfo *coreSpeechTrailingPacketLatency; // @synthesize coreSpeechTrailingPacketLatency=_coreSpeechTrailingPacketLatency;
@property(retain, nonatomic) MHSchemaMHStatisticDistributionInfo *trailingPacketLatency; // @synthesize trailingPacketLatency=_trailingPacketLatency;
@property(retain, nonatomic) MHSchemaMHTrailingPacketLatencyInfo *coreSpeechTrailingPacketLatencyInfo; // @synthesize coreSpeechTrailingPacketLatencyInfo=_coreSpeechTrailingPacketLatencyInfo;
@property(retain, nonatomic) MHSchemaMHTrailingPacketLatencyInfo *trailingPacketLatencyInfo; // @synthesize trailingPacketLatencyInfo=_trailingPacketLatencyInfo;
@property(nonatomic) unsigned long long firstPacketLatencyInNs; // @synthesize firstPacketLatencyInNs=_firstPacketLatencyInNs;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000202c4b
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000202b8d
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000202794
- (unsigned long long)hash;	// IMP=0x00000000002026df
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002021c9
- (void)writeTo:(id)arg1;	// IMP=0x0000000000202008
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000201ab1
- (void)deleteCoreSpeechTrailingPacketLatency;	// IMP=0x0000000000201a9d
- (void)deleteTrailingPacketLatency;	// IMP=0x0000000000201a74
- (void)deleteCoreSpeechTrailingPacketLatencyInfo;	// IMP=0x0000000000201a4b
- (void)deleteTrailingPacketLatencyInfo;	// IMP=0x0000000000201a22
- (void)deleteFirstPacketLatencyInNs;	// IMP=0x00000000002019e3
@property(nonatomic) _Bool hasFirstPacketLatencyInNs;
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000034e3a8
- (id)suppressMessageUnderConditions;	// IMP=0x000000000034e370

@end
