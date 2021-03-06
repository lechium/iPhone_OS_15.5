//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SiriNLUTypes/NSCopying-Protocol.h>

@interface SIRINLUINTERNALPSCPSCServiceResponse : PBCodable <NSCopying>
{
    float _pommesProbability;	// 8 = 0x8
    struct {
        unsigned int pommesProbability:1;
    } _has;	// 12 = 0xc
}

@property(nonatomic) float pommesProbability; // @synthesize pommesProbability=_pommesProbability;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000026fe0
- (unsigned long long)hash;	// IMP=0x0000000000026edc
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000026e45
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000026ddf
- (void)copyTo:(id)arg1;	// IMP=0x0000000000026db7
- (void)writeTo:(id)arg1;	// IMP=0x0000000000026d8a
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000026d7d
- (id)dictionaryRepresentation;	// IMP=0x0000000000026b2f
- (id)description;	// IMP=0x0000000000026a80
@property(nonatomic) _Bool hasPommesProbability;

@end

