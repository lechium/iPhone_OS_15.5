//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface MHSchemaMHAssistantDaemonAudioPrewarmEnded
{
    _Bool _exists;	// 8 = 0x8
    CDStruct_b33ad018 _has;	// 12 = 0xc
}

@property(nonatomic) _Bool exists; // @synthesize exists=_exists;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000001d0b7f
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000001d0ac1
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000001d0991
- (unsigned long long)hash;	// IMP=0x00000000001d0966
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001d08c1
- (void)writeTo:(id)arg1;	// IMP=0x00000000001d0895
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001d0888
- (void)deleteExists;	// IMP=0x00000000001d085e
@property(nonatomic) _Bool hasExists;
- (id)suppressMessageUnderConditions;	// IMP=0x000000000034b250

@end

