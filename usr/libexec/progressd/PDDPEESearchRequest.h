//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class NSMutableArray;

@interface PDDPEESearchRequest : PBRequest
{
    NSMutableArray *_searchRequestZones;	// 8 = 0x8
}

+ (Class)searchRequestZonesType;	// IMP=0x0020000000185557
- (void).cxx_destruct;	// IMP=0x0020000000185ffe
@property(retain, nonatomic) NSMutableArray *searchRequestZones; // @synthesize searchRequestZones=_searchRequestZones;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000185ea4
- (unsigned long long)hash;	// IMP=0x0010000000185e87
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000185ded
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000185c2a
- (void)copyTo:(id)arg1;	// IMP=0x0010000000185b63
- (Class)responseClass;	// IMP=0x0010000000185b52
- (unsigned int)requestTypeCode;	// IMP=0x0010000000185b47
- (void)writeTo:(id)arg1;	// IMP=0x0010000000185a17
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000018584a
- (id)dictionaryRepresentation;	// IMP=0x0010000000185617
- (id)description;	// IMP=0x0010000000185568
- (id)searchRequestZonesAtIndex:(unsigned long long)arg1;	// IMP=0x001000000018553a
- (unsigned long long)searchRequestZonesCount;	// IMP=0x001000000018551d
- (void)addSearchRequestZones:(id)arg1;	// IMP=0x00100000001854b3
- (void)clearSearchRequestZones;	// IMP=0x0010000000185496

@end
