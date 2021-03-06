//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface ASRSchemaASRInitializationStarted
{
    _Bool _exists;	// 8 = 0x8
    CDStruct_b33ad018 _has;	// 12 = 0xc
}

@property(nonatomic) _Bool exists; // @synthesize exists=_exists;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000272ac
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000000271ee
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000000270be
- (unsigned long long)hash;	// IMP=0x0000000000027093
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000026fee
- (void)writeTo:(id)arg1;	// IMP=0x0000000000026fc2
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000026fb5
- (void)deleteExists;	// IMP=0x0000000000026f8b
@property(nonatomic) _Bool hasExists;
- (id)suppressMessageUnderConditions;	// IMP=0x000000000032f9bf

@end

