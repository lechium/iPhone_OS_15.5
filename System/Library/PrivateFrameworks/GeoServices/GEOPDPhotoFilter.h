//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPhotoFilter : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    struct GEOPDPhotoSizeFilterValue *_photoSizeFilters;	// 16 = 0x10
    unsigned long long _photoSizeFiltersCount;	// 24 = 0x18
    unsigned long long _photoSizeFiltersSpace;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000b938e5
- (unsigned long long)hash;	// IMP=0x0000000000b938ba
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b93821
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b93781
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b936c1
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b936b2
- (id)jsonRepresentation;	// IMP=0x0000000000b935a0
- (id)dictionaryRepresentation;	// IMP=0x0000000000b9334c
- (id)description;	// IMP=0x0000000000b9329d
- (void)dealloc;	// IMP=0x0000000000b930c2

@end
