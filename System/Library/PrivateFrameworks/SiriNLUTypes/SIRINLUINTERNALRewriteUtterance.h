//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SiriNLUTypes/NSCopying-Protocol.h>

@class NSMutableArray, NSString, SIRINLUEXTERNALUUID;

@interface SIRINLUINTERNALRewriteUtterance : PBCodable <NSCopying>
{
    double _confidence;	// 8 = 0x8
    SIRINLUEXTERNALUUID *_asrId;	// 16 = 0x10
    NSMutableArray *_asrUtteranceTokens;	// 24 = 0x18
    NSMutableArray *_nluInternalTokens;	// 32 = 0x20
    NSString *_utterance;	// 40 = 0x28
    CDStruct_81d693a7 _has;	// 48 = 0x30
}

+ (Class)nluInternalTokensType;	// IMP=0x000000000007f8d4
+ (Class)asrUtteranceTokensType;	// IMP=0x000000000007f7bb
- (void).cxx_destruct;	// IMP=0x0000000000080fb5
@property(retain, nonatomic) NSMutableArray *nluInternalTokens; // @synthesize nluInternalTokens=_nluInternalTokens;
@property(nonatomic) double confidence; // @synthesize confidence=_confidence;
@property(retain, nonatomic) NSMutableArray *asrUtteranceTokens; // @synthesize asrUtteranceTokens=_asrUtteranceTokens;
@property(retain, nonatomic) NSString *utterance; // @synthesize utterance=_utterance;
@property(retain, nonatomic) SIRINLUEXTERNALUUID *asrId; // @synthesize asrId=_asrId;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000080c50
- (unsigned long long)hash;	// IMP=0x0000000000080abc
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000080959
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000805f6
- (void)copyTo:(id)arg1;	// IMP=0x0000000000080428
- (void)writeTo:(id)arg1;	// IMP=0x00000000000801b1
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000801a4
- (id)dictionaryRepresentation;	// IMP=0x000000000007f994
- (id)description;	// IMP=0x000000000007f8e5
- (id)nluInternalTokensAtIndex:(unsigned long long)arg1;	// IMP=0x000000000007f8b7
- (unsigned long long)nluInternalTokensCount;	// IMP=0x000000000007f89a
- (void)addNluInternalTokens:(id)arg1;	// IMP=0x000000000007f830
- (void)clearNluInternalTokens;	// IMP=0x000000000007f813
@property(nonatomic) _Bool hasConfidence;
- (id)asrUtteranceTokensAtIndex:(unsigned long long)arg1;	// IMP=0x000000000007f79e
- (unsigned long long)asrUtteranceTokensCount;	// IMP=0x000000000007f781
- (void)addAsrUtteranceTokens:(id)arg1;	// IMP=0x000000000007f717
- (void)clearAsrUtteranceTokens;	// IMP=0x000000000007f6fa
@property(readonly, nonatomic) _Bool hasUtterance;
@property(readonly, nonatomic) _Bool hasAsrId;

@end

