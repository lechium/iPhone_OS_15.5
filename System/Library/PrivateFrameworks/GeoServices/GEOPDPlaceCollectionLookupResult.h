//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDComponent, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPlaceCollectionLookupResult : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    GEOPDComponent *_collectionComponent;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000055dc40
- (unsigned long long)hash;	// IMP=0x000000000055dc23
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000055db89
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000055dafe
- (void)writeTo:(id)arg1;	// IMP=0x000000000055daa3
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000055da94
- (id)jsonRepresentation;	// IMP=0x000000000055d71a
- (id)dictionaryRepresentation;	// IMP=0x000000000055d51a
- (id)description;	// IMP=0x000000000055d46b

@end

