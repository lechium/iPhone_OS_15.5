//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface FLOWSchemaFLOWSmsAudioContext
{
    unsigned int _messageDurationMs;	// 8 = 0x8
    struct {
        unsigned int messageDurationMs:1;
    } _has;	// 12 = 0xc
}

@property(nonatomic) unsigned int messageDurationMs; // @synthesize messageDurationMs=_messageDurationMs;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000161c2c
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000161b6e
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000161a3f
- (unsigned long long)hash;	// IMP=0x0000000000161a15
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000161970
- (void)writeTo:(id)arg1;	// IMP=0x0000000000161945
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000016176d
- (void)deleteMessageDurationMs;	// IMP=0x0000000000161743
@property(nonatomic) _Bool hasMessageDurationMs;
- (id)suppressMessageUnderConditions;	// IMP=0x00000000003449ac

@end

