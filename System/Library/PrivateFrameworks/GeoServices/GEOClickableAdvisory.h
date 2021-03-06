//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOFormattedString, PBDataReader, PBUnknownFields;

@interface GEOClickableAdvisory : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    CDStruct_9f2792e4 _incidentIndexs;	// 24 = 0x18
    GEOFormattedString *_advisoryMessage;	// 48 = 0x30
    unsigned int _readerMarkPos;	// 56 = 0x38
    unsigned int _readerMarkLength;	// 60 = 0x3c
    struct os_unfair_lock_s _readerLock;	// 64 = 0x40
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_incidentIndexs:1;
        unsigned int read_advisoryMessage:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 68 = 0x44
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000008698bc
- (void).cxx_destruct;	// IMP=0x000000000086a0e6
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x000000000086a075
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000869ea5
- (unsigned long long)hash;	// IMP=0x0000000000869e56
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000869d73
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000869bd5
- (void)copyTo:(id)arg1;	// IMP=0x0000000000869a9f
- (void)writeTo:(id)arg1;	// IMP=0x00000000008698d8
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000008698c9
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000008697b0
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000086979e
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000869493
- (id)jsonRepresentation;	// IMP=0x0000000000869381
- (id)dictionaryRepresentation;	// IMP=0x0000000000869120
- (id)description;	// IMP=0x0000000000869071
- (void)setIncidentIndexs:(unsigned int *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000086904f
- (unsigned int)incidentIndexAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000868f79
- (void)addIncidentIndex:(unsigned int)arg1;	// IMP=0x0000000000868f40
- (void)clearIncidentIndexs;	// IMP=0x0000000000868f24
@property(readonly, nonatomic) unsigned int *incidentIndexs;
@property(readonly, nonatomic) unsigned long long incidentIndexsCount;
@property(retain, nonatomic) GEOFormattedString *advisoryMessage;
@property(readonly, nonatomic) _Bool hasAdvisoryMessage;
- (void)dealloc;	// IMP=0x0000000000868508
- (id)initWithData:(id)arg1;	// IMP=0x00000000008684ac
- (id)init;	// IMP=0x0000000000868450

@end

