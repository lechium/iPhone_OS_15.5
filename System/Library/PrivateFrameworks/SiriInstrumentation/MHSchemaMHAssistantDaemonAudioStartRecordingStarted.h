//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface MHSchemaMHAssistantDaemonAudioStartRecordingStarted
{
    _Bool _exists;	// 8 = 0x8
    CDStruct_b33ad018 _has;	// 12 = 0xc
}

@property(nonatomic) _Bool exists; // @synthesize exists=_exists;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000001df6c9
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000001df60b
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000001df4db
- (unsigned long long)hash;	// IMP=0x00000000001df4b0
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001df40b
- (void)writeTo:(id)arg1;	// IMP=0x00000000001df3df
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001df3d2
- (void)deleteExists;	// IMP=0x00000000001df3a8
@property(nonatomic) _Bool hasExists;
- (id)suppressMessageUnderConditions;	// IMP=0x000000000034c3c1

@end
