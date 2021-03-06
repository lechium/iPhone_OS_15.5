//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBDataReader, PBUnknownFields;

@interface GEOMapItemAddressBookAttributes : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSString *_addressIdentifier;	// 24 = 0x18
    NSString *_name;	// 32 = 0x20
    NSString *_spokenName;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    int _addressType;	// 60 = 0x3c
    _Bool _isMe;	// 64 = 0x40
    struct {
        unsigned int has_addressType:1;
        unsigned int has_isMe:1;
        unsigned int read_unknownFields:1;
        unsigned int read_addressIdentifier:1;
        unsigned int read_name:1;
        unsigned int read_spokenName:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 68 = 0x44
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000f5d030
- (void).cxx_destruct;	// IMP=0x0000000000f5dcec
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000f5dc9b
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000f5dacc
- (unsigned long long)hash;	// IMP=0x0000000000f5d9f9
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000f5d86f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000f5d620
- (void)copyTo:(id)arg1;	// IMP=0x0000000000f5d4f9
- (void)writeTo:(id)arg1;	// IMP=0x0000000000f5d2c3
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000f5d2b4
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000f5cd7d
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000f5cd70
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000f5ca0a
- (id)jsonRepresentation;	// IMP=0x0000000000f5c8f8
- (id)dictionaryRepresentation;	// IMP=0x0000000000f5c5a8
- (id)description;	// IMP=0x0000000000f5c4f9
@property(retain, nonatomic) NSString *addressIdentifier;
@property(readonly, nonatomic) _Bool hasAddressIdentifier;
@property(nonatomic) _Bool hasIsMe;
@property(nonatomic) _Bool isMe;
@property(retain, nonatomic) NSString *spokenName;
@property(readonly, nonatomic) _Bool hasSpokenName;
@property(retain, nonatomic) NSString *name;
@property(readonly, nonatomic) _Bool hasName;
- (int)StringAsAddressType:(id)arg1;	// IMP=0x0000000000f5b8a0
- (id)addressTypeAsString:(int)arg1;	// IMP=0x0000000000f5b821
@property(nonatomic) _Bool hasAddressType;
@property(nonatomic) int addressType;
- (id)initWithData:(id)arg1;	// IMP=0x0000000000f5b75e
- (id)init;	// IMP=0x0000000000f5b702

@end

