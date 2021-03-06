//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SiriNLUTypes/NSCopying-Protocol.h>

@class NSMutableArray, SIRINLUEXTERNALSemVer;

@interface SIRINLUEXTERNALUsoOntologyVocabulary : PBCodable <NSCopying>
{
    NSMutableArray *_elementNames;	// 8 = 0x8
    SIRINLUEXTERNALSemVer *_usoVersion;	// 16 = 0x10
}

+ (Class)elementNamesType;	// IMP=0x0000000000007744
- (void).cxx_destruct;	// IMP=0x00000000000081c5
@property(retain, nonatomic) NSMutableArray *elementNames; // @synthesize elementNames=_elementNames;
@property(retain, nonatomic) SIRINLUEXTERNALSemVer *usoVersion; // @synthesize usoVersion=_usoVersion;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000007fea
- (unsigned long long)hash;	// IMP=0x0000000000007f9d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000007ed5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000007cfc
- (void)copyTo:(id)arg1;	// IMP=0x0000000000007c12
- (void)writeTo:(id)arg1;	// IMP=0x0000000000007ac6
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000007ab9
- (id)dictionaryRepresentation;	// IMP=0x0000000000007804
- (id)description;	// IMP=0x0000000000007755
- (id)elementNamesAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000007727
- (unsigned long long)elementNamesCount;	// IMP=0x000000000000770a
- (void)addElementNames:(id)arg1;	// IMP=0x00000000000076a0
- (void)clearElementNames;	// IMP=0x0000000000007683
@property(readonly, nonatomic) _Bool hasUsoVersion;

@end

