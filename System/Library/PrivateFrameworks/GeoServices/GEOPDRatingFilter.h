//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDRatingFilter : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000bd3050
- (unsigned long long)hash;	// IMP=0x0000000000bd3048
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000bd3003
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000bd2fa8
- (void)writeTo:(id)arg1;	// IMP=0x0000000000bd2f8b
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000bd2f7c
- (id)jsonRepresentation;	// IMP=0x0000000000bd2e6a
- (id)dictionaryRepresentation;	// IMP=0x0000000000bd2cff
- (id)description;	// IMP=0x0000000000bd2c50

@end

