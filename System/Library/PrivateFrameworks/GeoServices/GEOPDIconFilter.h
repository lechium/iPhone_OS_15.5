//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDIconFilter : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000b66b53
- (unsigned long long)hash;	// IMP=0x0000000000b66b4b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b66b06
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b66aab
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b66a8e
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b66a7f
- (id)jsonRepresentation;	// IMP=0x0000000000b6696d
- (id)dictionaryRepresentation;	// IMP=0x0000000000b66802
- (id)description;	// IMP=0x0000000000b66753

@end

