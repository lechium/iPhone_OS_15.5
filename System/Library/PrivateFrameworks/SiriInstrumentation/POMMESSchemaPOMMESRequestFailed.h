//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface POMMESSchemaPOMMESRequestFailed
{
    int _reason;	// 8 = 0x8
    CDStruct_6555f803 _has;	// 12 = 0xc
}

@property(nonatomic) int reason; // @synthesize reason=_reason;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000002c5d2a
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000002c5c6c
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000002c5b42
- (unsigned long long)hash;	// IMP=0x00000000002c5b17
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002c5a72
- (void)writeTo:(id)arg1;	// IMP=0x00000000002c5a47
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002c5a3a
- (void)deleteReason;	// IMP=0x00000000002c5a10
@property(nonatomic) _Bool hasReason;
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000359e52

@end

