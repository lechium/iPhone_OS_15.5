//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLPRPowerType, NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOLPRPowerTypeMap : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    NSString *_key;	// 16 = 0x10
    GEOLPRPowerType *_powerType;	// 24 = 0x18
    unsigned int _readerMarkPos;	// 32 = 0x20
    unsigned int _readerMarkLength;	// 36 = 0x24
    struct os_unfair_lock_s _readerLock;	// 40 = 0x28
    struct {
        unsigned int read_key:1;
        unsigned int read_powerType:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 44 = 0x2c
}

- (void).cxx_destruct;	// IMP=0x000000000101aad0
- (unsigned long long)hash;	// IMP=0x000000000101aa79
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000101a997
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000101a7f7
- (void)writeTo:(id)arg1;	// IMP=0x000000000101a636
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000101a627
- (id)jsonRepresentation;	// IMP=0x000000000101a3a9
- (id)dictionaryRepresentation;	// IMP=0x000000000101a127
- (id)description;	// IMP=0x000000000101a078
- (id)initWithData:(id)arg1;	// IMP=0x0000000001019b7a
- (id)init;	// IMP=0x0000000001019b1e

@end
