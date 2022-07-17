//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, SISchemaUUID;

@interface SISchemaLogicalTimestamp
{
    long long _timestampInNanoseconds;	// 8 = 0x8
    SISchemaUUID *_clockIdentifier;	// 16 = 0x10
    struct {
        unsigned int timestampInNanoseconds:1;
    } _has;	// 24 = 0x18
    _Bool _hasClockIdentifier;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x00000000001b55a6
@property(nonatomic) _Bool hasClockIdentifier; // @synthesize hasClockIdentifier=_hasClockIdentifier;
@property(retain, nonatomic) SISchemaUUID *clockIdentifier; // @synthesize clockIdentifier=_clockIdentifier;
@property(nonatomic) long long timestampInNanoseconds; // @synthesize timestampInNanoseconds=_timestampInNanoseconds;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000001b53f9
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000001b533b
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000001b5152
- (unsigned long long)hash;	// IMP=0x00000000001b5108
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001b4f41
- (void)writeTo:(id)arg1;	// IMP=0x00000000001b4e94
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001b4e87
- (void)deleteClockIdentifier;	// IMP=0x00000000001b4e73
- (void)deleteTimestampInNanoseconds;	// IMP=0x00000000001b4e34
@property(nonatomic) _Bool hasTimestampInNanoseconds;
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x0000000000349325
- (id)suppressMessageUnderConditions;	// IMP=0x00000000003492ed

@end
