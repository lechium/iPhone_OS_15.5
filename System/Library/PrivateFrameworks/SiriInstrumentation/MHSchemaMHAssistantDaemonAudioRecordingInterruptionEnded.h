//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface MHSchemaMHAssistantDaemonAudioRecordingInterruptionEnded
{
    _Bool _exists;	// 8 = 0x8
    CDStruct_b33ad018 _has;	// 12 = 0xc
}

@property(nonatomic) _Bool exists; // @synthesize exists=_exists;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000001d5a43
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000001d5985
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000001d5855
- (unsigned long long)hash;	// IMP=0x00000000001d582a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001d5785
- (void)writeTo:(id)arg1;	// IMP=0x00000000001d5759
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001d574c
- (void)deleteExists;	// IMP=0x00000000001d5722
@property(nonatomic) _Bool hasExists;
- (id)suppressMessageUnderConditions;	// IMP=0x000000000034b81b

@end
