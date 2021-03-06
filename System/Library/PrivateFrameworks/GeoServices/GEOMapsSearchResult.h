//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOAddress, GEOPDMapsIdentifier, GEOPlaceActionDetails, PBDataReader;

@interface GEOMapsSearchResult : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    GEOAddress *_address;	// 16 = 0x10
    GEOPDMapsIdentifier *_mapsId;	// 24 = 0x18
    unsigned long long _muid;	// 32 = 0x20
    GEOPlaceActionDetails *_placeActionDetails;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    struct {
        unsigned int has_muid:1;
        unsigned int read_address:1;
        unsigned int read_mapsId:1;
        unsigned int read_placeActionDetails:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 60 = 0x3c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000c69650
- (void).cxx_destruct;	// IMP=0x0000000000c6a6c8
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000c6a5cd
- (unsigned long long)hash;	// IMP=0x0000000000c6a527
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c6a3ce
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c6a1c7
- (void)copyTo:(id)arg1;	// IMP=0x0000000000c6a0b7
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x0000000000c6a086
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c69de3
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c69dd4
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000c691f6
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000c691e4
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000c68f18
- (id)jsonRepresentation;	// IMP=0x0000000000c68f09
- (id)dictionaryRepresentation;	// IMP=0x0000000000c68cb4
- (id)description;	// IMP=0x0000000000c68c05
@property(retain, nonatomic) GEOPDMapsIdentifier *mapsId;
@property(readonly, nonatomic) _Bool hasMapsId;
@property(retain, nonatomic) GEOPlaceActionDetails *placeActionDetails;
@property(readonly, nonatomic) _Bool hasPlaceActionDetails;
@property(retain, nonatomic) GEOAddress *address;
@property(readonly, nonatomic) _Bool hasAddress;
@property(nonatomic) _Bool hasMuid;
@property(nonatomic) unsigned long long muid;
- (id)initWithData:(id)arg1;	// IMP=0x0000000000c680b2
- (id)init;	// IMP=0x0000000000c68056

@end

