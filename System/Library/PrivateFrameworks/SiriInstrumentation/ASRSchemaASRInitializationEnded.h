//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface ASRSchemaASRInitializationEnded
{
    _Bool _exists;	// 8 = 0x8
    CDStruct_b33ad018 _has;	// 12 = 0xc
}

@property(nonatomic) _Bool exists; // @synthesize exists=_exists;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000026e5c
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000026d9e
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000026c6e
- (unsigned long long)hash;	// IMP=0x0000000000026c43
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000026b9e
- (void)writeTo:(id)arg1;	// IMP=0x0000000000026b72
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000026b65
- (void)deleteExists;	// IMP=0x0000000000026b3b
@property(nonatomic) _Bool hasExists;
- (id)suppressMessageUnderConditions;	// IMP=0x000000000032f987

@end

