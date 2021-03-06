//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOPDAmenityValue : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSString *_amenityId;	// 24 = 0x18
    NSMutableArray *_names;	// 32 = 0x20
    NSString *_symbolImageName;	// 40 = 0x28
    NSString *_vendorId;	// 48 = 0x30
    unsigned int _readerMarkPos;	// 56 = 0x38
    unsigned int _readerMarkLength;	// 60 = 0x3c
    struct os_unfair_lock_s _readerLock;	// 64 = 0x40
    int _amenityType;	// 68 = 0x44
    _Bool _amenityPresent;	// 72 = 0x48
    struct {
        unsigned int has_amenityType:1;
        unsigned int has_amenityPresent:1;
        unsigned int read_unknownFields:1;
        unsigned int read_amenityId:1;
        unsigned int read_names:1;
        unsigned int read_symbolImageName:1;
        unsigned int read_vendorId:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 76 = 0x4c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000a7c405
+ (Class)nameType;	// IMP=0x0000000000a7a802
- (void).cxx_destruct;	// IMP=0x0000000000a7d42b
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000a7d2b4
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000a7cf95
- (unsigned long long)hash;	// IMP=0x0000000000a7ceb0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000a7cce8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000a7c927
- (void)copyTo:(id)arg1;	// IMP=0x0000000000a7c75d
- (void)writeTo:(id)arg1;	// IMP=0x0000000000a7c421
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000a7c412
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000a7c2f9
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000a7c2e7
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000a7b47a
- (id)jsonRepresentation;	// IMP=0x0000000000a7b368
- (id)dictionaryRepresentation;	// IMP=0x0000000000a7aa01
- (id)description;	// IMP=0x0000000000a7a952
@property(retain, nonatomic) NSString *symbolImageName;
@property(readonly, nonatomic) _Bool hasSymbolImageName;
- (id)nameAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000a7a7d1
- (unsigned long long)namesCount;	// IMP=0x0000000000a7a7a5
- (void)addName:(id)arg1;	// IMP=0x0000000000a7a6f1
- (void)clearNames;	// IMP=0x0000000000a7a6c9
@property(retain, nonatomic) NSMutableArray *names;
@property(retain, nonatomic) NSString *amenityId;
@property(readonly, nonatomic) _Bool hasAmenityId;
@property(retain, nonatomic) NSString *vendorId;
@property(readonly, nonatomic) _Bool hasVendorId;
@property(nonatomic) _Bool hasAmenityPresent;
@property(nonatomic) _Bool amenityPresent;
- (int)StringAsAmenityType:(id)arg1;	// IMP=0x0000000000a78f74
- (id)amenityTypeAsString:(int)arg1;	// IMP=0x0000000000a78b68
@property(nonatomic) _Bool hasAmenityType;
@property(nonatomic) int amenityType;
- (id)initWithData:(id)arg1;	// IMP=0x0000000000a78aa5
- (id)init;	// IMP=0x0000000000a78a49
- (id)displayTitle;	// IMP=0x00000000009fb382

@end

