//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, ORCHSchemaORCHCDMRequestEnded, ORCHSchemaORCHCDMRequestFailed, ORCHSchemaORCHCDMRequestStarted;

@interface ORCHSchemaORCHCDMBridgeContext
{
    ORCHSchemaORCHCDMRequestStarted *_startedOrChanged;	// 8 = 0x8
    ORCHSchemaORCHCDMRequestEnded *_ended;	// 16 = 0x10
    ORCHSchemaORCHCDMRequestFailed *_failed;	// 24 = 0x18
    _Bool _hasStartedOrChanged;	// 32 = 0x20
    _Bool _hasEnded;	// 33 = 0x21
    _Bool _hasFailed;	// 34 = 0x22
    unsigned long long _whichContextevent;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000274e16
@property(nonatomic) _Bool hasFailed; // @synthesize hasFailed=_hasFailed;
@property(nonatomic) _Bool hasEnded; // @synthesize hasEnded=_hasEnded;
@property(nonatomic) _Bool hasStartedOrChanged; // @synthesize hasStartedOrChanged=_hasStartedOrChanged;
@property(readonly, nonatomic) unsigned long long whichContextevent; // @synthesize whichContextevent=_whichContextevent;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000274b9a
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000274adc
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000002747f7
- (unsigned long long)hash;	// IMP=0x000000000027478a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002743b1
- (void)writeTo:(id)arg1;	// IMP=0x0000000000274272
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002739cc
- (void)deleteFailed;	// IMP=0x0000000000273999
@property(retain, nonatomic) ORCHSchemaORCHCDMRequestFailed *failed; // @synthesize failed=_failed;
- (void)deleteEnded;	// IMP=0x00000000002738bb
@property(retain, nonatomic) ORCHSchemaORCHCDMRequestEnded *ended; // @synthesize ended=_ended;
- (void)deleteStartedOrChanged;	// IMP=0x00000000002737d3
@property(retain, nonatomic) ORCHSchemaORCHCDMRequestStarted *startedOrChanged; // @synthesize startedOrChanged=_startedOrChanged;
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x0000000000354259
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000354221

@end

