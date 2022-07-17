//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDSInferredValue, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSInferredInfo : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOPDSInferredValue *_inferredValue;	// 24 = 0x18
    NSMutableArray *_operands;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    int _inferredType;	// 52 = 0x34
    int _operator;	// 56 = 0x38
    struct {
        unsigned int has_inferredType:1;
        unsigned int has_operator:1;
        unsigned int read_unknownFields:1;
        unsigned int read_inferredValue:1;
        unsigned int read_operands:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 60 = 0x3c
}

- (void).cxx_destruct;	// IMP=0x0000000000656a37
- (unsigned long long)hash;	// IMP=0x00000000006564cf
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000065638f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000065605d
- (void)writeTo:(id)arg1;	// IMP=0x0000000000655d6b
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000655d5c
- (id)jsonRepresentation;	// IMP=0x0000000000654360
- (id)dictionaryRepresentation;	// IMP=0x0000000000653d34
- (id)description;	// IMP=0x0000000000653c85
- (id)initWithData:(id)arg1;	// IMP=0x00000000006530b4
- (id)init;	// IMP=0x0000000000653058

@end
