//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTransitVehiclePositionParameters : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    CDStruct_62a50c50 _tripIds;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000060e522
- (unsigned long long)hash;	// IMP=0x000000000060e511
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000060e4ae
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000060e440
- (void)writeTo:(id)arg1;	// IMP=0x000000000060e3ca
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000060e3bb
- (id)jsonRepresentation;	// IMP=0x000000000060e2a9
- (id)dictionaryRepresentation;	// IMP=0x000000000060e0eb
- (id)description;	// IMP=0x000000000060e03c
- (void)dealloc;	// IMP=0x000000000060dffa

@end

