//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDCanonicalLocationSearchParameters : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSString *_queryString;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000502b0f
- (unsigned long long)hash;	// IMP=0x0000000000502af2
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000502a58
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000005029cd
- (void)writeTo:(id)arg1;	// IMP=0x0000000000502972
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000502963
- (id)jsonRepresentation;	// IMP=0x0000000000502641
- (id)dictionaryRepresentation;	// IMP=0x00000000005024a1
- (id)description;	// IMP=0x00000000005023f2

@end

