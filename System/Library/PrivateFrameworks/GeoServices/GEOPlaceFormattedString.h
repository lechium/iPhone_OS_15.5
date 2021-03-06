//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOFormattedString, PBDataReader, PBUnknownFields;

@interface GEOPlaceFormattedString : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOFormattedString *_contactHome;	// 24 = 0x18
    GEOFormattedString *_contactOther;	// 32 = 0x20
    GEOFormattedString *_contactWork;	// 40 = 0x28
    GEOFormattedString *_custom;	// 48 = 0x30
    GEOFormattedString *_home;	// 56 = 0x38
    GEOFormattedString *_pointOfInterest;	// 64 = 0x40
    GEOFormattedString *_streetAddress;	// 72 = 0x48
    GEOFormattedString *_unknown;	// 80 = 0x50
    GEOFormattedString *_work;	// 88 = 0x58
    unsigned int _readerMarkPos;	// 96 = 0x60
    unsigned int _readerMarkLength;	// 100 = 0x64
    struct os_unfair_lock_s _readerLock;	// 104 = 0x68
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_contactHome:1;
        unsigned int read_contactOther:1;
        unsigned int read_contactWork:1;
        unsigned int read_custom:1;
        unsigned int read_home:1;
        unsigned int read_pointOfInterest:1;
        unsigned int read_streetAddress:1;
        unsigned int read_unknown:1;
        unsigned int read_work:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 108 = 0x6c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000008dcb38
- (void).cxx_destruct;	// IMP=0x00000000008dda44
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x00000000008dd90b
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000008dd5f1
- (unsigned long long)hash;	// IMP=0x00000000008dd4c5
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000008dd26c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000008dcf7d
- (void)copyTo:(id)arg1;	// IMP=0x00000000008dcdcf
- (void)writeTo:(id)arg1;	// IMP=0x00000000008dcb54
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000008dcb45
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000008dca2c
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000008dca1a
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000008dc3cc
- (id)jsonRepresentation;	// IMP=0x00000000008dc2ba
- (id)dictionaryRepresentation;	// IMP=0x00000000008dbcb6
- (id)description;	// IMP=0x00000000008dbc07
@property(retain, nonatomic) GEOFormattedString *custom;
@property(readonly, nonatomic) _Bool hasCustom;
@property(retain, nonatomic) GEOFormattedString *unknown;
@property(readonly, nonatomic) _Bool hasUnknown;
@property(retain, nonatomic) GEOFormattedString *streetAddress;
@property(readonly, nonatomic) _Bool hasStreetAddress;
@property(retain, nonatomic) GEOFormattedString *pointOfInterest;
@property(readonly, nonatomic) _Bool hasPointOfInterest;
@property(retain, nonatomic) GEOFormattedString *contactOther;
@property(readonly, nonatomic) _Bool hasContactOther;
@property(retain, nonatomic) GEOFormattedString *contactHome;
@property(readonly, nonatomic) _Bool hasContactHome;
@property(retain, nonatomic) GEOFormattedString *contactWork;
@property(readonly, nonatomic) _Bool hasContactWork;
@property(retain, nonatomic) GEOFormattedString *work;
@property(readonly, nonatomic) _Bool hasWork;
@property(retain, nonatomic) GEOFormattedString *home;
@property(readonly, nonatomic) _Bool hasHome;
- (id)initWithData:(id)arg1;	// IMP=0x00000000008da235
- (id)init;	// IMP=0x00000000008da1d9

@end

