//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAutocompleteSessionData : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000643d05
- (unsigned long long)hash;	// IMP=0x0000000000643cfb
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000643cb6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000643c5b
- (void)writeTo:(id)arg1;	// IMP=0x0000000000643c3e
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000643c2f
- (id)jsonRepresentation;	// IMP=0x0000000000643763
- (id)dictionaryRepresentation;	// IMP=0x00000000006435f8
- (id)description;	// IMP=0x0000000000643549

@end
