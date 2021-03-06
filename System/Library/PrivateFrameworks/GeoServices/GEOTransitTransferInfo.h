//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

@interface GEOTransitTransferInfo : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    unsigned long long _transferMuid;	// 16 = 0x10
    unsigned int _transferTime;	// 24 = 0x18
    struct {
        unsigned int has_transferMuid:1;
        unsigned int has_transferTime:1;
    } _flags;	// 28 = 0x1c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000003e9213
- (void).cxx_destruct;	// IMP=0x00000000003e95e5
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x00000000003e959f
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000003e9517
- (unsigned long long)hash;	// IMP=0x00000000003e94b6
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003e93cd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003e932f
- (void)copyTo:(id)arg1;	// IMP=0x00000000003e92bc
- (void)writeTo:(id)arg1;	// IMP=0x00000000003e922f
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000003e9220
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000003e91b3
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000003e91a1
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000003e9038
- (id)jsonRepresentation;	// IMP=0x00000000003e8f26
- (id)dictionaryRepresentation;	// IMP=0x00000000003e8cee
- (id)description;	// IMP=0x00000000003e8c3f
@property(nonatomic) _Bool hasTransferTime;
@property(nonatomic) unsigned int transferTime;
@property(nonatomic) _Bool hasTransferMuid;
@property(nonatomic) unsigned long long transferMuid;

@end

