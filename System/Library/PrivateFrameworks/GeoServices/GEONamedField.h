//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEONamedField : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    NSMutableArray *_values;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_name:1;
        unsigned int read_values:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 52 = 0x34
}

- (void).cxx_destruct;	// IMP=0x0000000000ecadbd
- (unsigned long long)hash;	// IMP=0x0000000000ecaba6
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000ecaac4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000eca7de
- (void)writeTo:(id)arg1;	// IMP=0x0000000000eca533
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000eca524
- (id)jsonRepresentation;	// IMP=0x0000000000ec97bf
- (id)dictionaryRepresentation;	// IMP=0x0000000000ec9330
- (id)description;	// IMP=0x0000000000ec9281
- (id)initWithData:(id)arg1;	// IMP=0x0000000000ec893a
- (id)init;	// IMP=0x0000000000ec88de

@end
