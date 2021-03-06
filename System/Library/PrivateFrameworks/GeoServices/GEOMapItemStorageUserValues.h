//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSData, NSString, PBDataReader, PBUnknownFields;

@interface GEOMapItemStorageUserValues : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    NSString *_phoneNumber;	// 32 = 0x20
    NSData *_timeZoneData;	// 40 = 0x28
    NSString *_timeZoneName;	// 48 = 0x30
    NSString *_url;	// 56 = 0x38
    unsigned int _readerMarkPos;	// 64 = 0x40
    unsigned int _readerMarkLength;	// 68 = 0x44
    struct os_unfair_lock_s _readerLock;	// 72 = 0x48
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_name:1;
        unsigned int read_phoneNumber:1;
        unsigned int read_timeZoneData:1;
        unsigned int read_timeZoneName:1;
        unsigned int read_url:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 76 = 0x4c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000f6bbd8
- (void).cxx_destruct;	// IMP=0x0000000000f6c5d0
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000f6c57f
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000f6c3b4
- (unsigned long long)hash;	// IMP=0x0000000000f6c301
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000f6c178
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000f6bf2b
- (void)copyTo:(id)arg1;	// IMP=0x0000000000f6bdfd
- (void)writeTo:(id)arg1;	// IMP=0x0000000000f6bbf4
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000f6bbe5
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000f6bacc
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000f6baba
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000f6b79a
- (id)jsonRepresentation;	// IMP=0x0000000000f6b688
- (id)dictionaryRepresentation;	// IMP=0x0000000000f6b362
- (id)description;	// IMP=0x0000000000f6b2b3
@property(retain, nonatomic) NSData *timeZoneData;
@property(readonly, nonatomic) _Bool hasTimeZoneData;
@property(retain, nonatomic) NSString *timeZoneName;
@property(readonly, nonatomic) _Bool hasTimeZoneName;
@property(retain, nonatomic) NSString *url;
@property(readonly, nonatomic) _Bool hasUrl;
@property(retain, nonatomic) NSString *phoneNumber;
@property(readonly, nonatomic) _Bool hasPhoneNumber;
@property(retain, nonatomic) NSString *name;
@property(readonly, nonatomic) _Bool hasName;
- (id)initWithData:(id)arg1;	// IMP=0x0000000000f6a4d8
- (id)init;	// IMP=0x0000000000f6a47c

@end

