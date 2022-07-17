//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, SISchemaUUID, USOSchemaUSOGraph;

@interface NLXSchemaCDMSystemReportedFailure
{
    SISchemaUUID *_taskId;	// 8 = 0x8
    USOSchemaUSOGraph *_reason;	// 16 = 0x10
    USOSchemaUSOGraph *_task;	// 24 = 0x18
    _Bool _hasTaskId;	// 32 = 0x20
    _Bool _hasReason;	// 33 = 0x21
    _Bool _hasTask;	// 34 = 0x22
}

- (void).cxx_destruct;	// IMP=0x000000000008fd4b
@property(nonatomic) _Bool hasTask; // @synthesize hasTask=_hasTask;
@property(nonatomic) _Bool hasReason; // @synthesize hasReason=_hasReason;
@property(nonatomic) _Bool hasTaskId; // @synthesize hasTaskId=_hasTaskId;
@property(retain, nonatomic) USOSchemaUSOGraph *task; // @synthesize task=_task;
@property(retain, nonatomic) USOSchemaUSOGraph *reason; // @synthesize reason=_reason;
@property(retain, nonatomic) SISchemaUUID *taskId; // @synthesize taskId=_taskId;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000008faa1
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000008f9e3
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000008f6fe
- (unsigned long long)hash;	// IMP=0x000000000008f691
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000008f2a2
- (void)writeTo:(id)arg1;	// IMP=0x000000000008f163
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000008f156
- (void)deleteTask;	// IMP=0x000000000008f142
- (void)deleteReason;	// IMP=0x000000000008f119
- (void)deleteTaskId;	// IMP=0x000000000008f0f0
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x0000000000336b6d
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000336b35

@end
