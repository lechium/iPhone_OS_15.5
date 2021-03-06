//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Network/NSCopying-Protocol.h>

@class NSString;

@interface NWPBCloseConnection : PBCodable <NSCopying>
{
    NSString *_clientUUID;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000003410
@property(retain, nonatomic) NSString *clientUUID; // @synthesize clientUUID=_clientUUID;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000033a0
- (unsigned long long)hash;	// IMP=0x0000000000003380
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000032e0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000003260
- (void)copyTo:(id)arg1;	// IMP=0x0000000000003230
- (void)writeTo:(id)arg1;	// IMP=0x0000000000003200
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000031f0
- (id)dictionaryRepresentation;	// IMP=0x0000000000003190
- (id)description;	// IMP=0x00000000000030e0
@property(readonly, nonatomic) _Bool hasClientUUID;

@end

