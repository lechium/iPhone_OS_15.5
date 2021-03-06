//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface NETSchemaNETNetworkConnectionStatePreparationSnapshotCaptured
{
    _Bool _hasDNS;	// 8 = 0x8
    struct {
        unsigned int hasDNS:1;
    } _has;	// 12 = 0xc
}

@property(nonatomic) _Bool hasDNS; // @synthesize hasDNS=_hasDNS;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000258ed7
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000258e19
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000258ce9
- (unsigned long long)hash;	// IMP=0x0000000000258cbe
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000258c19
- (void)writeTo:(id)arg1;	// IMP=0x0000000000258bed
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000258be0
- (void)deleteHasDNS;	// IMP=0x0000000000258bb6
@property(nonatomic) _Bool hasHasDNS;
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000352635

@end

