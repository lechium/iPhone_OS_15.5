//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface NETSchemaNETEndpoint
{
    int _type;	// 8 = 0x8
    unsigned int _port;	// 12 = 0xc
    struct {
        unsigned int type:1;
        unsigned int port:1;
    } _has;	// 16 = 0x10
}

@property(nonatomic) unsigned int port; // @synthesize port=_port;
@property(nonatomic) int type; // @synthesize type=_type;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000256676
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000002565b8
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000002563ea
- (unsigned long long)hash;	// IMP=0x00000000002563a5
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002562b6
- (void)writeTo:(id)arg1;	// IMP=0x0000000000256245
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000256238
- (void)deletePort;	// IMP=0x000000000025620e
@property(nonatomic) _Bool hasPort;
- (void)deleteType;	// IMP=0x000000000025619b
@property(nonatomic) _Bool hasType;
- (id)suppressMessageUnderConditions;	// IMP=0x00000000003523fc

@end

