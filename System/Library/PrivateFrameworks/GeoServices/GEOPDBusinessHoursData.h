//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDBusinessHours, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDBusinessHoursData : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    GEOPDBusinessHours *_businessHours;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000a94e1b
- (unsigned long long)hash;	// IMP=0x0000000000a94dfe
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000a94d64
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000a94cd9
- (void)writeTo:(id)arg1;	// IMP=0x0000000000a94c7e
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000a94c6f
- (id)jsonRepresentation;	// IMP=0x0000000000a948f5
- (id)dictionaryRepresentation;	// IMP=0x0000000000a946f5
- (id)description;	// IMP=0x0000000000a94646

@end

