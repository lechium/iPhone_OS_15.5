//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDBoundsFilter : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000a8ddd6
- (unsigned long long)hash;	// IMP=0x0000000000a8ddce
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000a8dd89
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000a8dd2e
- (void)writeTo:(id)arg1;	// IMP=0x0000000000a8dd11
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000a8dd02
- (id)jsonRepresentation;	// IMP=0x0000000000a8da44
- (id)dictionaryRepresentation;	// IMP=0x0000000000a8d8d9
- (id)description;	// IMP=0x0000000000a8d82a

@end

