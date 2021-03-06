//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface PDDPPublishCollectionResponse : PBCodable
{
    NSMutableArray *_payloads;	// 8 = 0x8
}

+ (Class)payloadType;	// IMP=0x00200000000f5070
- (void).cxx_destruct;	// IMP=0x00200000000f5afb
@property(retain, nonatomic) NSMutableArray *payloads; // @synthesize payloads=_payloads;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000f59a1
- (unsigned long long)hash;	// IMP=0x00100000000f5984
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000f58ea
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000f5727
- (void)copyTo:(id)arg1;	// IMP=0x00100000000f5660
- (void)writeTo:(id)arg1;	// IMP=0x00100000000f5530
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000f5363
- (id)dictionaryRepresentation;	// IMP=0x00100000000f5130
- (id)description;	// IMP=0x00100000000f5081
- (id)payloadAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000f5053
- (unsigned long long)payloadsCount;	// IMP=0x00100000000f5036
- (void)addPayload:(id)arg1;	// IMP=0x00100000000f4fcc
- (void)clearPayloads;	// IMP=0x00100000000f4faf

@end

