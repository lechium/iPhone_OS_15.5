//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface ORCHSchemaORCHPommesRequestEnded
{
    int _status;	// 8 = 0x8
    CDStruct_47fe53f2 _has;	// 12 = 0xc
}

@property(nonatomic) int status; // @synthesize status=_status;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000028247f
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000002823c1
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000002822a5
- (unsigned long long)hash;	// IMP=0x000000000028227a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002821d5
- (void)writeTo:(id)arg1;	// IMP=0x00000000002821aa
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000028219d
- (void)deleteStatus;	// IMP=0x0000000000282173
@property(nonatomic) _Bool hasStatus;
- (id)suppressMessageUnderConditions;	// IMP=0x00000000003552d8

@end

