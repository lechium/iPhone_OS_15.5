//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBDataReader;

@interface GEORPTransitLineTileInfo : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    unsigned long long _transitLineMuid;	// 16 = 0x10
    NSString *_transitLineName;	// 24 = 0x18
    NSString *_transitSystemName;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    struct {
        unsigned int has_transitLineMuid:1;
        unsigned int read_transitLineName:1;
        unsigned int read_transitSystemName:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 52 = 0x34
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000e8a081
- (void).cxx_destruct;	// IMP=0x0000000000e8a769
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000e8a6d3
- (unsigned long long)hash;	// IMP=0x0000000000e8a643
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000e8a521
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000e8a344
- (void)copyTo:(id)arg1;	// IMP=0x0000000000e8a257
- (void)writeTo:(id)arg1;	// IMP=0x0000000000e8a09d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000e8a08e
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000e89f75
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000e89f63
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000e89d64
- (id)jsonRepresentation;	// IMP=0x0000000000e89d55
- (id)dictionaryRepresentation;	// IMP=0x0000000000e89bda
- (id)description;	// IMP=0x0000000000e89b2b
@property(retain, nonatomic) NSString *transitSystemName;
@property(readonly, nonatomic) _Bool hasTransitSystemName;
@property(retain, nonatomic) NSString *transitLineName;
@property(readonly, nonatomic) _Bool hasTransitLineName;
@property(nonatomic) _Bool hasTransitLineMuid;
@property(nonatomic) unsigned long long transitLineMuid;
- (id)initWithData:(id)arg1;	// IMP=0x0000000000e89344
- (id)init;	// IMP=0x0000000000e892e8

@end

