//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBUnknownFields;

@interface GEOAbAssignInfo : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSString *_abAssignId;	// 16 = 0x10
    unsigned long long _createdAtTimestamp;	// 24 = 0x18
    unsigned long long _relativeTimestamp;	// 32 = 0x20
    struct {
        unsigned int has_createdAtTimestamp:1;
        unsigned int has_relativeTimestamp:1;
    } _flags;	// 40 = 0x28
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000010d4a7c
- (void).cxx_destruct;	// IMP=0x00000000010d51c0
@property(nonatomic) _Bool hasCreatedAtTimestamp;
@property(nonatomic) unsigned long long createdAtTimestamp;
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x00000000010d5123
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000010d507a
- (unsigned long long)hash;	// IMP=0x00000000010d4ff0
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000010d4ed1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000010d4e04
- (void)copyTo:(id)arg1;	// IMP=0x00000000010d4d70
- (void)writeTo:(id)arg1;	// IMP=0x00000000010d4cc5
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000010d4cb6
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000010d46b4
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000010d46a2
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000010d44b7
- (id)jsonRepresentation;	// IMP=0x00000000010d43a5
- (id)dictionaryRepresentation;	// IMP=0x00000000010d411c
- (id)description;	// IMP=0x00000000010d406d
@property(nonatomic) _Bool hasRelativeTimestamp;
@property(nonatomic) unsigned long long relativeTimestamp;
@property(retain, nonatomic) NSString *abAssignId;
@property(readonly, nonatomic) _Bool hasAbAssignId;

@end

