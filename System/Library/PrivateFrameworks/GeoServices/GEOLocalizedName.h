//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBDataReader, PBUnknownFields;

@interface GEOLocalizedName : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSString *_languageCode;	// 24 = 0x18
    NSString *_nameType;	// 32 = 0x20
    NSString *_name;	// 40 = 0x28
    NSString *_phoneticName;	// 48 = 0x30
    unsigned int _readerMarkPos;	// 56 = 0x38
    unsigned int _readerMarkLength;	// 60 = 0x3c
    struct os_unfair_lock_s _readerLock;	// 64 = 0x40
    unsigned int _nameRank;	// 68 = 0x44
    _Bool _isDefault;	// 72 = 0x48
    struct {
        unsigned int has_nameRank:1;
        unsigned int has_isDefault:1;
        unsigned int read_unknownFields:1;
        unsigned int read_languageCode:1;
        unsigned int read_nameType:1;
        unsigned int read_name:1;
        unsigned int read_phoneticName:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 76 = 0x4c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000ec4b0d
- (void).cxx_destruct;	// IMP=0x0000000000ec5603
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000ec55b2
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000ec53c3
- (unsigned long long)hash;	// IMP=0x0000000000ec52d1
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000ec510c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000ec4e9f
- (void)copyTo:(id)arg1;	// IMP=0x0000000000ec4d58
- (void)writeTo:(id)arg1;	// IMP=0x0000000000ec4b29
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000ec4b1a
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000ec4a01
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000ec49f4
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000ec46cf
- (id)jsonRepresentation;	// IMP=0x0000000000ec45bd
- (id)dictionaryRepresentation;	// IMP=0x0000000000ec428f
- (id)description;	// IMP=0x0000000000ec41e0
@property(retain, nonatomic) NSString *phoneticName;
@property(readonly, nonatomic) _Bool hasPhoneticName;
@property(nonatomic) _Bool hasNameRank;
@property(nonatomic) unsigned int nameRank;
@property(retain, nonatomic) NSString *name;
@property(readonly, nonatomic) _Bool hasName;
@property(retain, nonatomic) NSString *nameType;
@property(readonly, nonatomic) _Bool hasNameType;
@property(retain, nonatomic) NSString *languageCode;
@property(readonly, nonatomic) _Bool hasLanguageCode;
@property(nonatomic) _Bool hasIsDefault;
@property(nonatomic) _Bool isDefault;
- (id)initWithData:(id)arg1;	// IMP=0x0000000000ec338d
- (id)init;	// IMP=0x0000000000ec3331
- (id)initWithPlaceDataLocalizedString:(id)arg1;	// IMP=0x00000000009f35a1

@end
