//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface MTSchemaMTInvocationCancelled
{
    _Bool _exists;	// 8 = 0x8
    CDStruct_b33ad018 _has;	// 12 = 0xc
}

@property(nonatomic) _Bool exists; // @synthesize exists=_exists;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000231815
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000231757
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000231627
- (unsigned long long)hash;	// IMP=0x00000000002315fc
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000231557
- (void)writeTo:(id)arg1;	// IMP=0x000000000023152b
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000023134d
- (void)deleteExists;	// IMP=0x0000000000231323
@property(nonatomic) _Bool hasExists;
- (id)suppressMessageUnderConditions;	// IMP=0x00000000003508cd

@end

