//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DODMLASRSchemaDODMLASRTranscriptMetadata, NSData;

@interface DODMLASRSchemaDODMLASRTranscriptionMetrics
{
    DODMLASRSchemaDODMLASRTranscriptMetadata *_train;	// 8 = 0x8
    DODMLASRSchemaDODMLASRTranscriptMetadata *_dev;	// 16 = 0x10
    DODMLASRSchemaDODMLASRTranscriptMetadata *_test;	// 24 = 0x18
    DODMLASRSchemaDODMLASRTranscriptMetadata *_external;	// 32 = 0x20
    _Bool _hasTrain;	// 40 = 0x28
    _Bool _hasDev;	// 41 = 0x29
    _Bool _hasTest;	// 42 = 0x2a
    _Bool _hasExternal;	// 43 = 0x2b
}

- (void).cxx_destruct;	// IMP=0x000000000010d15a
@property(nonatomic) _Bool hasExternal; // @synthesize hasExternal=_hasExternal;
@property(nonatomic) _Bool hasTest; // @synthesize hasTest=_hasTest;
@property(nonatomic) _Bool hasDev; // @synthesize hasDev=_hasDev;
@property(nonatomic) _Bool hasTrain; // @synthesize hasTrain=_hasTrain;
@property(retain, nonatomic) DODMLASRSchemaDODMLASRTranscriptMetadata *external; // @synthesize external=_external;
@property(retain, nonatomic) DODMLASRSchemaDODMLASRTranscriptMetadata *test; // @synthesize test=_test;
@property(retain, nonatomic) DODMLASRSchemaDODMLASRTranscriptMetadata *dev; // @synthesize dev=_dev;
@property(retain, nonatomic) DODMLASRSchemaDODMLASRTranscriptMetadata *train; // @synthesize train=_train;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000010cdf4
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000010cd36
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000010c9a1
- (unsigned long long)hash;	// IMP=0x000000000010c91d
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000010c461
- (void)writeTo:(id)arg1;	// IMP=0x000000000010c2c6
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000010c2b9
- (void)deleteExternal;	// IMP=0x000000000010c2a5
- (void)deleteTest;	// IMP=0x000000000010c27c
- (void)deleteDev;	// IMP=0x000000000010c253
- (void)deleteTrain;	// IMP=0x000000000010c22a
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000033ee7a
- (id)suppressMessageUnderConditions;	// IMP=0x000000000033ee42

@end

