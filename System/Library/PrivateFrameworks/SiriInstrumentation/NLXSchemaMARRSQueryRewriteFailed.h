//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface NLXSchemaMARRSQueryRewriteFailed
{
    int _reason;	// 8 = 0x8
    CDStruct_6555f803 _has;	// 12 = 0xc
}

@property(nonatomic) int reason; // @synthesize reason=_reason;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000001bd746
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000001bd688
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000001bd56c
- (unsigned long long)hash;	// IMP=0x00000000001bd541
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001bd49c
- (void)writeTo:(id)arg1;	// IMP=0x00000000001bd471
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001bd464
- (void)deleteReason;	// IMP=0x00000000001bd43a
@property(nonatomic) _Bool hasReason;
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000349f79

@end
