//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDRap : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    int _placecardRapButtonType;	// 16 = 0x10
    struct {
        unsigned int has_placecardRapButtonType:1;
    } _flags;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x0000000000fd239f
- (unsigned long long)hash;	// IMP=0x0000000000fd2374
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000fd22e2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000fd2262
- (void)writeTo:(id)arg1;	// IMP=0x0000000000fd2200
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000fd21f1
- (id)jsonRepresentation;	// IMP=0x0000000000fd1b12
- (id)dictionaryRepresentation;	// IMP=0x0000000000fd190a
- (id)description;	// IMP=0x0000000000fd185b

@end

