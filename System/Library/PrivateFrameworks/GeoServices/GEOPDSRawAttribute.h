//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSRawAttribute : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    unsigned int _beginIndex;	// 16 = 0x10
    unsigned int _endIndex;	// 20 = 0x14
    struct {
        unsigned int has_beginIndex:1;
        unsigned int has_endIndex:1;
    } _flags;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000065896e
- (unsigned long long)hash;	// IMP=0x000000000065892a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000658877
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000006587da
- (void)writeTo:(id)arg1;	// IMP=0x000000000065874e
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000065873f
- (id)jsonRepresentation;	// IMP=0x000000000065862d
- (id)dictionaryRepresentation;	// IMP=0x00000000006583f0
- (id)description;	// IMP=0x0000000000658341

@end
