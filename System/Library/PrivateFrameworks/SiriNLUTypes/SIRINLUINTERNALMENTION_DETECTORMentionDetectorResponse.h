//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SiriNLUTypes/NSCopying-Protocol.h>

@class NSMutableArray, SIRINLUEXTERNALUUID;

@interface SIRINLUINTERNALMENTION_DETECTORMentionDetectorResponse : PBCodable <NSCopying>
{
    NSMutableArray *_mentions;	// 8 = 0x8
    SIRINLUEXTERNALUUID *_requestId;	// 16 = 0x10
}

+ (Class)mentionsType;	// IMP=0x0000000000070e35
- (void).cxx_destruct;	// IMP=0x0000000000071a9d
@property(retain, nonatomic) NSMutableArray *mentions; // @synthesize mentions=_mentions;
@property(retain, nonatomic) SIRINLUEXTERNALUUID *requestId; // @synthesize requestId=_requestId;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000718c2
- (unsigned long long)hash;	// IMP=0x0000000000071875
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000717ad
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000715d4
- (void)copyTo:(id)arg1;	// IMP=0x00000000000714ea
- (void)writeTo:(id)arg1;	// IMP=0x000000000007139e
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000071391
- (id)dictionaryRepresentation;	// IMP=0x0000000000070ef5
- (id)description;	// IMP=0x0000000000070e46
- (id)mentionsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000070e18
- (unsigned long long)mentionsCount;	// IMP=0x0000000000070dfb
- (void)addMentions:(id)arg1;	// IMP=0x0000000000070d91
- (void)clearMentions;	// IMP=0x0000000000070d74
@property(readonly, nonatomic) _Bool hasRequestId;

@end
