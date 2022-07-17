//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Network/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface NWPBUpdateBrowse : PBCodable <NSCopying>
{
    NSString *_clientUUID;	// 8 = 0x8
    NSMutableArray *_discoveredEndpoints;	// 16 = 0x10
}

+ (Class)discoveredEndpointsType;	// IMP=0x0000000000034730
- (void).cxx_destruct;	// IMP=0x0000000000034240
@property(retain, nonatomic) NSMutableArray *discoveredEndpoints; // @synthesize discoveredEndpoints=_discoveredEndpoints;
@property(retain, nonatomic) NSString *clientUUID; // @synthesize clientUUID=_clientUUID;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000034030
- (unsigned long long)hash;	// IMP=0x0000000000033fe0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000033f10
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000033d20
- (void)copyTo:(id)arg1;	// IMP=0x0000000000033c30
- (void)writeTo:(id)arg1;	// IMP=0x0000000000033ac0
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000033ab0
- (id)dictionaryRepresentation;	// IMP=0x0000000000033830
- (id)description;	// IMP=0x0000000000033780
- (id)discoveredEndpointsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000033760
- (unsigned long long)discoveredEndpointsCount;	// IMP=0x0000000000033740
- (void)addDiscoveredEndpoints:(id)arg1;	// IMP=0x00000000000336d0
- (void)clearDiscoveredEndpoints;	// IMP=0x00000000000336b0
@property(readonly, nonatomic) _Bool hasClientUUID;

@end
