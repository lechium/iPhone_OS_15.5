//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBDataReader, PBUnknownFields;

@interface GEOSource : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSString *_sourceId;	// 24 = 0x18
    NSString *_sourceName;	// 32 = 0x20
    NSString *_sourceVersion;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_sourceId:1;
        unsigned int read_sourceName:1;
        unsigned int read_sourceVersion:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 60 = 0x3c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000f0fbde
- (void).cxx_destruct;	// IMP=0x0000000000f10402
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000f103b1
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000f10226
- (unsigned long long)hash;	// IMP=0x0000000000f101aa
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000f10085
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000f0fe9e
- (void)copyTo:(id)arg1;	// IMP=0x0000000000f0fdbf
- (void)writeTo:(id)arg1;	// IMP=0x0000000000f0fbfa
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000f0fbeb
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000f0fad2
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000f0fac0
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000f0f8b3
- (id)jsonRepresentation;	// IMP=0x0000000000f0f7a1
- (id)dictionaryRepresentation;	// IMP=0x0000000000f0f53e
- (id)description;	// IMP=0x0000000000f0f48f
@property(retain, nonatomic) NSString *sourceVersion;
@property(readonly, nonatomic) _Bool hasSourceVersion;
@property(retain, nonatomic) NSString *sourceId;
@property(retain, nonatomic) NSString *sourceName;
- (id)initWithData:(id)arg1;	// IMP=0x0000000000f0eb24
- (id)init;	// IMP=0x0000000000f0eac8
- (id)initWithAttributionID:(id)arg1;	// IMP=0x0000000001171250

@end

