//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDBrandLookupResult : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000502397
- (unsigned long long)hash;	// IMP=0x000000000050238f
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000050234a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000005022ef
- (void)writeTo:(id)arg1;	// IMP=0x00000000005022d2
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000005022c3
- (id)jsonRepresentation;	// IMP=0x0000000000502005
- (id)dictionaryRepresentation;	// IMP=0x0000000000501e9a
- (id)description;	// IMP=0x0000000000501deb

@end

