//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface MHSchemaMHEndpointerUsed
{
    int _endpointer;	// 8 = 0x8
    struct {
        unsigned int endpointer:1;
    } _has;	// 12 = 0xc
}

@property(nonatomic) int endpointer; // @synthesize endpointer=_endpointer;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000203ea2
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000203de4
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000203c89
- (unsigned long long)hash;	// IMP=0x0000000000203c5e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000203bb9
- (void)writeTo:(id)arg1;	// IMP=0x0000000000203b8e
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000203b81
- (void)deleteEndpointer;	// IMP=0x0000000000203b57
@property(nonatomic) _Bool hasEndpointer;
- (id)suppressMessageUnderConditions;	// IMP=0x000000000034e657

@end

