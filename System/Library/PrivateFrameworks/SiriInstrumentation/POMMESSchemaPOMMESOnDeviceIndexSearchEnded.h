//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface POMMESSchemaPOMMESOnDeviceIndexSearchEnded
{
    _Bool _exists;	// 8 = 0x8
    CDStruct_b33ad018 _has;	// 12 = 0xc
}

@property(nonatomic) _Bool exists; // @synthesize exists=_exists;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000002b7327
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000002b7269
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000002b7139
- (unsigned long long)hash;	// IMP=0x00000000002b710e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002b7069
- (void)writeTo:(id)arg1;	// IMP=0x00000000002b703d
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002b7030
- (void)deleteExists;	// IMP=0x00000000002b7006
@property(nonatomic) _Bool hasExists;
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000358f2e

@end
