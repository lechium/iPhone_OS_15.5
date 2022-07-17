//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface CDASchemaCDADeviceStateActivityEnded
{
    int _state;	// 8 = 0x8
    CDStruct_5accba53 _has;	// 12 = 0xc
}

@property(nonatomic) int state; // @synthesize state=_state;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000006159e
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000000614e0
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000000612ce
- (unsigned long long)hash;	// IMP=0x00000000000612a3
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000611fe
- (void)writeTo:(id)arg1;	// IMP=0x00000000000611d3
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000060ffb
- (void)deleteState;	// IMP=0x0000000000060fd1
@property(nonatomic) _Bool hasState;
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000333451

@end
