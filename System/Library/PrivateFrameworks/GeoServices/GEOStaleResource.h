//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOResource, PBDataReader, PBUnknownFields;

@interface GEOStaleResource : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOResource *_desiredResource;	// 24 = 0x18
    GEOResource *_fallbackResource;	// 32 = 0x20
    double _originalTimestamp;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    struct {
        unsigned int has_originalTimestamp:1;
        unsigned int read_unknownFields:1;
        unsigned int read_desiredResource:1;
        unsigned int read_fallbackResource:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 60 = 0x3c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000083cb54
- (void).cxx_destruct;	// IMP=0x000000000083d528
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x000000000083d48f
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000083d2d2
- (unsigned long long)hash;	// IMP=0x000000000083d160
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000083d03b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000083ce3c
- (void)copyTo:(id)arg1;	// IMP=0x000000000083cd48
- (void)writeTo:(id)arg1;	// IMP=0x000000000083cb70
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000083cb61
- (void)readAll:(_Bool)arg1;	// IMP=0x000000000083ca48
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000083ca36
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000083c823
- (id)jsonRepresentation;	// IMP=0x000000000083c711
- (id)dictionaryRepresentation;	// IMP=0x000000000083c455
- (id)description;	// IMP=0x000000000083c3a6
@property(nonatomic) _Bool hasOriginalTimestamp;
@property(nonatomic) double originalTimestamp;
@property(retain, nonatomic) GEOResource *fallbackResource;
@property(readonly, nonatomic) _Bool hasFallbackResource;
@property(retain, nonatomic) GEOResource *desiredResource;
@property(readonly, nonatomic) _Bool hasDesiredResource;
- (id)initWithData:(id)arg1;	// IMP=0x000000000083b95a
- (id)init;	// IMP=0x000000000083b8fe

@end

