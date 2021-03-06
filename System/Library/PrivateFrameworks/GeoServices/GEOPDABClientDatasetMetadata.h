//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

@interface GEOPDABClientDatasetMetadata : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    unsigned int _bucketId;	// 16 = 0x10
    unsigned int _datasetId;	// 20 = 0x14
    struct {
        unsigned int has_bucketId:1;
        unsigned int has_datasetId:1;
    } _flags;	// 24 = 0x18
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000c8badd
- (void).cxx_destruct;	// IMP=0x0000000000c8c0ba
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000c8c074
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000c8bfed
- (unsigned long long)hash;	// IMP=0x0000000000c8bf8d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c8bea4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c8be07
- (void)copyTo:(id)arg1;	// IMP=0x0000000000c8bd95
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c8bd09
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c8bcfa
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000c8b750
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000c8b73e
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000c8b5d6
- (id)jsonRepresentation;	// IMP=0x0000000000c8b4c4
- (id)dictionaryRepresentation;	// IMP=0x0000000000c8b28d
- (id)description;	// IMP=0x0000000000c8b1de
@property(nonatomic) _Bool hasDatasetId;
@property(nonatomic) unsigned int datasetId;
@property(nonatomic) _Bool hasBucketId;
@property(nonatomic) unsigned int bucketId;

@end

