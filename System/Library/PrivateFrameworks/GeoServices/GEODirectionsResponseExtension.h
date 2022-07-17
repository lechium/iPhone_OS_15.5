//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOETAServiceResponseSummary;

__attribute__((visibility("hidden")))
@interface GEODirectionsResponseExtension : PBCodable <NSCopying>
{
    GEOETAServiceResponseSummary *_etaServiceSummary;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000001563434
@property(retain, nonatomic) GEOETAServiceResponseSummary *etaServiceSummary;
@property(readonly, nonatomic) _Bool hasEtaServiceSummary;
- (unsigned long long)hash;	// IMP=0x0000000001563226
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000156318c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000001563114
- (void)writeTo:(id)arg1;	// IMP=0x00000000015630f0
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000001562ed8
- (id)jsonRepresentation;	// IMP=0x000000000156293b
- (id)dictionaryRepresentation;	// IMP=0x0000000001562857
- (id)description;	// IMP=0x00000000015627a8

@end
