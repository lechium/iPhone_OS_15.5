//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SiriNLUTypes/NSCopying-Protocol.h>

@interface SIRINLUINTERNALMentionDetectorSpanData : PBCodable <NSCopying>
{
    double _score;	// 8 = 0x8
    CDStruct_4b1634df _has;	// 16 = 0x10
}

@property(nonatomic) double score; // @synthesize score=_score;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000269ff
- (unsigned long long)hash;	// IMP=0x00000000000268ec
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000026854
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000267ee
- (void)copyTo:(id)arg1;	// IMP=0x00000000000267c6
- (void)writeTo:(id)arg1;	// IMP=0x0000000000026799
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000002678c
- (id)dictionaryRepresentation;	// IMP=0x000000000002653e
- (id)description;	// IMP=0x000000000002648f
@property(nonatomic) _Bool hasScore;

@end

