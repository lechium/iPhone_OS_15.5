//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface HALSchemaHALForceFetchStarted
{
    _Bool _exists;	// 8 = 0x8
    CDStruct_b33ad018 _has;	// 12 = 0xc
}

@property(nonatomic) _Bool exists; // @synthesize exists=_exists;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000001990d7
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000199019
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000198ee9
- (unsigned long long)hash;	// IMP=0x0000000000198ebe
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000198e19
- (void)writeTo:(id)arg1;	// IMP=0x0000000000198ded
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000198de0
- (void)deleteExists;	// IMP=0x0000000000198db6
@property(nonatomic) _Bool hasExists;
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000347862

@end
