//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface MHSchemaMHAssistantDaemonAudioPrepareEnded
{
    _Bool _exists;	// 8 = 0x8
    CDStruct_b33ad018 _has;	// 12 = 0xc
}

@property(nonatomic) _Bool exists; // @synthesize exists=_exists;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000001cf274
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000001cf1b6
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000001cf086
- (unsigned long long)hash;	// IMP=0x00000000001cf05b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001cefb6
- (void)writeTo:(id)arg1;	// IMP=0x00000000001cef8a
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001cef7d
- (void)deleteExists;	// IMP=0x00000000001cef53
@property(nonatomic) _Bool hasExists;
- (id)suppressMessageUnderConditions;	// IMP=0x000000000034b04f

@end

