//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, POMMESSchemaPOMMESClientEventMetadata, POMMESSchemaPOMMESDebugPerformanceReported, POMMESSchemaPOMMESOnDeviceIndexSearchContext, POMMESSchemaPOMMESPegasusRequestContext, POMMESSchemaPOMMESRequestContext, POMMESSchemaPOMMESServiceClassifierScoreReported;

@interface POMMESSchemaPOMMESClientEvent
{
    POMMESSchemaPOMMESClientEventMetadata *_eventMetadata;	// 8 = 0x8
    POMMESSchemaPOMMESPegasusRequestContext *_pegasusRequestContext;	// 16 = 0x10
    POMMESSchemaPOMMESOnDeviceIndexSearchContext *_onDeviceIndexSearchContext;	// 24 = 0x18
    POMMESSchemaPOMMESServiceClassifierScoreReported *_pommesServiceClassifierScoreReported;	// 32 = 0x20
    POMMESSchemaPOMMESRequestContext *_pommesRequestContext;	// 40 = 0x28
    POMMESSchemaPOMMESDebugPerformanceReported *_performanceReported;	// 48 = 0x30
    _Bool _hasEventMetadata;	// 56 = 0x38
    _Bool _hasPegasusRequestContext;	// 57 = 0x39
    _Bool _hasOnDeviceIndexSearchContext;	// 58 = 0x3a
    _Bool _hasPommesServiceClassifierScoreReported;	// 59 = 0x3b
    _Bool _hasPommesRequestContext;	// 60 = 0x3c
    _Bool _hasPerformanceReported;	// 61 = 0x3d
    unsigned long long _whichEvent_Type;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000002b2ec6
@property(nonatomic) _Bool hasPerformanceReported; // @synthesize hasPerformanceReported=_hasPerformanceReported;
@property(nonatomic) _Bool hasPommesRequestContext; // @synthesize hasPommesRequestContext=_hasPommesRequestContext;
@property(nonatomic) _Bool hasPommesServiceClassifierScoreReported; // @synthesize hasPommesServiceClassifierScoreReported=_hasPommesServiceClassifierScoreReported;
@property(nonatomic) _Bool hasOnDeviceIndexSearchContext; // @synthesize hasOnDeviceIndexSearchContext=_hasOnDeviceIndexSearchContext;
@property(nonatomic) _Bool hasPegasusRequestContext; // @synthesize hasPegasusRequestContext=_hasPegasusRequestContext;
@property(nonatomic) _Bool hasEventMetadata; // @synthesize hasEventMetadata=_hasEventMetadata;
@property(retain, nonatomic) POMMESSchemaPOMMESClientEventMetadata *eventMetadata; // @synthesize eventMetadata=_eventMetadata;
@property(readonly, nonatomic) unsigned long long whichEvent_Type; // @synthesize whichEvent_Type=_whichEvent_Type;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000002b2a34
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000002b2976
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000002b2481
- (unsigned long long)hash;	// IMP=0x00000000002b23c3
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002b1ccf
- (void)writeTo:(id)arg1;	// IMP=0x00000000002b1a7c
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002b085b
- (void)deletePerformanceReported;	// IMP=0x00000000002b0828
@property(retain, nonatomic) POMMESSchemaPOMMESDebugPerformanceReported *performanceReported; // @synthesize performanceReported=_performanceReported;
- (void)deletePommesRequestContext;	// IMP=0x00000000002b0726
@property(retain, nonatomic) POMMESSchemaPOMMESRequestContext *pommesRequestContext; // @synthesize pommesRequestContext=_pommesRequestContext;
- (void)deletePommesServiceClassifierScoreReported;	// IMP=0x00000000002b0624
@property(retain, nonatomic) POMMESSchemaPOMMESServiceClassifierScoreReported *pommesServiceClassifierScoreReported; // @synthesize pommesServiceClassifierScoreReported=_pommesServiceClassifierScoreReported;
- (void)deleteOnDeviceIndexSearchContext;	// IMP=0x00000000002b0522
@property(retain, nonatomic) POMMESSchemaPOMMESOnDeviceIndexSearchContext *onDeviceIndexSearchContext; // @synthesize onDeviceIndexSearchContext=_onDeviceIndexSearchContext;
- (void)deletePegasusRequestContext;	// IMP=0x00000000002b0420
@property(retain, nonatomic) POMMESSchemaPOMMESPegasusRequestContext *pegasusRequestContext; // @synthesize pegasusRequestContext=_pegasusRequestContext;
- (void)deleteEventMetadata;	// IMP=0x00000000002b033d
- (id)qualifiedMessageName;	// IMP=0x00000000002b02b0
- (int)getAnyEventType;	// IMP=0x00000000002b02a5
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x0000000000358736
- (id)suppressMessageUnderConditions;	// IMP=0x00000000003586fe

@end

