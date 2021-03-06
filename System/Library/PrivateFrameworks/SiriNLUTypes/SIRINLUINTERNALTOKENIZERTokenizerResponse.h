//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SiriNLUTypes/NSCopying-Protocol.h>

@class NSString, SIRINLUEXTERNALUUID, SIRINLUINTERNALTokenChain;

@interface SIRINLUINTERNALTOKENIZERTokenizerResponse : PBCodable <NSCopying>
{
    SIRINLUEXTERNALUUID *_asrId;	// 8 = 0x8
    NSString *_text;	// 16 = 0x10
    SIRINLUINTERNALTokenChain *_tokenChain;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000c9e1
@property(retain, nonatomic) SIRINLUEXTERNALUUID *asrId; // @synthesize asrId=_asrId;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) SIRINLUINTERNALTokenChain *tokenChain; // @synthesize tokenChain=_tokenChain;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000000c8c1
- (unsigned long long)hash;	// IMP=0x000000000000c854
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000c75c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000c698
- (void)copyTo:(id)arg1;	// IMP=0x000000000000c615
- (void)writeTo:(id)arg1;	// IMP=0x000000000000c59b
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000000c58e
- (id)dictionaryRepresentation;	// IMP=0x000000000000c24b
- (id)description;	// IMP=0x000000000000c19c
@property(readonly, nonatomic) _Bool hasAsrId;
@property(readonly, nonatomic) _Bool hasText;
@property(readonly, nonatomic) _Bool hasTokenChain;

@end

