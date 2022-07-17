//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, USPSchemaUSPClientEventMetadata, USPSchemaUSPIterationEnded, USPSchemaUSPIterationStarted, USPSchemaUSPLoggingInitalized, USPSchemaUSPLoggingReported, USPSchemaUSPMeasureEnded, USPSchemaUSPMeasureStarted;

@interface USPSchemaUSPClientEvent
{
    USPSchemaUSPClientEventMetadata *_eventMetadata;	// 8 = 0x8
    USPSchemaUSPLoggingInitalized *_loggingInitialized;	// 16 = 0x10
    USPSchemaUSPLoggingReported *_loggingReported;	// 24 = 0x18
    USPSchemaUSPMeasureStarted *_measureStarted;	// 32 = 0x20
    USPSchemaUSPMeasureEnded *_measureEnded;	// 40 = 0x28
    USPSchemaUSPIterationStarted *_iterationStarted;	// 48 = 0x30
    USPSchemaUSPIterationEnded *_iterationEnded;	// 56 = 0x38
    _Bool _hasEventMetadata;	// 64 = 0x40
    _Bool _hasLoggingInitialized;	// 65 = 0x41
    _Bool _hasLoggingReported;	// 66 = 0x42
    _Bool _hasMeasureStarted;	// 67 = 0x43
    _Bool _hasMeasureEnded;	// 68 = 0x44
    _Bool _hasIterationStarted;	// 69 = 0x45
    _Bool _hasIterationEnded;	// 70 = 0x46
    unsigned long long _whichEvent_Type;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000031c454
@property(nonatomic) _Bool hasIterationEnded; // @synthesize hasIterationEnded=_hasIterationEnded;
@property(nonatomic) _Bool hasIterationStarted; // @synthesize hasIterationStarted=_hasIterationStarted;
@property(nonatomic) _Bool hasMeasureEnded; // @synthesize hasMeasureEnded=_hasMeasureEnded;
@property(nonatomic) _Bool hasMeasureStarted; // @synthesize hasMeasureStarted=_hasMeasureStarted;
@property(nonatomic) _Bool hasLoggingReported; // @synthesize hasLoggingReported=_hasLoggingReported;
@property(nonatomic) _Bool hasLoggingInitialized; // @synthesize hasLoggingInitialized=_hasLoggingInitialized;
@property(nonatomic) _Bool hasEventMetadata; // @synthesize hasEventMetadata=_hasEventMetadata;
@property(retain, nonatomic) USPSchemaUSPClientEventMetadata *eventMetadata; // @synthesize eventMetadata=_eventMetadata;
@property(readonly, nonatomic) unsigned long long whichEvent_Type; // @synthesize whichEvent_Type=_whichEvent_Type;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000031bf18
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000031be5a
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000031b8b5
- (unsigned long long)hash;	// IMP=0x000000000031b7e3
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000031aff2
- (void)writeTo:(id)arg1;	// IMP=0x000000000031ad43
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000319e36
- (void)deleteIterationEnded;	// IMP=0x0000000000319e03
@property(retain, nonatomic) USPSchemaUSPIterationEnded *iterationEnded; // @synthesize iterationEnded=_iterationEnded;
- (void)deleteIterationStarted;	// IMP=0x0000000000319cef
@property(retain, nonatomic) USPSchemaUSPIterationStarted *iterationStarted; // @synthesize iterationStarted=_iterationStarted;
- (void)deleteMeasureEnded;	// IMP=0x0000000000319bdb
@property(retain, nonatomic) USPSchemaUSPMeasureEnded *measureEnded; // @synthesize measureEnded=_measureEnded;
- (void)deleteMeasureStarted;	// IMP=0x0000000000319ac7
@property(retain, nonatomic) USPSchemaUSPMeasureStarted *measureStarted; // @synthesize measureStarted=_measureStarted;
- (void)deleteLoggingReported;	// IMP=0x00000000003199a8
@property(retain, nonatomic) USPSchemaUSPLoggingReported *loggingReported; // @synthesize loggingReported=_loggingReported;
- (void)deleteLoggingInitialized;	// IMP=0x0000000000319894
@property(retain, nonatomic) USPSchemaUSPLoggingInitalized *loggingInitialized; // @synthesize loggingInitialized=_loggingInitialized;
- (void)deleteEventMetadata;	// IMP=0x0000000000319795
- (id)qualifiedMessageName;	// IMP=0x00000000003196fd
- (int)getAnyEventType;	// IMP=0x00000000003196f2
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000035fa30
- (id)suppressMessageUnderConditions;	// IMP=0x000000000035f9f8

@end
