//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface ASRSchemaASRSampledAudioFileStored
{
    _Bool _exists;	// 8 = 0x8
    CDStruct_b33ad018 _has;	// 12 = 0xc
}

@property(nonatomic) _Bool exists; // @synthesize exists=_exists;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000003c0be
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000003c000
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000003bed0
- (unsigned long long)hash;	// IMP=0x000000000003bea5
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003be00
- (void)writeTo:(id)arg1;	// IMP=0x000000000003bdd4
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000003bdc7
- (void)deleteExists;	// IMP=0x000000000003bd9d
@property(nonatomic) _Bool hasExists;
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000331305

@end
