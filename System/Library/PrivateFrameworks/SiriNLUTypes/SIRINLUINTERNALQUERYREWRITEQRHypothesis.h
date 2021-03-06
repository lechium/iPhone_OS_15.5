//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SiriNLUTypes/NSCopying-Protocol.h>

@class NSString, SIRINLUEXTERNALUUID;

@interface SIRINLUINTERNALQUERYREWRITEQRHypothesis : PBCodable <NSCopying>
{
    double _confidence;	// 8 = 0x8
    SIRINLUEXTERNALUUID *_asrId;	// 16 = 0x10
    int _rewriteType;	// 24 = 0x18
    NSString *_utterance;	// 32 = 0x20
    CDStruct_968924a9 _has;	// 40 = 0x28
}

+ (id)options;	// IMP=0x0000000000041818
- (void).cxx_destruct;	// IMP=0x0000000000042548
@property(nonatomic) double confidence; // @synthesize confidence=_confidence;
@property(retain, nonatomic) NSString *utterance; // @synthesize utterance=_utterance;
@property(retain, nonatomic) SIRINLUEXTERNALUUID *asrId; // @synthesize asrId=_asrId;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000042431
- (unsigned long long)hash;	// IMP=0x00000000000422aa
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000042189
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000420aa
- (void)copyTo:(id)arg1;	// IMP=0x0000000000042006
- (void)writeTo:(id)arg1;	// IMP=0x0000000000041f59
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000041f4c
- (id)dictionaryRepresentation;	// IMP=0x0000000000041aa7
- (id)description;	// IMP=0x00000000000419f8
- (int)StringAsRewriteType:(id)arg1;	// IMP=0x0000000000041996
- (id)rewriteTypeAsString:(int)arg1;	// IMP=0x0000000000041941
@property(nonatomic) _Bool hasRewriteType;
@property(nonatomic) int rewriteType; // @synthesize rewriteType=_rewriteType;
@property(nonatomic) _Bool hasConfidence;
@property(readonly, nonatomic) _Bool hasUtterance;
@property(readonly, nonatomic) _Bool hasAsrId;

@end

