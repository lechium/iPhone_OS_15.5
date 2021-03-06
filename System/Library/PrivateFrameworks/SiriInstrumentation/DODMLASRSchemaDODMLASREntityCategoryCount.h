//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@interface DODMLASRSchemaDODMLASREntityCategoryCount
{
    NSString *_entityCategory;	// 8 = 0x8
    unsigned int _count;	// 16 = 0x10
    CDStruct_bbadad30 _has;	// 20 = 0x14
    _Bool _hasEntityCategory;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000faedd
@property(nonatomic) _Bool hasEntityCategory; // @synthesize hasEntityCategory=_hasEntityCategory;
@property(nonatomic) unsigned int count; // @synthesize count=_count;
@property(copy, nonatomic) NSString *entityCategory; // @synthesize entityCategory=_entityCategory;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000fad3a
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000000fac7c
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000000faae0
- (unsigned long long)hash;	// IMP=0x00000000000faa8e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000fa8bd
- (void)writeTo:(id)arg1;	// IMP=0x00000000000fa82a
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000fa81d
- (void)deleteCount;	// IMP=0x00000000000fa7f3
@property(nonatomic) _Bool hasCount;
- (void)deleteEntityCategory;	// IMP=0x00000000000fa79a
- (id)suppressMessageUnderConditions;	// IMP=0x000000000033e2d7

@end

