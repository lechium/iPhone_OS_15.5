//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface HALSchemaHALLocalFetchEnded
{
    _Bool _exists;	// 8 = 0x8
    CDStruct_b33ad018 _has;	// 12 = 0xc
}

@property(nonatomic) _Bool exists; // @synthesize exists=_exists;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000019a927
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000019a869
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000019a739
- (unsigned long long)hash;	// IMP=0x000000000019a70e
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000019a669
- (void)writeTo:(id)arg1;	// IMP=0x000000000019a63d
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000019a630
- (void)deleteExists;	// IMP=0x000000000019a606
@property(nonatomic) _Bool hasExists;
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000347a9f

@end

