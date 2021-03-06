//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SiriNLUTypes/NSCopying-Protocol.h>

@class NSMutableArray;

@interface SIRINLUINTERNALNLV4_PARSERNLv4ParserResponse : PBCodable <NSCopying>
{
    NSMutableArray *_hypotheses;	// 8 = 0x8
}

+ (Class)hypothesesType;	// IMP=0x000000000008e759
- (void).cxx_destruct;	// IMP=0x000000000008f1ee
@property(retain, nonatomic) NSMutableArray *hypotheses; // @synthesize hypotheses=_hypotheses;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000008f094
- (unsigned long long)hash;	// IMP=0x000000000008f077
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000008efdd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000008ee1a
- (void)copyTo:(id)arg1;	// IMP=0x000000000008ed53
- (void)writeTo:(id)arg1;	// IMP=0x000000000008ec23
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000008ec16
- (id)dictionaryRepresentation;	// IMP=0x000000000008e819
- (id)description;	// IMP=0x000000000008e76a
- (id)hypothesesAtIndex:(unsigned long long)arg1;	// IMP=0x000000000008e73c
- (unsigned long long)hypothesesCount;	// IMP=0x000000000008e71f
- (void)addHypotheses:(id)arg1;	// IMP=0x000000000008e6b5
- (void)clearHypotheses;	// IMP=0x000000000008e698

@end

