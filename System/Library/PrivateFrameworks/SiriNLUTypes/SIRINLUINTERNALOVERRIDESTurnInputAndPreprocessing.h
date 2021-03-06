//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SiriNLUTypes/NSCopying-Protocol.h>

@class NSMutableArray, NSString, SIRINLUEXTERNALTurnInput, SIRINLUINTERNALTokenChain;

@interface SIRINLUINTERNALOVERRIDESTurnInputAndPreprocessing : PBCodable <NSCopying>
{
    NSMutableArray *_matchingSpans;	// 8 = 0x8
    SIRINLUINTERNALTokenChain *_tokenChain;	// 16 = 0x10
    SIRINLUEXTERNALTurnInput *_turnInput;	// 24 = 0x18
    NSString *_utterance;	// 32 = 0x20
}

+ (Class)matchingSpansType;	// IMP=0x000000000008f873
- (void).cxx_destruct;	// IMP=0x000000000009083c
@property(retain, nonatomic) SIRINLUEXTERNALTurnInput *turnInput; // @synthesize turnInput=_turnInput;
@property(retain, nonatomic) NSMutableArray *matchingSpans; // @synthesize matchingSpans=_matchingSpans;
@property(retain, nonatomic) SIRINLUINTERNALTokenChain *tokenChain; // @synthesize tokenChain=_tokenChain;
@property(retain, nonatomic) NSString *utterance; // @synthesize utterance=_utterance;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000905bf
- (unsigned long long)hash;	// IMP=0x000000000009053b
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000009040f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000901cb
- (void)copyTo:(id)arg1;	// IMP=0x000000000009009e
- (void)writeTo:(id)arg1;	// IMP=0x000000000008ff05
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000008fef8
- (id)dictionaryRepresentation;	// IMP=0x000000000008f948
- (id)description;	// IMP=0x000000000008f899
@property(readonly, nonatomic) _Bool hasTurnInput;
- (id)matchingSpansAtIndex:(unsigned long long)arg1;	// IMP=0x000000000008f856
- (unsigned long long)matchingSpansCount;	// IMP=0x000000000008f839
- (void)addMatchingSpans:(id)arg1;	// IMP=0x000000000008f7cf
- (void)clearMatchingSpans;	// IMP=0x000000000008f7b2
@property(readonly, nonatomic) _Bool hasTokenChain;
@property(readonly, nonatomic) _Bool hasUtterance;

@end

