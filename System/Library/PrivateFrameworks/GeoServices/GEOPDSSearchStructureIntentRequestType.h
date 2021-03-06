//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSSearchStructureIntentRequestType : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    int _intentType;	// 16 = 0x10
    int _structureType;	// 20 = 0x14
    struct {
        unsigned int has_intentType:1;
        unsigned int has_structureType:1;
    } _flags;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000664bee
- (unsigned long long)hash;	// IMP=0x0000000000664b34
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000664a81
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000006649e4
- (void)writeTo:(id)arg1;	// IMP=0x0000000000664958
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000664949
- (id)jsonRepresentation;	// IMP=0x0000000000664054
- (id)dictionaryRepresentation;	// IMP=0x0000000000663d9b
- (id)description;	// IMP=0x0000000000663cec

@end

