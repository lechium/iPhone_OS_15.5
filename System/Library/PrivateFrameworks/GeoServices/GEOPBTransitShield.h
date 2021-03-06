//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/GEOTransitShieldDataSource-Protocol.h>
#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBDataReader, PBUnknownFields;

@interface GEOPBTransitShield : PBCodable <GEOTransitShieldDataSource, NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSString *_shieldColor;	// 24 = 0x18
    NSString *_shieldText;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    unsigned int _shieldEnumValue;	// 52 = 0x34
    struct {
        unsigned int has_shieldEnumValue:1;
        unsigned int read_unknownFields:1;
        unsigned int read_shieldColor:1;
        unsigned int read_shieldText:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 56 = 0x38
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000d70c74
- (void).cxx_destruct;	// IMP=0x0000000000d714cb
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000d7147a
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000d712ef
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000d71149
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000d70f54
- (void)copyTo:(id)arg1;	// IMP=0x0000000000d70e68
- (void)writeTo:(id)arg1;	// IMP=0x0000000000d70c90
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000d70c81
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000d70b68
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000d70b56
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000d70960
- (id)jsonRepresentation;	// IMP=0x0000000000d7084e
- (id)dictionaryRepresentation;	// IMP=0x0000000000d705d9
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSString *shieldColor;
@property(readonly, nonatomic) _Bool hasShieldColor;
@property(nonatomic) _Bool hasShieldEnumValue;
@property(nonatomic) unsigned int shieldEnumValue;
@property(retain, nonatomic) NSString *shieldText;
@property(readonly, nonatomic) _Bool hasShieldText;
- (id)initWithData:(id)arg1;	// IMP=0x0000000000d6fbe2
- (id)init;	// IMP=0x0000000000d6fb86
@property(readonly, nonatomic) NSString *shieldColorString;
@property(readonly, nonatomic) long long shieldType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

