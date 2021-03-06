//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDModuleOptions, NSString, PBDataReader, PBUnknownFields;

@interface GEOPDModule : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSString *_moduleDebugDescription;	// 24 = 0x18
    GEOPDModuleOptions *_options;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    int _moduleConfigurationIndex;	// 52 = 0x34
    int _type;	// 56 = 0x38
    struct {
        unsigned int has_moduleConfigurationIndex:1;
        unsigned int has_type:1;
        unsigned int read_unknownFields:1;
        unsigned int read_moduleDebugDescription:1;
        unsigned int read_options:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 60 = 0x3c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000b8378d
- (void).cxx_destruct;	// IMP=0x0000000000b84572
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000b84501
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000b8433b
- (unsigned long long)hash;	// IMP=0x0000000000b8427d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b84124
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b83f0c
- (void)copyTo:(id)arg1;	// IMP=0x0000000000b83e01
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b83be9
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b83bda
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000b832ca
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000b832b8
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000b82a6a
- (id)jsonRepresentation;	// IMP=0x0000000000b82958
- (id)dictionaryRepresentation;	// IMP=0x0000000000b823c5
- (id)description;	// IMP=0x0000000000b82316
@property(nonatomic) _Bool hasModuleConfigurationIndex;
@property(nonatomic) int moduleConfigurationIndex;
@property(retain, nonatomic) NSString *moduleDebugDescription;
@property(readonly, nonatomic) _Bool hasModuleDebugDescription;
@property(retain, nonatomic) GEOPDModuleOptions *options;
@property(readonly, nonatomic) _Bool hasOptions;
- (int)StringAsType:(id)arg1;	// IMP=0x0000000000b81340
- (id)typeAsString:(int)arg1;	// IMP=0x0000000000b810ab
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type;
- (id)initWithData:(id)arg1;	// IMP=0x0000000000b80fe4
- (id)init;	// IMP=0x0000000000b80f88

@end

