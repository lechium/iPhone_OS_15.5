//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface MHSchemaMHAssistantDaemonAudioSessionSetActiveStarted
{
    _Bool _exists;	// 8 = 0x8
    CDStruct_b33ad018 _has;	// 12 = 0xc
}

@property(nonatomic) _Bool exists; // @synthesize exists=_exists;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000001db919
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000001db85b
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000001db72b
- (unsigned long long)hash;	// IMP=0x00000000001db700
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001db65b
- (void)writeTo:(id)arg1;	// IMP=0x00000000001db62f
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001db622
- (void)deleteExists;	// IMP=0x00000000001db5f8
@property(nonatomic) _Bool hasExists;
- (id)suppressMessageUnderConditions;	// IMP=0x000000000034beec

@end

