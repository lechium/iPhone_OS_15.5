//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PeopleSuggester/NSCopying-Protocol.h>

@class ContactEmbeddingAnalysisPETNeuralNetEmbedding, NSString;

@interface ContactEmbeddingAnalysisPETContactEmbeddingAnalysisEvent : PBCodable <NSCopying>
{
    NSString *_contactId;	// 8 = 0x8
    ContactEmbeddingAnalysisPETNeuralNetEmbedding *_embeddingsAfterActivation;	// 16 = 0x10
    ContactEmbeddingAnalysisPETNeuralNetEmbedding *_embeddingsBeforeActivation;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000051711
@property(retain, nonatomic) NSString *contactId; // @synthesize contactId=_contactId;
@property(retain, nonatomic) ContactEmbeddingAnalysisPETNeuralNetEmbedding *embeddingsAfterActivation; // @synthesize embeddingsAfterActivation=_embeddingsAfterActivation;
@property(retain, nonatomic) ContactEmbeddingAnalysisPETNeuralNetEmbedding *embeddingsBeforeActivation; // @synthesize embeddingsBeforeActivation=_embeddingsBeforeActivation;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000515f1
- (unsigned long long)hash;	// IMP=0x0000000000051584
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005148c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000513c8
- (void)copyTo:(id)arg1;	// IMP=0x000000000005133f
- (void)writeTo:(id)arg1;	// IMP=0x00000000000512b6
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000512a9
- (id)dictionaryRepresentation;	// IMP=0x0000000000050fa0
- (id)description;	// IMP=0x0000000000050ef1

@end
