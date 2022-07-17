//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface PDDPQueryResponse : PBCodable
{
    NSMutableArray *_queryPayloads;	// 8 = 0x8
}

+ (Class)queryPayloadType;	// IMP=0x002000000008e11a
- (void).cxx_destruct;	// IMP=0x002000000008eba5
@property(retain, nonatomic) NSMutableArray *queryPayloads; // @synthesize queryPayloads=_queryPayloads;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000008ea4b
- (unsigned long long)hash;	// IMP=0x001000000008ea2e
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000008e994
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000008e7d1
- (void)copyTo:(id)arg1;	// IMP=0x001000000008e70a
- (void)writeTo:(id)arg1;	// IMP=0x001000000008e5da
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000008e40d
- (id)dictionaryRepresentation;	// IMP=0x001000000008e1da
- (id)description;	// IMP=0x001000000008e12b
- (id)queryPayloadAtIndex:(unsigned long long)arg1;	// IMP=0x001000000008e0fd
- (unsigned long long)queryPayloadsCount;	// IMP=0x001000000008e0e0
- (void)addQueryPayload:(id)arg1;	// IMP=0x001000000008e076
- (void)clearQueryPayloads;	// IMP=0x001000000008e059

@end
