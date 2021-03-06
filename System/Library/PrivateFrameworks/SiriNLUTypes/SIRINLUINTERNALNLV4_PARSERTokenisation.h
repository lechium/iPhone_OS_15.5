//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SiriNLUTypes/NSCopying-Protocol.h>

@class NSString, SIRINLUINTERNALTokenChain;

@interface SIRINLUINTERNALNLV4_PARSERTokenisation : PBCodable <NSCopying>
{
    NSString *_normalisedUtterance;	// 8 = 0x8
    NSString *_originalUtterance;	// 16 = 0x10
    SIRINLUINTERNALTokenChain *_tokenChain;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000778c9
@property(retain, nonatomic) SIRINLUINTERNALTokenChain *tokenChain; // @synthesize tokenChain=_tokenChain;
@property(retain, nonatomic) NSString *normalisedUtterance; // @synthesize normalisedUtterance=_normalisedUtterance;
@property(retain, nonatomic) NSString *originalUtterance; // @synthesize originalUtterance=_originalUtterance;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000777c0
- (unsigned long long)hash;	// IMP=0x0000000000077753
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000007765b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000077597
- (void)copyTo:(id)arg1;	// IMP=0x0000000000077514
- (void)writeTo:(id)arg1;	// IMP=0x000000000007749a
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000007748d
- (id)dictionaryRepresentation;	// IMP=0x000000000007719f
- (id)description;	// IMP=0x00000000000770f0
@property(readonly, nonatomic) _Bool hasTokenChain;
@property(readonly, nonatomic) _Bool hasNormalisedUtterance;
@property(readonly, nonatomic) _Bool hasOriginalUtterance;

@end

