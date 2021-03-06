//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOURLOptions, NSMutableArray, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOURLPresent : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    NSMutableArray *_items;	// 16 = 0x10
    GEOURLOptions *_options;	// 24 = 0x18
    unsigned int _readerMarkPos;	// 32 = 0x20
    unsigned int _readerMarkLength;	// 36 = 0x24
    struct os_unfair_lock_s _readerLock;	// 40 = 0x28
    struct {
        unsigned int read_items:1;
        unsigned int read_options:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 44 = 0x2c
}

- (void).cxx_destruct;	// IMP=0x00000000009b8339
- (unsigned long long)hash;	// IMP=0x00000000009b82e2
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000009b8200
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000009b7f23
- (void)writeTo:(id)arg1;	// IMP=0x00000000009b7c6d
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000009b7c60
- (id)jsonRepresentation;	// IMP=0x00000000009b79f0
- (id)dictionaryRepresentation;	// IMP=0x00000000009b76ed
- (id)description;	// IMP=0x00000000009b763e
- (id)initWithData:(id)arg1;	// IMP=0x00000000009b6c58
- (id)init;	// IMP=0x00000000009b6bfc
- (id)initWithDirectionsOptions:(id)arg1;	// IMP=0x00000000013447d1
- (id)initWithOptions:(id)arg1;	// IMP=0x0000000001344653

@end

